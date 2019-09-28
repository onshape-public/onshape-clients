"""For getting measurements defined by the custom "measure" feature: https://cad.onshape.com/documents/78aa66ffe6f1daceb9cfad3d/v/025bec5f59f6380ab5627a4b/e/92549789b92e9aa35f676f4e

To fetch measurements from the API:

1. Make sure the desired geometry is defined using the feature within this document. The "use measurements variable" checkbox should be selected.
2. Call the Evaluate Featurescript API call with your client/code with the following script:

	function(context, queries) {
            return getAllVariables(context, "m");
        }

This will return all the variables defined under "m", ie, m.radius, m.my_custom_length, etc...
3. Now use the resulting map from measurements feature name to value within your code.
"""

from onshape_client.client import Client
from onshape_client.onshape_url import OnshapeElement
from onshape_client.oas.models.bt_feature_script_eval_call import BTFeatureScriptEvalCall
from onshape_client.utility import parse_quantity
import json

script = \
    r"""
    function(context, queries) {
            return getAllVariables(context);
        }
    """


def test_get_variables(client):
    element = OnshapeElement(
        "https://cad.onshape.com/documents/78aa66ffe6f1daceb9cfad3d/v/e36c0bd857c2a2a8b2107a40/e/92549789b92e9aa35f676f4e")
    script_call = BTFeatureScriptEvalCall(script=script)
    response = client.part_studios_api.eval_feature_script(element.did,
                                                           element.wvm,
                                                           element.wvmid,
                                                           element.eid,
                                                           bt_feature_script_eval_call=script_call,
                                                           _preload_content=False)
    measurements = json.loads(response.data.decode("utf-8"))["result"]["message"]["value"]
    parsed_measurements = parse_variables_from_map(measurements)

    print("Measurements: \n" + str(parsed_measurements))


def parse_variables_from_map(unparsed):
    parsed_variables = {}
    value = None
    for to_parse in unparsed:
        if is_fs_type(to_parse, 'BTFSValueMapEntry'):
            key = to_parse["message"]["key"]["message"]["value"]
            candidate_message = to_parse['message']['value']
            if is_fs_type(candidate_message, ['BTFSValueMap', 'BTFSValueArray']):
                value = parse_variables_from_map(candidate_message["message"]["value"])
            elif is_fs_type(candidate_message, 'BTFSValueWithUnits'):
                value = parse_quantity(candidate_message["message"])
            parsed_variables[key] = value
    return parsed_variables


def is_fs_type(candidate, type_name):
    result = False
    try:
        if isinstance(type_name, str):
            result = type_name == candidate['typeName']
        elif isinstance(type_name, list):
            result = any([type_name_one == candidate['typeName'] for type_name_one in type_name])
    except Exception:
        result = False
    return result

"""
Measurements: 
{'distance_from_polygon_to_square': '0.1308455707096832*meter', 'diameter': '0.0868175271040671*meter', 'polygon_side_length': '0.05706864859958895*meter'}
"""