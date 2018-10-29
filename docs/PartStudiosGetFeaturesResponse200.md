# PartStudiosGetFeaturesResponse200

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**features** | [**list[PartStudiosGetFeaturesResponse200Features]**](PartStudiosGetFeaturesResponse200Features.md) | List of features | [optional] 
**imports** | [**list[PartStudiosGetFeaturesResponse200Imports]**](PartStudiosGetFeaturesResponse200Imports.md) | Array of imports into the feature list | [optional] 
**feature_states** | [**list[PartStudiosGetFeaturesResponse200FeatureStates]**](PartStudiosGetFeaturesResponse200FeatureStates.md) | List of feature state information | [optional] 
**is_complete** | **bool** | True if the full feature list is present, or false if it is filtered | [optional] 
**serialization_version** | **str** | The version of the serialization protocol for the response | [optional] 
**source_microversion** | **str** | The document microversion from which the feature was extracted | [optional] 
**rollback_index** | **float** | The index of the first feature that is rolled back | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


