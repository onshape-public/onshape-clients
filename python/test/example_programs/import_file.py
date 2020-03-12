"""
importstl
===

Demos importing an STL file
"""

import time

from onshape_client.client import Client
from onshape_client.utility import get_field


def test_import_file(assets, new_document):
    """Import a file from the local file system. Returns the URL of the resulting element if translated."""
    client = Client()
    cube_path = assets / "Cube.x_t"
    file = open(cube_path, "rb").read()
    r = client.blob_elements_api.upload_file_create_element(
        new_document.did, new_document.wvmid, _preload_content=False
    )
    # file=file, translate=True, encodedFilename=cube_path.name, media_type="application/stl",
    translation_id = get_field(r, "translationId")
    print("The translationId is: {}.".format(translation_id))

    state = "ACTIVE"
    while state == "ACTIVE":
        time.sleep(2)
        r = client.translation_api.get_translation(
            translation_id, _preload_content=False
        )
        state = get_field(r, "requestState")

    element_id = get_field(r, "resultElementIds")[0]
    # Make the actual download when the translation is done, otherwise report the error
    if state == "DONE":
        print(
            "Translated document available at {host}/documents/{did}/w/{wid}/e/{eid}".format(
                host=client.configuration.host,
                did=get_field(r, "documentId"),
                wid=get_field(r, "workspaceId"),
                eid=element_id,
            )
        )
    else:
        print("An error ocurred on the server! Here is the response: \n")
    return element_id
