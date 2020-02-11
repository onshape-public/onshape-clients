# coding: utf-8

"""
    Onshape REST API

    The Onshape REST API consumed by all clients.  # noqa: E501

    The version of the OpenAPI document: 1.110
    Contact: api-support@onshape.zendesk.com
    Generated by: https://openapi-generator.tech
"""


from __future__ import absolute_import
import re  # noqa: F401
import sys  # noqa: F401

import six  # noqa: F401

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


class BTExportModelParams(ModelNormal):
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
            'angle_tolerance': (float,),  # noqa: E501
            'batch_flat_patterns': (bool,),  # noqa: E501
            'chord_tolerance': (float,),  # noqa: E501
            'cloud_object_id': (str,),  # noqa: E501
            'cloud_storage_account_id': (str,),  # noqa: E501
            'configuration': (str,),  # noqa: E501
            'deep_search_for_foreign_data': (bool,),  # noqa: E501
            'destination_name': (str,),  # noqa: E501
            'document_id': (str,),  # noqa: E501
            'document_version_id': (str,),  # noqa: E501
            'element_id': (str,),  # noqa: E501
            'element_ids': (str,),  # noqa: E501
            'email_link': (bool,),  # noqa: E501
            'email_message': (str,),  # noqa: E501
            'email_subject': (str,),  # noqa: E501
            'email_to': (str,),  # noqa: E501
            'extract_to_s3': (bool,),  # noqa: E501
            'feature_ids': (str,),  # noqa: E501
            'flatten': (bool,),  # noqa: E501
            'format': (str,),  # noqa: E501
            'from_user_id': (str,),  # noqa: E501
            'grouping': (str,),  # noqa: E501
            'include_bend_centerlines': (bool,),  # noqa: E501
            'include_bend_lines': (bool,),  # noqa: E501
            'include_custom_properties': (bool,),  # noqa: E501
            'include_custom_properties_data': (bool,),  # noqa: E501
            'include_export_ids': (bool,),  # noqa: E501
            'include_foreign_data': (bool,),  # noqa: E501
            'include_items_data': (bool,),  # noqa: E501
            'include_linked_documents': (bool,),  # noqa: E501
            'include_release_management_data': (bool,),  # noqa: E501
            'include_sketches': (bool,),  # noqa: E501
            'include_std': (bool,),  # noqa: E501
            'is_parting_out': (bool,),  # noqa: E501
            'link_document_id': (str,),  # noqa: E501
            'link_document_workspace_id': (str,),  # noqa: E501
            'max_facet_width': (float,),  # noqa: E501
            'microversion': (str,),  # noqa: E501
            'min_facet_width': (float,),  # noqa: E501
            'mode': (str,),  # noqa: E501
            'part_ids': (str,),  # noqa: E501
            'part_query': (str,),  # noqa: E501
            'password': (str,),  # noqa: E501
            'password_required': (bool,),  # noqa: E501
            'resolution': (str,),  # noqa: E501
            'scale': (float,),  # noqa: E501
            'send_copy_to_me': (bool,),  # noqa: E501
            'sheet_metal_flat': (bool,),  # noqa: E501
            'splines_as_polylines': (bool,),  # noqa: E501
            'store_in_document': (bool,),  # noqa: E501
            'trigger_auto_download': (bool,),  # noqa: E501
            'units': (str,),  # noqa: E501
            'user_id': (str,),  # noqa: E501
            'valid_for_days': (int,),  # noqa: E501
            'version': (str,),  # noqa: E501
            'view': (str,),  # noqa: E501
            'workspace_id': (str,),  # noqa: E501
            'zip_single_file_output': (bool,),  # noqa: E501
        }

    @staticmethod
    def discriminator():
        return None

    attribute_map = {
        'angle_tolerance': 'angleTolerance',  # noqa: E501
        'batch_flat_patterns': 'batchFlatPatterns',  # noqa: E501
        'chord_tolerance': 'chordTolerance',  # noqa: E501
        'cloud_object_id': 'cloudObjectId',  # noqa: E501
        'cloud_storage_account_id': 'cloudStorageAccountId',  # noqa: E501
        'configuration': 'configuration',  # noqa: E501
        'deep_search_for_foreign_data': 'deepSearchForForeignData',  # noqa: E501
        'destination_name': 'destinationName',  # noqa: E501
        'document_id': 'documentId',  # noqa: E501
        'document_version_id': 'documentVersionId',  # noqa: E501
        'element_id': 'elementId',  # noqa: E501
        'element_ids': 'elementIds',  # noqa: E501
        'email_link': 'emailLink',  # noqa: E501
        'email_message': 'emailMessage',  # noqa: E501
        'email_subject': 'emailSubject',  # noqa: E501
        'email_to': 'emailTo',  # noqa: E501
        'extract_to_s3': 'extractToS3',  # noqa: E501
        'feature_ids': 'featureIds',  # noqa: E501
        'flatten': 'flatten',  # noqa: E501
        'format': 'format',  # noqa: E501
        'from_user_id': 'fromUserId',  # noqa: E501
        'grouping': 'grouping',  # noqa: E501
        'include_bend_centerlines': 'includeBendCenterlines',  # noqa: E501
        'include_bend_lines': 'includeBendLines',  # noqa: E501
        'include_custom_properties': 'includeCustomProperties',  # noqa: E501
        'include_custom_properties_data': 'includeCustomPropertiesData',  # noqa: E501
        'include_export_ids': 'includeExportIds',  # noqa: E501
        'include_foreign_data': 'includeForeignData',  # noqa: E501
        'include_items_data': 'includeItemsData',  # noqa: E501
        'include_linked_documents': 'includeLinkedDocuments',  # noqa: E501
        'include_release_management_data': 'includeReleaseManagementData',  # noqa: E501
        'include_sketches': 'includeSketches',  # noqa: E501
        'include_std': 'includeStd',  # noqa: E501
        'is_parting_out': 'isPartingOut',  # noqa: E501
        'link_document_id': 'linkDocumentId',  # noqa: E501
        'link_document_workspace_id': 'linkDocumentWorkspaceId',  # noqa: E501
        'max_facet_width': 'maxFacetWidth',  # noqa: E501
        'microversion': 'microversion',  # noqa: E501
        'min_facet_width': 'minFacetWidth',  # noqa: E501
        'mode': 'mode',  # noqa: E501
        'part_ids': 'partIds',  # noqa: E501
        'part_query': 'partQuery',  # noqa: E501
        'password': 'password',  # noqa: E501
        'password_required': 'passwordRequired',  # noqa: E501
        'resolution': 'resolution',  # noqa: E501
        'scale': 'scale',  # noqa: E501
        'send_copy_to_me': 'sendCopyToMe',  # noqa: E501
        'sheet_metal_flat': 'sheetMetalFlat',  # noqa: E501
        'splines_as_polylines': 'splinesAsPolylines',  # noqa: E501
        'store_in_document': 'storeInDocument',  # noqa: E501
        'trigger_auto_download': 'triggerAutoDownload',  # noqa: E501
        'units': 'units',  # noqa: E501
        'user_id': 'userId',  # noqa: E501
        'valid_for_days': 'validForDays',  # noqa: E501
        'version': 'version',  # noqa: E501
        'view': 'view',  # noqa: E501
        'workspace_id': 'workspaceId',  # noqa: E501
        'zip_single_file_output': 'zipSingleFileOutput',  # noqa: E501
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
        """bt_export_model_params.BTExportModelParams - a model defined in OpenAPI


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
            angle_tolerance (float): [optional]  # noqa: E501
            batch_flat_patterns (bool): [optional]  # noqa: E501
            chord_tolerance (float): [optional]  # noqa: E501
            cloud_object_id (str): [optional]  # noqa: E501
            cloud_storage_account_id (str): [optional]  # noqa: E501
            configuration (str): [optional]  # noqa: E501
            deep_search_for_foreign_data (bool): [optional]  # noqa: E501
            destination_name (str): [optional]  # noqa: E501
            document_id (str): [optional]  # noqa: E501
            document_version_id (str): [optional]  # noqa: E501
            element_id (str): [optional]  # noqa: E501
            element_ids (str): [optional]  # noqa: E501
            email_link (bool): [optional]  # noqa: E501
            email_message (str): [optional]  # noqa: E501
            email_subject (str): [optional]  # noqa: E501
            email_to (str): [optional]  # noqa: E501
            extract_to_s3 (bool): [optional]  # noqa: E501
            feature_ids (str): [optional]  # noqa: E501
            flatten (bool): [optional]  # noqa: E501
            format (str): [optional]  # noqa: E501
            from_user_id (str): [optional]  # noqa: E501
            grouping (str): [optional]  # noqa: E501
            include_bend_centerlines (bool): [optional]  # noqa: E501
            include_bend_lines (bool): [optional]  # noqa: E501
            include_custom_properties (bool): [optional]  # noqa: E501
            include_custom_properties_data (bool): [optional]  # noqa: E501
            include_export_ids (bool): [optional]  # noqa: E501
            include_foreign_data (bool): [optional]  # noqa: E501
            include_items_data (bool): [optional]  # noqa: E501
            include_linked_documents (bool): [optional]  # noqa: E501
            include_release_management_data (bool): [optional]  # noqa: E501
            include_sketches (bool): [optional]  # noqa: E501
            include_std (bool): [optional]  # noqa: E501
            is_parting_out (bool): [optional]  # noqa: E501
            link_document_id (str): [optional]  # noqa: E501
            link_document_workspace_id (str): [optional]  # noqa: E501
            max_facet_width (float): [optional]  # noqa: E501
            microversion (str): [optional]  # noqa: E501
            min_facet_width (float): [optional]  # noqa: E501
            mode (str): [optional]  # noqa: E501
            part_ids (str): [optional]  # noqa: E501
            part_query (str): [optional]  # noqa: E501
            password (str): [optional]  # noqa: E501
            password_required (bool): [optional]  # noqa: E501
            resolution (str): [optional]  # noqa: E501
            scale (float): [optional]  # noqa: E501
            send_copy_to_me (bool): [optional]  # noqa: E501
            sheet_metal_flat (bool): [optional]  # noqa: E501
            splines_as_polylines (bool): [optional]  # noqa: E501
            store_in_document (bool): [optional]  # noqa: E501
            trigger_auto_download (bool): [optional]  # noqa: E501
            units (str): [optional]  # noqa: E501
            user_id (str): [optional]  # noqa: E501
            valid_for_days (int): [optional]  # noqa: E501
            version (str): [optional]  # noqa: E501
            view (str): [optional]  # noqa: E501
            workspace_id (str): [optional]  # noqa: E501
            zip_single_file_output (bool): [optional]  # noqa: E501
        """

        self._data_store = {}
        self._check_type = _check_type
        self._from_server = _from_server
        self._path_to_item = _path_to_item
        self._configuration = _configuration

        for var_name, var_value in six.iteritems(kwargs):
            setattr(self, var_name, var_value)
