# InlineResponse20045

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**is_public** | **bool** | True if the object is public | [optional] 
**is_admin** | **bool** | True if the requesting user has RESHARE privileges on the object.      If set to false, entries that do not relate to the caller are removed from the output. | [optional] 
**shared_with_support** | **bool** | True if the object is shared with support | [optional] 
**visibility** | **str** | A description string indicating whether the object is public or private | [optional] 
**entries** | [**list[InlineResponse20045Entries]**](InlineResponse20045Entries.md) | The current share entries for the object. Each share entry indicates      an entity that the object is shared with and the permissions granted to the entity | [optional] 
**object_id** | **str** | The ID of the object | [optional] 
**object_type** | **float** | Set to the value 1, indicating the the objectId indicates a document,       or 4, indicating that the objectId indicates a folder | [optional] 
**owner** | [**InlineResponse20045Owner**](InlineResponse20045Owner.md) |  | [optional] 
**id** | **str** | Not used | [optional] 
**name** | **str** | Not used | [optional] 
**href** | **str** | A URL referencing the API to get this structure | [optional] 
**inherited_acls** | [**list[InlineResponse20045InheritedAcls]**](InlineResponse20045InheritedAcls.md) | A list of parent objects from which this object inherits access       rights. Parent objects are currently always folders | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


