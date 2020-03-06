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
    r = client.blob_elements_api.upload_file_create_element(did, wid, file=open(file_path, 'rb'), translate=True, encoded_filename=file_path.name, _preload_content=False)
    translation_id = get_field(r, 'translationId')
    print("The translationId is: {}.".format(translation_id))

    state = 'ACTIVE'
    while state == 'ACTIVE':
        time.sleep(2)
        r = client.translation_api.get_translation(translation_id, _preload_content=False)
        state = get_field(r, "requestState")

    element_id = get_field(r, 'resultElementIds')[0]
    # Make the actual download when the translation is done, otherwise report the error
    if state == "DONE":
        print("Translated document available at {host}/documents/{did}/w/{wid}/e/{eid}".format(host=client.configuration.host,
                                                                                did=get_field(r, 'documentId'),
                                                                                wid=get_field(r, 'workspaceId'),
                                                                                eid=element_id))
    else:
        print("An error ocurred on the server! Here is the response: \n")
    return OnshapeElement.create_from_ids(did, 'w', wid, element_id)


def test_import_file(new_document, client, assets):
    imported_ps = import_file(assets / "Cube.x_t", new_document.did, new_document.wvmid)
    response = client.parts_api.get_mass_properties(imported_ps.did, imported_ps.wvm, imported_ps.wvmid, imported_ps.eid, partid='JFD')
    assert response.bodies['JFD'].volume[0] > 0