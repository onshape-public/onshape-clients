# \RevisionsApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**EnumerateRevisions**](RevisionsApi.md#EnumerateRevisions) | **Get** /api/revisions/companies/{cid} | 
[**GetLatestInDocumentOrCompany**](RevisionsApi.md#GetLatestInDocumentOrCompany) | **Get** /api/revisions/{cd}/{cdid}/p/{pnum}/latest | 
[**GetRevisionHistoryInCompany**](RevisionsApi.md#GetRevisionHistoryInCompany) | **Get** /api/revisions/companies/{cid}/partnumber/{pnum} | 



## EnumerateRevisions

> BtListResponseBtRevisionInfo EnumerateRevisions(ctx, cid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**cid** | **string**|  | 
 **optional** | ***EnumerateRevisionsOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a EnumerateRevisionsOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **elementType** | **optional.Int32**|  | 
 **limit** | **optional.Int32**|  | [default to 20]
 **offset** | **optional.Int32**|  | [default to 0]
 **latestOnly** | **optional.Bool**|  | [default to false]
 **after** | **optional.Int64**|  | 

### Return type

[**BtListResponseBtRevisionInfo**](BTListResponseBTRevisionInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetLatestInDocumentOrCompany

> BtRevisionInfo GetLatestInDocumentOrCompany(ctx, cd, cdid, pnum, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**cd** | **string**|  | 
**cdid** | **string**|  | 
**pnum** | **string**|  | 
 **optional** | ***GetLatestInDocumentOrCompanyOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetLatestInDocumentOrCompanyOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------



 **et** | **optional.String**|  | 

### Return type

[**BtRevisionInfo**](BTRevisionInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetRevisionHistoryInCompany

> BtListResponseBtRevisionInfo GetRevisionHistoryInCompany(ctx, cid, pnum, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**cid** | **string**|  | 
**pnum** | **string**|  | 
 **optional** | ***GetRevisionHistoryInCompanyOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetRevisionHistoryInCompanyOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


 **elementType** | **optional.String**|  | 
 **fillApprovers** | **optional.Bool**|  | [default to false]
 **fillExportPermission** | **optional.Bool**|  | [default to false]

### Return type

[**BtListResponseBtRevisionInfo**](BTListResponseBTRevisionInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

