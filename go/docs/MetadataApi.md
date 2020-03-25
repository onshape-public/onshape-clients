# \MetadataApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GetVEOPStandardContentMetadata**](MetadataApi.md#GetVEOPStandardContentMetadata) | **Get** /api/metadata/standardcontent/d/{did}/v/{vid}/e/{eid}/{otype}/{oid}/p/{pid} | 
[**GetWMVEMetadata**](MetadataApi.md#GetWMVEMetadata) | **Get** /api/metadata/d/{did}/{wvm}/{wvmid}/e/{eid} | 
[**GetWMVEPMetadata**](MetadataApi.md#GetWMVEPMetadata) | **Get** /api/metadata/d/{did}/{wvm}/{wvmid}/e/{eid}/p/{pid} | 
[**GetWMVEPsMetadata**](MetadataApi.md#GetWMVEPsMetadata) | **Get** /api/metadata/d/{did}/{wvm}/{wvmid}/e/{eid}/p | 
[**GetWMVEsMetadata**](MetadataApi.md#GetWMVEsMetadata) | **Get** /api/metadata/d/{did}/{wvm}/{wvmid}/e | 
[**GetWVMetadata**](MetadataApi.md#GetWVMetadata) | **Get** /api/metadata/d/{did}/{wv}/{wvid} | 
[**UpdateVEOPStandardContentPartMetadata**](MetadataApi.md#UpdateVEOPStandardContentPartMetadata) | **Post** /api/metadata/standardcontent/d/{did}/v/{vid}/e/{eid}/{otype}/{oid}/p/{pid} | 
[**UpdateWVEMetadata**](MetadataApi.md#UpdateWVEMetadata) | **Post** /api/metadata/d/{did}/{wvm}/{wvmid}/e/{eid} | 
[**UpdateWVEPMetadata**](MetadataApi.md#UpdateWVEPMetadata) | **Post** /api/metadata/d/{did}/{wvm}/{wvmid}/e/{eid}/p/{pid} | 
[**UpdateWVMetadata**](MetadataApi.md#UpdateWVMetadata) | **Post** /api/metadata/d/{did}/{wv}/{wvid} | 



## GetVEOPStandardContentMetadata

> GetVEOPStandardContentMetadata(ctx, did, vid, eid, otype, oid, pid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**vid** | **string**|  | 
**eid** | **string**|  | 
**otype** | **string**|  | 
**oid** | **string**|  | 
**pid** | **string**|  | 
 **optional** | ***GetVEOPStandardContentMetadataOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetVEOPStandardContentMetadataOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------






 **configuration** | **optional.String**|  | 
 **linkDocumentId** | **optional.String**|  | 

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


## GetWMVEMetadata

> GetWMVEMetadata(ctx, did, wvm, wvmid, eid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
 **optional** | ***GetWMVEMetadataOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetWMVEMetadataOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **configuration** | **optional.String**|  | 
 **linkDocumentId** | **optional.String**|  | 
 **inferMetadataOwner** | **optional.Bool**|  | [default to false]

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


## GetWMVEPMetadata

> GetWMVEPMetadata(ctx, did, wvm, wvmid, eid, pid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
**pid** | **string**|  | 
 **optional** | ***GetWMVEPMetadataOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetWMVEPMetadataOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------





 **configuration** | **optional.String**|  | 
 **linkDocumentId** | **optional.String**|  | 
 **inferMetadataOwner** | **optional.Bool**|  | [default to false]

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


## GetWMVEPsMetadata

> GetWMVEPsMetadata(ctx, did, wvm, wvmid, eid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
 **optional** | ***GetWMVEPsMetadataOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetWMVEPsMetadataOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **configuration** | **optional.String**|  | 
 **linkDocumentId** | **optional.String**|  | 
 **inferMetadataOwner** | **optional.Bool**|  | [default to false]

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


## GetWMVEsMetadata

> GetWMVEsMetadata(ctx, did, wvm, wvmid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
 **optional** | ***GetWMVEsMetadataOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetWMVEsMetadataOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------



 **linkDocumentId** | **optional.String**|  | 
 **inferMetadataOwner** | **optional.Bool**|  | [default to false]

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


## GetWVMetadata

> GetWVMetadata(ctx, did, wv, wvid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wv** | **string**|  | 
**wvid** | **string**|  | 
 **optional** | ***GetWVMetadataOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetWVMetadataOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------



 **linkDocumentId** | **optional.String**|  | 
 **inferMetadataOwner** | **optional.Bool**|  | [default to false]

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


## UpdateVEOPStandardContentPartMetadata

> UpdateVEOPStandardContentPartMetadata(ctx, did, vid, eid, otype, oid, pid, body, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**vid** | **string**|  | 
**eid** | **string**|  | 
**otype** | **string**|  | 
**oid** | **string**|  | 
**pid** | **string**|  | 
**body** | **string**|  | 
 **optional** | ***UpdateVEOPStandardContentPartMetadataOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a UpdateVEOPStandardContentPartMetadataOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------







 **linkDocumentId** | **optional.String**|  | 

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


## UpdateWVEMetadata

> UpdateWVEMetadata(ctx, did, wvm, wvmid, eid, body, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
**body** | **string**|  | 
 **optional** | ***UpdateWVEMetadataOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a UpdateWVEMetadataOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------





 **configuration** | **optional.String**|  | 

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


## UpdateWVEPMetadata

> UpdateWVEPMetadata(ctx, did, wvm, wvmid, eid, pid, subResource, body, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
**pid** | **string**|  | 
**subResource** | **string**|  | 
**body** | **string**|  | 
 **optional** | ***UpdateWVEPMetadataOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a UpdateWVEPMetadataOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------







 **configuration** | **optional.String**|  | 

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


## UpdateWVMetadata

> UpdateWVMetadata(ctx, did, wv, wvid, body)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wv** | **string**|  | 
**wvid** | **string**|  | 
**body** | **string**|  | 

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

