# \FoldersApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GetFolderAcl**](FoldersApi.md#GetFolderAcl) | **Get** /api/folders/{fid}/acl | Get Access Control List
[**Share**](FoldersApi.md#Share) | **Post** /api/folders/{fid}/share | Share Folder
[**UnShare**](FoldersApi.md#UnShare) | **Delete** /api/folders/{fid}/share/{eid} | Unshare Folder



## GetFolderAcl

> BtAclInfo GetFolderAcl(ctx, fid)

Get Access Control List

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**fid** | **string**|  | 

### Return type

[**BtAclInfo**](BTAclInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## Share

> BtAclInfo Share(ctx, fid, btShareParams)

Share Folder

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**fid** | **string**|  | 
**btShareParams** | [**BtShareParams**](BtShareParams.md)|  | 

### Return type

[**BtAclInfo**](BTAclInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UnShare

> UnShare(ctx, fid, eid, optional)

Unshare Folder

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**fid** | **string**|  | 
**eid** | **string**|  | 
 **optional** | ***UnShareOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a UnShareOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


 **entryType** | **optional.Int32**|  | [default to 0]

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

