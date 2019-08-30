"""Export a STEP file
"""

from onshape_client.client import Client
from onshape_client.onshape_url import OnshapeElement
from onshape_client.oas.models.bt_translate_format_params import BTTranslateFormatParams
import time
import json
import os.path

client = Client()

# We're saving these files to the home directory ("~")
client.configuration.temp_folder_path = os.path.expanduser("~")

# Turn the URL into an "OnshapeElement"
url = "https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/aaa25d18038e06f0b2964e2d/e/69c9eedda86512966b20bc90"
cube = OnshapeElement(url, client=client)

# Create the params. Note there are far more params that can be specified.
params = BTTranslateFormatParams(element_id=cube.eid, format_name="STEP", store_in_document=False, configuration='List_UKkGODiz574chc=chamfered;show_cube=true;size=0.254+meter')

# Call the client
start_time = time.time()
response = client.part_studios_api.translate_format5(cube.did, cube.wvm, cube.wvmid, cube.eid, bt_translate_format_params=params)
elapsed_time = time.time() - start_time
print('Took {} seconds to complete the translation start request.'.format(elapsed_time))

translation_id = response.id
state = response.request_state

# Long poll every 2 seconds until the translation is marked as done - alternatively you could submit a webhook
parsed_response = None

# Seconds between polls
polling_interval = 2

time_to_translate=0
while state == 'ACTIVE':
    time.sleep(polling_interval)
    time_to_translate += polling_interval
    response = client.translation_api.get_translation(translation_id, _preload_content=False)
    parsed_response = json.loads(response.data.decode("UTF-8"))
    state = parsed_response["requestState"]
    print("Still actively translating. Time thus far = {}".format(time_to_translate))

# Make the actual download when the translation is done, otherwise report the error
if state == "DONE":
    client.documents_api.download_external_data(cube.did, parsed_response["resultExternalDataIds"][0])
    print("File saved to {}. Took {} seconds to complete the translation.".format(client.configuration.temp_folder_path, time_to_translate))
else:
    print("An error ocurred on the server! Here is the response: \n" + parsed_response['failureReason'])
"""
File saved to <temp_folder_path>
"""