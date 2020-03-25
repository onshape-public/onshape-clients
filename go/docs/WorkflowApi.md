# \WorkflowApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GetActiveWorkflows**](WorkflowApi.md#GetActiveWorkflows) | **Get** /api/workflow/active | 



## GetActiveWorkflows

> BtActiveWorkflowInfo GetActiveWorkflows(ctx, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
 **optional** | ***GetActiveWorkflowsOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetActiveWorkflowsOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **documentId** | **optional.String**|  | [default to ]

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

