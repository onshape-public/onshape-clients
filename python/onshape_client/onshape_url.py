import copy
import json
import time

from onshape_client.client import get_client
from onshape_client.compatible_imports import parse, parse_qs
from onshape_client.oas import *
from onshape_client.units import u
from pathlib import Path


class OnshapeElement(object):
    """ Turn a standard Onshape URL into an OnshapeElement object. Ensure that the URL is correctly formatted, and
    create the useful fields. Example of valid urls:
    https://cad.onshape.com/documents/c8f8013d34183b1de74fa930/w/574b77701d8b74987c273500/e/455ef770951fe37de0b8ff08
    https://cad.onshape.com/documents/c8f8013d34183b1de74fa930/w/574b77701d8b74987c273500/e/455ef770951fe37de0b8ff08?configuration=List_TOpkWtvolR0KY4%3Dewf
    """

    DRAWING_DATA_TYPE = "onshape-app/drawing"

    @staticmethod
    def create_from_oas_models(oas_model, **kwargs):
        if isinstance(oas_model, BTDocumentElementInfo):
            return OnshapeElement.create_from_ids(eid=oas_model.id, **kwargs)
        if isinstance(oas_model, BTDocumentInfo):
            return OnshapeElement.create_from_ids(did=oas_model.id, **kwargs)

    @staticmethod
    def create_from_ids(
        did=None,
        wvm=None,
        wvmid=None,
        eid=None,
        partid=None,
        configuration=None,
        sibling=None,
    ):
        client = get_client()
        did = did if did else sibling.did
        wvm = wvm if wvm else sibling.wvm
        wvmid = wvmid if wvmid else sibling.wvmid

        url = client.configuration.host + "/documents/" + did + "/" + wvm + "/" + wvmid
        url = url + "/e/" + eid if eid else url
        url = url + "?configuration=" + configuration if configuration else url
        result = OnshapeElement(url)
        result.partid = partid
        return result

    @staticmethod
    def create(name="New Document", **kwargs):
        """Returns a blank new document."""
        client = get_client()
        doc_params = BTDocumentParams(name=name, is_public=True, **kwargs)
        doc = client.documents_api.create_document(doc_params)
        doc = OnshapeElement.create_from_ids(
            did=doc.id, wvm="w", wvmid=doc.default_workspace.id
        )
        return doc

    def import_file(self, file_path, translate=True, **kwargs):
        """Import a file from the local file system. Returns the URL of the resulting element if translated."""
        client = get_client()
        result = client.blob_elements_api.upload_file_create_element(
            self.did,
            self.wvmid,
            file=open(file_path, "rb"),
            encoded_filename=file_path.name,
            **kwargs,
        )
        if translate:
            translation_id = result.translation_id
            result = OnshapeElement.poll_translation_result(translation_id)
            element_id = result.result_element_ids[0]
        else:
            element_id = result.id
        return OnshapeElement.create_from_ids(eid=element_id, sibling=self)

    @staticmethod
    def poll_translation_result(translation_id):
        def is_polling_done(response):
            if response.request_state == "DONE":
                return True
            elif response.request_state == "ACTIVE":
                return False
            raise UserWarning(f"Translation failed")

        polling_function = lambda: get_client().translation_api.get_translation(
            translation_id
        )
        return OnshapeElement.poll(polling_function, is_polling_done)

    def export_file(
        self, file_path: Path, bt_translate_format_params: BTTranslateFormatParams
    ):
        """Exports the element this class is pointing to"""
        bt_translate_format_params.element_id = self.eid
        kwargs = {}
        kwargs.update(
            dict(
                did=self.did,
                wv=self.wvm,
                wvid=self.wvmid,
                eid=self.eid,
                bt_translate_format_params=bt_translate_format_params,
            )
        )
        if self._get_element_info().data_type == OnshapeElement.DRAWING_DATA_TYPE:
            func = get_client().drawings_api.create_drawing_translation
        elif self.element_type == "Assembly":
            func = get_client().assemblies_api.translate_format
        elif self.element_type == "Part Studio":
            func = get_client().part_studios_api.create_part_studio_translation
        else:
            raise NotImplemented(
                f"Export for {self.element_type} through the OnshapeElement isn't supported yet."
            )
        result = func(**kwargs)
        if (
            "store_in_document" in bt_translate_format_params.to_dict()
            and bt_translate_format_params.store_in_document
        ):
            return
        translation_id = result.id
        result = OnshapeElement.poll_translation_result(translation_id)
        if result.result_external_data_ids:
            count = 0
            for download_id in result.result_external_data_ids:
                file_path.write_bytes(
                    get_client()
                    .documents_api.download_external_data(
                        did=self.did, fid=download_id, _preload_content=False
                    )
                    .data
                )
                count = count + 1
                file_path.with_name(f"{file_path.name}-{count}")

    def create_drawing(self, drawing_name="My Drawing"):
        """Create a four view drawing of the current element"""
        if self.wvm != "w":
            raise UserWarning(
                "Can only create a drawing in a workspace - not a version."
            )
        drawing = get_client().drawings_api.create_drawing_app_element(
            bt_drawing_params=BTDrawingParams(
                document_id=self.did,
                workspace_id=self.wvmid,
                drawing_name=drawing_name,
                element_id=self.eid,
                views="four",
                template_document_id="cbe6e776694549b5ba1a3e88",
                template_workspace_id="24d08acf10234dbc8d3ab585",
                template_element_id="17eef7862b224f6fb12cbc46",
                projection="third",
                hidden_lines="EXCLUDED",
                is_surface=False,
                element_configuration="default",
                is_flattened_part=False,
                reference_type=1,
            )
        )
        drawing = OnshapeElement.create_from_ids(eid=drawing.id, sibling=self)
        return drawing

    @staticmethod
    def poll(polling_function, is_done_function):
        """For long polling for long-running jobs like translation. polling_function is the function that gets called
        every time step until is_done_function returns true."""

        result = polling_function()
        while not is_done_function(result):
            time.sleep(2)
            result = polling_function()
        return result

    def __init__(self, url, *args, **kwargs):
        self.original_url = url
        parsed_vals = parse(url)
        self.base_url = parsed_vals.scheme + "://" + parsed_vals.netloc
        path_list = parsed_vals.path.split("/")
        self.did = path_list[2]
        self.wvmid = path_list[4]
        self.wvm = path_list[3]
        length = len(path_list)
        if length > 8:
            eid = path_list[8]
            optional_microversion = path_list[6]
        elif length > 5 and path_list[5] == "e":
            eid = path_list[6]
            # This is the microversion retrieved from get_microversion_path() and represents a part that is pointing towards
            # both a version/workspace and a microversion.
            optional_microversion = None
        else:
            eid = None
            optional_microversion = None
        self.eid = eid
        if parsed_vals.query and "configuration" in parsed_vals.query:
            qs = parse_qs(parsed_vals.query)
            if len(qs["configuration"]) > 1:
                raise UserWarning(
                    "There should only be one configuration query in the url. Ignoring all but first."
                )
            self.configuration = qs["configuration"][0]
        else:
            self.configuration = None
        self.optional_microversion = optional_microversion

    @property
    def mass_properties(self) -> BTMassPropertiesBulkInfo:
        return get_client().part_studios_api.get_part_studio_mass_properties(
            **self._get_DWMVE()
        )

    def get_microversion_url(self):
        """Determine the microversion from the current version/workspace and return the path to that microversion. This
        will call the API to get the current microversion if the microversion is not already specified."""
        if self.optional_microversion:
            return self.get_url()
        else:
            res = get_client().documents_api.get_current_microversion(
                self.did, self.wvm, self.wvmid, _preload_content=False
            )
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
        if self.configuration:
            url = url + "?configuration=" + self.configuration + "/"
        return url[:-1]

    @property
    def element_type(self):
        """
        :return:String "APPLICATION" (for a drawing or 3rd party application), "PARTSTUDIO" or "ASSEMBLY"
        """
        elements = get_client().documents_api.get_elements_in_document(
            self.did, self.wvm, self.wvmid
        )
        for element in elements:
            if element.id == self.eid:
                return element.type

    def elements(self, filter_name=None, filter_type=None, filter_data_type=None):
        result = []
        for e in self._get_element_infos():
            ands = []
            if filter_name and not filter_name == e.name:
                ands.append(False)
            if filter_type and not filter_type == e.element_type:
                ands.append(False)
            if filter_data_type and not filter_data_type == e.data_type:
                ands.append(False)
            if all(ands):
                result.append(
                    OnshapeElement.create_from_ids(
                        did=self.did, wvm=self.wvm, wvmid=self.wvmid, eid=e.id
                    )
                )
        return result

    @property
    def microversion(self):
        res = get_client().documents_api.get_current_microversion(
            self.did, self.wvm, self.wvmid, _preload_content=False
        )
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
        return self.elements(filter_type="ASSEMBLY")

    @property
    def part_studios(self):
        return self.elements(filter_type="PARTSTUDIO")

    @property
    def drawings(self):
        return self.elements(
            filter_type="APPLICATION", filter_data_type=OnshapeElement.DRAWING_DATA_TYPE
        )

    def make_version(self, name, **kwargs):
        result = get_client().documents_api.create_version(
            self.did,
            bt_version_or_workspace_params=BTVersionOrWorkspaceParams(
                name=name, document_id=self.did, **kwargs
            ),
            _preload_content=False,
        )
        return self.create_from_ids(
            wvmid=json.loads(result.data)["id"], wvm="v", sibling=self
        )

    def s_assembly_insert_message(self):
        e_type = self.element_type
        message = BTAssemblyInstanceDefinitionParams(
            document_id=self.did,
            element_id=self.eid,
            is_assembly=e_type == "Assembly",
            is_whole_part_studio=e_type == "Part Studio",
        )
        if self.wvm == "w":
            message.microversion_id = self.microversion
        elif self.wvm == "v":
            message.version_id = self.wvmid
        elif self.wvm == "m":
            message.microversion_id = self.wvmid
        return message

    def new_assembly(self, name="Assembly"):
        asm = get_client().assemblies_api.create_assembly(
            self.did,
            self.wvmid,
            BTModelElementParams(name=name),
            _preload_content=False,
        )
        asm = json.loads(asm.data.decode("utf-8"))
        return OnshapeElement.create_from_ids(
            did=self.did, wvm="w", wvmid=self.wvmid, eid=asm["id"]
        )

    def delete(self):
        get_client().documents_api.delete_document(self.did)

    ########## Below methods call API methods and are not cached.

    def _get_element_info(self):
        return next(i for i in self._get_element_infos() if i.id == self.eid)

    def _get_document_info(self):
        return get_client().documents_api.get_document(self.did)

    def _get_element_infos(self):
        return get_client().documents_api.get_elements_in_document(
            self.did, self.wvm, self.wvmid
        )

    def _get_DWMVE(self):
        return dict(did=self.did, wvm=self.wvm, wvmid=self.wvmid, eid=self.eid)


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

    def get_url_with_configuration(self):
        """A configuration is applied on top of the current element.

        To be used like:
        >>> from onshape_client import Client
        >>> url = "https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/ca51b7554314d6aab254d2e6/e/69c9eedda86512966b20bc90"
        >>> client = Client()
        >>> my_element = ConfiguredOnshapeElement(url)
        >>> my_element.update_current_configuration({"size": 20*u.m})
        >>> my_element.get_url_with_configuration()
        'https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/ca51b7554314d6aab254d2e6/e/69c9eedda86512966b20bc90?configuration=List_UKkGODiz574chc%3DDefault%3Bsize%3D20%2Bmeter'
        >>> my_element.update_current_configuration({"Configuration": "chamfered"})
        >>> my_element.get_url_with_configuration()
        'https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/ca51b7554314d6aab254d2e6/e/69c9eedda86512966b20bc90?configuration=List_UKkGODiz574chc%3Dchamfered%3Bsize%3D20%2Bmeter'
        """
        url = self.get_url() + "?" + self.get_configuration_query_param()
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
        res = get_client().elements_api.encode_configuration_map(
            self.did,
            self.eid,
            self._get_bt_configuration_params_for_current_configuration(),
            _preload_content=False,
        )
        return json.loads(res.data.decode("utf-8"))

    def _make_configuration_map(self, update):
        return self._get_default_configuration_map().update(update)

    def _get_default_configuration_map(self):
        defaults_map = {}
        for k, v in self._get_parameter_map().items():
            param_type = v["typeName"]
            if (
                param_type == "BTMConfigurationParameterEnum"
                or param_type == "BTMConfigurationParameterBoolean"
            ):
                default_value = v["message"]["defaultValue"]
            elif param_type == "BTMConfigurationParameterQuantity":
                range = v["message"]["rangeAndDefault"]["message"]
                default_value = u(str(range["defaultValue"]) + range["units"])
            else:
                raise NotImplementedError(
                    "This configuration type: {} is not supported.".format(param_type)
                )
            defaults_map[k] = default_value
        # Return a copy so the original doesn't get changed and we can keep using it
        self.default_configuration_map = defaults_map
        return copy.deepcopy(defaults_map)

    def _get_bt_configuration_params_for_current_configuration(self):
        final = []
        for k, v in self.current_configuration.items():
            p = ConfigurationEntry(
                parameter_id=self._get_param_id_from_name(k),
                parameter_value=str(v).replace(" ", "+"),
            )
            final.append(p)
        return BTConfigurationParams(parameters=final)

    def _get_param_id_from_name(self, name):
        try:
            return self._get_parameter_map()[name]["message"]["parameterId"]
        except KeyError as e:
            raise KeyError(
                "{} is not a valid parameter Id within the requested model configuration.".format(
                    e
                )
            )

    def _get_parameter_map(self):
        """Returns a map from the user-defined parameter names to the parameterIds ex: {"myEnumParam": "Listisds32d"}
        :return:
        """
        config_params = self._get_raw_configuration_params()
        parameter_map = {}
        for i, p in enumerate(config_params["configurationParameters"]):
            name = config_params["configurationParameters"][i]["message"][
                "parameterName"
            ]
            parameter_map[name] = config_params["configurationParameters"][i]
        return parameter_map

    def _get_raw_configuration_params(self):
        response = get_client().elements_api.get_configuration(
            self.did, self.wvm, self.wvmid, self.eid, _preload_content=False
        )
        return json.loads(response.data.decode("utf-8"))
