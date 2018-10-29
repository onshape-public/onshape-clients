# DocumentsGetAclResponse200

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**name** | **str** | Not used | [optional] 
**object_id** | **str** | The ID of the object | [optional] 
**is_public** | **bool** | True if the object is public | [optional] 
**shared_with_support** | **bool** | True if the object is shared with support | [optional] 
**visibility** | **str** | A description string indicating whether the object is public or private | [optional] 
**inherited_acls** | [**list[DocumentsShareDocumentResponse200InheritedAcls]**](DocumentsShareDocumentResponse200InheritedAcls.md) | A list of parent objects from which this object inherits access       rights. Parent objects are currently always folders | [optional] 
**is_admin** | **bool** | True if the requesting user has RESHARE privileges on the object.      If set to false, entries that do not relate to the caller are removed from the output. | [optional] 
**href** | **str** | A URL referencing the API to get this structure | [optional] 
**entries** | [**list[DocumentsShareDocumentResponse200Entries1]**](DocumentsShareDocumentResponse200Entries1.md) | The current share entries for the object. Each share entry indicates      an entity that the object is shared with and the permissions granted to the entity | [optional] 
**owner** | [**DocumentsShareDocumentResponse200Owner1**](DocumentsShareDocumentResponse200Owner1.md) |  | [optional] 
**id** | **str** | Not used | [optional] 
**object_type** | **float** | Set to the value 1, indicating the the objectId indicates a document,       or 4, indicating that the objectId indicates a folder | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


