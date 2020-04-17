import pytest
from onshape_client import OnshapeElement
from pathlib import Path


@pytest.mark.parametrize("file", ["Cube.x_t", "Cube.step", "Cube.stl"])
def test_import_file(new_document, client, translated_geometry, file):
    imported_ps = new_document.import_file(
        translated_geometry / file, allow_faulty_parts=True
    )
    response = client.parts_api.get_mass_properties(
        imported_ps.did,
        imported_ps.wvm,
        imported_ps.wvmid,
        imported_ps.eid,
        partid="JFD",
    )
    assert response.bodies["JFD"].volume[0] > 0


def test_batch_import_file(client, translated_geometry):
    """Upload all files in the translated_geometry folder to each new document, and get a mapping from file name to
    mass."""
    threads = []

    def upload_then_get_mass(file: Path):
        new_doc = OnshapeElement.create(file.name)
        imported_ps = new_doc.import_file(file, allow_faulty_parts=True)
        return imported_ps.mass_properties.bodies["-all-"].volume[0]

    for file in translated_geometry.iterdir():
        threads.append(client.api_client.pool.apply_async(upload_then_get_mass, [file]))

    result = {}

    for thread, file in zip(threads, translated_geometry.iterdir()):
        result[file.name] = round(thread.get(), 7)

    assert result == {
        "Many Many Cubes.step": 1.0,
        "Cube.x_t": 0.0004425,
        "Cube.step": 1.0,
        "Cube.stl": 61023.5329527,
    }
