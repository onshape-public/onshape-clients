from onshape_client.client import Client

client = Client(stack_key="prod-oauth-full")

def test_client(configurable_cube):
    client.elements_api.get_configuration3(configurable_cube.did, configurable_cube.wvm, configurable_cube.wvmid,
                                           configurable_cube.eid)
