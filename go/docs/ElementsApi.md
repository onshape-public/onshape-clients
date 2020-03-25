# \ElementsApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CopyElementFromSourceDocument**](ElementsApi.md#CopyElementFromSourceDocument) | **Post** /api/elements/copyelement/{did}/workspace/{wid} | Copy Element
[**DecodeConfiguration**](ElementsApi.md#DecodeConfiguration) | **Get** /api/elements/d/{did}/{wvm}/{wvmid}/e/{eid}/configurationencodings/{cid} | Decode Configuration String
[**DeleteElement**](ElementsApi.md#DeleteElement) | **Delete** /api/elements/d/{did}/w/{wid}/e/{eid} | Delete Element
[**EncodeConfigurationMap**](ElementsApi.md#EncodeConfigurationMap) | **Post** /api/elements/d/{did}/e/{eid}/configurationencodings | Encode Configuration
[**GetConfiguration**](ElementsApi.md#GetConfiguration) | **Get** /api/elements/d/{did}/{wvm}/{wvmid}/e/{eid}/configuration | Get Configuration
[**GetElementTranslatorFormatsByVersionOrWorkspace**](ElementsApi.md#GetElementTranslatorFormatsByVersionOrWorkspace) | **Get** /api/elements/translatorFormats/{did}/{wv}/{wvid}/{eid} | Get Element Translator Formats
[**UpdateConfiguration**](ElementsApi.md#UpdateConfiguration) | **Post** /api/elements/d/{did}/{wvm}/{wvmid}/e/{eid}/configuration | Update Configuration
[**UpdateReferences**](ElementsApi.md#UpdateReferences) | **Post** /api/elements/d/{did}/w/{wid}/e/{eid}/updatereferences | Update or replace node references



## CopyElementFromSourceDocument

> BtDocumentElementInfo CopyElementFromSourceDocument(ctx, did, wid, btCopyElementParams)

Copy Element

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wid** | **string**|  | 
**btCopyElementParams** | [**BtCopyElementParams**](BtCopyElementParams.md)|  | 

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


## DecodeConfiguration

> BtConfigurationInfo DecodeConfiguration(ctx, did, wvm, wvmid, eid, cid, optional)

Decode Configuration String

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
**cid** | **string**|  | 
 **optional** | ***DecodeConfigurationOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a DecodeConfigurationOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------





 **linkDocumentId** | **optional.String**|  | 
 **includeDisplay** | **optional.Bool**|  | [default to false]
 **configurationIsId** | **optional.Bool**|  | [default to false]

### Return type

[**BtConfigurationInfo**](BTConfigurationInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## DeleteElement

> DeleteElement(ctx, did, wid, eid)

Delete Element

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wid** | **string**|  | 
**eid** | **string**|  | 

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


## EncodeConfigurationMap

> BtEncodedConfigurationInfo EncodeConfigurationMap(ctx, did, eid, btConfigurationParams, optional)

Encode Configuration

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**eid** | **string**|  | 
**btConfigurationParams** | [**BtConfigurationParams**](BtConfigurationParams.md)|  | 
 **optional** | ***EncodeConfigurationMapOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a EncodeConfigurationMapOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------



 **versionId** | **optional.String**|  | 
 **linkDocumentId** | **optional.String**|  | 

### Return type

[**BtEncodedConfigurationInfo**](BTEncodedConfigurationInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetConfiguration

> BtConfigurationInfo GetConfiguration(ctx, did, wvm, wvmid, eid)

Get Configuration

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 

### Return type

[**BtConfigurationInfo**](BTConfigurationInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetElementTranslatorFormatsByVersionOrWorkspace

> []BtModelFormatInfo GetElementTranslatorFormatsByVersionOrWorkspace(ctx, did, wv, wvid, eid, optional)

Get Element Translator Formats

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wv** | **string**|  | 
**wvid** | **string**|  | 
**eid** | **string**|  | 
 **optional** | ***GetElementTranslatorFormatsByVersionOrWorkspaceOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetElementTranslatorFormatsByVersionOrWorkspaceOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **checkContent** | **optional.Bool**|  | [default to true]
 **configuration** | **optional.String**|  | [default to ]

### Return type

[**[]BtModelFormatInfo**](BTModelFormatInfo.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpdateConfiguration

> BtConfigurationInfo UpdateConfiguration(ctx, did, wvm, wvmid, eid, optional)

Update Configuration

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
 **optional** | ***UpdateConfigurationOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a UpdateConfigurationOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **body** | **optional.String**|  | 

### Return type

[**BtConfigurationInfo**](BTConfigurationInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpdateReferences

> UpdateReferences(ctx, did, wid, eid, btUpdateReferenceParams)

Update or replace node references

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wid** | **string**|  | 
**eid** | **string**|  | 
**btUpdateReferenceParams** | [**BtUpdateReferenceParams**](BtUpdateReferenceParams.md)|  | 

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

