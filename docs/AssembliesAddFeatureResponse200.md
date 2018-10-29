# AssembliesAddFeatureResponse200

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**source_microversion** | **str** | The document microversion from which the feature was extracted | [optional] 
**serialization_version** | **str** | The version of the serialization protocol for the response | [optional] 
**feature** | **object** | The serialized feature definition | [optional] 
**microversion_skew** | **bool** | Set to true if the part studio element had changed since the     sourceMicroversion specified on input.  Applicable only if rejectMicroversionSkew was not set to true | [optional] 
**feature_state** | [**PartStudiosUpdateFeatureResponse200FeatureState**](PartStudiosUpdateFeatureResponse200FeatureState.md) |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


