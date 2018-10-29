# AssembliesTransformOccurrencesBody

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**is_relative** | **bool** | Whether the transform is relative or absolute. Each occurrence in an    assembly has a transform that positions it relative to the top-most assembly. An absolute transform operation    sets the transform of the occurrence and each child occurrence to the specified transform. A relative    transform operation combines the specified transform with the existing transform of the occurrence and with    each child occurrence transform. | [optional] 
**occurrences** | [**list[AssembliesTransformOccurrencesBodyOccurrences]**](AssembliesTransformOccurrencesBodyOccurrences.md) | A list of occurrences to transform. | [optional] 
**transform** | **list[float]** | The transform to apply to the occurrences.  Must be 9, 12, or 16    elements in length, representing a 3x3, 4x3 or 4x4 matrix, respectively.  All translation matrix components are in meters. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


