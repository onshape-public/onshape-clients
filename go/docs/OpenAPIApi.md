# \OpenAPIApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GetOpenApi**](OpenAPIApi.md#GetOpenApi) | **Get** /api/openapi | OpenAPI spec documentation for the Onshape REST API.



## GetOpenApi

> OpenApi GetOpenApi(ctx, optional)

OpenAPI spec documentation for the Onshape REST API.

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
 **optional** | ***GetOpenApiOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetOpenApiOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **excludedTags** | **optional.String**| If an operation contains an excluded tag, it is not returned from this endpoint. | 
 **includedTags** | **optional.String**| Return only operations with tags included in includedTags. | 
 **includeDeprecated** | **optional.Bool**| Include deprecated endpoints. | 
 **documentationStatus** | [**optional.Interface of []string**](string.md)| Only return endpoints that have the specified document status. Default is to return all the endpoints the user should have access to. | 

### Return type

[**OpenApi**](OpenAPI.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v1+yaml;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2, application/json;charset=UTF-8; qs=0.09, application/yaml;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

