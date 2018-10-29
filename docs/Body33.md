# Body33

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**configuration** | **str** | A configuration string indicating the particular configuration that           should be translated | [optional] 
**part_ids** | **str** | A comma-separated list of part ids that should be translated. If not specified,           all parts are translated. | [optional] 
**format_name** | **str** | Name of format into which this element should be translated. ONSHAPE        indicates that the model file should be translated into a Part Studio or Assembly. | [optional] 
**include_export_ids** | **bool** | Whether to include topology id strings in parasolid output format. | [optional] 
**store_in_document** | **bool** | controls whether the translation is stored as a new element or        whether the data is stored as external data (storeInDocument&#x3D;false). | [optional] 
**link_document_workspace_id** | **str** | If storeInDocument is true and linkDocumentId is specified, this        specifies a workspace to be used for result storage within the linkDocument. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


