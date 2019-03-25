from onshape_client.configuration import Configuration
import onshape_client
from pathlib import Path
from ruamel.yaml import YAML
import os


class Client:
    """
    Initialize an Onshape client.

    The default is to pull the configuration from a file located in the user's home
    directory. However, configs can also be passed directly as a dictionary.

    Keys can be obtained from https://dev-portal.onshape.com.

    Parameters
    ----------
    conf_file : :obj:`str`, optional
        The path to the location of an onshape_client_config YAML file, where multiple stacks may be declared.
    configuration : :obj:`dict`, optional
        This overrides the conf_file parameter by supplying a dictionary that looks like the following:
        {
            "base_url": "https://cad.onshape.com",
            "access_key": "YOUR_ACCESS_KEY_HERE",
            "secret_key": "YOUR_SECRET_KEY_HERE"
        }
    stack_key : :obj:`str`, optional
        The key of the name for the particular stack to be used. Only applicable when reading configuration from the
        conf_file.
    """
    def __init__(self, keys_file="~/.onshape_client_config.yaml", configuration=None, stack_key=None):
        keys_file = os.path.expanduser(keys_file)
        if configuration:
            final_configuration = configuration
        elif keys_file:
            try:
                yaml = YAML()
                configurations_file = yaml.load(Path(keys_file))
                final_configuration = configurations_file[stack_key if stack_key else configurations_file['default_stack']]
            except KeyError as e:
                raise KeyError("Your creds file is not constructed as expected: {}".format(e))
        else:
            raise EnvironmentError("API keys were not properly set.")

        self._set_configuration(final_configuration)
        self._create_apis()

    def _set_configuration(self, configuration_dictionary):
        configuration = Configuration()
        configuration.api_key['SECRET_KEY'] = configuration_dictionary['secret_key']
        configuration.api_key['ACCESS_KEY'] = configuration_dictionary['access_key']
        configuration.host = configuration_dictionary['base_url']
        self.configuration = configuration

    def _create_apis(self):
        self.accounts_api = onshape_client.api.AccountsApi(onshape_client.ApiClient(configuration=self.configuration))
        self.app_elements_api = onshape_client.api.AppElementsApi(onshape_client.ApiClient(configuration=self.configuration))
        self.assemblies_api = onshape_client.api.AssembliesApi(onshape_client.ApiClient(configuration=self.configuration))
        self.documents_api = onshape_client.api.DocumentsApi(onshape_client.ApiClient(configuration=self.configuration))
        self.elements_api = onshape_client.api.ElementsApi(onshape_client.ApiClient(configuration=self.configuration))
        self.endpoints_api = onshape_client.api.EndpointsApi(onshape_client.ApiClient(configuration=self.configuration))
        self.metadata_api = onshape_client.api.MetadataApi(onshape_client.ApiClient(configuration=self.configuration))
        self.parts_api = onshape_client.api.PartsApi(onshape_client.ApiClient(configuration=self.configuration))
        self.part_studios_api = onshape_client.api.PartStudiosApi(onshape_client.ApiClient(configuration=self.configuration))
        self.translation_api = onshape_client.api.TranslationsApi(onshape_client.ApiClient(configuration=self.configuration))