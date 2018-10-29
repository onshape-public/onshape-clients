# InlineResponse20046Entries1

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**object_id** | **str** | The ID of the parent folder | 
**entry_id** | **str** | The ID of the entity to which this entry corresponds | 
**entry_type** | **float** | The type of entity to which the share entry      applies. Possible values include  0&#x3D;User, 1&#x3D;Company, 2&#x3D;Team, 3&#x3D;&lt;Reserved&gt;, 4&#x3D;Application | 
**email** | **str** | The email of the user, if the entryType is USER. | 
**name** | **str** | The name of the entity that the document is shared with | 
**permission_set** | **list[str]** | The permissions for the parent folder that      have been granted to the entity. | 
**permission** | **float** | Obsolete | 
**image** | **str** | For internal use | 
**pending_owner_transfer** | **bool** | For internal use | 
**accept_owner_transfer** | **bool** | For internal use | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


