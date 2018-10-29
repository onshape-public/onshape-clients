# InlineResponse20063PropertyConfigInfoList

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**schema_id** | **str** | Schema ID associated with this property config             object | [optional] 
**property_id** | **str** | Property ID associated with this property             config object | [optional] 
**object_type** | **float** | Metadata object type, which can be: 0:GLOBAL,             1:DOCUMENT, 2:PART, 3:ASSEMBLY, 4:DRAWING, 5:PART_STUDIO, 6: BLOB_ELEMENT, 7:APP_ELEMENT, 8:VERSION,             9:WORKSPACE | [optional] 
**publish_state** | **float** | Property publish state, which can be: 0:             PENDING, 1: ACTIVE, 2: INACTIVE | [optional] 
**required** | **bool** | True if property is required to have a             non-empty value | [optional] 
**default_value** | **str** | Default value, must be set if required &#x3D;&#x3D;             true | [optional] 
**pattern** | **str** | Regular expression pattern validation for             properties whose valueType &#x3D;&#x3D; STRING (0) | [optional] 
**min_length** | **float** | Min length validation for properties whose             valueType &#x3D;&#x3D; STRING | [optional] 
**max_length** | **float** | Max length validation for properties whose             valueType &#x3D;&#x3D; STRING | [optional] 
**min_value** | **float** | Min value validation for properties whose             valueType &#x3D;&#x3D; DOUBLE or INT | [optional] 
**max_value** | **float** | Max value validation for properties whose             valueType &#x3D;&#x3D; DOUBLE or INT | [optional] 
**multiline** | **bool** | True if string input should be multiline.             Only used if valueType &#x3D;&#x3D; STRING | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


