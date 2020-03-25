# \BlobElementsApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CreateBlobTranslation**](BlobElementsApi.md#CreateBlobTranslation) | **Post** /api/blobelements/d/{did}/{wv}/{wvid}/e/{eid}/translations | Create Translation.
[**DownloadFileWorkspace**](BlobElementsApi.md#DownloadFileWorkspace) | **Get** /api/blobelements/d/{did}/w/{wid}/e/{eid} | Download File From Blob Element.
[**UpdateUnits**](BlobElementsApi.md#UpdateUnits) | **Post** /api/blobelements/d/{did}/w/{wid}/e/{eid}/units | Update Mesh Units.
[**UploadFileCreateElement**](BlobElementsApi.md#UploadFileCreateElement) | **Post** /api/blobelements/d/{did}/w/{wid} | Upload file to new element.
[**UploadFileUpdateElement**](BlobElementsApi.md#UploadFileUpdateElement) | **Post** /api/blobelements/d/{did}/w/{wid}/e/{eid} | Update Blob Element.



## CreateBlobTranslation

> BtTranslationRequestInfo CreateBlobTranslation(ctx, did, wv, wvid, eid, btTranslateFormatParams)

Create Translation.

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


## DownloadFileWorkspace

> *os.File DownloadFileWorkspace(ctx, did, wid, eid, optional)

Download File From Blob Element.

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wid** | **string**|  | 
**eid** | **string**|  | 
 **optional** | ***DownloadFileWorkspaceOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a DownloadFileWorkspaceOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------



 **contentDisposition** | **optional.String**|  | 
 **ifNoneMatch** | **optional.String**|  | 
 **linkDocumentId** | **optional.String**|  | 

### Return type

[***os.File**](*os.File.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/octet-stream

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpdateUnits

> BtDocumentElementProcessingInfo UpdateUnits(ctx, did, eid, wid, btUpdateMeshUnitsParams)

Update Mesh Units.

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**eid** | **string**|  | 
**wid** | **string**|  | 
**btUpdateMeshUnitsParams** | [**BtUpdateMeshUnitsParams**](BtUpdateMeshUnitsParams.md)|  | 

### Return type

[**BtDocumentElementProcessingInfo**](BTDocumentElementProcessingInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UploadFileCreateElement

> BtDocumentElementProcessingInfo UploadFileCreateElement(ctx, did, wid, optional)

Upload file to new element.

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wid** | **string**|  | 
 **optional** | ***UploadFileCreateElementOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a UploadFileCreateElementOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


 **allowFaultyParts** | **optional.Bool**|  | 
 **createComposite** | **optional.Bool**|  | 
 **createDrawingIfPossible** | **optional.Bool**|  | 
 **encodedFilename** | **optional.String**|  | 
 **extractAssemblyHierarchy** | **optional.Bool**|  | 
 **file** | **optional.Interface of *os.File****optional.*os.File**|  | 
 **fileBodyWithDetails** | [**optional.Interface of FormDataBodyPart**](FormDataBodyPart.md)|  | 
 **fileContentLength** | **optional.Int64**|  | 
 **fileDetail** | [**optional.Interface of FormDataContentDisposition**](FormDataContentDisposition.md)|  | 
 **flattenAssemblies** | **optional.Bool**|  | 
 **formatName** | **optional.String**|  | 
 **isyAxisIsUp** | **optional.Bool**|  | 
 **joinAdjacentSurfaces** | **optional.Bool**|  | 
 **locationElementId** | **optional.String**|  | 
 **locationGroupId** | **optional.String**|  | 
 **locationPosition** | **optional.Int32**|  | 
 **notifyUser** | **optional.Bool**|  | 
 **ownerId** | **optional.String**|  | 
 **ownerType** | **optional.String**|  | 
 **parentId** | **optional.String**|  | 
 **projectId** | **optional.String**|  | 
 **public** | **optional.Bool**|  | 
 **splitAssembliesIntoMultipleDocuments** | **optional.Bool**|  | 
 **storeInDocument** | **optional.Bool**|  | 
 **translate** | **optional.Bool**|  | 
 **unit** | **optional.String**|  | 
 **uploadId** | **optional.String**|  | 
 **versionString** | **optional.String**|  | 

### Return type

[**BtDocumentElementProcessingInfo**](BTDocumentElementProcessingInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: multipart/form-data
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UploadFileUpdateElement

> BtDocumentElementProcessingInfo UploadFileUpdateElement(ctx, did, eid, wid, optional)

Update Blob Element.

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**eid** | **string**|  | 
**wid** | **string**|  | 
 **optional** | ***UploadFileUpdateElementOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a UploadFileUpdateElementOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------



 **parentChangeId** | **optional.String**|  | 

### Return type

[**BtDocumentElementProcessingInfo**](BTDocumentElementProcessingInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

