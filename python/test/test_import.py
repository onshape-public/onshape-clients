from onshape_client.client import Client
from onshape_client.onshape_url import OnshapeElement
from onshape_client.utility import get_field
from onshape_client.oas import FormDataBodyPart
import os
import time


def import_file(file_path, did, wid):
    """Import a file from the local file system. Returns the URL of the resulting element if translated."""
    client = Client.get_client()
    file = open(file_path, 'rb').read()
    data_part = FormDataBodyPart()
    result = client.blob_elements_api.upload_file_create_element(did, wid, file=open(file_path, 'rb'), translate=True, encoded_filename=file_path.name)
    translation_id = result.translation_id
    print("The translationId is: {}.".format(translation_id))

    state = 'ACTIVE'
    while state == 'ACTIVE':
        time.sleep(2)
        result = client.translation_api.get_translation(translation_id)
        state = result.request_state

    element_id = result.result_element_ids[0]
    # Make the actual download when the translation is done, otherwise report the error
    if state == "DONE":
        print("Translated document available at {host}/documents/{did}/w/{wid}/e/{eid}".format(host=client.configuration.host,
                                                                                did=result.document_id,
                                                                                wid=result.workspace_id,
                                                                                eid=element_id))
    else:
        print("An error ocurred on the server! Here is the response: \n")
    return OnshapeElement.create_from_ids(did, 'w', wid, element_id)


def test_import_file(new_document, client, assets):
    files_to_import = ["Cube.x_t", "Cube.step"]
    for file in files_to_import:
        imported_ps = import_file(assets / file, new_document.did, new_document.wvmid)
        response = client.parts_api.get_mass_properties(imported_ps.did, imported_ps.wvm, imported_ps.wvmid, imported_ps.eid, partid='JFD')
        assert response.bodies['JFD'].volume[0] > 0