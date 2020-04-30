package onshape_test

import (
	h "net/http"
	"testing"

	"github.com/onshape-public/go-client/onshape"
	uuid "github.com/satori/go.uuid"
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

func TestCreateAndGetAppElement(t *testing.T) {
	var docInfo onshape.BTDocumentInfo
	teardownDoc := setupDocument(t, &docInfo)
	defer teardownDoc(t, *docInfo.Id)

	type args struct {
		elementName string
		subElements *[]onshape.BTAppElementChangeParams
	}
	tests := []struct {
		name string
		args args
		want *onshape.BTAppElementContentInfo
	}{
		{"CreateAppElementWithNoSubElement",
			args{"Test-element-1", nil},
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

			appElementModifyInfo, rawResp, err := client.AppElementsApi.CreateElement(ctx, *docInfo.Id, *docInfo.DefaultWorkspace.Id).BTAppElementParams(*appElementParams).Execute()

			if err != nil || (rawResp != nil && rawResp.StatusCode >= 300) {
				t.Error("err: ", err, " -- Response status: ", rawResp)
			} else {
				t.Log("Created an element w/the name: ", appElementModifyInfo.GetElementId())
			}

			appElementContentInfo, rawResp, err := client.AppElementsApi.GetSubElementContent(ctx, *docInfo.Id, appElementModifyInfo.GetElementId(), "w", *docInfo.DefaultWorkspace.Id).Execute()
			if err != nil || (rawResp != nil && rawResp.StatusCode >= 300) {
				t.Error("err: ", err, " -- Response status: ", rawResp)
			}
			if tt.want == nil {
				if len(appElementContentInfo.GetData()) != 0 {
					t.Errorf("expected 0 subelement, got %d", len(appElementContentInfo.GetData()))
				}
			}
		})
	}
}
