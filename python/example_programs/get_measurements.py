"""For getting measurements defined by the custom "measure" feature: https://cad.onshape.com/documents/78aa66ffe6f1daceb9cfad3d/v/746f3ce1b31d39942593ed54/e/92549789b92e9aa35f676f4e

To fetch measurements from the API:

1. Make sure the desired geometry is defined using the feature within this document. The "use measurements variable" checkbox should be selected.
2. Call the Evaluate Featurescript API call with your client/code with the following script:

	function(context, queries) {
            return getVariable(context, "m");
        }

This will return all the variables defined under "m", ie, m.radius, m.my_custom_length, etc...
3. Now use the resulting map from measurements feature name to value within your code.
"""

from onshape_client.client import Client
from onshape_client.onshape_url import OnshapeElement
from onshape_client.models.bt_feature_script_eval_call import BTFeatureScriptEvalCall
from onshape_client.utility import parse_quantity
import json

script = \
    r"""
    function(context, queries) {
            return getVariable(context, "m");
        }
    """

element = OnshapeElement(
    "https://cad.onshape.com/documents/78aa66ffe6f1daceb9cfad3d/v/746f3ce1b31d39942593ed54/e/92549789b92e9aa35f676f4e")
script_call = BTFeatureScriptEvalCall(script=script)
client = Client()
response = client.part_studios_api.eval_feature_script(element.did,
                                                       element.wvm,
                                                       element.wvmid,
                                                       element.eid,
                                                       bt_feature_script_eval_call=script_call, _preload_content=False)
measurements = json.loads(response.data.decode("utf-8"))["result"]["message"]["value"]
parsed_measurements = {}
for m in measurements:
    key = m["message"]["key"]["message"]["value"]
    value = parse_quantity(m["message"]["value"]["message"])
    parsed_measurements[key] = value
print("Measurements: \n" + str(parsed_measurements))
"""
Measurements: 
{'distance_from_polygon_to_square': '0.1308455707096832*meter', 'diameter': '0.0868175271040671*meter', 'polygon_side_length': '0.05706864859958895*meter'}
"""