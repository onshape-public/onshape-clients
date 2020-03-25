# \CompaniesApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**FindCompany**](CompaniesApi.md#FindCompany) | **Get** /api/companies | Get User companies.
[**GetCompany**](CompaniesApi.md#GetCompany) | **Get** /api/companies/{cid} | Get company.



## FindCompany

> BtListResponseBtCompanyInfo FindCompany(ctx, optional)

Get User companies.

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
 **optional** | ***FindCompanyOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a FindCompanyOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uid** | **optional.String**|  | 
 **activeOnly** | **optional.Bool**|  | [default to true]
 **includeAll** | **optional.Bool**|  | [default to false]

### Return type

[**BtListResponseBtCompanyInfo**](BTListResponseBTCompanyInfo.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetCompany

> BtCompanyInfo GetCompany(ctx, cid)

Get company.

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**cid** | **string**|  | 

### Return type

[**BtCompanyInfo**](BTCompanyInfo.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

