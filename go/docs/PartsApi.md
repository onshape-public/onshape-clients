# \PartsApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ExportPS**](PartsApi.md#ExportPS) | **Get** /api/parts/d/{did}/{wvm}/{wvmid}/e/{eid}/partid/{partid}/parasolid | Export Part to Parasolid.
[**GetBendTable**](PartsApi.md#GetBendTable) | **Get** /api/parts/d/{did}/{wvm}/{wvmid}/e/{eid}/partid/{partid}/sheetmetal/bendtable | Get Sheet Metal Bend Table.
[**GetBodyDetails**](PartsApi.md#GetBodyDetails) | **Get** /api/parts/d/{did}/{wvm}/{wvmid}/e/{eid}/partid/{partid}/bodydetails | 
[**GetBoundingBoxes**](PartsApi.md#GetBoundingBoxes) | **Get** /api/parts/d/{did}/{wvm}/{wvmid}/e/{eid}/partid/{partid}/boundingboxes | 
[**GetEdges**](PartsApi.md#GetEdges) | **Get** /api/parts/d/{did}/{wvm}/{wvmid}/e/{eid}/partid/{partid}/tessellatededges | Tessellated Edges
[**GetFaces1**](PartsApi.md#GetFaces1) | **Get** /api/parts/d/{did}/{wvm}/{wvmid}/e/{eid}/partid/{partid}/tessellatedfaces | Get Tessellated Faces
[**GetMassProperties**](PartsApi.md#GetMassProperties) | **Get** /api/parts/d/{did}/{wvm}/{wvmid}/e/{eid}/partid/{partid}/massproperties | 
[**GetPartMetadata**](PartsApi.md#GetPartMetadata) | **Get** /api/parts/d/{did}/{wvm}/{wvmid}/e/{eid}/partid/{partid}/metadata | 
[**GetPartsWMV**](PartsApi.md#GetPartsWMV) | **Get** /api/parts/d/{did}/{wvm}/{wvmid} | Get list of parts
[**GetPartsWMVE**](PartsApi.md#GetPartsWMVE) | **Get** /api/parts/d/{did}/{wvm}/{wvmid}/e/{eid} | Get parts from an element.
[**GetShadedViews1**](PartsApi.md#GetShadedViews1) | **Get** /api/parts/d/{did}/{wvm}/{wvmid}/e/{eid}/partid/{partid}/shadedviews | 
[**GetStandardContentPartMetadata**](PartsApi.md#GetStandardContentPartMetadata) | **Get** /api/parts/standardcontent/d/{did}/v/{vid}/e/{eid}/{otype}/{oid}/partid/{partid}/metadata | 
[**UpdatePartMetadata**](PartsApi.md#UpdatePartMetadata) | **Post** /api/parts/d/{did}/{wvm}/{wvmid}/e/{eid}/partid/{partid}/metadata | 
[**UpdateStandardContentPartMetadata**](PartsApi.md#UpdateStandardContentPartMetadata) | **Post** /api/parts/standardcontent/d/{did}/v/{vid}/e/{eid}/{otype}/{oid}/partid/{partid}/metadata | 



## ExportPS

> *os.File ExportPS(ctx, did, wvm, wvmid, eid, partid, optional)

Export Part to Parasolid.

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
**partid** | **string**|  | 
 **optional** | ***ExportPSOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a ExportPSOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------





 **version** | **optional.String**|  | [default to 0]
 **configuration** | **optional.String**|  | 
 **linkDocumentId** | **optional.String**|  | 

### Return type

[***os.File**](*os.File.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+octet-stream;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetBendTable

> BtTableResponse1546 GetBendTable(ctx, did, wvm, wvmid, eid, partid, optional)

Get Sheet Metal Bend Table.

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
**partid** | **string**|  | 
 **optional** | ***GetBendTableOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetBendTableOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------





 **linkDocumentId** | **optional.String**|  | 

### Return type

[**BtTableResponse1546**](BTTableResponse-1546.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetBodyDetails

> BtExportModelBodiesResponse734 GetBodyDetails(ctx, did, wvm, wvmid, eid, partid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
**partid** | **string**|  | 
 **optional** | ***GetBodyDetailsOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetBodyDetailsOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------





 **configuration** | **optional.String**|  | 
 **linkDocumentId** | **optional.String**|  | 

### Return type

[**BtExportModelBodiesResponse734**](BTExportModelBodiesResponse-734.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetBoundingBoxes

> BtBoundingBoxInfo GetBoundingBoxes(ctx, did, wvm, wvmid, eid, partid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
**partid** | **string**|  | 
 **optional** | ***GetBoundingBoxesOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetBoundingBoxesOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------





 **includeHidden** | **optional.Bool**|  | [default to false]
 **configuration** | **optional.String**|  | 
 **linkDocumentId** | **optional.String**|  | 

### Return type

[**BtBoundingBoxInfo**](BTBoundingBoxInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetEdges

> BtExportTessellatedEdgesResponse327 GetEdges(ctx, did, wvm, wvmid, eid, partid, optional)

Tessellated Edges

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
**partid** | **string**|  | 
 **optional** | ***GetEdgesOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetEdgesOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------





 **angleTolerance** | **optional.Float64**|  | 
 **chordTolerance** | **optional.Float64**|  | 
 **edgeId** | [**optional.Interface of []string**](string.md)|  | 
 **configuration** | **optional.String**|  | 
 **linkDocumentId** | **optional.String**|  | 
 **body** | **optional.String**|  | 

### Return type

[**BtExportTessellatedEdgesResponse327**](BTExportTessellatedEdgesResponse-327.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetFaces1

> BtExportTessellatedFacesResponse898 GetFaces1(ctx, did, wvm, wvmid, eid, partid, optional)

Get Tessellated Faces

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
**partid** | **string**|  | 
 **optional** | ***GetFaces1Opts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetFaces1Opts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------





 **angleTolerance** | **optional.Float64**|  | 
 **chordTolerance** | **optional.Float64**|  | 
 **maxFacetWidth** | **optional.Float64**|  | 
 **outputVertexNormals** | **optional.Bool**|  | [default to false]
 **outputFacetNormals** | **optional.Bool**|  | [default to true]
 **outputTextureCoordinates** | **optional.Bool**|  | [default to false]
 **outputFaceAppearances** | **optional.Bool**|  | [default to false]
 **outputIndexTable** | **optional.Bool**|  | [default to false]
 **faceId** | [**optional.Interface of []string**](string.md)|  | 
 **configuration** | **optional.String**|  | 
 **outputErrorFaces** | **optional.Bool**|  | [default to false]
 **linkDocumentId** | **optional.String**|  | 
 **body** | **optional.String**|  | 

### Return type

[**BtExportTessellatedFacesResponse898**](BTExportTessellatedFacesResponse-898.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetMassProperties

> BtMassPropertiesBulkInfo GetMassProperties(ctx, did, wvm, wvmid, eid, partid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
**partid** | **string**|  | 
 **optional** | ***GetMassPropertiesOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetMassPropertiesOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------





 **inferMetadataOwner** | **optional.Bool**|  | [default to true]
 **linkDocumentId** | **optional.String**|  | 
 **configuration** | **optional.String**|  | 

### Return type

[**BtMassPropertiesBulkInfo**](BTMassPropertiesBulkInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetPartMetadata

> BtPartMetadataInfo GetPartMetadata(ctx, did, wvm, wvmid, eid, partid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
**partid** | **string**|  | 
 **optional** | ***GetPartMetadataOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetPartMetadataOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------





 **inferMetadataOwner** | **optional.Bool**|  | [default to false]
 **includePropertyDefaults** | **optional.Bool**|  | [default to false]
 **friendlyUserIds** | **optional.Bool**|  | [default to false]
 **configuration** | **optional.String**|  | 
 **linkDocumentId** | **optional.String**|  | 

### Return type

[**BtPartMetadataInfo**](BTPartMetadataInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetPartsWMV

> []BtPartMetadataInfo GetPartsWMV(ctx, did, wvm, wvmid, optional)

Get list of parts

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**| Document ID. | 
**wvm** | **string**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
**wvmid** | **string**| Workspace (w), Version (v) or Microversion (m) ID. | 
 **optional** | ***GetPartsWMVOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetPartsWMVOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------



 **elementId** | **optional.String**| Element ID | 
 **withThumbnails** | **optional.Bool**| Whether or not to include thumbnails (not supported for microversion) | [default to false]
 **includePropertyDefaults** | **optional.Bool**| If true, include metadata schema property defaults in response | [default to false]
 **linkDocumentId** | **optional.String**| Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. | 
 **configuration** | **optional.String**| Configuration string. | 

### Return type

[**[]BtPartMetadataInfo**](BTPartMetadataInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetPartsWMVE

> []BtPartMetadataInfo GetPartsWMVE(ctx, did, wvm, wvmid, eid, optional)

Get parts from an element.

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**| Document ID. | 
**wvm** | **string**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
**wvmid** | **string**| Workspace (w), Version (v) or Microversion (m) ID. | 
**eid** | **string**| Element ID. | 
 **optional** | ***GetPartsWMVEOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetPartsWMVEOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **withThumbnails** | **optional.Bool**| Whether or not to include thumbnails (not supported for microversion) | [default to false]
 **includePropertyDefaults** | **optional.Bool**| If true, include metadata schema property defaults in response | [default to false]
 **configuration** | **optional.String**| Configuration string. | 
 **linkDocumentId** | **optional.String**| Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. | 

### Return type

[**[]BtPartMetadataInfo**](BTPartMetadataInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetShadedViews1

> BtShadedViewsInfo GetShadedViews1(ctx, did, wvm, wvmid, eid, partid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
**partid** | **string**|  | 
 **optional** | ***GetShadedViews1Opts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetShadedViews1Opts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------





 **viewMatrix** | **optional.String**|  | [default to front]
 **outputHeight** | **optional.Int32**|  | [default to 500]
 **outputWidth** | **optional.Int32**|  | [default to 500]
 **pixelSize** | **optional.Float64**|  | [default to 0.003]
 **edges** | **optional.String**|  | [default to show]
 **useAntiAliasing** | **optional.Bool**|  | [default to false]
 **configuration** | **optional.String**|  | 
 **linkDocumentId** | **optional.String**|  | 

### Return type

[**BtShadedViewsInfo**](BTShadedViewsInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetStandardContentPartMetadata

> BtPartMetadataInfo GetStandardContentPartMetadata(ctx, did, vid, eid, otype, oid, partid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**vid** | **string**|  | 
**eid** | **string**|  | 
**otype** | **string**|  | 
**oid** | **string**|  | 
**partid** | **string**|  | 
 **optional** | ***GetStandardContentPartMetadataOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetStandardContentPartMetadataOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------






 **includePropertyDefaults** | **optional.Bool**|  | [default to false]
 **configuration** | **optional.String**|  | 
 **linkDocumentId** | **optional.String**|  | 

### Return type

[**BtPartMetadataInfo**](BTPartMetadataInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpdatePartMetadata

> BtPartMetadataInfo UpdatePartMetadata(ctx, did, wvm, wvmid, eid, partid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
**partid** | **string**|  | 
 **optional** | ***UpdatePartMetadataOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a UpdatePartMetadataOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------





 **body** | **optional.String**|  | 

### Return type

[**BtPartMetadataInfo**](BTPartMetadataInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpdateStandardContentPartMetadata

> BtPartMetadataInfo UpdateStandardContentPartMetadata(ctx, did, vid, eid, otype, oid, partid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**vid** | **string**|  | 
**eid** | **string**|  | 
**otype** | **string**|  | 
**oid** | **string**|  | 
**partid** | **string**|  | 
 **optional** | ***UpdateStandardContentPartMetadataOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a UpdateStandardContentPartMetadataOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------






 **linkDocumentId** | **optional.String**|  | 
 **includePropertyDefaults** | **optional.Bool**|  | [default to false]
 **btWorkspacePartParams** | [**optional.Interface of BtWorkspacePartParams**](BtWorkspacePartParams.md)|  | 

### Return type

[**BtPartMetadataInfo**](BTPartMetadataInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

