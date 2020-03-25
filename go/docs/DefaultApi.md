# \DefaultApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CreateWorkflowableTestObject**](DefaultApi.md#CreateWorkflowableTestObject) | **Post** /api/workflowabletestobject/testobject/{wfid} | 
[**DeleteApplicationThumbnails**](DefaultApi.md#DeleteApplicationThumbnails) | **Delete** /api/thumbnails/d/{did}/{wv}/{wvid}/e/{eid} | 
[**DeleteAssociativeData**](DefaultApi.md#DeleteAssociativeData) | **Delete** /api/appelements/d/{did}/{wvm}/{wvmid}/e/{eid}/associativedata | 
[**GetAssociativeData**](DefaultApi.md#GetAssociativeData) | **Get** /api/appelements/d/{did}/{wvm}/{wvmid}/e/{eid}/associativedata | 
[**GetConfiguredElementThumbnailWithSize**](DefaultApi.md#GetConfiguredElementThumbnailWithSize) | **Get** /api/thumbnails/d/{did}/w/{wid}/e/{eid}/c/{cid}/s/{sz} | 
[**GetDocumentThumbnail**](DefaultApi.md#GetDocumentThumbnail) | **Get** /api/thumbnails/d/{did}/w/{wid} | 
[**GetDocumentThumbnailWithSize**](DefaultApi.md#GetDocumentThumbnailWithSize) | **Get** /api/thumbnails/d/{did}/w/{wid}/s/{sz} | 
[**GetElementThumbnail**](DefaultApi.md#GetElementThumbnail) | **Get** /api/thumbnails/d/{did}/{wv}/{wvid}/e/{eid} | 
[**GetElementThumbnailWithApiConfiguration**](DefaultApi.md#GetElementThumbnailWithApiConfiguration) | **Get** /api/thumbnails/d/{did}/w/{wid}/e/{eid}/ac/{cid}/s/{sz} | 
[**GetElementThumbnailWithSize**](DefaultApi.md#GetElementThumbnailWithSize) | **Get** /api/thumbnails/d/{did}/w/{wid}/e/{eid}/s/{sz} | 
[**GetLatestInDocument**](DefaultApi.md#GetLatestInDocument) | **Get** /api/insertables/d/{did}/latest | insertables for a document
[**GetMetadataSchema**](DefaultApi.md#GetMetadataSchema) | **Get** /api/metadataschema | 
[**GetProperties**](DefaultApi.md#GetProperties) | **Get** /api/metadataschema/properties | 
[**GetPropertyInfo**](DefaultApi.md#GetPropertyInfo) | **Get** /api/metadataschema/propertyinfo/{pid} | 
[**GetSchema**](DefaultApi.md#GetSchema) | **Get** /api/metadataschema/{sid} | 
[**GetSketchBoundingBoxes**](DefaultApi.md#GetSketchBoundingBoxes) | **Get** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/sketches/{sid}/boundingboxes | 
[**GetSketchInfo**](DefaultApi.md#GetSketchInfo) | **Get** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/sketches | 
[**GetTessellatedEntities**](DefaultApi.md#GetTessellatedEntities) | **Get** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/sketches/{sid}/tessellatedentities | 
[**GetThumbnailForDocument**](DefaultApi.md#GetThumbnailForDocument) | **Get** /api/thumbnails/d/{did} | 
[**GetThumbnailForDocumentAndVersion**](DefaultApi.md#GetThumbnailForDocumentAndVersion) | **Get** /api/thumbnails/d/{did}/v/{vid} | 
[**GetThumbnailForDocumentAndVersionOld**](DefaultApi.md#GetThumbnailForDocumentAndVersionOld) | **Get** /api/thumbnails/document/{did}/version/{vid} | 
[**GetThumbnailForDocumentOld**](DefaultApi.md#GetThumbnailForDocumentOld) | **Get** /api/thumbnails/document/{did} | 
[**GetWorkflowableTestObject**](DefaultApi.md#GetWorkflowableTestObject) | **Get** /api/workflowabletestobject/{oid} | 
[**PostAssociativeData**](DefaultApi.md#PostAssociativeData) | **Post** /api/appelements/d/{did}/{wvm}/{wvmid}/e/{eid}/associativedata | 
[**SetApplicationElementThumbnail**](DefaultApi.md#SetApplicationElementThumbnail) | **Post** /api/thumbnails/d/{did}/{wv}/{wvid}/e/{eid} | 
[**TransitionWorkflowableTestObject**](DefaultApi.md#TransitionWorkflowableTestObject) | **Post** /api/workflowabletestobject/{oid}/{transition} | 
[**UpdateWorkflowableTestObject**](DefaultApi.md#UpdateWorkflowableTestObject) | **Post** /api/workflowabletestobject/{oid} | 



## CreateWorkflowableTestObject

> BtWorkflowableTestObjectInfo CreateWorkflowableTestObject(ctx, wfid)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**wfid** | **string**|  | 

### Return type

[**BtWorkflowableTestObjectInfo**](BTWorkflowableTestObjectInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## DeleteApplicationThumbnails

> DeleteApplicationThumbnails(ctx, did, wv, wvid, eid)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wv** | **string**|  | 
**wvid** | **string**|  | 
**eid** | **string**|  | 

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


## DeleteAssociativeData

> BtAppElementBasicInfo DeleteAssociativeData(ctx, did, eid, wvm, wvmid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**eid** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
 **optional** | ***DeleteAssociativeDataOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a DeleteAssociativeDataOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **transactionId** | **optional.String**|  | [default to ]
 **parentChangeId** | **optional.String**|  | [default to ]
 **associativeDataId** | [**optional.Interface of []string**](string.md)|  | 
 **elementId** | **optional.String**|  | [default to ]
 **viewId** | **optional.String**|  | [default to ]
 **microversionId** | **optional.String**|  | [default to ]
 **documentMicroversion** | **optional.String**|  | [default to ]
 **deterministicId** | **optional.String**|  | [default to ]
 **featureId** | **optional.String**|  | [default to ]
 **entityId** | **optional.String**|  | [default to ]
 **occurrenceId** | **optional.String**|  | [default to ]

### Return type

[**BtAppElementBasicInfo**](BTAppElementBasicInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetAssociativeData

> BtAppAssociativeDataInfoArray GetAssociativeData(ctx, did, wvm, wvmid, eid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
 **optional** | ***GetAssociativeDataOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetAssociativeDataOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **transactionId** | **optional.String**|  | [default to ]
 **changeId** | **optional.String**|  | [default to ]
 **associativeDataId** | [**optional.Interface of []string**](string.md)|  | 
 **elementId** | **optional.String**|  | [default to ]
 **viewId** | **optional.String**|  | [default to ]
 **microversionId** | **optional.String**|  | [default to ]
 **documentMicroversion** | **optional.String**|  | [default to ]
 **deterministicId** | **optional.String**|  | [default to ]
 **featureId** | **optional.String**|  | [default to ]
 **entityId** | **optional.String**|  | [default to ]
 **occurrenceId** | **optional.String**|  | [default to ]
 **returnIdTags** | **optional.Bool**|  | [default to false]

### Return type

[**BtAppAssociativeDataInfoArray**](BTAppAssociativeDataInfoArray.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetConfiguredElementThumbnailWithSize

> GetConfiguredElementThumbnailWithSize(ctx, did, wid, eid, cid, sz, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wid** | **string**|  | 
**eid** | **string**|  | 
**cid** | **string**|  | 
**sz** | **string**|  | 
 **optional** | ***GetConfiguredElementThumbnailWithSizeOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetConfiguredElementThumbnailWithSizeOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------





 **t** | **optional.String**|  | 
 **rejectEmpty** | **optional.Bool**|  | [default to false]

### Return type

 (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+octet-stream;charset=UTF-8;qs=0.1, image/_*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetDocumentThumbnail

> BtThumbnailInfo GetDocumentThumbnail(ctx, did, wid)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wid** | **string**|  | 

### Return type

[**BtThumbnailInfo**](BTThumbnailInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetDocumentThumbnailWithSize

> GetDocumentThumbnailWithSize(ctx, did, wid, sz, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wid** | **string**|  | 
**sz** | **string**|  | 
 **optional** | ***GetDocumentThumbnailWithSizeOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetDocumentThumbnailWithSizeOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------



 **t** | **optional.String**|  | 

### Return type

 (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+octet-stream;charset=UTF-8;qs=0.1, image/_*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetElementThumbnail

> BtThumbnailInfo GetElementThumbnail(ctx, did, wv, wvid, eid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wv** | **string**|  | 
**wvid** | **string**|  | 
**eid** | **string**|  | 
 **optional** | ***GetElementThumbnailOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetElementThumbnailOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **linkDocumentId** | **optional.String**|  | 

### Return type

[**BtThumbnailInfo**](BTThumbnailInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetElementThumbnailWithApiConfiguration

> GetElementThumbnailWithApiConfiguration(ctx, did, wid, eid, cid, sz, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wid** | **string**|  | 
**eid** | **string**|  | 
**cid** | **string**|  | 
**sz** | **string**|  | 
 **optional** | ***GetElementThumbnailWithApiConfigurationOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetElementThumbnailWithApiConfigurationOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------





 **t** | **optional.String**|  | 
 **rejectEmpty** | **optional.Bool**|  | [default to false]

### Return type

 (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+octet-stream;charset=UTF-8;qs=0.1, image/_*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetElementThumbnailWithSize

> GetElementThumbnailWithSize(ctx, did, wid, eid, sz, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wid** | **string**|  | 
**eid** | **string**|  | 
**sz** | **string**|  | 
 **optional** | ***GetElementThumbnailWithSizeOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetElementThumbnailWithSizeOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **t** | **optional.String**|  | 
 **rejectEmpty** | **optional.Bool**|  | [default to false]

### Return type

 (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+octet-stream;charset=UTF-8;qs=0.1, image/_*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetLatestInDocument

> BtListResponseBtInsertableInfo GetLatestInDocument(ctx, did, optional)

insertables for a document

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
 **optional** | ***GetLatestInDocumentOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetLatestInDocumentOpts struct


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

[**BtListResponseBtInsertableInfo**](BTListResponseBTInsertableInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetMetadataSchema

> BtMetadataSchemaInfo GetMetadataSchema(ctx, objectType, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**objectType** | **int32**|  | 
 **optional** | ***GetMetadataSchemaOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetMetadataSchemaOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **ownerId** | **optional.String**|  | 
 **documentId** | **optional.String**|  | 
 **ownerType** | **optional.Int32**|  | [default to 1]

### Return type

[**BtMetadataSchemaInfo**](BTMetadataSchemaInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetProperties

> BtListResponseBtMetadataPropertySummaryInfo GetProperties(ctx, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
 **optional** | ***GetPropertiesOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetPropertiesOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **schemaId** | **optional.String**|  | 
 **ownerId** | **optional.String**|  | 
 **documentId** | **optional.String**|  | 
 **ownerType** | **optional.Int32**|  | [default to 1]
 **objectType** | **optional.Int32**|  | 
 **strict** | **optional.Bool**|  | [default to false]
 **activeOnly** | **optional.Bool**|  | [default to false]
 **offset** | **optional.Int32**|  | [default to 0]
 **limit** | **optional.Int32**|  | [default to 200]

### Return type

[**BtListResponseBtMetadataPropertySummaryInfo**](BTListResponseBTMetadataPropertySummaryInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetPropertyInfo

> BtMetadataPropertyInfo GetPropertyInfo(ctx, pid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**pid** | **string**|  | 
 **optional** | ***GetPropertyInfoOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetPropertyInfoOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **documentId** | **optional.String**|  | 
 **schemaId** | **optional.String**|  | 
 **ownerId** | **optional.String**|  | 
 **ownerType** | **optional.Int32**|  | [default to 1]
 **objectType** | **optional.Int32**|  | 

### Return type

[**BtMetadataPropertyInfo**](BTMetadataPropertyInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetSchema

> BtMetadataSchemaInfo GetSchema(ctx, sid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**sid** | **string**|  | 
 **optional** | ***GetSchemaOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetSchemaOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **documentId** | **optional.String**|  | 

### Return type

[**BtMetadataSchemaInfo**](BTMetadataSchemaInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetSketchBoundingBoxes

> BtBoundingBoxInfo GetSketchBoundingBoxes(ctx, did, wvm, wvmid, eid, sid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
**sid** | **string**|  | 
 **optional** | ***GetSketchBoundingBoxesOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetSketchBoundingBoxesOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------





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


## GetSketchInfo

> GetSketchInfo(ctx, did, wvm, wvmid, eid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
 **optional** | ***GetSketchInfoOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetSketchInfoOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **configuration** | **optional.String**|  | 
 **sketchId** | [**optional.Interface of []string**](string.md)|  | 
 **output3D** | **optional.Bool**|  | [default to false]
 **curvePoints** | **optional.Bool**|  | [default to false]
 **includeGeometry** | **optional.Bool**|  | [default to true]
 **linkDocumentId** | **optional.String**|  | 

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


## GetTessellatedEntities

> GetTessellatedEntities(ctx, did, wvm, wvmid, eid, sid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
**sid** | **string**|  | 
 **optional** | ***GetTessellatedEntitiesOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetTessellatedEntitiesOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------





 **configuration** | **optional.String**|  | 
 **entityId** | [**optional.Interface of []string**](string.md)|  | 
 **angleTolerance** | **optional.Float64**|  | 
 **chordTolerance** | **optional.Float64**|  | 
 **linkDocumentId** | **optional.String**|  | 

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


## GetThumbnailForDocument

> BtThumbnailInfo GetThumbnailForDocument(ctx, did)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 

### Return type

[**BtThumbnailInfo**](BTThumbnailInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetThumbnailForDocumentAndVersion

> GetThumbnailForDocumentAndVersion(ctx, did, vid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**vid** | **string**|  | 
 **optional** | ***GetThumbnailForDocumentAndVersionOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetThumbnailForDocumentAndVersionOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


 **linkDocumentId** | **optional.String**|  | 

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


## GetThumbnailForDocumentAndVersionOld

> GetThumbnailForDocumentAndVersionOld(ctx, did, vid)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**vid** | **string**|  | 

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


## GetThumbnailForDocumentOld

> BtThumbnailInfo GetThumbnailForDocumentOld(ctx, did)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 

### Return type

[**BtThumbnailInfo**](BTThumbnailInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetWorkflowableTestObject

> BtWorkflowableTestObjectInfo GetWorkflowableTestObject(ctx, oid)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**oid** | **string**|  | 

### Return type

[**BtWorkflowableTestObjectInfo**](BTWorkflowableTestObjectInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## PostAssociativeData

> BtAppAssociativeDataInfoArray PostAssociativeData(ctx, did, eid, wvm, wvmid, body)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**eid** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**body** | **string**|  | 

### Return type

[**BtAppAssociativeDataInfoArray**](BTAppAssociativeDataInfoArray.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## SetApplicationElementThumbnail

> SetApplicationElementThumbnail(ctx, did, wv, wvid, eid, btApplicationElementThumbnailParamsArray, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wv** | **string**|  | 
**wvid** | **string**|  | 
**eid** | **string**|  | 
**btApplicationElementThumbnailParamsArray** | [**BtApplicationElementThumbnailParamsArray**](BtApplicationElementThumbnailParamsArray.md)|  | 
 **optional** | ***SetApplicationElementThumbnailOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a SetApplicationElementThumbnailOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------





 **overwrite** | **optional.Bool**|  | [default to false]

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


## TransitionWorkflowableTestObject

> BtWorkflowableTestObjectInfo TransitionWorkflowableTestObject(ctx, oid, transition)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**oid** | **string**|  | 
**transition** | **string**|  | 

### Return type

[**BtWorkflowableTestObjectInfo**](BTWorkflowableTestObjectInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpdateWorkflowableTestObject

> BtWorkflowableTestObjectInfo UpdateWorkflowableTestObject(ctx, oid, btUpdateWorkflowableTestObjectParams)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**oid** | **string**|  | 
**btUpdateWorkflowableTestObjectParams** | [**BtUpdateWorkflowableTestObjectParams**](BtUpdateWorkflowableTestObjectParams.md)|  | 

### Return type

[**BtWorkflowableTestObjectInfo**](BTWorkflowableTestObjectInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

