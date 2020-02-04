# coding: utf-8

"""
    Onshape REST API

    The Onshape REST API consumed by all clients.  # noqa: E501

    The version of the OpenAPI document: 1.108
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
    from onshape_client.oas.models import bt_billing_plan_info
except ImportError:
    bt_billing_plan_info = sys.modules[
        'onshape_client.oas.models.bt_billing_plan_info']
try:
    from onshape_client.oas.models import bt_device_login_secret_info
except ImportError:
    bt_device_login_secret_info = sys.modules[
        'onshape_client.oas.models.bt_device_login_secret_info']
try:
    from onshape_client.oas.models import bt_purchase_info
except ImportError:
    bt_purchase_info = sys.modules[
        'onshape_client.oas.models.bt_purchase_info']
try:
    from onshape_client.oas.models import bt_session_credential_info
except ImportError:
    bt_session_credential_info = sys.modules[
        'onshape_client.oas.models.bt_session_credential_info']
try:
    from onshape_client.oas.models import bt_trial_info
except ImportError:
    bt_trial_info = sys.modules[
        'onshape_client.oas.models.bt_trial_info']


class BTUserInfoAllOf(ModelNormal):
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
        ('roles',): {
            'ANONYMOUS': "ANONYMOUS",
            'TOTPPENDINGUSER': "TOTPPENDINGUSER",
            'USER': "USER",
            'DEVELOPER': "DEVELOPER",
            'PARTNER': "PARTNER",
            'ONSHAPECOMPANYUSER': "ONSHAPECOMPANYUSER",
            'ADMIN': "ADMIN",
        },
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
            'default_company_name': (str,),  # noqa: E501
            'description': (str,),  # noqa: E501
            'own_purchase': (bt_purchase_info.BTPurchaseInfo,),  # noqa: E501
            'active_purchases': ([bt_purchase_info.BTPurchaseInfo],),  # noqa: E501
            'enterprise': (bool,),  # noqa: E501
            'active_trial_info': (bt_trial_info.BTTrialInfo,),  # noqa: E501
            'active_plan_id': (str,),  # noqa: E501
            'last_trial_info': (bt_trial_info.BTTrialInfo,),  # noqa: E501
            'device_info': (bt_device_login_secret_info.BTDeviceLoginSecretInfo,),  # noqa: E501
            'eula_required': (bool,),  # noqa: E501
            'eula_id': (str,),  # noqa: E501
            'credential': (bt_session_credential_info.BTSessionCredentialInfo,),  # noqa: E501
            'startup_page': (int,),  # noqa: E501
            'forum_id': (str,),  # noqa: E501
            'phone_number': (str,),  # noqa: E501
            'totp_enabled': (bool,),  # noqa: E501
            'created_at': (datetime,),  # noqa: E501
            'country_code': (str,),  # noqa: E501
            'role': (int,),  # noqa: E501
            'cad_system_at_signup': (str,),  # noqa: E501
            'system_user': (bool,),  # noqa: E501
            'billing_update_required': (bool,),  # noqa: E501
            'active_plan': (bt_billing_plan_info.BTBillingPlanInfo,),  # noqa: E501
            'roles': ([str],),  # noqa: E501
        }

    @staticmethod
    def discriminator():
        return None

    attribute_map = {
        'default_company_name': 'defaultCompanyName',  # noqa: E501
        'description': 'description',  # noqa: E501
        'own_purchase': 'ownPurchase',  # noqa: E501
        'active_purchases': 'activePurchases',  # noqa: E501
        'enterprise': 'enterprise',  # noqa: E501
        'active_trial_info': 'activeTrialInfo',  # noqa: E501
        'active_plan_id': 'activePlanId',  # noqa: E501
        'last_trial_info': 'lastTrialInfo',  # noqa: E501
        'device_info': 'deviceInfo',  # noqa: E501
        'eula_required': 'eulaRequired',  # noqa: E501
        'eula_id': 'eulaId',  # noqa: E501
        'credential': 'credential',  # noqa: E501
        'startup_page': 'startupPage',  # noqa: E501
        'forum_id': 'forumId',  # noqa: E501
        'phone_number': 'phoneNumber',  # noqa: E501
        'totp_enabled': 'totpEnabled',  # noqa: E501
        'created_at': 'createdAt',  # noqa: E501
        'country_code': 'countryCode',  # noqa: E501
        'role': 'role',  # noqa: E501
        'cad_system_at_signup': 'cadSystemAtSignup',  # noqa: E501
        'system_user': 'systemUser',  # noqa: E501
        'billing_update_required': 'billingUpdateRequired',  # noqa: E501
        'active_plan': 'activePlan',  # noqa: E501
        'roles': 'roles',  # noqa: E501
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
        """bt_user_info_all_of.BTUserInfoAllOf - a model defined in OpenAPI


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
            default_company_name (str): [optional]  # noqa: E501
            description (str): [optional]  # noqa: E501
            own_purchase (bt_purchase_info.BTPurchaseInfo): [optional]  # noqa: E501
            active_purchases ([bt_purchase_info.BTPurchaseInfo]): [optional]  # noqa: E501
            enterprise (bool): [optional]  # noqa: E501
            active_trial_info (bt_trial_info.BTTrialInfo): [optional]  # noqa: E501
            active_plan_id (str): [optional]  # noqa: E501
            last_trial_info (bt_trial_info.BTTrialInfo): [optional]  # noqa: E501
            device_info (bt_device_login_secret_info.BTDeviceLoginSecretInfo): [optional]  # noqa: E501
            eula_required (bool): [optional]  # noqa: E501
            eula_id (str): [optional]  # noqa: E501
            credential (bt_session_credential_info.BTSessionCredentialInfo): [optional]  # noqa: E501
            startup_page (int): [optional]  # noqa: E501
            forum_id (str): [optional]  # noqa: E501
            phone_number (str): [optional]  # noqa: E501
            totp_enabled (bool): [optional]  # noqa: E501
            created_at (datetime): [optional]  # noqa: E501
            country_code (str): [optional]  # noqa: E501
            role (int): [optional]  # noqa: E501
            cad_system_at_signup (str): [optional]  # noqa: E501
            system_user (bool): [optional]  # noqa: E501
            billing_update_required (bool): [optional]  # noqa: E501
            active_plan (bt_billing_plan_info.BTBillingPlanInfo): [optional]  # noqa: E501
            roles ([str]): [optional]  # noqa: E501
        """

        self._data_store = {}
        self._check_type = _check_type
        self._from_server = _from_server
        self._path_to_item = _path_to_item
        self._configuration = _configuration

        for var_name, var_value in six.iteritems(kwargs):
            setattr(self, var_name, var_value)
