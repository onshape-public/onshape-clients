from onshape_client.client import Client
from onshape_client.onshape_url import OnshapeElement
from onshape_client.models.bt_translate_format_params import BTTranslateFormatParams
import time
import json

client = Client(stack_key="prod")

url = "https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/aaa25d18038e06f0b2964e2d/e/69c9eedda86512966b20bc90"
cube = OnshapeElement(url, client=client)

params = BTTranslateFormatParams(element_id=cube.eid, format_name="STEP", store_in_document=False)
response = client.part_studios_api.translate_format5(cube.did, cube.wvm, cube.wvmid, cube.eid, bt_translate_format_params=params)

translation_id = response.id
state = response.request_state

# Long poll every 2 seconds until the translation is done
while state == 'ACTIVE':
    time.sleep(2)
    response = client.translation_api.get_translation(translation_id, _preload_content=False)
    parsed_response = json.loads(response.data.decode("UTF-8"))
    state = parsed_response["requestState"]

if state == "DONE":
    client.documents_api.download_external_data(cube.did, parsed_response["resultExternalDataIds"][0])