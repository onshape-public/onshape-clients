# \DrawingsApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CreateDrawingAppElement**](DrawingsApi.md#CreateDrawingAppElement) | **Post** /api/drawings/create | 
[**CreateDrawingTranslation**](DrawingsApi.md#CreateDrawingTranslation) | **Post** /api/drawings/d/{did}/{wv}/{wvid}/e/{eid}/translations | Create Drawing translation
[**GetDrawingTranslatorFormats**](DrawingsApi.md#GetDrawingTranslatorFormats) | **Get** /api/drawings/d/{did}/w/{wid}/e/{eid}/translationformats | 



## CreateDrawingAppElement

> BtDocumentElementInfo CreateDrawingAppElement(ctx, btDrawingParams)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**btDrawingParams** | [**BtDrawingParams**](BtDrawingParams.md)|  | 

### Return type

[**BtDocumentElementInfo**](BTDocumentElementInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## CreateDrawingTranslation

> BtTranslationRequestInfo CreateDrawingTranslation(ctx, did, wv, wvid, eid, btTranslateFormatParams)

Create Drawing translation

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wv** | **string**|  | 
**wvid** | **string**|  | 
**eid** | **string**|  | 
**btTranslateFormatParams** | [**BtTranslateFormatParams**](BtTranslateFormatParams.md)|  | 

### Return type

[**BtTranslationRequestInfo**](BTTranslationRequestInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetDrawingTranslatorFormats

> []BtModelFormatInfo GetDrawingTranslatorFormats(ctx, did, wid, eid)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wid** | **string**|  | 
**eid** | **string**|  | 

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

