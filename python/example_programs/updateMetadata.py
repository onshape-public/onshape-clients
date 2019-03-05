'''
exportstl
===

Demos 307 redirects with the Onshape API
'''

from onshape_client.configuration import Configuration
import onshape_client
from pathlib import Path
from ruamel.yaml import YAML
from onshape_client.models.bt_configuration_params import BTConfigurationParams
import six
import json

# Get the YAML file that contains the configuration params
yaml = YAML()
path = '../.onshape_client_config.yaml'
onshape_client_config = yaml.load(Path(path))

# Load the API keys and URL into the configuration
configuration = Configuration()
conf = onshape_client_config[onshape_client_config['default']]
configuration.api_key['SECRET_KEY'] = conf['api_keys']['secret_key'].encode('utf-8')
configuration.api_key['ACCESS_KEY'] = conf['api_keys']['access_key'].encode('utf-8')
configuration.host = conf['baseUrl']

apiClient = onshape_client.ApiClient(configuration=configuration)
# Create the API instance with the configuration
metadata_instance = onshape_client.api.MetadataApi(apiClient)

def get_encoded_config_map(config_map):
    params=BTConfigurationParams(parameters=config_map)
    # Get the desired configuration
    elements_instance = onshape_client.api.ElementsApi(apiClient)
    r = elements_instance.encode_configuration_map(did, eid, params, _preload_content=False)
    return json.loads(r.data.decode("UTF-8"))["queryParam"]

# Set the part to be updated (on prod):
did = "624cda69347788edc2259a64"
wid = "c09ce0ce9af4ea6f69323ab7"
eid = "dc87b9f4e12d68e447d2d49a"
pid = "JHD"
config_not_encoded=[{"parameterId":"sizeCube", "parameterValue":"8 in"}, {"parameterId":"edgeCube", "parameterValue": "Chamfered"}]
new_val="8in_chamfered"
property_id="57f3fb8efa3416c06701d60d"

# # Set the part to be updated (on local):
# did = "1f9cdecdb284fa6637dd61ef"
# wid = "d6e568784bba9f54530813a8"
# eid = "ddb2bc4c6dcdf90d67660de8"
# pid = "JHD"
# config_not_encoded=[{"parameterId":"sizeCube", "parameterValue":"8in"}, {"parameterId":"edgeCube", "parameterValue": "chamfered"}]
# new_val="8in_chamfered2"
# property_id="57f3fb8efa3416c06701d60d"

href=configuration.host + "/api/metadata/d/" + did + "/w/" + wid + "/e/" + eid + "/p/" + pid + "?" + get_encoded_config_map(config_not_encoded)

body={
    'items': [
        {
            "properties": [
                {
                    "value": new_val,
                    "propertyId": property_id

                }
            ],
            "href": href
        }
    ]
}

# Try to update a configured part Studio's element metadata.
mu = metadata_instance.update_wv_metadata(did, "w", wid, body, _preload_content=False)
