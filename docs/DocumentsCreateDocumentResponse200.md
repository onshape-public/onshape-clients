# DocumentsCreateDocumentResponse200

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**size_bytes** | **float** | Size of document in bytes | [optional] 
**trashed_at** | **datetime** | When document has been trashed | [optional] 
**starred** | **bool** | Whether document has been starred (Deprecated) | [optional] 
**permission** | **str** | Onshape internal use (Deprecated) | [optional] 
**id** | **str** | Document ID | [optional] 
**tags** | **list[str]** | Reserved for future use | [optional] 
**thumbnail** | [**DocumentsGetDocumentsResponse200Thumbnail**](DocumentsGetDocumentsResponse200Thumbnail.md) |  | [optional] 
**active** | **bool** | Whether a shared document is active | [optional] 
**permission_set** | **list[str]** | User&#39;s level of access to the document. Possible values: OWNER,             DELETE, RESHARE, WRITE, READ, COPY, EXPORT, COMMENT | [optional] 
**href** | **str** | Document URL | [optional] 
**modified_at** | **datetime** | Date of last modification | [optional] 
**created_by** | [**DocumentsGetDocumentsResponse200CreatedBy**](DocumentsGetDocumentsResponse200CreatedBy.md) |  | [optional] 
**beta_capability_ids** | **list[str]** | Onshape internal use | [optional] 
**owner** | [**DocumentsCreateDocumentResponse200Owner**](DocumentsCreateDocumentResponse200Owner.md) |  | [optional] 
**modified_by** | [**DocumentsGetDocumentsResponse200ModifiedBy**](DocumentsGetDocumentsResponse200ModifiedBy.md) |  | [optional] 
**default_workspace** | [**DocumentsCreateDocumentResponse200DefaultWorkspace**](DocumentsCreateDocumentResponse200DefaultWorkspace.md) |  | [optional] 
**trash** | **bool** | Whether document has been trashed | [optional] 
**public** | **bool** | Whether document is public | [optional] 
**created_at** | **datetime** | Creation date | [optional] 
**name** | **str** | Name of document | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


