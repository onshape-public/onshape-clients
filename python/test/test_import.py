import pytest


@pytest.mark.parametrize("file", ["Cube.x_t", "Cube.step"])
def test_import_file(new_document, client, assets, file):
    files_to_import = ["Cube.x_t", "Cube.step"]
    imported_ps = new_document.import_file(assets / file)
    response = client.parts_api.get_mass_properties(
        imported_ps.did,
        imported_ps.wvm,
        imported_ps.wvmid,
        imported_ps.eid,
        partid="JFD",
    )
    assert response.bodies["JFD"].volume[0] > 0
