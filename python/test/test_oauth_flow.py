from onshape_client.client import Client, OAuthAuthorizationMethods
import pytest

def test_client(client, configurable_cube):
    call_api(configurable_cube, client)

@pytest.mark.skip(reason="no way of currently testing this")
def test_manual_oauth_flow(configurable_cube, client):
    client.oauth_authorization_method = OAuthAuthorizationMethods.MANUAL_FLOW
    # save refresh token then put in later.
    refresh_token = client.refresh_token
    client.refresh_token = ""
    client.configuration.access_token = ""
    try:
        call_api(configurable_cube, client)
    except Exception as e:
        client.refresh_token = refresh_token
        call_api(configurable_cube, client)


def call_api(cube, client):
    client.elements_api.get_configuration(cube.did, cube.wvm, cube.wvmid, cube.eid)