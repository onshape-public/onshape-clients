from onshape_client.oas import BTMParameterQueryList148, BTMIndividualQuery138, BTCurveGeometryCircle115, \
    BTMSketchCurve4, BTMSketch151, BTFeatureDefinitionCall1406, BTDocumentParams
from onshape_client.client import Client
import os

# Setup the client and pass the keys. Note that secret keys can be specified directly, OR they can be
# specified in environment variables OR in a yaml file at the 'keys_file' location. Here we use the file at the default
# 'keys_file' location.
from onshape_client.onshape_url import OnshapeElement
client = Client()

# create a new document
MY_NEW_DOCUMENT = "My new circle document"
doc_params = BTDocumentParams(name=MY_NEW_DOCUMENT)
doc = client.documents_api.create_document(doc_params)
doc = OnshapeElement.create_from_ids(did=doc.id, wvm='w', wvmid=doc.default_workspace.id)

# Get the default Part Studio in the document
part_studio = None
elements = client.documents_api.get_elements_in_document(doc.did, doc.wvm, doc.wvmid)
for element in elements:
    if element.type == 'Part Studio':
        element = OnshapeElement.create_from_oas_models(element, did=doc.did, wvmid=doc.wvmid,
                                                        wvm=doc.wvm)
        part_studio = element
        break
if not part_studio:
    raise AttributeError("This document is unexpectedly missing a part studio.")
print(f"Your new part studio is: {part_studio.get_url()}")

# Make the circle object
FEATURE_NAME = "My New Circle"
PLANE_ID = "JDC" # The plane deterministic ID for the sketch
plane_query = BTMParameterQueryList148(parameter_id="sketchPlane", queries=[BTMIndividualQuery138(deterministic_ids=[PLANE_ID])])
CIRCLE_ID = "myCircle"

circle_geometry = BTCurveGeometryCircle115(radius=0.5, xcenter=0.0, ycenter=0.0, xdir=1.0, ydir=0.0, clockwise=False)
circle = BTMSketchCurve4(center_id=f"{CIRCLE_ID}.center", entity_id=CIRCLE_ID, geometry=circle_geometry)
sketch = BTMSketch151(entities=[circle], name=FEATURE_NAME, parameters=[plane_query])
feature_definition = BTFeatureDefinitionCall1406(feature=sketch)

# Pass the circle object
client.part_studios_api.add_part_studio_feature(did=part_studio.did, wvm=part_studio.wvm, wvmid=part_studio.wvmid, eid=part_studio.eid, bt_feature_definition_call1406_bt_feature_definition_call1406=feature_definition)