from onshape_client.configuration import Configuration
import onshape_client
from pathlib import Path
from ruamel.yaml import YAML
from onshape_client.models.bt_configuration_params import BTConfigurationParams
import six
import json

class Client:

    def __init__(self, stack='prod'):

        # Get the YAML file that contains the configuration params
        yaml = YAML()
        path = '../.onshape_client_config.yaml'
        onshape_client_config = yaml.load(Path(path))

        # Load the API keys and URL into the configuration
        self.configuration = Configuration()
        conf = onshape_client_config[stack]
        self.configuration.api_key['SECRET_KEY'] = conf['api_keys']['secret_key'].encode('utf-8')
        self.configuration.api_key['ACCESS_KEY'] = conf['api_keys']['access_key'].encode('utf-8')
        self.configuration.host = conf['baseUrl']

        apiClient = onshape_client.ApiClient(configuration=self.configuration)
        # Create the API instance with the configuration
        self.ElementsApi = onshape_client.api.ElementsApi(apiClient)
        self.MetadataApi = onshape_client.api.MetadataApi(apiClient)
        self.PartStudiosApi = onshape_client.api.PartStudiosApi(apiClient)
