import pytest


@pytest.mark.parametrize("file", ["bracelet.x_t", "Cube.x_t", "Cube.step"])
def test_import_file(new_document, client, assets, file):
    imported_ps = new_document.import_file(assets / file, allow_faulty_parts=True)
    response = client.parts_api.get_mass_properties(
        imported_ps.did,
        imported_ps.wvm,
        imported_ps.wvmid,
        imported_ps.eid,
        partid="JFD",
    )
    assert response.bodies["JFD"].volume[0] > 0
