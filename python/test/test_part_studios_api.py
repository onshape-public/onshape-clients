from onshape_client.models.bt_id_translation_params import BTIdTranslationParams
from onshape_client.models.bt_id_translation_info import BTIdTranslationInfo

def test_translate_ids(configurable_cubes, client):
    # sketch_id = "JFJ"
    sketch_id = "Ay3nyd5k5P13.bottom"
    source_config = "List_UKkGODiz574chc%3Dfileted%3Bsize%3D0.025400000000000002%2Bmeter"
    target_config = "size%3D0.025400000000000002%2Bmeter"
    params = BTIdTranslationParams(ids=[sketch_id], source_document_microversion="99097c624be5cd434b03f906")
    cube = configurable_cubes[1]
    result = client.part_studios_api.translate_ids1(cube.did, cube.wvm, cube.wvmid, cube.eid, params)
    assert result.ids == []
