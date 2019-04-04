'''
exportstl
===

Demos 307 redirects with the Onshape API
'''


import onshape_client
from onshape_client.models.bt_configuration_params import BTConfigurationParams
from onshape_client.shared import Client
import json

client = Client()

def get_encoded_config_map(config_map):
    params=BTConfigurationParams(parameters=config_map)
    # Get the desired configuration
    r = client.ElementsApi.encode_configuration_map(did, eid, params, _preload_content=False)
    return json.loads(r.data.decode("UTF-8"))["queryParam"]

def make_configured_part_href(config_not_encoded):
    return client.configuration.host + "/api/metadata/d/" + did + "/w/" + wid + "/e/" + eid + "/p/" + pid + "?" + get_encoded_config_map(config_not_encoded)

def make_configured_assembly_href(config_not_encoded):
    return client.configuration.host + "/api/metadata/d/" + did + "/w/" + wid + "/e/" + eid + "?" + get_encoded_config_map(config_not_encoded)

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
config_not_encoded=[{"parameterId":"size", "parameterValue":"2 in"}, {"parameterId":"bool", "parameterValue":False}, {"parameterId":"List_EwLwXQKstmDIZM", "parameterValue":"another"}]
config_not_encoded1=[{"parameterId":"size", "parameterValue":"2 in"}, {"parameterId":"bool", "parameterValue":True}, {"parameterId":"List_EwLwXQKstmDIZM", "parameterValue":"another"}]
config_not_encoded2=[{"parameterId":"size", "parameterValue":"2 in"}, {"parameterId":"bool", "parameterValue":False}, {"parameterId":"List_EwLwXQKstmDIZM", "parameterValue":"that"}]
config_not_encoded3=[{"parameterId":"size", "parameterValue":"2 in"}, {"parameterId":"bool", "parameterValue":True}, {"parameterId":"List_EwLwXQKstmDIZM", "parameterValue":"that"}]
new_val="new_description_False_another"
property_id="57f3fb8efa3416c06701d60e"
href=make_configured_assembly_href(config_not_encoded)
available_config = client.ElementsApi.get_configuration3(did, "w", wid, eid, _preload_content=False)
print(available_config)

# # Update a configured element property (on local):
# did = "d24ccec8a0da89a9c09f67e5"
# wid = "b4c392939cdab5d849e6deff"
# eid = "759abc99e78c39823d4f48ed"
# pid = "JHD"
# config_not_encoded=[{"parameterId":"sizeCube", "parameterValue":"8 in"}]
# new_val="new_description"
# property_id="57f3fb8efa3416c06701d60e"
# href=make_configured_assembly_href()

def update_metadata_for_config(href, new_val):
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
    mu = client.MetadataApi.update_wv_metadata(did, "w", wid, body, _preload_content=False)
    print("url: " + mu._request_url)
    print("body: " + json.dumps(body))

update_metadata_for_config(make_configured_assembly_href(config_not_encoded), new_val)
update_metadata_for_config(make_configured_assembly_href(config_not_encoded1), new_val)
update_metadata_for_config(make_configured_assembly_href(config_not_encoded2), new_val)
update_metadata_for_config(make_configured_assembly_href(config_not_encoded3), new_val)
