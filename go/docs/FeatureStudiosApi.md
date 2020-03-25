# \FeatureStudiosApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CreateFeatureStudio**](FeatureStudiosApi.md#CreateFeatureStudio) | **Post** /api/featurestudios/d/{did}/w/{wid} | Create Feature Studio
[**GetFeatureStudioContents**](FeatureStudiosApi.md#GetFeatureStudioContents) | **Get** /api/featurestudios/d/{did}/{wvm}/{wvmid}/e/{eid} | Get Feature Studio Contents.
[**GetFeatureStudioSpecs**](FeatureStudiosApi.md#GetFeatureStudioSpecs) | **Get** /api/featurestudios/d/{did}/{wvm}/{wvmid}/e/{eid}/featurespecs | Get Feature Studio Specs
[**UpdateFeatureStudioContents**](FeatureStudiosApi.md#UpdateFeatureStudioContents) | **Post** /api/featurestudios/d/{did}/{wvm}/{wvmid}/e/{eid} | Update Feature Studio contents



## CreateFeatureStudio

> BtDocumentElementInfo CreateFeatureStudio(ctx, did, wid, btModelElementParams)

Create Feature Studio

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wid** | **string**|  | 
**btModelElementParams** | [**BtModelElementParams**](BtModelElementParams.md)|  | 

### Return type

[**BtDocumentElementInfo**](BTDocumentElementInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetFeatureStudioContents

> BtFeatureStudioContents2239 GetFeatureStudioContents(ctx, did, wvm, wvmid, eid)

Get Feature Studio Contents.

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 

### Return type

[**BtFeatureStudioContents2239**](BTFeatureStudioContents-2239.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetFeatureStudioSpecs

> BtFeatureSpecsResponse664 GetFeatureStudioSpecs(ctx, did, wvm, wvmid, eid)

Get Feature Studio Specs

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 

### Return type

[**BtFeatureSpecsResponse664**](BTFeatureSpecsResponse-664.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpdateFeatureStudioContents

> BtFeatureStudioContents2239 UpdateFeatureStudioContents(ctx, did, wvm, wvmid, eid, optional)

Update Feature Studio contents

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
 **optional** | ***UpdateFeatureStudioContentsOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a UpdateFeatureStudioContentsOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **body** | **optional.String**|  | 

### Return type

[**BtFeatureStudioContents2239**](BTFeatureStudioContents-2239.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

