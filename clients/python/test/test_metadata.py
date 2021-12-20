import pytest
from onshape_client import OnshapeElement
import json


@pytest.mark.parametrize("element", ["ps_configurable_cube"], indirect=True)
def test_change_metadata(element: OnshapeElement, new_copied_document_factory, client):
    copied_doc = new_copied_document_factory(element)
    result = client.api_client.request(
        method="POST",
        url=f"{client.configuration.host}/api/metadata/d/{copied_doc.did}/v/{copied_doc.wvmid}",
        headers={
            "Accept": "application/vnd.onshape.v1+json;charset=utf-8;qs=0.1, application/json;charset=utf-8; qs=0.09"
        },
        query_params={},
        body={"items": [{"properties": [{"value": "new_description_False_another", "propertyId": "57f3fb8efa3416c06701d60e"}], "href": "https://cad.onshape.com/api/metadata/d/624cda69347788edc2259a64/w/c09ce0ce9af4ea6f69323ab7/e/d252e442e4cb6c22e49f4754?configuration=List_EwLwXQKstmDIZM%3Danother%3Bbool%3Dfalse%3Bsize%3D2+in"}]}
    )
    result = json.loads(result.data)
    assert result[0]["partId"] == "JHD"