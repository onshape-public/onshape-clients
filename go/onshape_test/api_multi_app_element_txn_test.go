package onshape_test

import (
	"encoding/base64"
	"fmt"
	"testing"

	"github.com/google/uuid"
	"github.com/onshape-public/go-client/onshape"
	"github.com/onshape-public/go-client/onshape_test/testhelper"

	"github.com/stretchr/testify/assert"
)

type subelementCreateParams struct {
	name    string
	content string
}

func createChapterSubelement(name string) subelementCreateParams {
	return subelementCreateParams{name, base64.StdEncoding.EncodeToString([]byte(name))}
}
func TestTxnWorkflow(t *testing.T) {
	//var docInfo onshape.BTDocumentInfo
	documentName := "App-Elements-testDoc-" + uuid.New().String()
	did, wid, _ := testhelper.SetupDocument(ctx, client, documentName)

	//defer teardownDoc()

	type args struct {
		branch_name string
		elementName string
		subElements []subelementCreateParams
	}
	tests := []struct {
		name string
		args args
		want *onshape.BTAppElementContentInfo
	}{
		{"CreateAppElementWithNoSubElement",
			args{
				"Branch1",
				"Asm0001",
				[]subelementCreateParams{createChapterSubelement("Chapter1"),
					createChapterSubelement("Chapter2"),
					createChapterSubelement("Chapter3")},
			},
			nil,
		},
	}
	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			//create a branch (workspace)
			branchCreateParams := onshape.NewBTVersionOrWorkspaceParams()
			branchCreateParams.SetName(tt.args.branch_name)
			wkspInfo, rawResp, err := client.DocumentApi.CreateWorkspace(ctx, did).BTVersionOrWorkspaceParams(*branchCreateParams).Execute()
			assert.NoErrorf(t, err, "Response status %d", rawResp.StatusCode)
			wid = wkspInfo.GetId()

			//create assembly
			asmAppElementParams := onshape.NewBTAppElementParams()
			asmAppElementParams.SetFormatId("String")
			asmAppElementParams.SetName(tt.args.elementName)
			appElementModifyInfo, rawResp, err :=
				client.AppElementsApi.CreateElement(ctx, did, wid).BTAppElementParams(*asmAppElementParams).Execute()
			assert.NoError(t, err, "Response status %d", rawResp.StatusCode)
			eid := appElementModifyInfo.GetElementId()
			fmt.Printf("Created Element with id:%s", eid)

			//Open New Transaction
			btAppElementStartTransactionParams := onshape.NewBTAppElementStartTransactionParams()
			btAppElementStartTransactionParams.SetDescription("Transaction to populate Assembly w/Data")
			btAppElementStartTransactionParams.SetParentChangeId(appElementModifyInfo.GetChangeId())
			btAppElementModifyInfo, rawResp, err := client.AppElementsApi.StartTransaction(ctx, did, eid, wid).BTAppElementStartTransactionParams(*btAppElementStartTransactionParams).Execute()
			assert.NoError(t, err, "Response status %d", rawResp.StatusCode)
			txnID := btAppElementModifyInfo.TransactionId

			//Update subelements in several consecutive operations using the same transaction
			for _, chapterSubelement := range tt.args.subElements {
				btAppElementChangeParams := onshape.NewBTAppElementChangeParams()
				btAppElementChangeParams.SetSubelementId(chapterSubelement.name)
				btAppElementChangeParams.SetBaseContent(chapterSubelement.content)

				btAppElementUpdateParams := onshape.NewBTAppElementUpdateParams()
				btAppElementUpdateParams.SetDescription(fmt.Sprintf("Updating %s", chapterSubelement.name))
				btAppElementUpdateParams.SetChanges([]onshape.BTAppElementChangeParams{*btAppElementChangeParams})
				btAppElementUpdateParams.SetTransactionId(*txnID)

				btAppElementModifyInfo, rawResp, err = client.AppElementsApi.UpdateAppElement(ctx, did, eid, "w", wid).BTAppElementUpdateParams(*btAppElementUpdateParams).Execute()
				assert.NoError(t, err, "Response status %d", rawResp.StatusCode)
				assert.Equal(t, *txnID, btAppElementModifyInfo.GetTransactionId())
			}

			//Update Json Tree in the same transaction
			bTAppElementUpdateParams := onshape.NewBTAppElementUpdateParams()
			//Top Level Edit Element
			btjEditInsert := onshape.NewBTJEditInsert2523()
			btjEditInsert.SetBtType("BTJEditInsert-2523")
			//Path Element of the Edit
			path := onshape.NewBTJPath3073(tt.args.elementName)
			path.SetBtType("BTJPath-3073")
			//Path.path element
			pathKey := onshape.NewBTJPathKey3221()
			pathKey.SetBtType("BTJPathKey-3221")
			path.SetPath([]onshape.BTJPathElementInterface{
				pathKey,
			})
			btjEditInsert.SetPath(*path)
			value := map[string]interface{}{
				"_nodeId": tt.args.elementName,
				"chp1":    tt.args.subElements[0].name,
				"chp2":    tt.args.subElements[1].name,
				"chp3":    tt.args.subElements[2].name,
			}
			btjEditInsert.SetValue(value)
			bTAppElementUpdateParams.SetJsonTreeEdit(btjEditInsert)
			bTAppElementUpdateParams.SetTransactionId(*txnID)
			client.AppElementsApi.UpdateAppElement(ctx, did, eid, "w", wid).BTAppElementUpdateParams(*bTAppElementUpdateParams).Execute()
			assert.NoError(t, err, "Response status %d", rawResp.StatusCode)

			//Commit Transaction
			btAppElementCommitTransactionParams := onshape.NewBTAppElementCommitTransactionParams()
			btAppElementCommitTransactionParams.SetDescription("Done Updating the Assembly")
			btAppElementCommitTransactionParams.SetTransactionIds([]string{*txnID})
			btAppElementModifyInfo, rawResp, err = client.AppElementsApi.CommitTransactions(ctx, did, wid).BTAppElementCommitTransactionParams(*btAppElementCommitTransactionParams).Execute()
			assert.NoError(t, err, "Response status %d", rawResp.StatusCode)

			//Verify we only have two microversions
			btDocumentHistoryInfos, rawResp, err := client.DocumentApi.GetDocumentHistory(ctx, did, "w", wid).Execute()
			assert.NoError(t, err, "Response status %d", rawResp.StatusCode)
			assert.LessOrEqual(t, 3, len(btDocumentHistoryInfos))
			latestCommit := btDocumentHistoryInfos[0].GetMicroversionId()

			btAppElementIdsInfo, rawResp, err := client.AppElementsApi.GetSubelementIds(ctx, did, eid, "m", latestCommit).Execute()
			assert.NoError(t, err, "Response status %d", rawResp.StatusCode)
			assert.Equal(t, 3, len(btAppElementIdsInfo.GetSubelementIds()))
		})
	}
}
