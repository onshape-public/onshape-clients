package onshape_test

import (
	"encoding/json"
	"io/ioutil"
	"os"
	"strings"
	"testing"

	"github.com/google/uuid"
	"github.com/onshape-public/go-client/onshape"
	"github.com/onshape-public/go-client/onshape_test/testhelper"
	"github.com/stretchr/testify/assert"
	"github.com/stretchr/testify/require"
)

func TestCreateAndGetAppElement(t *testing.T) {
	//var docInfo onshape.BTDocumentInfo
	documentName := "App-Elements-testDoc-" + uuid.New().String()
	did, wid, teardownDoc := testhelper.SetupDocument(ctx, client, documentName)

	defer teardownDoc()

	type args struct {
		elementName  string
		subElements  *[]onshape.BTAppElementChangeParams
		propMap      map[string]interface{}
		blobFilePath string
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
				"./test_data/hf.txt",
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
				client.AppElementsApi.CreateElement(ctx, did, wid).BTAppElementParams(*appElementParams).Execute()

			if err != nil || (rawResp != nil && rawResp.StatusCode >= 300) {
				t.Error("err: ", err, " -- Response status: ", rawResp)
			} else {
				t.Log("Created an element w/the name: ", appElementModifyInfo.GetElementId())
			}
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
			eq, err := testhelper.JSONBytesEqual(propMapJsonWanted, propMapJsonResult)
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
			path := onshape.NewBTJPath3073("master")
			pathType := string("BTJPath-3073")
			path.BtType = &pathType
			// path.SetStartNode("master") -- not needed any more, passing it in the constructor
			//Path.path element
			pathKey := onshape.NewBTJPathKey3221()
			pathKey.SetBtType("BTJPathKey-3221")
			pathKey.SetKey("chapterProperties")
			path.SetPath([]onshape.BTJPathElementInterface{
				pathKey,
			})
			btjEditInsert.SetPath(*path)
			value := map[string]interface{}{
				"_nodeId": "chapterProperties",
				"chp1":    "v1",
				"chp2":    "v2",
			}
			btjEditInsert.SetValue(value)
			bTAppElementUpdateParams.SetJsonTreeEdit(btjEditInsert)
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

			//Try to send AppElement Upload data
			f, err := os.Open(tt.args.blobFilePath)
			require.NoError(t, err, "Error opening file")
			fi, err := f.Stat()
			assert.NoError(t, err, "Can't stat file")

			appElementModifyInfo, rawResp, err = client.AppElementsApi.UploadBlobSubelement(ctx, did, wid, eid, "blob0001").Description("Test Blob Element").File(f).Execute()
			require.NoError(t, err, "Error Uploading Blob ...")

			//Read Blob data ...
			_, resp, err := client.AppElementsApi.DownloadBlobSubelementWorkspace(ctx, did, wid, eid, "blob0001").Execute()
			if err != nil {
				//openapi-generator 5.1.1 is trying to be smart and create a decode call for xml and json but we have neither
				//so check the error and move on ...
				_, ok := err.(onshape.GenericOpenAPIError)
				if !ok {
					t.Error("Unexpected Error: Unable to download Blob Subelement")
				}
			}
			//require.NoError(t, err, "Unable to download Blob Subelement")
			defer resp.Body.Close()

			fileBytes, err := ioutil.ReadAll(resp.Body)
			assert.True(t, fi.Size() == int64(len(fileBytes)))
			require.NoError(t, err, "can't read response body")
			newFile, err := os.Create(tt.args.blobFilePath + ".new")
			require.NoError(t, err, "can't create file ")
			defer newFile.Close()
			_, err = newFile.Write(fileBytes)
			require.NoError(t, err, "can't write data into the new file")
		})
	}
}
