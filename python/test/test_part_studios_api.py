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
