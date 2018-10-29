# AssembliesGetAssemblyDefinitionResponse200RootAssemblyOccurrences

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**path** | **list[str]** | A list of occurrence IDs, representing the             hierachical inclusion structure of the occurrence within the assembly. Each element in the list is an             id value for an entry in rootAssembly.instances or rootAssembly.subAssemblies.N.instances | [optional] 
**hidden** | **bool** | Occurrence hidden or displayed | [optional] 
**fixed** | **bool** | Occurrence fixed or not | [optional] 
**transform** | **list[float]** | A 16-element transform matrix that             transforms the occurrence into the world space of the top-level assembly. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


