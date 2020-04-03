# coding: utf-8

"""
    Onshape REST API

    The Onshape REST API consumed by all clients.  # noqa: E501

    The version of the OpenAPI document: 1.113
    Contact: api-support@onshape.zendesk.com
    Generated by: https://openapi-generator.tech
"""


from __future__ import absolute_import
import re  # noqa: F401
import sys  # noqa: F401

import six  # noqa: F401
import nulltype  # noqa: F401

from onshape_client.oas.model_utils import (  # noqa: F401
    ModelComposed,
    ModelNormal,
    ModelSimple,
    date,
    datetime,
    file_type,
    int,
    none_type,
    str,
    validate_get_composed_info,
)


class BTTranslateFormatParams(ModelNormal):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Attributes:
      allowed_values (dict): The key is the tuple path to the attribute
          and the for var_name this is (var_name,). The value is a dict
          with a capitalized key describing the allowed value and an allowed
          value. These dicts store the allowed enum values.
      attribute_map (dict): The key is attribute name
          and the value is json key in definition.
      discriminator_value_class_map (dict): A dict to go from the discriminator
          variable value to the discriminator class name.
      validations (dict): The key is the tuple path to the attribute
          and the for var_name this is (var_name,). The value is a dict
          that stores validations for max_length, min_length, max_items,
          min_items, exclusive_maximum, inclusive_maximum, exclusive_minimum,
          inclusive_minimum, and regex.
      additional_properties_type (tuple): A tuple of classes accepted
          as additional properties values.
    """

    allowed_values = {
    }

    validations = {
    }

    additional_properties_type = None

    @staticmethod
    def openapi_types():
        """
        This must be a class method so a model may have properties that are
        of type self, this ensures that we don't create a cyclic import

        Returns
            openapi_types (dict): The key is attribute name
                and the value is attribute type.
        """
        return {
            'allow_faulty_parts': (bool,),  # noqa: E501
            'angular_tolerance': (float,),  # noqa: E501
            'blob_element_id': (str,),  # noqa: E501
            'blob_microversion_id': (str,),  # noqa: E501
            'cloud_object_id': (str,),  # noqa: E501
            'cloud_storage_account_id': (str,),  # noqa: E501
            'color_method': (str,),  # noqa: E501
            'configuration': (str,),  # noqa: E501
            'connection_id': (str,),  # noqa: E501
            'create_composite': (bool,),  # noqa: E501
            'current_sheet_only': (bool,),  # noqa: E501
            'destination_name': (str,),  # noqa: E501
            'distance_tolerance': (float,),  # noqa: E501
            'element_id': (str,),  # noqa: E501
            'email_link': (bool,),  # noqa: E501
            'email_message': (str,),  # noqa: E501
            'email_subject': (str,),  # noqa: E501
            'email_to': ([str],),  # noqa: E501
            'extract_assembly_hierarchy': (bool,),  # noqa: E501
            'flatten': (bool,),  # noqa: E501
            'flatten_assemblies': (bool,),  # noqa: E501
            'foreign_id': (str,),  # noqa: E501
            'format_name': (str,),  # noqa: E501
            'from_user_id': (str,),  # noqa: E501
            'gety_axis_is_up': (bool,),  # noqa: E501
            'grouping': (bool,),  # noqa: E501
            'image_height': (int,),  # noqa: E501
            'image_width': (int,),  # noqa: E501
            'import_in_background': (bool,),  # noqa: E501
            'import_within_document': (bool,),  # noqa: E501
            'include_export_ids': (bool,),  # noqa: E501
            'join_adjacent_surfaces': (bool,),  # noqa: E501
            'link_document_id': (str,),  # noqa: E501
            'link_document_workspace_id': (str,),  # noqa: E501
            'maximum_chord_length': (float,),  # noqa: E501
            'notify_user': (bool,),  # noqa: E501
            'original_foreign_id': (str,),  # noqa: E501
            'parent_id': (str,),  # noqa: E501
            'part_ids': (str,),  # noqa: E501
            'password': (str,),  # noqa: E501
            'password_required': (bool,),  # noqa: E501
            'processed_foreign_id': (str,),  # noqa: E501
            'project_id': (str,),  # noqa: E501
            'selectable_pdf_text': (bool,),  # noqa: E501
            'send_copy_to_me': (bool,),  # noqa: E501
            'show_overridden_dimensions': (bool,),  # noqa: E501
            'source_name': (str,),  # noqa: E501
            'specify_units': (bool,),  # noqa: E501
            'splines_as_polylines': (bool,),  # noqa: E501
            'split_assemblies_into_multiple_documents': (bool,),  # noqa: E501
            'store_in_document': (bool,),  # noqa: E501
            'text_as_geometry': (bool,),  # noqa: E501
            'trigger_auto_download': (bool,),  # noqa: E501
            'unit': (str,),  # noqa: E501
            'upload_id': (str,),  # noqa: E501
            'valid_for_days': (int,),  # noqa: E501
            'version_string': (str,),  # noqa: E501
        }

    @staticmethod
    def discriminator():
        return None

    attribute_map = {
        'allow_faulty_parts': 'allowFaultyParts',  # noqa: E501
        'angular_tolerance': 'angularTolerance',  # noqa: E501
        'blob_element_id': 'blobElementId',  # noqa: E501
        'blob_microversion_id': 'blobMicroversionId',  # noqa: E501
        'cloud_object_id': 'cloudObjectId',  # noqa: E501
        'cloud_storage_account_id': 'cloudStorageAccountId',  # noqa: E501
        'color_method': 'colorMethod',  # noqa: E501
        'configuration': 'configuration',  # noqa: E501
        'connection_id': 'connectionId',  # noqa: E501
        'create_composite': 'createComposite',  # noqa: E501
        'current_sheet_only': 'currentSheetOnly',  # noqa: E501
        'destination_name': 'destinationName',  # noqa: E501
        'distance_tolerance': 'distanceTolerance',  # noqa: E501
        'element_id': 'elementId',  # noqa: E501
        'email_link': 'emailLink',  # noqa: E501
        'email_message': 'emailMessage',  # noqa: E501
        'email_subject': 'emailSubject',  # noqa: E501
        'email_to': 'emailTo',  # noqa: E501
        'extract_assembly_hierarchy': 'extractAssemblyHierarchy',  # noqa: E501
        'flatten': 'flatten',  # noqa: E501
        'flatten_assemblies': 'flattenAssemblies',  # noqa: E501
        'foreign_id': 'foreignId',  # noqa: E501
        'format_name': 'formatName',  # noqa: E501
        'from_user_id': 'fromUserId',  # noqa: E501
        'gety_axis_is_up': 'getyAxisIsUp',  # noqa: E501
        'grouping': 'grouping',  # noqa: E501
        'image_height': 'imageHeight',  # noqa: E501
        'image_width': 'imageWidth',  # noqa: E501
        'import_in_background': 'importInBackground',  # noqa: E501
        'import_within_document': 'importWithinDocument',  # noqa: E501
        'include_export_ids': 'includeExportIds',  # noqa: E501
        'join_adjacent_surfaces': 'joinAdjacentSurfaces',  # noqa: E501
        'link_document_id': 'linkDocumentId',  # noqa: E501
        'link_document_workspace_id': 'linkDocumentWorkspaceId',  # noqa: E501
        'maximum_chord_length': 'maximumChordLength',  # noqa: E501
        'notify_user': 'notifyUser',  # noqa: E501
        'original_foreign_id': 'originalForeignId',  # noqa: E501
        'parent_id': 'parentId',  # noqa: E501
        'part_ids': 'partIds',  # noqa: E501
        'password': 'password',  # noqa: E501
        'password_required': 'passwordRequired',  # noqa: E501
        'processed_foreign_id': 'processedForeignId',  # noqa: E501
        'project_id': 'projectId',  # noqa: E501
        'selectable_pdf_text': 'selectablePdfText',  # noqa: E501
        'send_copy_to_me': 'sendCopyToMe',  # noqa: E501
        'show_overridden_dimensions': 'showOverriddenDimensions',  # noqa: E501
        'source_name': 'sourceName',  # noqa: E501
        'specify_units': 'specifyUnits',  # noqa: E501
        'splines_as_polylines': 'splinesAsPolylines',  # noqa: E501
        'split_assemblies_into_multiple_documents': 'splitAssembliesIntoMultipleDocuments',  # noqa: E501
        'store_in_document': 'storeInDocument',  # noqa: E501
        'text_as_geometry': 'textAsGeometry',  # noqa: E501
        'trigger_auto_download': 'triggerAutoDownload',  # noqa: E501
        'unit': 'unit',  # noqa: E501
        'upload_id': 'uploadId',  # noqa: E501
        'valid_for_days': 'validForDays',  # noqa: E501
        'version_string': 'versionString',  # noqa: E501
    }

    @staticmethod
    def _composed_schemas():
        return None

    required_properties = set([
        '_data_store',
        '_check_type',
        '_from_server',
        '_path_to_item',
        '_configuration',
    ])

    def __init__(self, _check_type=True, _from_server=False, _path_to_item=(), _configuration=None, **kwargs):  # noqa: E501
        """bt_translate_format_params.BTTranslateFormatParams - a model defined in OpenAPI

        Keyword Args:
            _check_type (bool): if True, values for parameters in openapi_types
                                will be type checked and a TypeError will be
                                raised if the wrong type is input.
                                Defaults to True
            _path_to_item (tuple/list): This is a list of keys or values to
                                drill down to the model in received_data
                                when deserializing a response
            _from_server (bool): True if the data is from the server
                                False if the data is from the client (default)
            _configuration (Configuration): the instance to use when
                                deserializing a file_type parameter.
                                If passed, type conversion is attempted
                                If omitted no type conversion is done.
            allow_faulty_parts (bool): [optional]  # noqa: E501
            angular_tolerance (float): [optional]  # noqa: E501
            blob_element_id (str): [optional]  # noqa: E501
            blob_microversion_id (str): [optional]  # noqa: E501
            cloud_object_id (str): [optional]  # noqa: E501
            cloud_storage_account_id (str): [optional]  # noqa: E501
            color_method (str): [optional]  # noqa: E501
            configuration (str): [optional]  # noqa: E501
            connection_id (str): [optional]  # noqa: E501
            create_composite (bool): [optional]  # noqa: E501
            current_sheet_only (bool): [optional]  # noqa: E501
            destination_name (str): [optional]  # noqa: E501
            distance_tolerance (float): [optional]  # noqa: E501
            element_id (str): [optional]  # noqa: E501
            email_link (bool): [optional]  # noqa: E501
            email_message (str): [optional]  # noqa: E501
            email_subject (str): [optional]  # noqa: E501
            email_to ([str]): [optional]  # noqa: E501
            extract_assembly_hierarchy (bool): [optional]  # noqa: E501
            flatten (bool): [optional]  # noqa: E501
            flatten_assemblies (bool): [optional]  # noqa: E501
            foreign_id (str): [optional]  # noqa: E501
            format_name (str): [optional]  # noqa: E501
            from_user_id (str): [optional]  # noqa: E501
            gety_axis_is_up (bool): [optional]  # noqa: E501
            grouping (bool): [optional]  # noqa: E501
            image_height (int): [optional]  # noqa: E501
            image_width (int): [optional]  # noqa: E501
            import_in_background (bool): [optional]  # noqa: E501
            import_within_document (bool): [optional]  # noqa: E501
            include_export_ids (bool): [optional]  # noqa: E501
            join_adjacent_surfaces (bool): [optional]  # noqa: E501
            link_document_id (str): [optional]  # noqa: E501
            link_document_workspace_id (str): [optional]  # noqa: E501
            maximum_chord_length (float): [optional]  # noqa: E501
            notify_user (bool): [optional]  # noqa: E501
            original_foreign_id (str): [optional]  # noqa: E501
            parent_id (str): [optional]  # noqa: E501
            part_ids (str): [optional]  # noqa: E501
            password (str): [optional]  # noqa: E501
            password_required (bool): [optional]  # noqa: E501
            processed_foreign_id (str): [optional]  # noqa: E501
            project_id (str): [optional]  # noqa: E501
            selectable_pdf_text (bool): [optional]  # noqa: E501
            send_copy_to_me (bool): [optional]  # noqa: E501
            show_overridden_dimensions (bool): [optional]  # noqa: E501
            source_name (str): [optional]  # noqa: E501
            specify_units (bool): [optional]  # noqa: E501
            splines_as_polylines (bool): [optional]  # noqa: E501
            split_assemblies_into_multiple_documents (bool): [optional]  # noqa: E501
            store_in_document (bool): [optional]  # noqa: E501
            text_as_geometry (bool): [optional]  # noqa: E501
            trigger_auto_download (bool): [optional]  # noqa: E501
            unit (str): [optional]  # noqa: E501
            upload_id (str): [optional]  # noqa: E501
            valid_for_days (int): [optional]  # noqa: E501
            version_string (str): [optional]  # noqa: E501
        """

        self._data_store = {}
        self._check_type = _check_type
        self._from_server = _from_server
        self._path_to_item = _path_to_item
        self._configuration = _configuration

        for var_name, var_value in six.iteritems(kwargs):
            if var_name not in self.attribute_map and \
                        self._configuration is not None and \
                        self._configuration.discard_unknown_keys and \
                        self.additional_properties_type is None:
                # discard variable.
                continue
            setattr(self, var_name, var_value)
