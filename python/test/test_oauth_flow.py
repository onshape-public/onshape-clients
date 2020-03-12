import pytest
from onshape_client.client import OAuthAuthorizationMethods


@pytest.mark.skip(reason="no way of currently testing this")
def test_manual_oauth_flow(client):
    client.oauth_authorization_method = OAuthAuthorizationMethods.MANUAL_FLOW
    # save refresh token then put in later.
    refresh_token = client.refresh_token
    client.refresh_token = ""
    client.configuration.access_token = ""
    try:
        client.documents_api.get_documents()
    except Exception as e:
        client.refresh_token = refresh_token
        client.documents_api.get_documents()
