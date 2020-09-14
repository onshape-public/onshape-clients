package onshape_test

import (
	"encoding/json"
	h "net/http"
	"reflect"
	"strings"
	"testing"

	uuid "github.com/satori/go.uuid"
	"github.com/stretchr/testify/assert"
	"gitlab.rd-services.aws.ptc.com/creo/cgm/go-client/onshape"
)

func setupDocument(t *testing.T, docInfo *onshape.BTDocumentInfo) func(t *testing.T, docId string) {
	t.Log("setupDocument ..")
	uid := uuid.NewV4().String()
	document1Name := "App-Elements-testDoc-1-" + uid
	docParams := onshape.NewBTDocumentParams()
	docParams.SetName(document1Name)
	docParams.SetIsPublic(true)
	//create document
	var rawResp *h.Response
	var err error
	*docInfo, rawResp, err = client.DocumentsApi.CreateDocument(ctx).BTDocumentParams(*docParams).Execute()
	if err != nil || (rawResp != nil && rawResp.StatusCode >= 300) {
		t.Fatal("err: ", err, " -- Response status: ", rawResp)
	}
	return func(t *testing.T, docId string) {
		t.Log("teardown document")
		rawResp, err := client.DocumentsApi.DeleteDocument(ctx, docId).Execute()

		if err != nil || (rawResp != nil && rawResp.StatusCode >= 300) {
			t.Error("err: ", err, " -- Response status: ", rawResp)
		} else {
			t.Log("Deleted successfully document w/the name: ", docInfo.GetName())
		}
	}
}

func jsonBytesEqual(a, b []byte) (bool, error) {
	var j, j2 interface{}
	if err := json.Unmarshal(a, &j); err != nil {
		return false, err
	}
	if err := json.Unmarshal(b, &j2); err != nil {
		return false, err
	}
	return reflect.DeepEqual(j2, j), nil
}

func TestCreateAndGetAppElement(t *testing.T) {
	var docInfo onshape.BTDocumentInfo
	teardownDoc := setupDocument(t, &docInfo)
	defer teardownDoc(t, *docInfo.Id)

	type args struct {
		elementName string
		subElements *[]onshape.BTAppElementChangeParams
		propMap     map[string]interface{}
	}
	tests := []struct {
		name string
		args args
		want *onshape.BTAppElementContentInfo
	}{
		{"CreateAppElementWithNoSubElement",
			args{"Test-element-1",
				nil,
				map[string]interface{}{
					"name":    "p.prt",
					"_nodeId": "master",
					"masterProperties": map[string]interface{}{
						"attr1":   "val1",
						"attr2":   "val2",
						"_nodeId": "masterProperties",
					},
					"versionProperties": map[string]interface{}{
						"attr1":   "v11",
						"attr2":   "v22",
						"attr3":   "v33",
						"_nodeId": "versionProperties",
					},
				},
			},
			nil,
		},
	}
	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			appElementParams := onshape.NewBTAppElementParams()
			fmtID := "String"
			appElementParams.FormatId = &fmtID
			appElementName := tt.args.elementName
			appElementParams.Name = &appElementName
			appElementParams.Subelements = tt.args.subElements
			propMap := tt.args.propMap
			propMapJsonWanted, err := json.Marshal(propMap)
			if err != nil {
				t.Error("Should be able to marshal the Input Map")
			}
			appElementParams.SetJsonTree(propMap)

			appElementModifyInfo, rawResp, err :=
				client.AppElementsApi.CreateElement(ctx, *docInfo.Id, *docInfo.DefaultWorkspace.Id).BTAppElementParams(*appElementParams).Execute()

			if err != nil || (rawResp != nil && rawResp.StatusCode >= 300) {
				t.Error("err: ", err, " -- Response status: ", rawResp)
			} else {
				t.Log("Created an element w/the name: ", appElementModifyInfo.GetElementId())
			}

			did := *docInfo.Id
			wid := *docInfo.DefaultWorkspace.Id
			eid := appElementModifyInfo.GetElementId()

			appElementContentInfo, rawResp, err := client.AppElementsApi.GetSubElementContent(ctx, did, eid, "w", wid).Execute()
			if err != nil || (rawResp != nil && rawResp.StatusCode >= 300) {
				t.Error("err: ", err, " -- Response status: ", rawResp)
			}
			if tt.want == nil {
				if len(appElementContentInfo.GetData()) != 0 {
					t.Errorf("expected 0 subelement, got %d", len(appElementContentInfo.GetData()))
				}
			}
			//Check the JSONTreeContent
			jsonResponse, rawResp, err := client.AppElementsApi.GetJson(ctx, did, eid, "w", wid).Execute()
			if err != nil || (rawResp != nil && rawResp.StatusCode >= 300) {
				t.Error("err: ", err, " -- Response status: ", rawResp)
			}
			assert.True(t, jsonResponse.HasTree())
			propMapJsonResult, err := json.Marshal(jsonResponse.Tree)
			if err != nil {
				t.Error("Should be able to marshal the Received Map")
			}
			eq, err := jsonBytesEqual(propMapJsonWanted, propMapJsonResult)
			if err != nil {
				t.Error("Can't compare JSONs")
			}
			assert.True(t, eq)

			//Update JSONTree: Insert
			//Too much work for now, I know :)
			//I'll make it better
			bTAppElementUpdateParams := onshape.NewBTAppElementUpdateParams()
			//Top Level Edit Element
			btjEditInsert := onshape.NewBTJEditInsert2523()
			btjEditInsert.SetBtType("BTJEditInsert-2523")
			//Path Element of the Edit
			path := onshape.NewBTJPath3073()
			pathType := string("BTJPath-3073")
			path.BtType = &pathType
			path.SetStartNode("master")
			//Path.path element
			pathKey := onshape.NewBTJPathKey3221()
			pathKey.SetBtType("BTJPathKey-3221")
			pathKey.SetKey("chapterProperties")
			path.SetPath([]interface{}{
				pathKey,
			})
			btjEditInsert.SetPath(*path)
			value := onshape.BTJNode3407{map[string]interface{}{
				"_nodeId": "chapterProperties",
				"chp1":    "v1",
				"chp2":    "v2",
			}}
			btjEditInsert.SetValue(value)
			bTAppElementUpdateParams.SetJsonTreeEdit(*btjEditInsert)
			client.AppElementsApi.UpdateAppElement(ctx, did, eid, "w", wid).BTAppElementUpdateParams(*bTAppElementUpdateParams).Execute()

			//Now get the JSONTree data again and see if the "chapterProperties" are there ...
			jsonResponse, rawResp, err = client.AppElementsApi.GetJson(ctx, did, eid, "w", wid).Execute()
			if err != nil || (rawResp != nil && rawResp.StatusCode >= 300) {
				t.Error("err: ", err, " -- Response status: ", rawResp)
			}
			assert.True(t, jsonResponse.HasTree())
			propMapJsonResult, err = json.Marshal(jsonResponse.Tree)
			if err != nil {
				t.Error("Should be able to marshal the Received Map")
			}
			assert.True(t, strings.Contains(string(propMapJsonResult), "chapterProperties"))
		})
	}
}
