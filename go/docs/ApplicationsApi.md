# \ApplicationsApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**DeleteAppSettings**](ApplicationsApi.md#DeleteAppSettings) | **Delete** /api/applications/clients/{cid}/settings/users/{uid} | Delete Application Settings
[**GetUserAppSettings**](ApplicationsApi.md#GetUserAppSettings) | **Get** /api/applications/clients/{cid}/settings/users/{uid} | Get User Application Settings
[**UpdateAppSettings**](ApplicationsApi.md#UpdateAppSettings) | **Post** /api/applications/clients/{cid}/settings/users/{uid} | Update Application Settings



## DeleteAppSettings

> DeleteAppSettings(ctx, uid, cid, optional)

Delete Application Settings

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**uid** | **string**|  | 
**cid** | **string**|  | 
 **optional** | ***DeleteAppSettingsOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a DeleteAppSettingsOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


 **key** | [**optional.Interface of []string**](string.md)|  | 

### Return type

 (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetUserAppSettings

> BtUserAppSettingsInfo GetUserAppSettings(ctx, uid, cid, optional)

Get User Application Settings

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**uid** | **string**|  | 
**cid** | **string**|  | 
 **optional** | ***GetUserAppSettingsOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetUserAppSettingsOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


 **key** | [**optional.Interface of []string**](string.md)|  | 

### Return type

[**BtUserAppSettingsInfo**](BTUserAppSettingsInfo.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpdateAppSettings

> UpdateAppSettings(ctx, uid, cid, btUserAppSettingsParams)

Update Application Settings

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**uid** | **string**|  | 
**cid** | **string**|  | 
**btUserAppSettingsParams** | [**BtUserAppSettingsParams**](BtUserAppSettingsParams.md)|  | 

### Return type

 (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

