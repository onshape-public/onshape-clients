from onshape_client.client import Client
from onshape_client.onshape_url import OnshapeElement

"""There are three ways to authenticate the client. Passing variables directly during instantiation of the Client
object, providing environment variables, or using a YAML file in the home directory entitled 
'.onshape_client_config.yaml'."""
client = Client()

"""First, we're going to inspect the feature list of the example configured cube used for onshape-client testing."""
my_cube_ps = OnshapeElement(
    "https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/w/80887f5994121967bf4d59a6/e/69c9eedda86512966b20bc90"
)
features = client.part_studios_api.get_features1(
    my_cube_ps.did, my_cube_ps.wvm, my_cube_ps.wvmid, my_cube_ps.eid
)

"""Print the order of the features"""
print(",".join([f.name for f in features.features]))
