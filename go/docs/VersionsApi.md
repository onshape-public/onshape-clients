# \VersionsApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TestVersionsGet**](VersionsApi.md#TestVersionsGet) | **Get** /api/versions/test | 
[**TestVersionsPost**](VersionsApi.md#TestVersionsPost) | **Post** /api/versions/test | 



## TestVersionsGet

> TestVersionsGet(ctx, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
 **optional** | ***TestVersionsGetOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a TestVersionsGetOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | **optional.String**|  | 

### Return type

 (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## TestVersionsPost

> TestVersionsPost(ctx, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
 **optional** | ***TestVersionsPostOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a TestVersionsPostOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | **optional.String**|  | 

### Return type

 (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

