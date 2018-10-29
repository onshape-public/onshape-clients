# DocumentsShareDocumentBodyEntries

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**company_id** | **str** | The ID of an Onshape Company to share with | [optional] 
**user_id** | **str** | The ID of an Onshape User to share with | [optional] 
**entry_type** | **str** | The type of entity that whe are sharing with. Valid values are      0&#x3D;User (specify userId or email), 1&#x3D;Company, 2&#x3D;Team, 4&#x3D;Application. Must correspond to the id field populated. | [optional] 
**team_id** | **str** | The ID of an Onshape Team to share with | [optional] 
**application_id** | **str** | The ID of an Onshape Application to share with.     Note that application sharing only allows READ to be specified as a permission. | [optional] 
**email** | **str** | The email of a user to share with. If the email is not     associated with an existing Onshape user, an invite email will be sent to the email address if update&#x3D;false,     otherwise the response will be a NOT FOUND error. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


