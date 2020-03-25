# \DocumentsApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CopyWorkspace**](DocumentsApi.md#CopyWorkspace) | **Post** /api/documents/{did}/workspaces/{wid}/copy | Copy Workspace
[**CreateDocument**](DocumentsApi.md#CreateDocument) | **Post** /api/documents | Create document.
[**CreateVersion**](DocumentsApi.md#CreateVersion) | **Post** /api/documents/d/{did}/versions | Create Version.
[**CreateWorkspace**](DocumentsApi.md#CreateWorkspace) | **Post** /api/documents/d/{did}/workspaces | Create Workspace
[**DeleteDocument**](DocumentsApi.md#DeleteDocument) | **Delete** /api/documents/{did} | Delete Document
[**DeleteWorkspace**](DocumentsApi.md#DeleteWorkspace) | **Delete** /api/documents/d/{did}/workspaces/{wid} | Delete Workspace
[**DownloadExternalData**](DocumentsApi.md#DownloadExternalData) | **Get** /api/documents/d/{did}/externaldata/{fid} | Download External Data
[**Export2Json**](DocumentsApi.md#Export2Json) | **Post** /api/documents/d/{did}/{wv}/{wvid}/e/{eid}/export | 
[**GetCurrentMicroversion**](DocumentsApi.md#GetCurrentMicroversion) | **Get** /api/documents/d/{did}/{wv}/{wvid}/currentmicroversion | Get Current Document Microversion
[**GetDocument**](DocumentsApi.md#GetDocument) | **Get** /api/documents/{did} | Get Document
[**GetDocumentAcl**](DocumentsApi.md#GetDocumentAcl) | **Get** /api/documents/{did}/acl | Get Access Control List
[**GetDocumentPermissionSet**](DocumentsApi.md#GetDocumentPermissionSet) | **Get** /api/documents/{did}/permissionset | Get Document Permissions
[**GetDocumentVersions**](DocumentsApi.md#GetDocumentVersions) | **Get** /api/documents/d/{did}/versions | Get Versions
[**GetDocumentWorkspaces**](DocumentsApi.md#GetDocumentWorkspaces) | **Get** /api/documents/d/{did}/workspaces | Get Workspaces
[**GetDocuments**](DocumentsApi.md#GetDocuments) | **Get** /api/documents | Get Documents
[**GetElementsInDocument**](DocumentsApi.md#GetElementsInDocument) | **Get** /api/documents/d/{did}/{wvm}/{wvmid}/elements | Get a list of elements in the workspace, version, or microversion of the document.
[**GetInsertables**](DocumentsApi.md#GetInsertables) | **Get** /api/documents/d/{did}/{wvm}/{wvmid}/insertables | Insertable List for Document Version.
[**GetVersion**](DocumentsApi.md#GetVersion) | **Get** /api/documents/d/{did}/versions/{vid} | Get Version
[**MergeIntoWorkspace**](DocumentsApi.md#MergeIntoWorkspace) | **Post** /api/documents/{did}/workspaces/{wid}/merge | Merge into workspace
[**MoveElementsToDocument**](DocumentsApi.md#MoveElementsToDocument) | **Post** /api/documents/d/{did}/w/{wid}/moveelement | Move Elements
[**RestoreFromHistory**](DocumentsApi.md#RestoreFromHistory) | **Post** /api/documents/{did}/w/{wid}/restore/{vm}/{vmid} | Restore version or microversion to workspace.
[**Search**](DocumentsApi.md#Search) | **Post** /api/documents/search | 
[**ShareDocument**](DocumentsApi.md#ShareDocument) | **Post** /api/documents/{did}/share | Share Document
[**SyncApplicationElements**](DocumentsApi.md#SyncApplicationElements) | **Post** /api/documents/d/{did}/w/{wid}/syncApplicationElements | Sync Application Elements
[**UnShareDocument**](DocumentsApi.md#UnShareDocument) | **Delete** /api/documents/{did}/share/{eid} | Unshare Document
[**UpdateDocumentAttributes**](DocumentsApi.md#UpdateDocumentAttributes) | **Post** /api/documents/{did} | Update Document Attributes.
[**UpdateExternalReferencesToLatestDocuments**](DocumentsApi.md#UpdateExternalReferencesToLatestDocuments) | **Post** /api/documents/d/{did}/w/{wid}/e/{eid}/latestdocumentreferences | Update External References to Latest



## CopyWorkspace

> BtCopyDocumentInfo CopyWorkspace(ctx, did, wid, optional)

Copy Workspace

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wid** | **string**|  | 
 **optional** | ***CopyWorkspaceOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a CopyWorkspaceOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


 **btCopyDocumentParams** | [**optional.Interface of BtCopyDocumentParams**](BtCopyDocumentParams.md)|  | 

### Return type

[**BtCopyDocumentInfo**](BTCopyDocumentInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## CreateDocument

> BtDocumentInfo CreateDocument(ctx, btDocumentParams)

Create document.

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**btDocumentParams** | [**BtDocumentParams**](BtDocumentParams.md)|  | 

### Return type

[**BtDocumentInfo**](BTDocumentInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## CreateVersion

> BtVersionInfo CreateVersion(ctx, did, btVersionOrWorkspaceParams)

Create Version.

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**btVersionOrWorkspaceParams** | [**BtVersionOrWorkspaceParams**](BtVersionOrWorkspaceParams.md)|  | 

### Return type

[**BtVersionInfo**](BTVersionInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## CreateWorkspace

> BtWorkspaceInfo CreateWorkspace(ctx, did, optional)

Create Workspace

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
 **optional** | ***CreateWorkspaceOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a CreateWorkspaceOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **btVersionOrWorkspaceParams** | [**optional.Interface of BtVersionOrWorkspaceParams**](BtVersionOrWorkspaceParams.md)|  | 

### Return type

[**BtWorkspaceInfo**](BTWorkspaceInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## DeleteDocument

> DeleteDocument(ctx, did, optional)

Delete Document

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
 **optional** | ***DeleteDocumentOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a DeleteDocumentOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **forever** | **optional.Bool**|  | [default to false]

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


## DeleteWorkspace

> DeleteWorkspace(ctx, did, wid)

Delete Workspace

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wid** | **string**|  | 

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


## DownloadExternalData

> *os.File DownloadExternalData(ctx, did, fid, optional)

Download External Data

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**fid** | **string**|  | 
 **optional** | ***DownloadExternalDataOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a DownloadExternalDataOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


 **ifNoneMatch** | **optional.String**|  | 

### Return type

[***os.File**](*os.File.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+octet-stream;charset=UTF-8;qs=0.1, application/octet-stream

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## Export2Json

> Export2Json(ctx, did, wv, wvid, eid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wv** | **string**|  | 
**wvid** | **string**|  | 
**eid** | **string**|  | 
 **optional** | ***Export2JsonOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a Export2JsonOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **btExportModelParams** | [**optional.Interface of BtExportModelParams**](BtExportModelParams.md)|  | 

### Return type

 (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+octet-stream;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetCurrentMicroversion

> BtMicroversionInfo GetCurrentMicroversion(ctx, did, wv, wvid)

Get Current Document Microversion

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wv** | **string**|  | 
**wvid** | **string**|  | 

### Return type

[**BtMicroversionInfo**](BTMicroversionInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetDocument

> BtDocumentInfo GetDocument(ctx, did)

Get Document

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 

### Return type

[**BtDocumentInfo**](BTDocumentInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetDocumentAcl

> BtAclInfo GetDocumentAcl(ctx, did)

Get Access Control List

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 

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


## GetDocumentPermissionSet

> map[string]interface{} GetDocumentPermissionSet(ctx, did)

Get Document Permissions

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 

### Return type

[**map[string]interface{}**](map[string]interface{}.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetDocumentVersions

> []BtVersionInfo GetDocumentVersions(ctx, did, optional)

Get Versions

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
 **optional** | ***GetDocumentVersionsOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetDocumentVersionsOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **offset** | **optional.Int32**|  | [default to 0]
 **limit** | **optional.Int32**|  | [default to 0]

### Return type

[**[]BtVersionInfo**](BTVersionInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetDocumentWorkspaces

> []BtWorkspaceInfo GetDocumentWorkspaces(ctx, did)

Get Workspaces

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 

### Return type

[**[]BtWorkspaceInfo**](BTWorkspaceInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetDocuments

> BtGlobalTreeNodeListResponse GetDocuments(ctx, optional)

Get Documents

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
 **optional** | ***GetDocumentsOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetDocumentsOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **q** | **optional.String**|  | [default to ]
 **filter** | **optional.Int32**|  | 
 **owner** | **optional.String**|  | [default to ]
 **ownerType** | **optional.Int32**|  | [default to 1]
 **sortColumn** | **optional.String**|  | [default to createdAt]
 **sortOrder** | **optional.String**|  | [default to desc]
 **offset** | **optional.Int32**|  | [default to 0]
 **limit** | **optional.Int32**|  | [default to 20]
 **label** | **optional.String**|  | 
 **project** | **optional.String**|  | 
 **parentId** | **optional.String**|  | 

### Return type

[**BtGlobalTreeNodeListResponse**](BTGlobalTreeNodeListResponse.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetElementsInDocument

> []BtDocumentElementInfo GetElementsInDocument(ctx, did, wvm, wvmid, optional)

Get a list of elements in the workspace, version, or microversion of the document.

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
 **optional** | ***GetElementsInDocumentOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetElementsInDocumentOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------



 **elementType** | **optional.String**|  | [default to ]
 **elementId** | **optional.String**|  | [default to ]
 **withThumbnails** | **optional.Bool**|  | [default to false]
 **linkDocumentId** | **optional.String**|  | 

### Return type

[**[]BtDocumentElementInfo**](BTDocumentElementInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetInsertables

> BtInsertablesListResponse GetInsertables(ctx, did, wvm, wvmid, optional)

Insertable List for Document Version.

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
 **optional** | ***GetInsertablesOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetInsertablesOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------



 **betaCapabilityIds** | [**optional.Interface of []string**](string.md)|  | 
 **includeParts** | **optional.Bool**|  | [default to false]
 **includeSurfaces** | **optional.Bool**|  | [default to false]
 **includeWires** | **optional.Bool**|  | [default to false]
 **includeSketches** | **optional.Bool**|  | [default to false]
 **includeReferenceFeatures** | **optional.Bool**|  | [default to false]
 **includeAssemblies** | **optional.Bool**|  | [default to false]
 **includeFeatures** | **optional.Bool**|  | [default to false]
 **includeFeatureStudios** | **optional.Bool**|  | [default to false]
 **includePartStudios** | **optional.Bool**|  | [default to false]
 **includeBlobs** | **optional.Bool**|  | [default to false]
 **includeMeshes** | **optional.Bool**|  | [default to false]
 **includeFlattenedBodies** | **optional.Bool**|  | [default to false]
 **allowedBlobMimeTypes** | **optional.String**|  | [default to ]
 **maxFeatureScriptVersion** | **optional.Int32**|  | [default to 0]
 **includeApplications** | **optional.Bool**|  | [default to false]
 **allowedApplicationMimeTypes** | **optional.String**|  | [default to ]
 **includeCompositeParts** | **optional.Bool**|  | [default to false]
 **includeFSTables** | **optional.Bool**|  | [default to false]

### Return type

[**BtInsertablesListResponse**](BTInsertablesListResponse.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetVersion

> BtVersionInfo GetVersion(ctx, did, vid, optional)

Get Version

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**vid** | **string**|  | 
 **optional** | ***GetVersionOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetVersionOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


 **parents** | **optional.Bool**|  | [default to false]
 **linkDocumentId** | **optional.String**|  | 

### Return type

[**BtVersionInfo**](BTVersionInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## MergeIntoWorkspace

> BtDocumentMergeInfo MergeIntoWorkspace(ctx, did, wid, btVersionOrWorkspaceInfo)

Merge into workspace

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wid** | **string**|  | 
**btVersionOrWorkspaceInfo** | [**BtVersionOrWorkspaceInfo**](BtVersionOrWorkspaceInfo.md)|  | 

### Return type

[**BtDocumentMergeInfo**](BTDocumentMergeInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## MoveElementsToDocument

> BtMoveElementInfo MoveElementsToDocument(ctx, did, wid, btMoveElementParams)

Move Elements

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wid** | **string**|  | 
**btMoveElementParams** | [**BtMoveElementParams**](BtMoveElementParams.md)|  | 

### Return type

[**BtMoveElementInfo**](BTMoveElementInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RestoreFromHistory

> RestoreFromHistory(ctx, did, wid, vm, vmid)

Restore version or microversion to workspace.

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wid** | **string**|  | 
**vm** | **string**|  | 
**vmid** | **string**|  | 

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


## Search

> Search(ctx, btDocumentSearchParams)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**btDocumentSearchParams** | [**BtDocumentSearchParams**](BtDocumentSearchParams.md)|  | 

### Return type

 (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## ShareDocument

> BtAclInfo ShareDocument(ctx, did, btShareParams)

Share Document

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
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


## SyncApplicationElements

> SyncApplicationElements(ctx, did, wid, applicationElementIds, optional)

Sync Application Elements

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wid** | **string**|  | 
**applicationElementIds** | [**[]string**](string.md)|  | 
 **optional** | ***SyncApplicationElementsOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a SyncApplicationElementsOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------



 **description** | **optional.String**|  | 

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


## UnShareDocument

> UnShareDocument(ctx, did, eid, optional)

Unshare Document

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**eid** | **string**|  | 
 **optional** | ***UnShareDocumentOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a UnShareDocumentOpts struct


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


## UpdateDocumentAttributes

> UpdateDocumentAttributes(ctx, did, btDocumentParams)

Update Document Attributes.

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**btDocumentParams** | [**BtDocumentParams**](BtDocumentParams.md)|  | 

### Return type

 (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpdateExternalReferencesToLatestDocuments

> BtLinkToLatestDocumentInfo UpdateExternalReferencesToLatestDocuments(ctx, did, wid, eid, optional)

Update External References to Latest

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wid** | **string**|  | 
**eid** | **string**|  | 
 **optional** | ***UpdateExternalReferencesToLatestDocumentsOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a UpdateExternalReferencesToLatestDocumentsOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------



 **btLinkToLatestDocumentParams** | [**optional.Interface of BtLinkToLatestDocumentParams**](BtLinkToLatestDocumentParams.md)|  | 

### Return type

[**BtLinkToLatestDocumentInfo**](BTLinkToLatestDocumentInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

