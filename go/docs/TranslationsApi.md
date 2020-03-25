# \TranslationsApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CreateTranslation**](TranslationsApi.md#CreateTranslation) | **Post** /api/translations/d/{did}/w/{wid} | 
[**DeleteTranslation**](TranslationsApi.md#DeleteTranslation) | **Delete** /api/translations/{tid} | 
[**GetAllTranslatorFormats**](TranslationsApi.md#GetAllTranslatorFormats) | **Get** /api/translations/translationformats | 
[**GetDocumentTranslations**](TranslationsApi.md#GetDocumentTranslations) | **Get** /api/translations/d/{did} | 
[**GetTranslation**](TranslationsApi.md#GetTranslation) | **Get** /api/translations/{tid} | 



## CreateTranslation

> BtTranslationRequestInfo CreateTranslation(ctx, did, wid)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wid** | **string**|  | 

### Return type

[**BtTranslationRequestInfo**](BTTranslationRequestInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## DeleteTranslation

> DeleteTranslation(ctx, tid)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**tid** | **string**|  | 

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


## GetAllTranslatorFormats

> []BtModelFormatFullInfo GetAllTranslatorFormats(ctx, )



### Required Parameters

This endpoint does not need any parameter.

### Return type

[**[]BtModelFormatFullInfo**](BTModelFormatFullInfo.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetDocumentTranslations

> BtListResponseBtTranslationRequestInfo GetDocumentTranslations(ctx, did, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
 **optional** | ***GetDocumentTranslationsOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetDocumentTranslationsOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **offset** | **optional.Int32**|  | [default to 0]
 **limit** | **optional.Int32**|  | [default to 20]

### Return type

[**BtListResponseBtTranslationRequestInfo**](BTListResponseBTTranslationRequestInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetTranslation

> BtTranslationRequestInfo GetTranslation(ctx, tid)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**tid** | **string**|  | 

### Return type

[**BtTranslationRequestInfo**](BTTranslationRequestInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

