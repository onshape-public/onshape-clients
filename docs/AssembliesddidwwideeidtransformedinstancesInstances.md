# AssembliesddidwwideeidtransformedinstancesInstances

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**document_id** | **str** | Source document ID for the           instance. If this differs from the same document as in the path, you must specify a versionId for the           instance in the source document. | [optional] 
**element_id** | **str** | Source element ID for the instance. | [optional] 
**part_id** | **str** | Part ID of instance, if it&#39;s a part or surface.           Must be left blank if featureId is set. | [optional] 
**feature_id** | **str** | Feature ID of instance, if it&#39;s a feature.           Currently, only sketch features are valid. Must be left blank if partId is set. | [optional] 
**microversion_id** | **str** | Source document microversion ID in which           to resolve elementId and partId. This must be left empty if a versionId is specified. | [optional] 
**version_id** | **str** | Document version ID in which to resolve           elementId and partId. | [optional] 
**configuration** | **str** | Configuration of the source element,           valid only if the referenced element is a Part Studio. | [optional] 
**is_whole_part_studio** | **bool** | Whether the instance is the           entire part studio specified by the element ID. | [optional] 
**is_assembly** | **bool** | Whether the instance is the assembly           specified by the element ID. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


