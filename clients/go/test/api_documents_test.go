package onshape_test

import (
	"context"
	"fmt"
	"os"
	"testing"

	"github.com/onshape-public/go-client/onshape"

	uuid "github.com/satori/go.uuid"
)

var ctx context.Context
var client *onshape.APIClient

//TestMain is a common method for all tests in package onshape_test
func TestMain(m *testing.M) {
	setup()
	retCode := m.Run()
	os.Exit(retCode)
}

func setup() {
	var err error

	client, ctx, err = onshape.NewAPIClientFromEnv(true)

	if err != nil {
		fmt.Println(err)
		os.Exit(1)
	}
}

//TODO: check if default workspace is also created
func TestCreateAndGetDocument(t *testing.T) {
	uid := uuid.NewV4().String()
	document1Name := "Documents-testDoc-1-" + uid
	type args struct {
		docName string
	}
	tests := []struct {
		name string
		args args
		want string
	}{
		{"Test001",
			args{document1Name},
			document1Name,
		},
	}
	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			docParams := onshape.NewBTDocumentParams()
			docParams.SetName(tt.args.docName)
			docParams.SetIsPublic(true)

			t.Log("Creating document")
			docInfo, rawResp, err := client.DocumentsApi.CreateDocument(ctx).BTDocumentParams(*docParams).Execute()
			if err != nil || (rawResp != nil && rawResp.StatusCode >= 300) {
				t.Error("err: ", err, " -- Response status: ", rawResp)
			} else {
				if docInfo.GetName() != tt.want {
					t.Errorf("CreateDocument() got = %s, want %s", docInfo.GetName(), tt.want)
				}
			}
			//check default workspace is also created
			if !docInfo.HasDefaultWorkspace() {
				t.Error("Create Document should have created a default workspace ")
				return
			}

			t.Log("Getting a document")
			getDocInfo, rawResp, err := client.DocumentsApi.GetDocument(ctx, *docInfo.Id).Execute()
			if err != nil || (rawResp != nil && rawResp.StatusCode >= 300) {
				t.Error("err: ", err, " -- Response status: ", rawResp)
			} else {
				if getDocInfo.GetName() != tt.want {
					t.Errorf("GetDocument() got = %s, want %s", getDocInfo.GetName(), tt.want)
				}
			}

			t.Log("Deleting a document")
			rawResp, err = client.DocumentsApi.DeleteDocument(ctx, getDocInfo.GetId()).Execute()

			if err != nil || (rawResp != nil && rawResp.StatusCode >= 300) {
				t.Error("err: ", err, " -- Response status: ", rawResp)
			} else {
				t.Log("Deleted successfully document w/the name: ", docInfo.GetName())
			}
		})
	}

}
