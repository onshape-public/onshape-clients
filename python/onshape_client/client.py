import os
import warnings
import webbrowser
from enum import Enum
from pathlib import Path
from types import SimpleNamespace

from oauthlib.oauth2 import (
    UnauthorizedClientError,
    UnsupportedGrantTypeError,
    MissingTokenError,
    InvalidClientIdError,
)
from onshape_client.oas import ApiClient
from onshape_client.oas import api
from onshape_client.oas.configuration import Configuration
from requests_oauthlib import OAuth2Session
from ruamel.yaml import YAML

from .oauth.local_server import start_server


def add_defaults(namespace, **kwargs):
    for config_name, env_var_name in kwargs.items():
        add_default(namespace, config_name, env_var_name)
    return namespace


def add_default(namespace, config_name, env_var_name):
    new_config_var = ConfigVar(config_name, env_var_name)
    if new_config_var.config_name not in vars(namespace):
        setattr(namespace, new_config_var.config_name, new_config_var)


# Only update if the config doesn't already have the value AND the default has the value not evaluated as False
def update_with_default_carefully(config, default_config):
    for k, v in default_config.items():
        if v and (k not in config or not config[k]):
            config[k] = v


class ConfigVar:
    def __init__(self, config_name, env_var_name):
        self.config_name = config_name
        self.env_var_name = env_var_name


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

    singleton_instance = None

    config_vars = SimpleNamespace()

    prod_base_url = "https://cad.onshape.com"

    # Mapping from configuration property to shell variable in order to allow passing from environment context.
    add_defaults(
        config_vars,
        access_key="ONSHAPE_API_ACCESS_KEY",
        authorization_uri="ONSHAPE_AUTHORIZATION_URI",
        base_url="ONSHAPE_BASE_URL",
        client_id="ONSHAPE_CLIENT_ID",
        client_secret="ONSHAPE_CLIENT_SECRET",
        oauth_authorization_method="ONSHAPE_AUTHORIZATION_METHOD",
        redirect_uri="ONSHAPE_REDIRECT_URI",
        scope="ONSHAPE_SCOPE",
        secret_key="ONSHAPE_API_SECRET_KEY",
        token_uri="ONSHAPE_TOKEN_URI",
    )

    @staticmethod
    def get_client():
        """ get an singleton_instance of the client class singleton. """
        client = Client.singleton_instance
        if not client:
            raise Exception("Please manually instantiate the client.")
        return client

    @staticmethod
    def clear_client():
        """ delete the singleton singleton_instance of the client. """
        Client.singleton_instance = None

    @staticmethod
    def _get_from_environment():
        defaults = {}
        for name, config_var in vars(Client.config_vars).items():
            if config_var.env_var_name in os.environ:
                defaults.setdefault(
                    config_var.config_name, os.environ[config_var.env_var_name]
                )
        return defaults

    @staticmethod
    def _get_configuration_from_keys_file(keys_file, stack_key):
        config = {}
        try:
            yaml = YAML()
            configurations_file = yaml.load(Path(keys_file))
            config = configurations_file[
                stack_key if stack_key else configurations_file["default_stack"]
            ]

        except KeyError as e:
            raise KeyError(
                "Your creds file is not constructed as expected. The key: {} was expected and not found.".format(
                    e
                )
            )
        except FileNotFoundError:
            pass
        return config

    def __init__(
        self,
        keys_file="~/.onshape_client_config.yaml",
        configuration=None,
        stack_key=None,
        open_authorize_grant_callback=None,
    ):
        """Configuration values can come from setting directly, with configuration= or from environment variables, or
        from the configuration file specified with key_file in that order without overwriting. Those in the key_file are
        considered defaults.

        :param keys_file:
        :param configuration:
        :param stack_key:
        :param open_authorize_grant_callback: This will get called when the application needs to show the user the grant
            authorization page. It gets passed the URL to go to. Once the grant is authorized, the application needs to
            call client.set_grant_authorization_url_response(redirected_url) with whatever url the user got directed to
            (that includes the authorization code!)
        """
        if Client.singleton_instance:
            warnings.warn(
                "A Client was already created so this will create another and override it. Please use "
                "Client.get_client() to get the previously created client."
            )
        final_configuration = configuration if configuration else {}
        update_with_default_carefully(
            final_configuration, Client._get_from_environment()
        )
        if keys_file:
            keys_file = os.path.expanduser(keys_file)
            update_with_default_carefully(
                final_configuration,
                Client._get_configuration_from_keys_file(keys_file, stack_key),
            )
        self.stack_key = stack_key
        self._set_configuration(final_configuration)
        self._create_apis()
        self.open_authorize_grant_callback = open_authorize_grant_callback

        if self.get_authentication_method() == "oauth":
            self._set_oauth_session()

        Client.singleton_instance = self

    def set_grant_authorization_url_response(self, authorization_url_response):
        """ This is the redirected-to url, for example: https:localhost/oauth_redirect?code=XraRXPYGSWfZmBvUIiNHvSlZ&state=kgZQJbVp731CgNxAeKJN7TIoOlo5bz"""
        self.fetch_access_token(authorization_url_response)

    def get_authentication_method(self):
        # Prefer OAUTH if specified, otherwise try for apikeys
        if self.client_secret and self.client_id:
            return "oauth"
        elif (
            self.configuration.api_key["SECRET_KEY"]
            and self.configuration.api_key["ACCESS_KEY"]
        ):
            return "api_keys"
        else:
            return None

    def get_authorization_url(self):
        url, state = self.oauth.authorization_url(self.authorization_uri)
        return url

    def do_oauth_flow(self):
        """Do the oauth flow to set the access token"""
        try:
            self.refresh_access_token()
            # InvalidClientIdError : when the refresh token isn't valid
        except (
            UnauthorizedClientError,
            UnsupportedGrantTypeError,
            MissingTokenError,
            InvalidClientIdError,
        ) as e:
            authorization_method = OAuthAuthorizationMethods(
                self.oauth_authorization_method
            )
            oauth_type = OAuthAuthorizationMethods(self.oauth_authorization_method)
            if oauth_type == OAuthAuthorizationMethods.MANUAL_FLOW:
                raise OAuthNotAuthorizedException(
                    "You need to have the user authorize the grant."
                )
            elif authorization_method == OAuthAuthorizationMethods.LOCALHOST_SERVER:
                start_server(self.fetch_access_token, self.open_authorize_grant)
            elif authorization_method == OAuthAuthorizationMethods.PYTHON_CALLBACK:
                self.open_authorize_grant()

    def open_authorize_grant(self):
        done = self.fetch_access_token
        callback = self.open_authorize_grant_callback
        oauth_type = OAuthAuthorizationMethods(self.oauth_authorization_method)
        url = self.get_authorization_url()
        defaults_supported = [OAuthAuthorizationMethods.LOCALHOST_SERVER]
        if not callback and oauth_type not in defaults_supported:
            raise NotImplementedError(
                "To use OAuth, you need to pass in a callback to the client constructor with open_authorize_grant_callback="
            )
        elif callback:
            try:
                if callback and not callable(callback):
                    # Attempt to evaluate the function definition
                    callback = eval(callback)
                callback(url, done)
            except:
                raise AttributeError(
                    "The open_authorize_grant_callback function did not work."
                )
        else:
            self.default_callback(url)

    def default_callback(self, url):
        authorization_method = OAuthAuthorizationMethods(
            self.oauth_authorization_method
        )
        if authorization_method == OAuthAuthorizationMethods.LOCALHOST_SERVER:
            webbrowser.open(url)

    def _set_configuration(self, configuration_dictionary):
        configuration = Configuration()

        configuration.api_key["SECRET_KEY"] = configuration_dictionary.get(
            "secret_key", ""
        )
        configuration.api_key["ACCESS_KEY"] = configuration_dictionary.get(
            "access_key", ""
        )

        self.client_id = configuration_dictionary.get("client_id", None)
        self.client_secret = configuration_dictionary.get("client_secret", None)
        configuration.access_token = configuration_dictionary.get("access_token", "")
        self.refresh_token = configuration_dictionary.get("refresh_token", None)
        self.scope = configuration_dictionary.get("scope", None)
        self.redirect_uri = configuration_dictionary.get("redirect_uri", None)
        self.token_uri = configuration_dictionary.get(
            "token_uri", "https://oauth.onshape.com/oauth/token"
        )
        self.authorization_uri = configuration_dictionary.get(
            "authorization_uri", "https://oauth.onshape.com/oauth/authorize"
        )
        self.oauth_authorization_method = configuration_dictionary.get(
            "oauth_authorization_method", OAuthAuthorizationMethods.MANUAL_FLOW
        )
        # Default to prod
        configuration.host = configuration_dictionary.get(
            "base_url", "https://cad.onshape.com"
        )
        self.configuration = configuration
        return

    def _set_oauth_session(self):
        self.oauth = OAuth2Session(
            self.client_id, redirect_uri=self.redirect_uri, scope=self.scope
        )
        return

    """Override this method to get the resulting access code dictionary"""

    def refresh_access_token(self):
        # So that the oauth library doesn't complain about scope changing
        os.environ["OAUTHLIB_RELAX_TOKEN_SCOPE"] = "True"

        token_response = self.oauth.refresh_token(
            self.token_uri,
            refresh_token=self.refresh_token,
            client_id=self.client_id,
            client_secret=self.client_secret,
        )
        self._set_oauth_creds_from_token_response(token_response)
        return token_response

    def fetch_access_token(self, **kwargs):
        """
        :param authorization_response: The response containing the authorization code.
        :return: The access token and the refresh token. These should be stored by the caller to facilitate future
        client initialization.
        """
        try:
            token_response = self.oauth.fetch_token(
                self.token_uri, client_secret=self.client_secret, **kwargs
            )
            self._set_oauth_creds_from_token_response(token_response)
            return token_response
        except Warning:
            # This is probably a scope warning.
            pass

    def _set_oauth_creds_from_token_response(self, token_response):
        self.configuration.access_token = token_response["access_token"]
        self.refresh_token = token_response["refresh_token"]
        return

    def _create_apis(self):
        api_client = ApiClient(configuration=self.configuration)
        self.api_client = api_client
        self.accounts_api = api.AccountsApi(api_client)
        self.app_elements_api = api.AppElementsApi(api_client)
        self.assemblies_api = api.AssembliesApi(api_client)
        self.blob_elements_api = api.BlobElementsApi(api_client)
        self.drawings_api = api.DrawingsApi(api_client)
        self.documents_api = api.DocumentsApi(api_client)
        self.elements_api = api.ElementsApi(api_client)
        self.feature_studios_api = api.FeatureStudiosApi(api_client)
        self.metadata_api = api.MetadataApi(api_client)
        self.parts_api = api.PartsApi(api_client)
        self.part_studios_api = api.PartStudiosApi(api_client)
        self.translation_api = api.TranslationsApi(api_client)


class OAuthAuthorizationMethods(Enum):
    # This is fully implemented, and meant for locally hosted applications (desktop apps)
    LOCALHOST_SERVER = "localhost_server"

    # This is for when the open_authorize_grant_callback is set. It yields control to this client
    # by specifying a function that should be called to authorize the grant, and passes in a
    # function to that callback that needs to be called when the grant has been authorized with
    # the result.
    PYTHON_CALLBACK = "python_callback"

    # This flow will communicate that the client needs the authorization flow with an OAuthNotAuthorizedException
    # after failing to refresh the token. Once the client throws the error, the application should
    # call client.get_authorization_url() and present the resulting url to the user, and subsequently
    # call client.fetch_access_token(resulting_url_with_authorization_code) to complete the flow.
    # Note that for the best user experience, the client should store the refresh_token in persistent
    # storage so the user only has to go through the grant authorization step once.
    MANUAL_FLOW = "manual_flow"


# Exception that should be caught signaling that the user should go through the grant authorization flow.
class OAuthNotAuthorizedException(Exception):
    def __init__(self, *args, **kwargs):
        super(OAuthNotAuthorizedException, self).__init__(args, kwargs)
