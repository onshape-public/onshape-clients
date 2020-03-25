# \UsersApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GetUserSettings**](UsersApi.md#GetUserSettings) | **Get** /api/users/{uid}/settings | 
[**GetUserSettingsCurrentLoggedInUser**](UsersApi.md#GetUserSettingsCurrentLoggedInUser) | **Get** /api/users/settings | 
[**SessionInfo**](UsersApi.md#SessionInfo) | **Get** /api/users/sessioninfo | 



## GetUserSettings

> BtUserSettingsInfo GetUserSettings(ctx, uid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**uid** | **string**|  | 
 **optional** | ***GetUserSettingsOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetUserSettingsOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **includematerials** | **optional.Bool**|  | [default to true]

### Return type

[**BtUserSettingsInfo**](BTUserSettingsInfo.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetUserSettingsCurrentLoggedInUser

> BtUserSettingsInfo GetUserSettingsCurrentLoggedInUser(ctx, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
 **optional** | ***GetUserSettingsCurrentLoggedInUserOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetUserSettingsCurrentLoggedInUserOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **includematerials** | **optional.Bool**|  | [default to true]

### Return type

[**BtUserSettingsInfo**](BTUserSettingsInfo.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## SessionInfo

> BtUserOAuth2SummaryInfo SessionInfo(ctx, )



### Required Parameters

This endpoint does not need any parameter.

### Return type

[**BtUserOAuth2SummaryInfo**](BTUserOAuth2SummaryInfo.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

