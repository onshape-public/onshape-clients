from onshape_client.client import Client
from onshape_client.onshape_url import OnshapeElement
from onshape_client.utility import get_field
from onshape_client.oas import FormDataBodyPart
import os
import time


def test_import_file(new_document, client, assets):
    files_to_import = ["Cube.x_t", "Cube.step"]
    for file in files_to_import:
        imported_ps = new_document.import_file(assets / file)
        response = client.parts_api.get_mass_properties(imported_ps.did, imported_ps.wvm, imported_ps.wvmid, imported_ps.eid, partid='JFD')
        assert response.bodies['JFD'].volume[0] > 0