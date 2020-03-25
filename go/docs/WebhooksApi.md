# \WebhooksApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CreateWebhook**](WebhooksApi.md#CreateWebhook) | **Post** /api/webhooks | 
[**GetWebhook**](WebhooksApi.md#GetWebhook) | **Get** /api/webhooks/{webhookid} | 
[**GetWebhooks**](WebhooksApi.md#GetWebhooks) | **Get** /api/webhooks | 
[**PingWebhook**](WebhooksApi.md#PingWebhook) | **Post** /api/webhooks/{webhookid}/ping | 
[**UnregisterWebhook**](WebhooksApi.md#UnregisterWebhook) | **Delete** /api/webhooks/{webhookid} | 
[**UpdateWebhook**](WebhooksApi.md#UpdateWebhook) | **Post** /api/webhooks/{webhookid} | 



## CreateWebhook

> BtWebhookInfo CreateWebhook(ctx, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
 **optional** | ***CreateWebhookOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a CreateWebhookOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **btWebhookParams** | [**optional.Interface of BtWebhookParams**](BtWebhookParams.md)|  | 

### Return type

[**BtWebhookInfo**](BTWebhookInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetWebhook

> BtWebhookInfo GetWebhook(ctx, webhookid)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**webhookid** | **string**|  | 

### Return type

[**BtWebhookInfo**](BTWebhookInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetWebhooks

> BtListResponseBtWebhookInfo GetWebhooks(ctx, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
 **optional** | ***GetWebhooksOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetWebhooksOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **company** | **optional.String**|  | [default to ]
 **user** | **optional.String**|  | 
 **offset** | **optional.Int32**|  | [default to 0]
 **limit** | **optional.Int32**|  | [default to 20]

### Return type

[**BtListResponseBtWebhookInfo**](BTListResponseBTWebhookInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## PingWebhook

> PingWebhook(ctx, webhookid)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**webhookid** | **string**|  | 

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


## UnregisterWebhook

> UnregisterWebhook(ctx, webhookid)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**webhookid** | **string**|  | 

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


## UpdateWebhook

> BtWebhookInfo UpdateWebhook(ctx, webhookid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**webhookid** | **string**|  | 
 **optional** | ***UpdateWebhookOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a UpdateWebhookOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **btWebhookParams** | [**optional.Interface of BtWebhookParams**](BtWebhookParams.md)|  | 

### Return type

[**BtWebhookInfo**](BTWebhookInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

