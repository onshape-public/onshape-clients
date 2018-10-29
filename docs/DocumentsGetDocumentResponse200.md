# DocumentsGetDocumentResponse200

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**trashed_at** | **datetime** | When document has been trashed | [optional] 
**permission_set** | **list[str]** | User&#39;s level of access to the document. Possible values: OWNER,             DELETE, RESHARE, WRITE, READ, COPY, EXPORT, COMMENT | [optional] 
**href** | **str** | Document URL | [optional] 
**owner** | [**DocumentsGetDocumentResponse200Owner**](DocumentsGetDocumentResponse200Owner.md) |  | [optional] 
**total_workspaces_updating** | **float** | Number of workspaces that are updating | [optional] 
**id** | **str** | Document ID | [optional] 
**created_at** | **datetime** | Creation date | [optional] 
**total_workspaces_scheduled_for_update** | **float** | Number of workspaces that are scheduled for             updating | [optional] 
**tags** | **list[str]** | Reserved for future use | [optional] 
**modified_by** | [**DocumentsGetDocumentsResponse200ModifiedBy**](DocumentsGetDocumentsResponse200ModifiedBy.md) |  | [optional] 
**beta_capability_ids** | **list[str]** | Onshape internal use | [optional] 
**default_workspace** | [**DocumentsCreateDocumentResponse200DefaultWorkspace**](DocumentsCreateDocumentResponse200DefaultWorkspace.md) |  | [optional] 
**trash** | **bool** | Whether document has been trashed | [optional] 
**thumbnail** | [**DocumentsGetDocumentsResponse200Thumbnail**](DocumentsGetDocumentsResponse200Thumbnail.md) |  | [optional] 
**document_thumbnail_element_id** | **str** | The element which the Document Thumbnail should mirror | [optional] 
**permission** | **str** | User&#39;s level of access to the document; can be ANONYMOUS_ACCESS, READ,             READ_COPY_EXPORT, COMMENT, WRITE, RESHARE, FULL, or OWNER (Deprecated) | [optional] 
**size_bytes** | **float** | Size of document in bytes | [optional] 
**created_by** | [**DocumentsGetDocumentsResponse200CreatedBy**](DocumentsGetDocumentsResponse200CreatedBy.md) |  | [optional] 
**active** | **str** | Whether a shared document is active | [optional] 
**name** | **str** | Name of document | [optional] 
**public** | **bool** | Whether document is public | [optional] 
**modified_at** | **datetime** | Date of last modification | [optional] 
**starred** | **str** | Whether document has been starred (Deprecated) | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


