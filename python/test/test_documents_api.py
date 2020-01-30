from onshape_client.oas.models.bt_copy_document_params import BTCopyDocumentParams

def test_copy_workspace(client, new_document):
    NEW_DOCUMENT_NAME="My copied document"
    new_doc_info = client.documents_api.copy_workspace(did=new_document.did, wid=new_document.wvmid, bt_copy_document_params_bt_copy_document_params=BTCopyDocumentParams(new_name=NEW_DOCUMENT_NAME))
    assert new_doc_info.new_document_name == NEW_DOCUMENT_NAME