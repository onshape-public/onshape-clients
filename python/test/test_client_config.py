from onshape_client.client import Client

def test_specify_client_config_in_code():

    client = Client(configuration={
        "base_url": "https://cad.onshape.com",
        "access_key": "USER_ACCESS_KEY",
        "secret_key": "USER_SECRET_KEY"
    })

    assert client.configuration.api_key["SECRET_KEY"] == "USER_SECRET_KEY"
    assert client.configuration.api_key["ACCESS_KEY"] == "USER_ACCESS_KEY"

    # Reset client:
    Client()
    assert client.configuration.api_key["SECRET_KEY"] != "USER_SECRET_KEY"