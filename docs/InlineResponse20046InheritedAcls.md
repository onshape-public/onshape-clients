# InlineResponse20046InheritedAcls

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**object_id** | **str** | The ID of the parent folder that contributes access rights | [optional] 
**object_type** | **float** | Set to the value 4, indicating the the objectId       identifies a folder | [optional] 
**object_name** | **float** | The name of the parent object | [optional] 
**visibility** | **str** | A description string indicating whether the folder is       public or private. Currently always private | [optional] 
**entries** | [**list[InlineResponse20046Entries1]**](InlineResponse20046Entries1.md) | The current share entries for the parent folder. Each share      entry indicates an entity that the folder and contained objects are shared with and the permissions granted      to the entity | [optional] 
**owner** | [**InlineResponse20046Owner1**](InlineResponse20046Owner1.md) |  | [optional] 
**id** | **str** | Not used | [optional] 
**name** | **str** | Not used | [optional] 
**href** | **str** | A URL referencing the API to get this structure | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


