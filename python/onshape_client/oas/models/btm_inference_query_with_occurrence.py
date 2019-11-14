# coding: utf-8

"""
    Onshape REST API

    The Onshape REST API consumed by all clients.  # noqa: E501

    The version of the OpenAPI document: 1.106
    Contact: api-support@onshape.zendesk.com
    Generated by: https://openapi-generator.tech
"""


import pprint
import re  # noqa: F401

import six


class BTMInferenceQueryWithOccurrence(object):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """

    """
    Attributes:
      openapi_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    openapi_types = {
        'second_deterministic_id': 'str',
        'inference_type': 'str',
        'second_entity_query': 'str'
    }

    attribute_map = {
        'second_deterministic_id': 'secondDeterministicId',
        'inference_type': 'inferenceType',
        'second_entity_query': 'secondEntityQuery'
    }

    def __init__(self, second_deterministic_id=None, inference_type=None, second_entity_query=None):  # noqa: E501
        """BTMInferenceQueryWithOccurrence - a model defined in OpenAPI"""  # noqa: E501

        self._second_deterministic_id = None
        self._inference_type = None
        self._second_entity_query = None
        self.discriminator = None

        if second_deterministic_id is not None:
            self.second_deterministic_id = second_deterministic_id
        if inference_type is not None:
            self.inference_type = inference_type
        if second_entity_query is not None:
            self.second_entity_query = second_entity_query

    @property
    def second_deterministic_id(self):
        """Gets the second_deterministic_id of this BTMInferenceQueryWithOccurrence.  # noqa: E501


        :return: The second_deterministic_id of this BTMInferenceQueryWithOccurrence.  # noqa: E501
        :rtype: str
        """
        return self._second_deterministic_id

    @second_deterministic_id.setter
    def second_deterministic_id(self, second_deterministic_id):
        """Sets the second_deterministic_id of this BTMInferenceQueryWithOccurrence.


        :param second_deterministic_id: The second_deterministic_id of this BTMInferenceQueryWithOccurrence.  # noqa: E501
        :type: str
        """

        self._second_deterministic_id = second_deterministic_id

    @property
    def inference_type(self):
        """Gets the inference_type of this BTMInferenceQueryWithOccurrence.  # noqa: E501


        :return: The inference_type of this BTMInferenceQueryWithOccurrence.  # noqa: E501
        :rtype: str
        """
        return self._inference_type

    @inference_type.setter
    def inference_type(self, inference_type):
        """Sets the inference_type of this BTMInferenceQueryWithOccurrence.


        :param inference_type: The inference_type of this BTMInferenceQueryWithOccurrence.  # noqa: E501
        :type: str
        """
        allowed_values = ["PART_ORIGIN", "POINT", "CENTROID", "CENTER", "MID_POINT", "TOP_AXIS_POINT", "MID_AXIS_POINT", "BOTTOM_AXIS_POINT", "ORIGIN_X", "ORIGIN_Y", "ORIGIN_Z", "LOOP_CENTER", "UNKNOWN"]  # noqa: E501
        if inference_type not in allowed_values:
            raise ValueError(
                "Invalid value for `inference_type` ({0}), must be one of {1}"  # noqa: E501
                .format(inference_type, allowed_values)
            )

        self._inference_type = inference_type

    @property
    def second_entity_query(self):
        """Gets the second_entity_query of this BTMInferenceQueryWithOccurrence.  # noqa: E501


        :return: The second_entity_query of this BTMInferenceQueryWithOccurrence.  # noqa: E501
        :rtype: str
        """
        return self._second_entity_query

    @second_entity_query.setter
    def second_entity_query(self, second_entity_query):
        """Sets the second_entity_query of this BTMInferenceQueryWithOccurrence.


        :param second_entity_query: The second_entity_query of this BTMInferenceQueryWithOccurrence.  # noqa: E501
        :type: str
        """

        self._second_entity_query = second_entity_query

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.openapi_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, BTMInferenceQueryWithOccurrence):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other