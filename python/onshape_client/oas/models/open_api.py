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
try:
    from onshape_client.oas.models import components
except ImportError:
    components = sys.modules[
        'onshape_client.oas.models.components']
try:
    from onshape_client.oas.models import external_documentation
except ImportError:
    external_documentation = sys.modules[
        'onshape_client.oas.models.external_documentation']
try:
    from onshape_client.oas.models import info
except ImportError:
    info = sys.modules[
        'onshape_client.oas.models.info']
try:
    from onshape_client.oas.models import path_item
except ImportError:
    path_item = sys.modules[
        'onshape_client.oas.models.path_item']
try:
    from onshape_client.oas.models import security_requirement
except ImportError:
    security_requirement = sys.modules[
        'onshape_client.oas.models.security_requirement']
try:
    from onshape_client.oas.models import server
except ImportError:
    server = sys.modules[
        'onshape_client.oas.models.server']
try:
    from onshape_client.oas.models import tag
except ImportError:
    tag = sys.modules[
        'onshape_client.oas.models.tag']


class OpenAPI(ModelNormal):
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
            'components': (components.Components,),  # noqa: E501
            'extensions': ({str: (bool, date, datetime, dict, float, int, list, str,)},),  # noqa: E501
            'external_docs': (external_documentation.ExternalDocumentation,),  # noqa: E501
            'info': (info.Info,),  # noqa: E501
            'openapi': (str,),  # noqa: E501
            'paths': ({str: (path_item.PathItem,)},),  # noqa: E501
            'security': ([security_requirement.SecurityRequirement],),  # noqa: E501
            'servers': ([server.Server],),  # noqa: E501
            'tags': ([tag.Tag],),  # noqa: E501
        }

    @staticmethod
    def discriminator():
        return None

    attribute_map = {
        'components': 'components',  # noqa: E501
        'extensions': 'extensions',  # noqa: E501
        'external_docs': 'externalDocs',  # noqa: E501
        'info': 'info',  # noqa: E501
        'openapi': 'openapi',  # noqa: E501
        'paths': 'paths',  # noqa: E501
        'security': 'security',  # noqa: E501
        'servers': 'servers',  # noqa: E501
        'tags': 'tags',  # noqa: E501
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
        """open_api.OpenAPI - a model defined in OpenAPI


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
            components (components.Components): [optional]  # noqa: E501
            extensions ({str: (bool, date, datetime, dict, float, int, list, str,)}): [optional]  # noqa: E501
            external_docs (external_documentation.ExternalDocumentation): [optional]  # noqa: E501
            info (info.Info): [optional]  # noqa: E501
            openapi (str): [optional]  # noqa: E501
            paths ({str: (path_item.PathItem,)}): [optional]  # noqa: E501
            security ([security_requirement.SecurityRequirement]): [optional]  # noqa: E501
            servers ([server.Server]): [optional]  # noqa: E501
            tags ([tag.Tag]): [optional]  # noqa: E501
        """

        self._data_store = {}
        self._check_type = _check_type
        self._from_server = _from_server
        self._path_to_item = _path_to_item
        self._configuration = _configuration

        for var_name, var_value in six.iteritems(kwargs):
            setattr(self, var_name, var_value)
