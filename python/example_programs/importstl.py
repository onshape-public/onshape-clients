'''
importstl
===

Demos importing an STL file
'''

from onshape_client.configuration import Configuration
import onshape_client
from pathlib import Path
from ruamel.yaml import YAML

# Get the YAML file that contains the configuration params
yaml = YAML()
path = '.onshape_client_config.yaml'
onshape_client_config = yaml.load(Path(path))

# Load the API keys and URL into the configuration
configuration = Configuration()
conf = onshape_client_config[onshape_client_config['default']]
configuration.api_key['SECRET_KEY'] = conf['api_keys']['secret_key'].encode('utf-8')
configuration.api_key['ACCESS_KEY'] = conf['api_keys']['access_key'].encode('utf-8')
configuration.host = conf['baseUrl']

# Create the API instance with the configuration
translation_instance = onshape_client.api.TranslationsApi(onshape_client.ApiClient(configuration=configuration))
did = 'd9a054d92ecb3751f5e53297'
wid = '7115c857459c5ce6baffba21'
r = translation_instance.create_translation(did, wid, parent="everest.stl", _preload_content=False)
print(r)
