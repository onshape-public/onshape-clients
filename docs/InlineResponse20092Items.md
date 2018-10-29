# InlineResponse20092Items

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **str** | ID of the item | 
**name** | **str** | Name of the revisionable object | 
**document_id** | **str** | Document ID of the revisionable object | 
**version_id** | **str** | Version ID of the revisionable object | [optional] 
**workspace_id** | **str** | Workspace ID of the revisionable object | [optional] 
**element_id** | **str** | Element ID of the revisionable object | 
**elment_type** | **float** | Type of element, which can be 0: Part Studio, 1: Assembly, 2:             Drawing. 4: Blob | 
**part_id** | **str** | Deterministic part ID if item is a part | [optional] 
**configuration** | **str** | Configuration of the Part studio or Assembly element | [optional] 
**href** | **str** | An URI to get complete metadata for the item | 
**view_ref** | **str** | An URI that can be opened in the browser to view the item | [optional] 
**errors** | [**list[InlineResponse20092Errors]**](InlineResponse20092Errors.md) | Errors or warnings if any associated with items. | [optional] 
**children** | **list[object]** | Dependent child items as determined by Onshape. Assemblies             and Drawings will contain all their references recursively unless they have been explicitly marked as             non revision managed. | [optional] 
**properties** | [**list[InlineResponse20092Properties1]**](InlineResponse20092Properties1.md) | Properties of the item | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


