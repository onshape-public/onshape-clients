"""Export a drawings PDF
"""

import json
import os.path
import time

from onshape_client.oas.models.bt_translate_format_params import BTTranslateFormatParams


def export(client, element, element_type=None, format_name="STEP"):
    # We're saving these files to the home directory ("~")
    client.configuration.temp_folder_path = os.path.expanduser("~")

    # Create the params. Note there are far more params that can be specified.
    params = BTTranslateFormatParams(
        element_id=element.eid, format_name=format_name, store_in_document=False
    )

    if element_type == "Drawing":
        response = client.drawings_api.translate_format4(
            element.did,
            element.wvm,
            element.wvmid,
            element.eid,
            bt_translate_format_params=params,
        )
    elif element_type == "PartStudio":
        if format_name == "STL":
            response = client.part_studios_api.export_stl1(
                element.did, element.wvm, element.wvmid, element.eid
            )
        elif format_name == "PARASOLID":
            response = client.part_studios_api.export_ps1(
                element.did, element.wvm, element.wvmid, element.eid
            )
        else:
            response = client.part_studios_api.translate_format5(
                element.did,
                element.wvm,
                element.wvmid,
                element.eid,
                bt_translate_format_params=params,
            )
    elif element_type == "Assembly":
        response = client.assemblies_api.translate_format(
            element.did,
            element.wvm,
            element.wvmid,
            element.eid,
            bt_translate_format_params=params,
        )
    elif element_type == "Blob":
        response = client.blob_elements_api.downloadFile(
            element.did, element.wvm, element.wvmid, element.eid
        )
        return response
    else:
        raise UserWarning(f"Element type of {element_type} can not be exported.")

    translation_id = response.id
    state = response.request_state

    # Long poll every 2 seconds until the translation is marked as done - alternatively you could submit a webhook
    parsed_response = None
    while state == "ACTIVE":
        time.sleep(2)
        response = client.translation_api.get_translation(
            translation_id, _preload_content=False
        )
        parsed_response = json.loads(response.data.decode("UTF-8"))
        state = parsed_response["requestState"]

    # Make the actual download when the translation is done, otherwise report the error
    if state == "DONE":
        client.documents_api.download_external_data(
            element.did, parsed_response["resultExternalDataIds"][0]
        )
        print("File saved to " + client.configuration.temp_folder_path)
    else:
        print(
            "An error ocurred on the server! Here is the response: \n" + parsed_response
        )
    """
    File saved to <temp_folder_path>
    """
