# InlineResponse20063

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **str** | Property ID | [optional] 
**name** | **str** | Property name | [optional] 
**description** | **str** | Property description | [optional] 
**owner_id** | **str** | Property owner ID | [optional] 
**owner_type** | **float** | Property owner type, which can be: 0: user, 1: company | [optional] 
**namespace** | **str** | Property namespace (use to disambiguate properties with same name) | [optional] 
**value_type** | **float** | Value type of property, which can be: 0:STRING, 1:BOOL, 2:INT,             3:DOUBLE, 4:DATE, 5:ENUM, 6:OBJECT, 7:BLOB, 8:USER | [optional] 
**array** | **bool** | True if property is an array type | [optional] 
**enum_values** | **list[object]** | Set of enum values if valueType &#x3D;&#x3D; ENUM (5) | [optional] 
**object_def_name** | **str** | Object type name if valueType &#x3D;&#x3D; OBJECT (6) | [optional] 
**blob_mime_type** | **str** | Blob mime type if valueType &#x3D;&#x3D; BLOB (7) | [optional] 
**editable_in_version** | **bool** | True if this property can be edited in a Version | [optional] 
**editable_in_microversion** | **bool** | True if this property can be edited in a Microversion | [optional] 
**safe_name** | **str** | Safe name | [optional] 
**search_boost** | **float** | Relative ordering of search importance. Baseline is 1.0 | [optional] 
**property_config_info_list** | [**list[InlineResponse20063PropertyConfigInfoList]**](InlineResponse20063PropertyConfigInfoList.md) | Additional information about property only returned if             schemaId is included in request | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


