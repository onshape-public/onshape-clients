# InlineResponse200101Items

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **str** | The id of this translation | 
**href** | **str** | The URI for accessing this translation | 
**document_id** | **str** | The id of the document that contains the translation | 
**workspace_id** | **str** | The id of the document workspace that contains the translation | 
**request_element_id** | **str** | The id of the element being translated | 
**request_state** | **str** | The state if of this translation request. (ACTIVE|DONE|FAILED) | 
**result_element_ids** | **list[str]** | The ids of the elements containing        the translation results, if stored in the document | 
**result_external_data_ids** | **list[str]** | The ids of the external data        containing the translation results, if not stored in the document | 
**failure_reason** | **str** | A string indicating the reason for the        failure, if known. | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


