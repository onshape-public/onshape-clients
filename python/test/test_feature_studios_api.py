import json

from onshape_client import Client

def test_update_fs(client: Client, new_document, feature_studio):
    new_contents = "Hello there."
    result = client.api_client.request(
        method="POST",
        url=f"{client.configuration.host}/api/featurestudios/d/{new_document.did}/{new_document.wvm}/{new_document.wvmid}/e/{feature_studio.id}",
        headers={
            "Accept": "application/vnd.onshape.v1+json;charset=utf-8;qs=0.1, application/json;charset=utf-8; qs=0.09"
        },
        body={"contents": new_contents},
        query_params={},
    )
    result = json.loads(result.data)
    assert result["contents"] == new_contents
