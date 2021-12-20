from onshape_client.oas.api_client import ApiClient
from onshape_client.client import Client
import pytest
import json


@pytest.mark.parametrize("element", ["ps_configurable_cube"], indirect=True)
def test_get_custom_call(client, element):
    result = client.api_client.request(
        method="GET",
        url=f"{client.configuration.host}/api/parts/d/{element.did}/{element.wvm}/{element.wvmid}/e/{element.eid}",
        headers={
            "Accept": "application/vnd.onshape.v1+json;charset=utf-8;qs=0.1, application/json;charset=utf-8; qs=0.09"
        },
        query_params={},
    )
    result = json.loads(result.data)
    assert result[0]["partId"] == "JHD"
