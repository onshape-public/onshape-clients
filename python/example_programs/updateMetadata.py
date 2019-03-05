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

def make_configured_part_href():
    return configuration.host + "/api/metadata/d/" + did + "/w/" + wid + "/e/" + eid + "/p/" + pid + "?" + get_encoded_config_map(config_not_encoded)

def make_configured_assembly_href():
    return configuration.host + "/api/metadata/d/" + did + "/w/" + wid + "/e/" + eid + "?" + get_encoded_config_map(config_not_encoded)

# # Update a configured part property (on prod):
# did = "624cda69347788edc2259a64"
# wid = "c09ce0ce9af4ea6f69323ab7"
# eid = "dc87b9f4e12d68e447d2d49a"
# pid = "JHD"
# config_not_encoded=[{"parameterId":"sizeCube", "parameterValue":"8 in"}, {"parameterId":"edgeCube", "parameterValue": "Chamfered"}]
# new_val="8in_chamfered"
# property_id="57f3fb8efa3416c06701d60d"
# href=make_configured_part_href()

# # Update a configured part property (on local):
# did = "d24ccec8a0da89a9c09f67e5"
# wid = "b4c392939cdab5d849e6deff"
# eid = "ddd0c66c3158e715c421ac06"
# pid = "JHD"
# config_not_encoded=[{"parameterId":"sizeCube", "parameterValue":"8in"}]
# new_val="8in_chamfered"
# property_id="57f3fb8efa3416c06701d60d"
# href=make_configured_part_href()

# Update a configured element property (on prod):
did = "624cda69347788edc2259a64"
wid = "c09ce0ce9af4ea6f69323ab7"
eid = "d252e442e4cb6c22e49f4754"
config_not_encoded=[{"parameterId":"size", "parameterValue":"8 in"}]
new_val="new_description"
property_id="57f3fb8efa3416c06701d60e"
href=make_configured_assembly_href()

# # Update a configured element property (on local):
# did = "d24ccec8a0da89a9c09f67e5"
# wid = "b4c392939cdab5d849e6deff"
# eid = "759abc99e78c39823d4f48ed"
# pid = "JHD"
# config_not_encoded=[{"parameterId":"sizeCube", "parameterValue":"8 in"}]
# new_val="new_description"
# property_id="57f3fb8efa3416c06701d60e"
# href=make_configured_assembly_href()

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
