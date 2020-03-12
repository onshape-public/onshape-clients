"""Get all the FeatureScripts within a given document and save them to a local folder.
"""

import os.path
from pathlib import Path

from onshape_client.onshape_url import OnshapeElement


def test_get_all_fs(client):
    # We're saving these files to the home directory ("~")
    client.configuration.temp_folder_path = os.path.expanduser("~")

    # Turn the URL into an "OnshapeElement"
    url = "https://cad.onshape.com/documents/ea1c0fef91272adff0cc4b41/w/65efb40b6df7b9206b2a10b5/e/6921aecc8424c978fe8c78ce"
    cube = OnshapeElement(url, client=client)

    my_elements = client.documents_api.get_elements3(cube.did, cube.wvm, cube.wvmid)
    for element in my_elements:
        if element.element_type == "FEATURESTUDIO":
            fs_contents = client.feature_studios_api.get_feature_studio_contents1(
                cube.did, cube.wvm, cube.wvmid, element.id
            )
            file_path = (
                Path(__file__).parent
                / "tmp"
                / ("{name}::{id}.fs".format(name=element.name, id=element.id))
            )
            file = file_path.open(mode="w")
            file.write(fs_contents.contents)
            file.close()
