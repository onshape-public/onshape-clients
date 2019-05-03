from onshape_client.client import Client, OAuthAuthorizationMethods

client = Client(stack_key="prod-oauth-full")

def test_client(configurable_cube):
    call_api(configurable_cube, client)

def test_manual_oauth_flow(configurable_cube):
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
    client.elements_api.get_configuration3(cube.did, cube.wvm, cube.wvmid, cube.eid)