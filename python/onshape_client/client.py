from onshape_client.configuration import Configuration
import onshape_client
from pathlib import Path
from ruamel.yaml import YAML
import os
from requests_oauthlib import OAuth2Session
from onshape_client.oauth.local_server import start_server
from enum import Enum
import webbrowser




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
    __instance = None

    @staticmethod
    def get_client():
        """ get an instance of the client class singleton. """
        if Client.__instance == None:
            raise Exception("Please manually instantiate the client.")
        return Client.__instance

    @staticmethod
    def get_configuration_from_keys_file(keys_file, stack_key):
        try:
            yaml = YAML()
            configurations_file = yaml.load(Path(keys_file))
            final_configuration = configurations_file[stack_key if stack_key else configurations_file['default_stack']]
        except KeyError as e:
            raise KeyError(
                "Your creds file is not constructed as expected. The key: {} was expected and now found.".format(e))
        return final_configuration

    def __init__(self, keys_file="~/.onshape_client_config.yaml", configuration=None, stack_key=None, open_authorize_grant_callback=None):
        """

        :param keys_file:
        :param configuration:
        :param stack_key:
        :param open_authorize_grant_callback: This will get called when the application needs to show the user the grant
            authorization page. It gets passed the URL to go to. Once the grant is authorized, the application needs to
            call client.set_grant_authorization_url_response(redirected_url) with whatever url the user got directed to
            (that includes the authorization code!)
        """
        if Client.__instance != None:
            raise Exception("This class is a singleton! Please use 'get_client' for all subsequent calls.")
        keys_file = os.path.expanduser(keys_file)
        if configuration:
            final_configuration = configuration
        elif keys_file:
            final_configuration = self.get_configuration_from_keys_file(keys_file, stack_key)
        else:
            raise EnvironmentError("API keys were not properly set.")

        self._set_configuration(final_configuration)
        self._create_apis()
        self.open_authorize_grant_callback = open_authorize_grant_callback

        if self.get_authentication_method() == "oauth":
            self._set_oauth_session()
            self.authorization_url, self.state = self.oauth.authorization_url(
                self.authorization_uri)

        Client.__instance = self

    def set_grant_authorization_url_response(self, authorization_url_response):
        """ This is the redirected-to url, for example: https:localhost/oauth_redirect?code=XraRXPYGSWfZmBvUIiNHvSlZ&state=kgZQJbVp731CgNxAeKJN7TIoOlo5bz"""
        self._fetch_access_token(authorization_url_response)

    def get_authentication_method(self):
        # Prefer OAUTH if specified, otherwise try for apikeys
        if self.client_secret and self.client_id:
            return "oauth"
        elif self.configuration.api_key['SECRET_KEY'] and self.configuration.api_key['ACCESS_KEY']:
            return "api_keys"
        else:
            return None

    def do_oauth_flow(self):
        """Do the oauth flow to set the access token"""
        try:
            self._refresh_access_token()
        except BaseException as e:
            if self.oauth_authorization_method == "localhost_server":
                start_server(self._fetch_access_token, self.open_authorize_grant)

    def open_authorize_grant(self):
        callback = self.open_authorize_grant_callback
        oauth_type = self.oauth_authorization_method
        url = self.authorization_url
        defaults_supported = ["localhost_server"]
        if not callback and oauth_type not in defaults_supported:
            raise NotImplementedError("To use OAuth, you need to pass in a callback to the client constructor with open_authorize_grant_callback=")
        elif callback:
            try:
                if callback and not callable(callback):
                    # Attempt to evaluate the function definition
                    callback = eval(callback)
                callback(url)
            except:
                raise AttributeError("The open_authorize_grant_callback function did not work.")
        else:
            self.default_callback(url)

    def default_callback(self, url):
        authorization_method = OAuthAuthorizationMethods(self.oauth_authorization_method)
        if authorization_method == OAuthAuthorizationMethods.LOCALHOST_SERVER:
            webbrowser.open(url)


    def _set_configuration(self, configuration_dictionary):
        configuration = Configuration()

        configuration.api_key['SECRET_KEY'] = self._get_if_present(configuration_dictionary, 'secret_key')
        configuration.api_key['ACCESS_KEY'] = self._get_if_present(configuration_dictionary, 'access_key')

        self.client_id = self._get_if_present(configuration_dictionary, 'client_id')
        self.client_secret = self._get_if_present(configuration_dictionary, 'client_secret')
        configuration.access_token = self._get_if_present(configuration_dictionary, 'access_token')
        self.refresh_token = self._get_if_present(configuration_dictionary, 'refresh_token')
        self.scope = self._get_if_present(configuration_dictionary, 'scope')
        self.redirect_uri = self._get_if_present(configuration_dictionary, 'redirect_uri')
        self.token_uri = self._get_if_present(configuration_dictionary, 'token_uri')
        self.authorization_uri = self._get_if_present(configuration_dictionary, 'authorization_url')
        self.scope = self._get_if_present(configuration_dictionary, 'scope')
        self.oauth_authorization_method = self._get_if_present(configuration_dictionary, 'oauth_authorization_method')

        configuration.host = self._get_if_present(configuration_dictionary, 'base_url')
        self.configuration = configuration
        return

    def _set_oauth_session(self):
        self.oauth = OAuth2Session(self.client_id, redirect_uri=self.redirect_uri,
                                           scope=self.scope)
        return

    def _refresh_access_token(self):
        # So that the oauth library doesn't complain about scope changing
        os.environ["OAUTHLIB_RELAX_TOKEN_SCOPE"] = "True"

        token_response = self.oauth.refresh_token(
            self.token_uri, refresh_token=self.refresh_token, client_id=self.client_id, client_secret=self.client_secret)
        self._set_oauth_creds_from_token_response(token_response)
        return

    def _fetch_access_token(self, authorization_response):
        try:
            token_response = self.oauth.fetch_token(
            self.token_uri,
            authorization_response=authorization_response,
            client_secret=self.client_secret)
            self._set_oauth_creds_from_token_response(token_response)
        except Warning:
            # This is probably a scope warning.
            pass
        return

    def _set_oauth_creds_from_token_response(self, token_response):
        self.configuration.access_token = token_response["access_token"]
        self.refresh_token = token_response["refresh_token"]
        return


    @staticmethod
    def _get_if_present(dictionary, key):
        return dictionary[key] if key in dictionary else ""

    def _create_apis(self):
        api_client = onshape_client.ApiClient(configuration=self.configuration)

        self.accounts_api = onshape_client.api.AccountsApi(api_client)
        self.app_elements_api = onshape_client.api.AppElementsApi(api_client)
        self.assemblies_api = onshape_client.api.AssembliesApi(api_client)
        self.blob_elements_api = onshape_client.api.BlobElementsApi(api_client)
        self.documents_api = onshape_client.api.DocumentsApi(api_client)
        self.elements_api = onshape_client.api.ElementsApi(api_client)
        self.endpoints_api = onshape_client.api.EndpointsApi(api_client)
        self.metadata_api = onshape_client.api.MetadataApi(api_client)
        self.parts_api = onshape_client.api.PartsApi(api_client)
        self.part_studios_api = onshape_client.api.PartStudiosApi(api_client)
        self.translation_api = onshape_client.api.TranslationsApi(api_client)

class OAuthAuthorizationMethods(Enum):
    LOCALHOST_SERVER="localhost_server"
    PYTHON_CALLBACK="python_callback"
