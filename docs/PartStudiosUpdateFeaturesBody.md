# PartStudiosUpdateFeaturesBody

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**serialization_version** | **str** | The version of the serialization protocol for features | [optional] 
**reject_microversion_skew** | **bool** | If set to true and the element has changed since     sourceMicroversion, return an HTTP Conflict status. | [optional] 
**update_suppression_attributes** | **bool** | If true, suppression attributes of the feature         (suppress, suppressionState) will be updated | [optional] 
**features** | **list[object]** | A list of features containing updates to apply | [optional] 
**source_microversion** | **str** | The document microversion from which the features were extracted | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


