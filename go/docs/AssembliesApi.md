# \AssembliesApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddFeature**](AssembliesApi.md#AddFeature) | **Post** /api/assemblies/d/{did}/{wvm}/{wvmid}/e/{eid}/features | 
[**CreateAssembly**](AssembliesApi.md#CreateAssembly) | **Post** /api/assemblies/d/{did}/w/{wid} | Create Assembly
[**CreateInstance**](AssembliesApi.md#CreateInstance) | **Post** /api/assemblies/d/{did}/w/{wid}/e/{eid}/instances | Create assembly instance
[**DeleteFeature**](AssembliesApi.md#DeleteFeature) | **Delete** /api/assemblies/d/{did}/w/{wid}/e/{eid}/features/featureid/{fid} | Delete Feature
[**DeleteInstance**](AssembliesApi.md#DeleteInstance) | **Delete** /api/assemblies/d/{did}/w/{wid}/e/{eid}/instance/nodeid/{nid} | Delete assembly instance.
[**GetAssemblyBoundingBoxes**](AssembliesApi.md#GetAssemblyBoundingBoxes) | **Get** /api/assemblies/d/{did}/{wvm}/{wvmid}/e/{eid}/boundingboxes | Bounding Boxes.
[**GetAssemblyDefinition**](AssembliesApi.md#GetAssemblyDefinition) | **Get** /api/assemblies/d/{did}/{wvm}/{wvmid}/e/{eid} | Assembly Definition.
[**GetAssemblyShadedViews**](AssembliesApi.md#GetAssemblyShadedViews) | **Get** /api/assemblies/d/{did}/{wvm}/{wvmid}/e/{eid}/shadedviews | 
[**GetBillOfMaterials**](AssembliesApi.md#GetBillOfMaterials) | **Get** /api/assemblies/d/{did}/{wvm}/{wvmid}/e/{eid}/bom | Get Bill of Materials
[**GetFeatureSpecs**](AssembliesApi.md#GetFeatureSpecs) | **Get** /api/assemblies/d/{did}/{wvm}/{wvmid}/e/{eid}/featurespecs | 
[**GetFeatures**](AssembliesApi.md#GetFeatures) | **Get** /api/assemblies/d/{did}/{wvm}/{wvmid}/e/{eid}/features | Get Feature List
[**GetNamedViews**](AssembliesApi.md#GetNamedViews) | **Get** /api/assemblies/d/{did}/e/{eid}/namedViews | 
[**GetOrCreateBillOfMaterialsElement**](AssembliesApi.md#GetOrCreateBillOfMaterialsElement) | **Post** /api/assemblies/d/{did}/w/{wid}/e/{eid}/bomelement | Get or Create Bill of Materials Element
[**GetTranslatorFormats**](AssembliesApi.md#GetTranslatorFormats) | **Get** /api/assemblies/d/{did}/w/{wid}/e/{eid}/translationformats | Get Translation Formats
[**InsertTransformedInstances**](AssembliesApi.md#InsertTransformedInstances) | **Post** /api/assemblies/d/{did}/w/{wid}/e/{eid}/transformedinstances | Create and transform assembly instances
[**TransformOccurrences**](AssembliesApi.md#TransformOccurrences) | **Post** /api/assemblies/d/{did}/w/{wid}/e/{eid}/occurrencetransforms | Transform assembly occurrences.
[**TranslateFormat**](AssembliesApi.md#TranslateFormat) | **Post** /api/assemblies/d/{did}/{wv}/{wvid}/e/{eid}/translations | Create Assembly translation.
[**UpdateFeature**](AssembliesApi.md#UpdateFeature) | **Post** /api/assemblies/d/{did}/w/{wid}/e/{eid}/features/featureid/{fid} | 



## AddFeature

> BtFeatureDefinitionResponse1617 AddFeature(ctx, did, wvm, wvmid, eid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
 **optional** | ***AddFeatureOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a AddFeatureOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **body** | **optional.String**|  | 

### Return type

[**BtFeatureDefinitionResponse1617**](BTFeatureDefinitionResponse-1617.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## CreateAssembly

> BtDocumentElementInfo CreateAssembly(ctx, did, wid, btModelElementParams)

Create Assembly

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wid** | **string**|  | 
**btModelElementParams** | [**BtModelElementParams**](BtModelElementParams.md)|  | 

### Return type

[**BtDocumentElementInfo**](BTDocumentElementInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## CreateInstance

> []BtOccurrence74 CreateInstance(ctx, did, wid, eid, btAssemblyInstanceDefinitionParams)

Create assembly instance

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wid** | **string**|  | 
**eid** | **string**|  | 
**btAssemblyInstanceDefinitionParams** | [**BtAssemblyInstanceDefinitionParams**](BtAssemblyInstanceDefinitionParams.md)|  | 

### Return type

[**[]BtOccurrence74**](BTOccurrence-74.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## DeleteFeature

> BtFeatureApiBase1430 DeleteFeature(ctx, did, wid, eid, fid)

Delete Feature

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wid** | **string**|  | 
**eid** | **string**|  | 
**fid** | **string**|  | 

### Return type

[**BtFeatureApiBase1430**](BTFeatureApiBase-1430.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## DeleteInstance

> DeleteInstance(ctx, did, eid, wid, nid)

Delete assembly instance.

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**eid** | **string**|  | 
**wid** | **string**|  | 
**nid** | **string**|  | 

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


## GetAssemblyBoundingBoxes

> BtBoundingBoxInfo GetAssemblyBoundingBoxes(ctx, did, wvm, wvmid, eid, optional)

Bounding Boxes.

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
 **optional** | ***GetAssemblyBoundingBoxesOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetAssemblyBoundingBoxesOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **linkDocumentId** | **optional.String**|  | 
 **includeHidden** | **optional.Bool**|  | 
 **displayStateId** | **optional.String**|  | 
 **configuration** | **optional.String**|  | 
 **explodedViewId** | **optional.String**|  | 

### Return type

[**BtBoundingBoxInfo**](BTBoundingBoxInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetAssemblyDefinition

> BtAssemblyDefinitionInfo GetAssemblyDefinition(ctx, did, wvm, wvmid, eid, optional)

Assembly Definition.

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
 **optional** | ***GetAssemblyDefinitionOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetAssemblyDefinitionOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **linkDocumentId** | **optional.String**|  | 
 **includeMateFeatures** | **optional.Bool**|  | 
 **includeNonSolids** | **optional.Bool**|  | 
 **includeMateConnectors** | **optional.Bool**|  | 
 **configuration** | **optional.String**|  | 
 **explodedViewId** | **optional.String**|  | 

### Return type

[**BtAssemblyDefinitionInfo**](BTAssemblyDefinitionInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetAssemblyShadedViews

> BtShadedViewsInfo GetAssemblyShadedViews(ctx, did, wvm, wvmid, eid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
 **optional** | ***GetAssemblyShadedViewsOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetAssemblyShadedViewsOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **linkDocumentId** | **optional.String**|  | 
 **viewMatrix** | **optional.String**|  | [default to front]
 **outputHeight** | **optional.Int32**|  | [default to 500]
 **outputWidth** | **optional.Int32**|  | [default to 500]
 **pixelSize** | **optional.Float64**|  | [default to 0.003]
 **edges** | **optional.String**|  | [default to show]
 **showAllParts** | **optional.Bool**|  | [default to false]
 **includeSurfaces** | **optional.Bool**|  | [default to true]
 **useAntiAliasing** | **optional.Bool**|  | [default to false]
 **displayStateId** | **optional.String**|  | 
 **configuration** | **optional.String**|  | 
 **explodedViewId** | **optional.String**|  | 

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


## GetBillOfMaterials

> JsonNode GetBillOfMaterials(ctx, did, wvm, wvmid, eid, optional)

Get Bill of Materials

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
 **optional** | ***GetBillOfMaterialsOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetBillOfMaterialsOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **metadataWorkspaceId** | **optional.String**|  | [default to ]
 **bomColumnIds** | [**optional.Interface of []string**](string.md)|  | 
 **indented** | **optional.Bool**|  | [default to true]
 **multiLevel** | **optional.Bool**|  | [default to false]
 **generateIfAbsent** | **optional.Bool**|  | [default to false]
 **linkDocumentId** | **optional.String**|  | 
 **configuration** | **optional.String**|  | 

### Return type

[**JsonNode**](JsonNode.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetFeatureSpecs

> BtFeatureSpecsResponse664 GetFeatureSpecs(ctx, did, wvm, wvmid, eid)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 

### Return type

[**BtFeatureSpecsResponse664**](BTFeatureSpecsResponse-664.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetFeatures

> BtAssemblyFeatureListResponse1174 GetFeatures(ctx, did, wvm, wvmid, eid, optional)

Get Feature List

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
 **optional** | ***GetFeaturesOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetFeaturesOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **featureId** | [**optional.Interface of []string**](string.md)|  | 
 **linkDocumentId** | **optional.String**|  | 

### Return type

[**BtAssemblyFeatureListResponse1174**](BTAssemblyFeatureListResponse-1174.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetNamedViews

> BtNamedViewsInfo GetNamedViews(ctx, did, eid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**eid** | **string**|  | 
 **optional** | ***GetNamedViewsOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetNamedViewsOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


 **skipPerspective** | **optional.Bool**|  | [default to true]
 **linkDocumentId** | **optional.String**|  | 

### Return type

[**BtNamedViewsInfo**](BTNamedViewsInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetOrCreateBillOfMaterialsElement

> BtDocumentElementInfo GetOrCreateBillOfMaterialsElement(ctx, did, wid, eid)

Get or Create Bill of Materials Element

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wid** | **string**|  | 
**eid** | **string**|  | 

### Return type

[**BtDocumentElementInfo**](BTDocumentElementInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetTranslatorFormats

> []BtModelFormatInfo GetTranslatorFormats(ctx, did, wid, eid, optional)

Get Translation Formats

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wid** | **string**|  | 
**eid** | **string**|  | 
 **optional** | ***GetTranslatorFormatsOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetTranslatorFormatsOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------



 **checkContent** | **optional.Bool**|  | [default to true]

### Return type

[**[]BtModelFormatInfo**](BTModelFormatInfo.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## InsertTransformedInstances

> BtAssemblyInsertTransformedInstancesResponse InsertTransformedInstances(ctx, did, eid, wid, btAssemblyTransformedInstancesDefinitionParams)

Create and transform assembly instances

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**eid** | **string**|  | 
**wid** | **string**|  | 
**btAssemblyTransformedInstancesDefinitionParams** | [**BtAssemblyTransformedInstancesDefinitionParams**](BtAssemblyTransformedInstancesDefinitionParams.md)|  | 

### Return type

[**BtAssemblyInsertTransformedInstancesResponse**](BTAssemblyInsertTransformedInstancesResponse.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## TransformOccurrences

> TransformOccurrences(ctx, did, eid, wid, btAssemblyTransformDefinitionParams)

Transform assembly occurrences.

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**eid** | **string**|  | 
**wid** | **string**|  | 
**btAssemblyTransformDefinitionParams** | [**BtAssemblyTransformDefinitionParams**](BtAssemblyTransformDefinitionParams.md)|  | 

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


## TranslateFormat

> BtTranslationRequestInfo TranslateFormat(ctx, did, wv, wvid, eid, btTranslateFormatParams)

Create Assembly translation.

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


## UpdateFeature

> BtFeatureDefinitionResponse1617 UpdateFeature(ctx, did, wid, eid, fid, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wid** | **string**|  | 
**eid** | **string**|  | 
**fid** | **string**|  | 
 **optional** | ***UpdateFeatureOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a UpdateFeatureOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **body** | **optional.String**|  | 

### Return type

[**BtFeatureDefinitionResponse1617**](BTFeatureDefinitionResponse-1617.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

