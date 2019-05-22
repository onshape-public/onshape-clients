from onshape_client.utility import get_field

def test_assembly_definition(client, configurable_cubes_assemblies):
    cube = configurable_cubes_assemblies[2]
    did = cube.did
    vid = cube.wvmid
    eid = cube.eid
    assert client.assemblies_api.get_assembly_definition1(did, 'v', vid, eid, _preload_content=False)
    # issue #4
    res = client.assemblies_api.get_assembly_definition1(did, 'v', vid, eid, include_mate_features=True, include_mate_connectors=True, _preload_content=False)
    parts = get_field(res, "parts")
    assert parts[0]["mateConnectors"]