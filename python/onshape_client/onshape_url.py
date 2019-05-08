from onshape_client.compatible_imports import parse
from onshape_client.client import Client
import json

import copy
from onshape_client.units import u
from onshape_client.models.bt_configuration_params import BTConfigurationParams
from onshape_client.models.configuration_entry import ConfigurationEntry
import webbrowser


class OnshapeElement(object):
    """ Turn a standard Onshape URL into an OnshapeElement object. Ensure that the URL is correctly formatted, and
    create the useful fields."""

    @staticmethod
    def create_from_ids(did, wvm, wvmid, eid):
        client = Client.get_client()
        return OnshapeElement(client.configuration.host + "/documents/" + did + "/" + wvm + "/" + wvmid + "/e/" + eid)

    def __init__(self, url, *args, **kwargs):

        self.client = Client.get_client()

        self.original_url = url
        parsed_vals = parse(url)

        self.base_url = parsed_vals.scheme + "://" + parsed_vals.netloc
        path_list = parsed_vals.path.split('/')
        self.did = path_list[2]
        self.wvmid = path_list[4]
        self.wvm = path_list[3]
        if len(path_list) > 7:
            eid = path_list[8]
            optional_microversion = path_list[6]
        else:
            eid = path_list[6]
            # This is the microversion retrieved from get_microversion_path() and represents a part that is pointing towards
            # both a version/workspace and a microversion.
            optional_microversion = None
        self.eid = eid
        self.optional_microversion = optional_microversion

    def get_microversion_url(self):
        """Determine the microversion from the current version/workspace and return the path to that microversion. This
        will call the API to get the current microversion if the microversion is not already specified."""
        if self.optional_microversion:
            return self.get_url()
        else:
            res = self.client.documents_api.get_current_microversion(self.did,
                                                                     self.wvm,
                                                                     self.wvmid,
                                                                     _preload_content=False)
            microversion = json.loads(res.data.decode("UTF-8"))["microversion"]
            self.optional_microversion = microversion
            return self.get_url()

    def get_url(self, url_type="element"):
        optional_microversion_add_in = ""
        if self.optional_microversion:
            optional_microversion_add_in = "/m/" + self.optional_microversion
        if url_type == "document":
            return self.base_url + "/documents/" + self.did
        return self.base_url + "/documents/" + self.did + "/" + self.wvm + "/" + self.wvmid + optional_microversion_add_in + "/e/" + self.eid


class ConfiguredOnshapeElement(OnshapeElement):

    def __init__(self, *args, **kwargs):
        super(ConfiguredOnshapeElement, self).__init__(*args, **kwargs)
        # Initialize the cached values
        # Raw configuration params
        self._raw_configuration_params = self._get_raw_configuration_params()
        # Map from visible name to parameterId
        self._parameter_map = self._get_parameter_map()
        # Map from parameterId to default value
        self.default_configuration_map = self._get_default_configuration_map()
        # In the beginning, the current configuration is the default config
        self.current_configuration = self.default_configuration_map

    def get_url_with_configuration(self, open_browser=False):
        """A configuration is applied on top of the current element.

        To be used like:
        >>> url = "https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/ca51b7554314d6aab254d2e6/e/69c9eedda86512966b20bc90"
        >>> my_element = ConfiguredOnshapeElement(url)
        >>> my_element.update_current_configuration({"size": 20*u.m})
        >>> my_element.get_url_with_configuration()
        https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/ca51b7554314d6aab254d2e6/e/69c9eedda86512966b20bc90?configuration=List_UKkGODiz574chc%3DDefault%3Bsize%3D20.0%2Bmeter
        >>> my_element.update_current_configuration({"Configuration": "chamfered"})
        >>> my_element.get_url_with_configuration()
        https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/ca51b7554314d6aab254d2e6/e/69c9eedda86512966b20bc90?configuration=List_UKkGODiz574chc%3Dchamfered%3Bsize%3D20.0%2Bmeter
        """
        url = self.get_url() + "?" + self.get_configuration_query_param()
        if open_browser:
            webbrowser.open(url)
        return url

    def update_current_configuration(self, config):
        self.current_configuration.update(config)

    def get_configuration_string(self):
        encoded_val = self._get_configuration_encoding_response()
        return encoded_val["encodedId"]

    def get_configuration_query_param(self):
        encoded_val = self._get_configuration_encoding_response()
        return encoded_val["queryParam"]

    def _get_configuration_encoding_response(self):
        res = self.client.elements_api.encode_configuration_map(self.did, self.eid, self._get_bt_configuration_params_for_current_configuration(), _preload_content=False)
        return json.loads(res.data.decode("utf-8"))

    def _make_configuration_map(self, update):
        return self._get_default_configuration_map().update(update)

    def _get_default_configuration_map(self):
        defaults_map = {}
        for k,v in self._get_parameter_map().items():
            param_type = v["typeName"]
            if param_type == 'BTMConfigurationParameterEnum' or param_type == 'BTMConfigurationParameterBoolean':
                default_value = v["message"]["defaultValue"]
            elif param_type == 'BTMConfigurationParameterQuantity':
                range = v['message']['rangeAndDefault']['message']
                default_value = u(str(range['defaultValue']) + range['units'])
            else:
                raise NotImplementedError("This configuration type: {} is not supported.".format(param_type))
            defaults_map[k] = default_value
        # Return a copy so the original doesn't get changed and we can keep using it
        self.default_configuration_map = defaults_map
        return copy.deepcopy(defaults_map)

    def _get_bt_configuration_params_for_current_configuration(self):
        final = []
        for k, v in self.current_configuration.items():
            p = ConfigurationEntry(parameter_id=self._get_param_id_from_name(k), parameter_value=str(v))
            final.append(p)
        return BTConfigurationParams(parameters=final)

    def _get_param_id_from_name(self, name):
        return self._get_parameter_map()[name]["message"]["parameterId"]

    def _get_parameter_map(self):
        """Returns a map from the user-defined parameter names to the parameterIds ex: {"myEnumParam": "Listisds32d"}
        :return:
        """
        config_params = self._get_raw_configuration_params()
        parameter_map = {}
        for i, p in enumerate(config_params["configurationParameters"]):
            name = config_params["configurationParameters"][i]["message"]["parameterName"]
            parameter_map[name] = config_params["configurationParameters"][i]
        return parameter_map

    def _get_raw_configuration_params(self):
        response =self.client.part_studios_api.get_configuration4(self.did, self.wvm, self.wvmid, self.eid,
                                                        _preload_content=False)
        return json.loads(response.data.decode("utf-8"))




