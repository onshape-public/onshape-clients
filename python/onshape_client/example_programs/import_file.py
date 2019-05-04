'''
importstl
===

Demos importing an STL file
'''

from onshape_client.client import Client
from onshape_client.onshape_url import OnshapeElement
from onshape_client.utility import get_field
import os
import time

def import_file(file_path, did, wid):
    """Import a file from the local file system. Returns the URL of the resulting element if translated."""
    client = Client.get_client()
    file = open(file_path, 'r').read()
    r = client.blob_elements_api.upload_file_create_element(did, wid, media_type="application/stl", file=file, translate=True, encodedFilename=file_path.split('/')[-1], _preload_content=False)
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
    return element_id

if __name__ == "__main__":
    element = OnshapeElement(
        "http://localhost.dev.onshape.com:8080/documents/ee93985ceb928f7a7c79fed3/w/593971edd8336a08489ec7c0/e/c066cfbaf68e866b53cdb73f")
    import_file(os.path.dirname(__file__) + "/assets/Cube.x_t", element.did, element.wvmid)