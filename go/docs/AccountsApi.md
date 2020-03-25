# \AccountsApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CancelPurchaseNew**](AccountsApi.md#CancelPurchaseNew) | **Delete** /api/accounts/{aid}/purchases/{pid} | Cancel Recurring Subscription
[**ConsumePurchase**](AccountsApi.md#ConsumePurchase) | **Post** /api/accounts/purchases/{pid}/consume | Mark Purchase Consumed For User
[**GetPlanPurchases**](AccountsApi.md#GetPlanPurchases) | **Get** /api/accounts/plans/{planId}/purchases | Get Plan Purchases
[**GetPurchases**](AccountsApi.md#GetPurchases) | **Get** /api/accounts/purchases | Get User&#39;s Appstore Purchases.



## CancelPurchaseNew

> CancelPurchaseNew(ctx, aid, pid, optional)

Cancel Recurring Subscription

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**aid** | **string**|  | 
**pid** | **string**|  | 
 **optional** | ***CancelPurchaseNewOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a CancelPurchaseNewOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


 **cancelImmediately** | **optional.Bool**|  | [default to false]

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


## ConsumePurchase

> BtPurchaseInfo ConsumePurchase(ctx, pid, optional)

Mark Purchase Consumed For User

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**pid** | **string**|  | 
 **optional** | ***ConsumePurchaseOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a ConsumePurchaseOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **btPurchaseUserParams** | [**optional.Interface of BtPurchaseUserParams**](BtPurchaseUserParams.md)|  | 

### Return type

[**BtPurchaseInfo**](BTPurchaseInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetPlanPurchases

> BtListResponseBtPurchaseInfo GetPlanPurchases(ctx, planId, optional)

Get Plan Purchases

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**planId** | **string**|  | 
 **optional** | ***GetPlanPurchasesOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetPlanPurchasesOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **offset** | **optional.Int32**|  | [default to 0]
 **limit** | **optional.Int32**|  | [default to 20]

### Return type

[**BtListResponseBtPurchaseInfo**](BTListResponseBTPurchaseInfo.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetPurchases

> []BtPurchaseInfo GetPurchases(ctx, optional)

Get User's Appstore Purchases.

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
 **optional** | ***GetPurchasesOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetPurchasesOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **all** | **optional.Bool**|  | [default to false]
 **ownPurchaseOnly** | **optional.Bool**|  | [default to false]

### Return type

[**[]BtPurchaseInfo**](BTPurchaseInfo.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

