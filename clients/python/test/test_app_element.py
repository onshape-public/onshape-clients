import json

import pytest
from onshape_client.client import Client
from onshape_client.oas import BTAppElementParams, BTAppElementChangeParams


@pytest.mark.parametrize("file", ["Cube.x_t"])
def test_upload_blob_sub_element(client: Client, new_document, translated_geometry, file):
    blob_id = "myId"
    file_data = open(translated_geometry / file, 'rb').read()
    app_element = client.app_elements_api.create_element(did=new_document.did, wid=new_document.default_workspace,
                                                         bt_app_element_params=BTAppElementParams(description="test",
                                                                                                  format_id="com.hi.test",
                                                                                                  name="a test app element",
                                                                                                  subelements=[
                                                                                                      BTAppElementChangeParams(
                                                                                                          base_content="",
                                                                                                          subelement_id=blob_id
                                                                                                      )]))
    client.api_client.request('POST',
                              client.configuration.host + '/api/appelements/d/' + new_document.did + '/w/' + new_document.default_workspace + '/e/' + app_element.element_id + '/blob/' + blob_id,
                              query_params={},
                              headers={"Content-Type": "multipart/form-data"},
                              post_params={"file": file_data},
                              body={})
    download_blob_result = client.api_client.request('GET',
                                                     client.configuration.host + '/api/appelements/d/' + new_document.did + '/w/' + new_document.default_workspace + '/e/' + app_element.element_id + '/blob/' + blob_id,
                                                     query_params={},
                                                     headers={},
                                                     post_params={},
                                                     body={})
    assert bytes(download_blob_result.data, 'utf-8') == file_data
