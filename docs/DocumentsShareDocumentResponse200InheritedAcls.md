# DocumentsShareDocumentResponse200InheritedAcls

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**object_id** | **str** | The ID of the parent folder that contributes access rights | [optional] 
**object_name** | **float** | The name of the parent object | [optional] 
**visibility** | **str** | A description string indicating whether the folder is       public or private. Currently always private | [optional] 
**name** | **str** | Not used | [optional] 
**href** | **str** | A URL referencing the API to get this structure | [optional] 
**entries** | [**list[DocumentsShareDocumentResponse200Entries]**](DocumentsShareDocumentResponse200Entries.md) | The current share entries for the parent folder. Each share      entry indicates an entity that the folder and contained objects are shared with and the permissions granted      to the entity | [optional] 
**owner** | [**DocumentsShareDocumentResponse200Owner**](DocumentsShareDocumentResponse200Owner.md) |  | [optional] 
**id** | **str** | Not used | [optional] 
**object_type** | **float** | Set to the value 4, indicating the the objectId       identifies a folder | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


