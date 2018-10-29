# DocumentsShareDocumentResponse200Entries

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pending_owner_transfer** | **bool** | For internal use | [optional] 
**name** | **str** | The name of the entity that the document is shared with | [optional] 
**object_id** | **str** | The ID of the parent folder | [optional] 
**permission** | **float** | Obsolete | [optional] 
**image** | **str** | For internal use | [optional] 
**email** | **str** | The email of the user, if the entryType is USER. | [optional] 
**permission_set** | **list[str]** | The permissions for the parent folder that      have been granted to the entity. | [optional] 
**entry_id** | **str** | The ID of the entity to which this entry corresponds | [optional] 
**entry_type** | **float** | The type of entity to which the share entry      applies. Possible values include  0&#x3D;User, 1&#x3D;Company, 2&#x3D;Team, 3&#x3D;&lt;Reserved&gt;, 4&#x3D;Application | [optional] 
**accept_owner_transfer** | **bool** | For internal use | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


