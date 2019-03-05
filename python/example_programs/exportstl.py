'''
exportstl
===

Demos 307 redirects with the Onshape API
'''

from onshape_client.configuration import Configuration
import onshape_client
from pathlib import Path
from ruamel.yaml import YAML
import six

# Get the YAML file that contains the configuration params
yaml = YAML()
path = '../onshape_client_config.yaml'
onshape_client_config = yaml.load(Path(path))

# Load the API keys and URL into the configuration
configuration = Configuration()
conf = onshape_client_config[onshape_client_config['default']]
configuration.api_key['SECRET_KEY'] = conf['api_keys']['secret_key'].encode('utf-8')
configuration.api_key['ACCESS_KEY'] = conf['api_keys']['access_key'].encode('utf-8')
configuration.host = conf['baseUrl']

# Create the API instance with the configuration
partstudio_instance = onshape_client.api.PartStudiosApi(onshape_client.ApiClient(configuration=configuration))

# get features for doc
# did = six.input('Enter document ID: ')
# wid = six.input('Enter workspace ID: ')
# eid = six.input('Enter element ID: ')

#local document
did = 'd9a054d92ecb3751f5e53297'
wid = '7115c857459c5ce6baffba21'
eid = 'ca3c2926e07a5f1ac1f720d1'

# doc_instance = onshape_client.DocumentsApi(onshape_client.ApiClient(configuration=configuration))
# docs = doc_instance.get_documents(q="test")
# print(docs)

# get the STL export
stl = partstudio_instance.export_stl1(did, 'w', wid, eid, _preload_content=False)
print(stl.data)
