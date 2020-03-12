"""API Modeling example that shows how to generate a pipe programmatically."""

import json

from onshape_client.client import Client
from onshape_client.oas import (
    BTMParameterQueryList148,
    BTMIndividualQuery138,
    BTCurveGeometryCircle115,
    BTMSketchCurve4,
    BTMSketch151,
    BTFeatureDefinitionCall1406,
    BTDocumentParams,
    BTFeatureScriptEvalCall2377,
    BTMParameterEnum145,
    BTMParameterQuantity147,
    BTMFeature134,
)

# Setup the client and pass the keys. Note that secret keys can be specified directly, OR they can be
# specified in environment variables OR in a yaml file at the 'keys_file' location. Here we use the file at the default
# 'keys_file' location.
from onshape_client.onshape_url import OnshapeElement

client = Client()

# create a new document
MY_NEW_DOCUMENT = "My new circle document"
doc_params = BTDocumentParams(name=MY_NEW_DOCUMENT)
doc = client.documents_api.create_document(doc_params)
doc = OnshapeElement.create_from_ids(
    did=doc.id, wvm="w", wvmid=doc.default_workspace.id
)

# Get the default Part Studio in the document
part_studio = None
elements = client.documents_api.get_elements_in_document(doc.did, doc.wvm, doc.wvmid)
for element in elements:
    if element.type == "Part Studio":
        element = OnshapeElement.create_from_oas_models(
            element, did=doc.did, wvmid=doc.wvmid, wvm=doc.wvm
        )
        part_studio = element
        break
if not part_studio:
    raise AttributeError("This document is unexpectedly missing a part studio.")
print(f"Your new part studio is: {part_studio.get_url()}")

# Make the circle object
FEATURE_NAME = "My New Circle"
PLANE_ID = "JDC"  # The plane deterministic ID for the sketch... This is known to be the id for the Top plane.
plane_query = BTMParameterQueryList148(
    parameter_id="sketchPlane",
    queries=[BTMIndividualQuery138(deterministic_ids=[PLANE_ID])],
)
CIRCLE_ID = "myCircle"

circle_geometry = BTCurveGeometryCircle115(
    radius=0.5, xcenter=0.0, ycenter=0.0, xdir=1.0, ydir=0.0, clockwise=False
)
circle = BTMSketchCurve4(
    center_id=f"{CIRCLE_ID}.center", entity_id=CIRCLE_ID, geometry=circle_geometry
)
sketch = BTMSketch151(entities=[circle], name=FEATURE_NAME, parameters=[plane_query])
feature_definition = BTFeatureDefinitionCall1406(feature=sketch)

# Pass the circle object
result_feature = client.part_studios_api.add_part_studio_feature(
    did=part_studio.did,
    wvm=part_studio.wvm,
    wvmid=part_studio.wvmid,
    eid=part_studio.eid,
    bt_feature_definition_call1406_bt_feature_definition_call1406=feature_definition,
)

# Query for the deterministic ID of the created sketch region using an FS query. For more info on how to use different queries, look at: https://cad.onshape.com/FsDoc/library.html#module-query.fs and https://forum.onshape.com/discussions/tagged/featurescript-query/p1
get_sketch_face_fs = f"""
function(context, queries)
{{
    return transientQueriesToStrings(evaluateQuery(context, qCreatedBy(makeId("{result_feature.feature.feature_id}"), EntityType.FACE)))[0];
}}"""
deterministic_ids_response = client.part_studios_api.eval_feature_script(
    did=part_studio.did,
    wvm=part_studio.wvm,
    wvmid=part_studio.wvmid,
    eid=part_studio.eid,
    bt_feature_script_eval_call2377_bt_feature_script_eval_call2377=BTFeatureScriptEvalCall2377(
        script=get_sketch_face_fs
    ),
    _preload_content=False,
    _check_input_type=False,
)
det_id = json.loads(deterministic_ids_response.data)["result"]["message"]["value"]

# Generate an extrude feature
tool_body_type = BTMParameterEnum145(
    value="SOLID", enum_name="ToolBodyType", parameter_id="bodyType"
)
operation_type = BTMParameterEnum145(
    value="NEW", enum_name="NewBodyOperationType", parameter_id="operationType"
)
region_query = BTMParameterQueryList148(
    parameter_id="entities", queries=[BTMIndividualQuery138(deterministic_ids=[det_id])]
)
length = BTMParameterQuantity147(expression="3.03*in", parameter_id="depth")
extrude_feature = BTMFeature134(
    bt_type="BTMFeature-134",
    name="My extrude",
    feature_type="extrude",
    parameters=[tool_body_type, operation_type, region_query, length],
)
feature_definition = BTFeatureDefinitionCall1406(feature=extrude_feature)
result_feature_extrude = client.part_studios_api.add_part_studio_feature(
    did=part_studio.did,
    wvm=part_studio.wvm,
    wvmid=part_studio.wvmid,
    eid=part_studio.eid,
    bt_feature_definition_call1406_bt_feature_definition_call1406=feature_definition,
)
