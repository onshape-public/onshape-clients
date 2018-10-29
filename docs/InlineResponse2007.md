# InlineResponse2007

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**default_workspace** | [**InlineResponse2002DefaultWorkspace**](InlineResponse2002DefaultWorkspace.md) |  | [optional] 
**beta_capability_ids** | **list[str]** | Onshape internal use | [optional] 
**public** | **bool** | Whether document is public | [optional] 
**owner** | [**InlineResponse2007Owner**](InlineResponse2007Owner.md) |  | [optional] 
**permission_set** | **list[str]** | User&#39;s level of access to the document. Possible values: OWNER,             DELETE, RESHARE, WRITE, READ, COPY, EXPORT, COMMENT | [optional] 
**permission** | **str** | User&#39;s level of access to the document; can be ANONYMOUS_ACCESS, READ,             READ_COPY_EXPORT, COMMENT, WRITE, RESHARE, FULL, or OWNER (Deprecated) | [optional] 
**trashed_at** | **datetime** | When document has been trashed | [optional] 
**trash** | **bool** | Whether document has been trashed | [optional] 
**starred** | **str** | Whether document has been starred (Deprecated) | [optional] 
**active** | **str** | Whether a shared document is active | [optional] 
**created_at** | **datetime** | Creation date | [optional] 
**document_thumbnail_element_id** | **str** | The element which the Document Thumbnail should mirror | [optional] 
**thumbnail** | [**InlineResponse2001Thumbnail**](InlineResponse2001Thumbnail.md) |  | [optional] 
**created_by** | [**InlineResponse2001CreatedBy**](InlineResponse2001CreatedBy.md) |  | [optional] 
**modified_at** | **datetime** | Date of last modification | [optional] 
**modified_by** | [**InlineResponse2001ModifiedBy**](InlineResponse2001ModifiedBy.md) |  | [optional] 
**tags** | **list[str]** | Reserved for future use | [optional] 
**size_bytes** | **float** | Size of document in bytes | [optional] 
**name** | **str** | Name of document | [optional] 
**id** | **str** | Document ID | [optional] 
**href** | **str** | Document URL | [optional] 
**total_workspaces_updating** | **float** | Number of workspaces that are updating | [optional] 
**total_workspaces_scheduled_for_update** | **float** | Number of workspaces that are scheduled for             updating | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


