# DocumentsShareDocumentBody

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**update** | **bool** | If true, indicates that the request is intended to be an update of existing      share permissions for the entities in the entries list. | [optional] 
**permission_set** | **list[str]** | The permissions to grant to the entities. Must not be empty. The      valid permissions are READ, WRITE, DELETE, RESHARE, COMMENT, LINK, COPY, OWNER. It is an error for a      permission set to be specified that is identical to the current permissions for an entity in the entries      list. | [optional] 
**workspace_id** | **str** | The ID of a workspace for use as the scope of           sharing. Used only to form URLs in a share email to the share recipient. | [optional] 
**document_id** | **str** | The ID of the document to be shared. Must match the document ID specified in           the URL. | [optional] 
**entries** | [**list[DocumentsShareDocumentBodyEntries]**](DocumentsShareDocumentBodyEntries.md) | List of target entities to share with. Must not be empty. | [optional] 
**message** | **str** | An optional message to include in the share email.      This message has a maximum allowed size. | [optional] 
**element_id** | **str** | The ID of an element within the document to share. Used only to form URLs           in a share email to the share recipient. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


