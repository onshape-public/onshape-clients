# \AppElementsApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CommitTransaction**](AppElementsApi.md#CommitTransaction) | **Post** /api/appelements/d/{did}/w/{wid}/e/{eid}/transactions/{tid} | Commit Transaction
[**CreateElement**](AppElementsApi.md#CreateElement) | **Post** /api/appelements/d/{did}/w/{wid} | Create Element.
[**CreateReference**](AppElementsApi.md#CreateReference) | **Post** /api/appelements/d/{did}/{wvm}/{wvmid}/e/{eid}/references | Create Reference
[**DeleteAppElementContent**](AppElementsApi.md#DeleteAppElementContent) | **Delete** /api/appelements/d/{did}/{wvm}/{wvmid}/e/{eid}/content/subelements/{sid} | Delete a Sub-element
[**DeleteReference**](AppElementsApi.md#DeleteReference) | **Delete** /api/appelements/d/{did}/{wvm}/{wvmid}/e/{eid}/references/{rid} | Delete Reference
[**GetAppElementHistory**](AppElementsApi.md#GetAppElementHistory) | **Get** /api/appelements/d/{did}/{wvm}/{wvmid}/e/{eid}/content/history | Get History
[**GetSubElementContent**](AppElementsApi.md#GetSubElementContent) | **Get** /api/appelements/d/{did}/{wvm}/{wvmid}/e/{eid}/content | Get Content
[**GetSubelementIds**](AppElementsApi.md#GetSubelementIds) | **Get** /api/appelements/d/{did}/{wvm}/{wvmid}/e/{eid}/content/ids | Get Sub-element IDs
[**ResolveReference**](AppElementsApi.md#ResolveReference) | **Get** /api/appelements/d/{did}/{wvm}/{wvmid}/e/{eid}/references/{rid} | Resolve Reference
[**ResolveReferences**](AppElementsApi.md#ResolveReferences) | **Get** /api/appelements/d/{did}/{wvm}/{wvmid}/e/{eid}/resolvereferences | Resolve references.
[**StartTransaction**](AppElementsApi.md#StartTransaction) | **Post** /api/appelements/d/{did}/w/{wid}/e/{eid}/transactions | Start Transaction
[**UpdateAppElement**](AppElementsApi.md#UpdateAppElement) | **Post** /api/appelements/d/{did}/{wvm}/{wvmid}/e/{eid}/content | Update Element
[**UpdateReference**](AppElementsApi.md#UpdateReference) | **Post** /api/appelements/d/{did}/{wvm}/{wvmid}/e/{eid}/references/{rid} | Update Reference



## CommitTransaction

> BtAppElementModifyInfo CommitTransaction(ctx, did, eid, wid, tid, btAppElementCommitTransactionParams)

Commit Transaction

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**eid** | **string**|  | 
**wid** | **string**|  | 
**tid** | **string**|  | 
**btAppElementCommitTransactionParams** | [**BtAppElementCommitTransactionParams**](BtAppElementCommitTransactionParams.md)|  | 

### Return type

[**BtAppElementModifyInfo**](BTAppElementModifyInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## CreateElement

> BtAppElementModifyInfo CreateElement(ctx, did, wid, btAppElementParams)

Create Element.

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wid** | **string**|  | 
**btAppElementParams** | [**BtAppElementParams**](BtAppElementParams.md)|  | 

### Return type

[**BtAppElementModifyInfo**](BTAppElementModifyInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## CreateReference

> BtAppElementReferenceInfo CreateReference(ctx, did, eid, wvm, wvmid, btAppElementReferenceParams)

Create Reference

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**eid** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**btAppElementReferenceParams** | [**BtAppElementReferenceParams**](BtAppElementReferenceParams.md)|  | 

### Return type

[**BtAppElementReferenceInfo**](BTAppElementReferenceInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## DeleteAppElementContent

> BtAppElementModifyInfo DeleteAppElementContent(ctx, did, eid, wvm, wvmid, sid, optional)

Delete a Sub-element

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**eid** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**sid** | **string**|  | 
 **optional** | ***DeleteAppElementContentOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a DeleteAppElementContentOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------





 **transactionId** | **optional.String**|  | 
 **parentChangeId** | **optional.String**|  | 
 **description** | **optional.String**|  | 

### Return type

[**BtAppElementModifyInfo**](BTAppElementModifyInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## DeleteReference

> BtAppElementReferenceInfo DeleteReference(ctx, did, eid, wvm, wvmid, rid, optional)

Delete Reference

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**eid** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**rid** | **string**|  | 
 **optional** | ***DeleteReferenceOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a DeleteReferenceOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------





 **transactionId** | **optional.String**|  | 
 **parentChangeId** | **optional.String**|  | 
 **description** | **optional.String**|  | 

### Return type

[**BtAppElementReferenceInfo**](BTAppElementReferenceInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetAppElementHistory

> BtAppElementHistoryInfo GetAppElementHistory(ctx, did, eid, wvm, wvmid)

Get History

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**eid** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 

### Return type

[**BtAppElementHistoryInfo**](BTAppElementHistoryInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetSubElementContent

> BtAppElementContentInfo GetSubElementContent(ctx, did, eid, wvm, wvmid, optional)

Get Content

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**eid** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
 **optional** | ***GetSubElementContentOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetSubElementContentOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **transactionId** | **optional.String**|  | 
 **changeId** | **optional.String**|  | 
 **baseChangeId** | **optional.String**|  | 
 **subelementId** | **optional.String**|  | 
 **linkDocumentId** | **optional.String**|  | 

### Return type

[**BtAppElementContentInfo**](BTAppElementContentInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetSubelementIds

> BtAppElementModifyInfo GetSubelementIds(ctx, did, eid, wvm, wvmid, optional)

Get Sub-element IDs

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**eid** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
 **optional** | ***GetSubelementIdsOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetSubelementIdsOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **transactionId** | **optional.String**|  | 
 **changeId** | **optional.String**|  | 

### Return type

[**BtAppElementModifyInfo**](BTAppElementModifyInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## ResolveReference

> BtAppElementReferenceResolveInfo ResolveReference(ctx, did, eid, wvm, wvmid, rid, optional)

Resolve Reference

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**eid** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**rid** | **string**|  | 
 **optional** | ***ResolveReferenceOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a ResolveReferenceOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------





 **transactionId** | **optional.String**|  | 
 **parentChangeId** | **optional.String**|  | 
 **includeInternal** | **optional.Bool**|  | [default to false]
 **linkDocumentId** | **optional.String**|  | 

### Return type

[**BtAppElementReferenceResolveInfo**](BTAppElementReferenceResolveInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## ResolveReferences

> BtAppElementReferencesResolveInfo ResolveReferences(ctx, did, eid, wvm, wvmid, optional)

Resolve references.

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**eid** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
 **optional** | ***ResolveReferencesOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a ResolveReferencesOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **transactionId** | **optional.String**|  | 
 **parentChangeId** | **optional.String**|  | 
 **includeInternal** | **optional.Bool**|  | [default to false]
 **linkDocumentId** | **optional.String**|  | 
 **referenceIds** | **optional.String**|  | [default to ]

### Return type

[**BtAppElementReferencesResolveInfo**](BTAppElementReferencesResolveInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## StartTransaction

> BtAppElementModifyInfo StartTransaction(ctx, did, eid, wid, btAppElementStartTransactionParams)

Start Transaction

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**eid** | **string**|  | 
**wid** | **string**|  | 
**btAppElementStartTransactionParams** | [**BtAppElementStartTransactionParams**](BtAppElementStartTransactionParams.md)|  | 

### Return type

[**BtAppElementModifyInfo**](BTAppElementModifyInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpdateAppElement

> BtAppElementModifyInfo UpdateAppElement(ctx, did, eid, wvm, wvmid, btAppElementUpdateParams)

Update Element

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**eid** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**btAppElementUpdateParams** | [**BtAppElementUpdateParams**](BtAppElementUpdateParams.md)|  | 

### Return type

[**BtAppElementModifyInfo**](BTAppElementModifyInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpdateReference

> BtAppElementReferenceInfo UpdateReference(ctx, did, eid, wvm, wvmid, rid, btAppElementReferenceParams)

Update Reference

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**eid** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**rid** | **string**|  | 
**btAppElementReferenceParams** | [**BtAppElementReferenceParams**](BtAppElementReferenceParams.md)|  | 

### Return type

[**BtAppElementReferenceInfo**](BTAppElementReferenceInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

