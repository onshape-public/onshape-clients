'''
Export an STL
==============

Demos 307 redirects with the Onshape API
'''

from onshape_client.client import Client
from onshape_client.onshape_url import OnshapeElement, ConfiguredOnshapeElement
from onshape_client.units import u
from onshape_client.example_programs.onshape_models import cube

client = Client.get_client()

# get the STL export
stl = client.part_studios_api.export_stl1(cube.did, cube.wvm, cube.wvmid, cube.eid, _preload_content=False)

print("Resulting STL data (unconfigured): \n" + stl.data.decode("UTF-8"))

cube.update_current_configuration({'size': 40 * u.inch, 'edge_configuration': 'chamfered'})

# get the STL export
stl = client.part_studios_api.export_stl1(cube.did, cube.wvm, cube.wvmid, cube.eid, configuration=cube.get_configuration_string(), _preload_content=False)

print("Resulting STL data (configured): \n" + stl.data.decode("UTF-8"))