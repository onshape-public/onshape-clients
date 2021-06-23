package testhelper

import (
	"context"
	"encoding/json"
	"log"
	h "net/http"
	"reflect"

	"github.com/onshape-public/go-client/onshape"
)

// SetupDocument creates an Onshape document
func SetupDocument(ctx context.Context, client *onshape.APIClient, name string) (string, string,
	func() (respStatus int, err error)) {
	docParams := onshape.NewBTDocumentParams()
	docParams.SetName(name)
	//docParams.SetIsPublic(true)
	//create document
	var rawResp *h.Response
	var err error
	docInfo, rawResp, err := client.DocumentApi.CreateDocument(ctx).BTDocumentParams(*docParams).Execute()
	if err != nil || (rawResp != nil && rawResp.StatusCode >= 300) {
		log.Fatal("err: ", err, " -- Response status: ", rawResp)
	}
	return *docInfo.Id, *docInfo.DefaultWorkspace.Id, func() (int, error) {
		rawResp, err := client.DocumentApi.DeleteDocument(ctx, *docInfo.Id).Execute()
		return rawResp.StatusCode, err
	}
}

// JSONBytesEqual compared two Json byte arrays
func JSONBytesEqual(a, b []byte) (bool, error) {
	var j, j2 interface{}
	if err := json.Unmarshal(a, &j); err != nil {
		return false, err
	}
	if err := json.Unmarshal(b, &j2); err != nil {
		return false, err
	}
	return reflect.DeepEqual(j2, j), nil
}
