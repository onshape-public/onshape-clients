# DocumentsGetAclResponse200Entries

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**object_id** | **str** | The ID of the object | [optional] 
**entry_id** | **str** | The ID of the entity to which this entry corresponds | [optional] 
**entry_type** | **float** | The type of entity to which the share entry applies. Possible      values include  0&#x3D;User, 1&#x3D;Company, 2&#x3D;Team, 3&#x3D;&lt;Reserved&gt;, 4&#x3D;Application | [optional] 
**entry_state** | **str** | The state of user to which the share entry applies, if a user.      Possible states include ACTIVE, INACTIVE, REQUESTED, APPROVED, DELETED, REQUEST_EXPIRED. | [optional] 
**email** | **str** | The email of the user, if the entryType is USER. | [optional] 
**name** | **str** | The name of the entity that the object is shared with | [optional] 
**permission_set** | **list[str]** | The permissions for the object that have been granted      to the entity. | [optional] 
**permission** | **float** | Obsolete | [optional] 
**image** | **str** | For internal use | [optional] 
**pending_owner_transfer** | **bool** | For internal use | [optional] 
**accept_owner_transfer** | **bool** | For internal use | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


