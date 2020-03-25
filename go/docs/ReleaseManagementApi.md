# \ReleaseManagementApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CreateObsoletionPackage**](ReleaseManagementApi.md#CreateObsoletionPackage) | **Post** /api/releasepackages/obsoletion/{wfid} | 
[**CreateReleasePackage**](ReleaseManagementApi.md#CreateReleasePackage) | **Post** /api/releasepackages/release/{wfid} | 
[**GetCompanyReleaseWorkflow**](ReleaseManagementApi.md#GetCompanyReleaseWorkflow) | **Get** /api/releasepackages/companyreleaseworkflow | 
[**GetReleasePackage**](ReleaseManagementApi.md#GetReleasePackage) | **Get** /api/releasepackages/{rpid} | 
[**UpdateReleasePackage**](ReleaseManagementApi.md#UpdateReleasePackage) | **Post** /api/releasepackages/{rpid} | 



## CreateObsoletionPackage

> CreateObsoletionPackage(ctx, wfid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**wfid** | **string**|  | 
 **optional** | ***CreateObsoletionPackageOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a CreateObsoletionPackageOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **revisionId** | **optional.String**|  | 

### Return type

 (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## CreateReleasePackage

> CreateReleasePackage(ctx, wfid, btReleasePackageParams)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**wfid** | **string**|  | 
**btReleasePackageParams** | [**BtReleasePackageParams**](BtReleasePackageParams.md)|  | 

### Return type

 (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetCompanyReleaseWorkflow

> BtActiveWorkflowInfo GetCompanyReleaseWorkflow(ctx, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
 **optional** | ***GetCompanyReleaseWorkflowOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetCompanyReleaseWorkflowOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **documentId** | **optional.String**|  | 

### Return type

[**BtActiveWorkflowInfo**](BTActiveWorkflowInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetReleasePackage

> BtReleasePackageInfo GetReleasePackage(ctx, rpid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**rpid** | **string**|  | 
 **optional** | ***GetReleasePackageOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetReleasePackageOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **detailed** | **optional.Bool**|  | [default to false]

### Return type

[**BtReleasePackageInfo**](BTReleasePackageInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpdateReleasePackage

> BtReleasePackageInfo UpdateReleasePackage(ctx, rpid, btUpdateReleasePackageParams, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**rpid** | **string**|  | 
**btUpdateReleasePackageParams** | [**BtUpdateReleasePackageParams**](BtUpdateReleasePackageParams.md)|  | 
 **optional** | ***UpdateReleasePackageOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a UpdateReleasePackageOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


 **action** | **optional.String**|  | [default to UPDATE]
 **wfaction** | **optional.String**|  | 

### Return type

[**BtReleasePackageInfo**](BTReleasePackageInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

