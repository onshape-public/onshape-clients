from onshape_client.compatible_imports import parse
from onshape_client.client import Client
import json

import copy

from onshape_client.oas import BTModelElementParams, BTAssemblyInstanceDefinitionParams
from onshape_client.units import u
from onshape_client.oas.models.bt_configuration_params import BTConfigurationParams
from onshape_client.oas.models.configuration_entry import ConfigurationEntry
from onshape_client.oas.models.bt_document_element_info import BTDocumentElementInfo
from onshape_client.oas.models.bt_document_info import BTDocumentInfo
import webbrowser
from enum import Enum


class OnshapeElement(object):
    """ Turn a standard Onshape URL into an OnshapeElement object. Ensure that the URL is correctly formatted, and
    create the useful fields."""

    @staticmethod
    def create_from_oas_models(oas_model, **kwargs):
        if isinstance(oas_model, BTDocumentElementInfo):
            return OnshapeElement.create_from_ids(eid=oas_model.id, **kwargs)
        if isinstance(oas_model, BTDocumentInfo):
            return OnshapeElement.create_from_ids(did=oas_model.id, **kwargs)

    @staticmethod
    def create_from_ids(did=None, wvm=None, wvmid=None, eid=None):
        client = Client.get_client()
        url = client.configuration.host + "/documents/" + did + "/" + wvm + "/" + wvmid
        url = url + "/e/" + eid if eid else url
        return OnshapeElement(url)

    def __init__(self, url, *args, **kwargs):
        self.original_url = url
        parsed_vals = parse(url)
        self.base_url = parsed_vals.scheme + "://" + parsed_vals.netloc
        path_list = parsed_vals.path.split('/')
        self.did = path_list[2]
        self.wvmid = path_list[4]
        self.wvm = path_list[3]
        length = len(path_list)
        if length > 7:
            eid = path_list[8]
            optional_microversion = path_list[6]
        elif length > 5 and path_list[5] == 'e':
            eid = path_list[6]
            # This is the microversion retrieved from get_microversion_path() and represents a part that is pointing towards
            # both a version/workspace and a microversion.
            optional_microversion = None
        else:
            eid = None
            optional_microversion = None
        self.eid = eid
        self.optional_microversion = optional_microversion

    def get_microversion_url(self):
        """Determine the microversion from the current version/workspace and return the path to that microversion. This
        will call the API to get the current microversion if the microversion is not already specified."""
        if self.optional_microversion:
            return self.get_url()
        else:
            res = Client.get_client().documents_api.get_current_microversion(self.did,
                                                                     self.wvm,
                                                                     self.wvmid,
                                                                     _preload_content=False)
            microversion = json.loads(res.data.decode("UTF-8"))["microversion"]
            self.optional_microversion = microversion
            return self.get_url()

    def get_url(self):
        url = self.base_url + "/documents/"
        if self.did:
            url = url + self.did + "/"
        if self.wvm:
            url = url + self.wvm + "/"
        if self.wvmid:
            url = url + self.wvmid + "/"
        if self.optional_microversion:
            url = url + "m/" + self.optional_microversion + "/"
        if self.eid:
            url = url + "e/" + self.eid + "/"
        return url

    @property
    def element_type(self):
        elements = Client.get_client().documents_api.get_elements1(self.did, self.wvm, self.wvmid)
        for element in elements:
            if element.id == self.eid:
                return element.type

    def elements(self, filter_name=None, filter_type=None):
        result = []
        for e in self._get_element_infos():
            ands = []
            if filter_name and filter_name==self.name:
                ands.append(True)
            if filter_type and filter_type==self.element_type:
                ands.append(True)
            if all(ands):
                result.append(OnshapeElement.create_from_ids(did=self.did, wvm='w', wvmid=self.wvmid, eid=e.id))
        return result

    @property
    def microversion(self):
        res = Client.get_client().documents_api.get_current_microversion(self.did,
                                                                         self.wvm,
                                                                         self.wvmid,
                                                                         _preload_content=False)
        microversion = json.loads(res.data.decode("UTF-8"))["microversion"]
        return microversion

    @property
    def name(self):
        if self.eid:
            return self._get_element_info().name
        return self._get_document_info().name


    @property
    def default_workspace(self):
        return self._get_document_info().default_workspace.id

    @property
    def assemblies(self):
        result = []
        for element in self._get_element_infos():
            if element.element_type == 'Assembly':
                result.append(element)
        return result

    def s_assembly_insert_message(self):
        e_type = self.element_type
        message = BTAssemblyInstanceDefinitionParams(document_id=self.did,
                                                     element_id=self.eid, is_assembly=e_type == 'Assembly',
                                                     is_whole_part_studio=e_type == 'Part Studio')
        if self.wvm == 'w':
            message.microversion_id = self.microversion
        elif self.wvm == 'v':
            message.version_id = self.wvmid
        elif self.wvm == 'm':
            message.microversion_id = self.wvmid
        return message

    def new_assembly(self, name="Assembly"):
        asm = Client.get_client().assemblies_api.create_assembly(self.did, self.wvmid, BTModelElementParams(name=name), _preload_content=False)
        asm = json.loads(asm.data.decode('utf-8'))
        return OnshapeElement.create_from_ids(did=self.did, wvm='w', wvmid=self.wvmid, eid=asm["id"])

    def delete(self):
        Client.get_client().documents_api.delete7(self.did)

    def _get_element_info(self):
        return next(i for i in self._get_element_infos() if i.id == self.eid)

    def _get_document_info(self):
        return Client.get_client().documents_api.get_document(self.did)

    def _get_element_infos(self):
        return Client.get_client().documents_api.get_elements1(self.did, self.wvm, self.wvmid)

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
        res = Client.get_client().elements_api.encode_configuration_map(self.did, self.eid, self._get_bt_configuration_params_for_current_configuration(), _preload_content=False)
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
            p = ConfigurationEntry(parameter_id=self._get_param_id_from_name(k), parameter_value=str(v).replace(' ', '+'))
            final.append(p)
        return BTConfigurationParams(parameters=final)

    def _get_param_id_from_name(self, name):
        try:
            return self._get_parameter_map()[name]["message"]["parameterId"]
        except KeyError as e:
            raise KeyError("{} is not a valid parameter Id within the requested model configuration.".format(e))

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
        response =Client.get_client().elements_api.get_configuration(self.did, self.wvm, self.wvmid, self.eid,
                                                        _preload_content=False)
        return json.loads(response.data.decode("utf-8"))




