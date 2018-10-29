# PartStudiosUpdateFeaturesResponse200

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**source_microversion** | **str** | The document microversion from which the feature was extracted | [optional] 
**serialization_version** | **str** | The version of the serialization protocol for the response | [optional] 
**features** | **list[object]** | The modified features after updates have been applied | [optional] 
**microversion_skew** | **bool** | Set to true if the part studio element had changed since the     sourceMicroversion specified on input.  Applicable only if rejectMicroversionSkew was not set to true | [optional] 
**feature_states** | [**list[PartStudiosUpdateFeaturesResponse200FeatureStates]**](PartStudiosUpdateFeaturesResponse200FeatureStates.md) | The states of the modified features | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


