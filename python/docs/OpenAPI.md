# open_api.OpenAPI

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**openapi** | **str** |  | [optional] 
**info** | [**info.Info**](Info.md) |  | [optional] 
**external_docs** | [**external_documentation.ExternalDocumentation**](ExternalDocumentation.md) |  | [optional] 
**servers** | [**[server.Server]**](Server.md) |  | [optional] 
**security** | [**[security_requirement.SecurityRequirement]**](SecurityRequirement.md) |  | [optional] 
**tags** | [**[tag.Tag]**](Tag.md) |  | [optional] 
**paths** | [**{str: (path_item.PathItem,)}**](PathItem.md) |  | [optional] 
**components** | [**components.Components**](Components.md) |  | [optional] 
**extensions** | **{str: (bool, date, datetime, dict, float, int, list, str,)}** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


