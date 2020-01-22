# operation.Operation

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**tags** | **[str]** |  | [optional] 
**summary** | **str** |  | [optional] 
**description** | **str** |  | [optional] 
**external_docs** | [**external_documentation.ExternalDocumentation**](ExternalDocumentation.md) |  | [optional] 
**operation_id** | **str** |  | [optional] 
**parameters** | [**[parameter.Parameter]**](Parameter.md) |  | [optional] 
**request_body** | [**request_body.RequestBody**](RequestBody.md) |  | [optional] 
**responses** | [**{str: (api_response.ApiResponse,)}**](ApiResponse.md) |  | [optional] 
**callbacks** | [**{str: (callback.Callback,)}**](Callback.md) |  | [optional] 
**deprecated** | **bool** |  | [optional] 
**security** | [**[security_requirement.SecurityRequirement]**](SecurityRequirement.md) |  | [optional] 
**servers** | [**[server.Server]**](Server.md) |  | [optional] 
**extensions** | **{str: (bool, date, datetime, dict, float, int, list, str,)}** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


