from onshape_client.oas.models.bt_id_translation_params import BTIdTranslationParams
import json


def test_translate_ids(configurable_cubes, client):
    sketch_id = "JCF"
    params = BTIdTranslationParams(ids=[sketch_id], source_document_microversion="99097c624be5cd434b03f906")
    cube = configurable_cubes[1]
    result = client.part_studios_api.translate_ids(cube.did, cube.wvm, cube.wvmid, cube.eid, params)
    assert result.ids[0].source == sketch_id
    assert result.ids[0].target[0] == sketch_id

def test_get_features(cube, client):
    result = client.part_studios_api.get_features1(cube.did, cube.wvm, cube.wvmid, cube.eid, _preload_content=False)
    data = json.loads(result.data)
    assert data['features'][0]['message']['name'] == 'Sketch 1'

def test_create_features(client, part_studio, assets):
    width = f"{3}*meter"
    length = f"{5}*meter"
    # Get the json:
    feature = json.load((assets / 'add_rectangle_feature.json').open())
    # Set width:
    feature['feature']['message']['constraints'][11]['message']['parameters'][2]['message']['expression'] = width
    # Set length:
    feature['feature']['message']['constraints'][12]['message']['parameters'][2]['message']['expression'] = length
    client.part_studios_api.add_feature1(did=part_studio.did, wvm=part_studio.wvm, wvmid=part_studio.wvmid, eid=part_studio.eid, body=feature, _preload_content=False)
    result_features2 = client.part_studios_api.get_features1(did=part_studio.did, wvm=part_studio.wvm, wvmid=part_studio.wvmid, eid=part_studio.eid)
    result_features = json.loads(client.part_studios_api.get_features1(did=part_studio.did, wvm=part_studio.wvm, wvmid=part_studio.wvmid, eid=part_studio.eid, _preload_content=False).data.decode('UTF-8'))
    assert result_features['features'][0]['constraints'][11]['parameters'][2]['expression'] == width
    assert result_features['features'][0]['constraints'][12]['parameters'][2]['expression'] == length