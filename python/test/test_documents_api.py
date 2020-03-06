import json
from urllib.parse import urlparse, parse_qs

import pytest
from onshape_client.oas import BTCopyDocumentParams, BTDocumentSearchParams


def test_copy_workspace(client, new_document):
    NEW_DOCUMENT_NAME = "My copied document"
    new_doc_info = client.documents_api.copy_workspace(did=new_document.did, wid=new_document.wvmid,
                                                       bt_copy_document_params=BTCopyDocumentParams(
                                                           new_name=NEW_DOCUMENT_NAME))
    assert new_doc_info.new_document_name == NEW_DOCUMENT_NAME

@pytest.mark.skip(reason="Not done")
def test_create_company_owned_document(client):
    """Try creating a company-owned document"""
    doc = client.documents_api.create_document(
        bt_document_params=BTCopyDocumentParams(owner_type_index=1, new_name="Test enterprise owned doc", owner_id=""))


@pytest.mark.skip(reason="Example code for paginated document search")
def test_advanced_document_search(client):
    SEARCH_TERM = "3DBK Maker Frames"
    response = client.documents_api.search(
        bt_document_search_params=BTDocumentSearchParams(found_in='ALL', raw_query=f"_all:{SEARCH_TERM} type:all"),
        _preload_content=False)
    result = json.loads(response.data)
    doc_ids = []
    while result['next']:
        next = urlparse(result['next'])
        offset = int(parse_qs(next.query)['offset'][0])
        doc_ids = doc_ids + [item['id'] for item in result['items'] if
                             any([search_hit['name'] == SEARCH_TERM for search_hit in item['searchHits']])]
        result = json.loads(client.documents_api.search(bt_document_search_params=BTDocumentSearchParams(found_in='ALL',
                                                                                                         raw_query=f"_all:\"{SEARCH_TERM}\" type:all",
                                                                                                         offset=offset),
                                                        _preload_content=False).data)
    assert len(doc_ids) > 1
