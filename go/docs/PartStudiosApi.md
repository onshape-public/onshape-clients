# \PartStudiosApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddPartStudioFeature**](PartStudiosApi.md#AddPartStudioFeature) | **Post** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/features | Add Feature
[**ComparePartStudios**](PartStudiosApi.md#ComparePartStudios) | **Get** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/compare | Compare Part Studios
[**CreatePartStudio**](PartStudiosApi.md#CreatePartStudio) | **Post** /api/partstudios/d/{did}/w/{wid} | Create Part Studio
[**CreatePartStudioTranslation**](PartStudiosApi.md#CreatePartStudioTranslation) | **Post** /api/partstudios/d/{did}/{wv}/{wvid}/e/{eid}/translations | Create Part Studio translation
[**DeletePartStudioFeature**](PartStudiosApi.md#DeletePartStudioFeature) | **Delete** /api/partstudios/d/{did}/w/{wid}/e/{eid}/features/featureid/{fid} | Delete Feature
[**EvalFeatureScript**](PartStudiosApi.md#EvalFeatureScript) | **Post** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/featurescript | Evaluate FeatureScript
[**ExportPS1**](PartStudiosApi.md#ExportPS1) | **Get** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/parasolid | Export Part Studio to Parasolid
[**ExportStl1**](PartStudiosApi.md#ExportStl1) | **Get** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/stl | Export Part Studio to STL
[**GetPartStudioBodyDetails**](PartStudiosApi.md#GetPartStudioBodyDetails) | **Get** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/bodydetails | Array of body information
[**GetPartStudioBoundingBoxes**](PartStudiosApi.md#GetPartStudioBoundingBoxes) | **Get** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/boundingboxes | Mass properties of parts or a PartStudio.
[**GetPartStudioConfiguration**](PartStudiosApi.md#GetPartStudioConfiguration) | **Get** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/configuration | Get Configuration
[**GetPartStudioFeatureSpecs**](PartStudiosApi.md#GetPartStudioFeatureSpecs) | **Get** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/featurespecs | Get Feature Specs
[**GetPartStudioFeatures**](PartStudiosApi.md#GetPartStudioFeatures) | **Get** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/features | Get Feature List
[**GetPartStudioMassProperties**](PartStudiosApi.md#GetPartStudioMassProperties) | **Get** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/massproperties | Mass properties of parts or a PartStudio.
[**GetPartStudioNamedViews**](PartStudiosApi.md#GetPartStudioNamedViews) | **Get** /api/partstudios/d/{did}/e/{eid}/namedViews | Get Named Views
[**GetPartStudioShadedViews**](PartStudiosApi.md#GetPartStudioShadedViews) | **Get** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/shadedviews | Get Shaded Views
[**GetPartStudioTessellatedEdges**](PartStudiosApi.md#GetPartStudioTessellatedEdges) | **Get** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/tessellatededges | Tesselated edges from a PartStudio.
[**GetPartStudioTessellatedFaces**](PartStudiosApi.md#GetPartStudioTessellatedFaces) | **Get** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/tessellatedfaces | Tesselated faces of the parts in the Part Studio.
[**TranslateIds**](PartStudiosApi.md#TranslateIds) | **Post** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/idtranslations | Id Translations
[**UpdateFeatures**](PartStudiosApi.md#UpdateFeatures) | **Post** /api/partstudios/d/{did}/w/{wid}/e/{eid}/features/updates | Update Features
[**UpdatePartStudioConfiguration**](PartStudiosApi.md#UpdatePartStudioConfiguration) | **Post** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/configuration | Update Configuration
[**UpdatePartStudioFeature**](PartStudiosApi.md#UpdatePartStudioFeature) | **Post** /api/partstudios/d/{did}/w/{wid}/e/{eid}/features/featureid/{fid} | Update Feature
[**UpdateRollback**](PartStudiosApi.md#UpdateRollback) | **Post** /api/partstudios/d/{did}/w/{wid}/e/{eid}/features/rollback | Update Feature Rollback



## AddPartStudioFeature

> BtFeatureDefinitionResponse1617 AddPartStudioFeature(ctx, did, wvm, wvmid, eid, optional)

Add Feature

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
 **optional** | ***AddPartStudioFeatureOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a AddPartStudioFeatureOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **btFeatureDefinitionCall1406** | [**optional.Interface of BtFeatureDefinitionCall1406**](BtFeatureDefinitionCall1406.md)| feature The serialized feature definition | 

### Return type

[**BtFeatureDefinitionResponse1617**](BTFeatureDefinitionResponse-1617.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2
- **Accept**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## ComparePartStudios

> BtRootDiffInfo ComparePartStudios(ctx, did, wvm, wvmid, eid, optional)

Compare Part Studios

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**| Document ID. | 
**wvm** | **string**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
**wvmid** | **string**| Workspace (w), Version (v) or Microversion (m) ID. | 
**eid** | **string**| Element ID. | 
 **optional** | ***ComparePartStudiosOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a ComparePartStudiosOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **workspaceId** | **optional.String**|  | 
 **versionId** | **optional.String**|  | 
 **microversionId** | **optional.String**|  | 
 **sourceConfiguration** | **optional.String**|  | 
 **targetConfiguration** | **optional.String**|  | 
 **linkDocumentId** | **optional.String**|  | 

### Return type

[**BtRootDiffInfo**](BTRootDiffInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## CreatePartStudio

> BtDocumentElementInfo CreatePartStudio(ctx, did, wid, btModelElementParams)

Create Part Studio

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**| Document ID. | 
**wid** | **string**| Workspace ID. | 
**btModelElementParams** | [**BtModelElementParams**](BtModelElementParams.md)|  | 

### Return type

[**BtDocumentElementInfo**](BTDocumentElementInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2
- **Accept**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## CreatePartStudioTranslation

> BtTranslationRequestInfo CreatePartStudioTranslation(ctx, did, wv, wvid, eid, btTranslateFormatParams)

Create Part Studio translation

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**| Document ID. | 
**wv** | **string**| One of w or v corresponding to whether a workspace or version was specified. | 
**wvid** | **string**| Workspace (w) or Version (v) ID. | 
**eid** | **string**| Element ID. | 
**btTranslateFormatParams** | [**BtTranslateFormatParams**](BtTranslateFormatParams.md)|  | 

### Return type

[**BtTranslationRequestInfo**](BTTranslationRequestInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2
- **Accept**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## DeletePartStudioFeature

> BtFeatureApiBase1430 DeletePartStudioFeature(ctx, did, wid, eid, fid)

Delete Feature

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**| Document ID. | 
**wid** | **string**| Workspace ID. | 
**eid** | **string**| Element ID. | 
**fid** | **string**| The id of the feature being updated. This id should be URL encoded and must match the featureId found in the serialized structure | 

### Return type

[**BtFeatureApiBase1430**](BTFeatureApiBase-1430.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## EvalFeatureScript

> BtFeatureScriptEvalResponse1859 EvalFeatureScript(ctx, did, wvm, wvmid, eid, optional)

Evaluate FeatureScript

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**| Document ID. | 
**wvm** | **string**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
**wvmid** | **string**| Workspace (w), Version (v) or Microversion (m) ID. | 
**eid** | **string**| Element ID. | 
 **optional** | ***EvalFeatureScriptOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a EvalFeatureScriptOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **configuration** | **optional.String**| Configuration string. | 
 **btFeatureScriptEvalCall2377** | [**optional.Interface of BtFeatureScriptEvalCall2377**](BtFeatureScriptEvalCall2377.md)|  | 

### Return type

[**BtFeatureScriptEvalResponse1859**](BTFeatureScriptEvalResponse-1859.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2
- **Accept**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## ExportPS1

> ExportPS1(ctx, did, wvm, wvmid, eid, optional)

Export Part Studio to Parasolid

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**| Document ID. | 
**wvm** | **string**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
**wvmid** | **string**| Workspace (w), Version (v) or Microversion (m) ID. | 
**eid** | **string**| Element ID. | 
 **optional** | ***ExportPS1Opts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a ExportPS1Opts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **partIds** | **optional.String**| IDs of the parts to retrieve. Repeat query param to add more than one (i.e. partId&#x3D;JHK&amp;partId&#x3D;JHD). May not be combined with other ID filters | 
 **version** | **optional.String**| Parasolid version | [default to 0]
 **includeExportIds** | **optional.Bool**| Whether topolgy ids should be exported as parasolid attributes | [default to false]
 **configuration** | **optional.String**| Configuration string. | 
 **linkDocumentId** | **optional.String**| Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. | 

### Return type

 (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## ExportStl1

> ExportStl1(ctx, did, wvm, wvmid, eid, optional)

Export Part Studio to STL

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**| Document ID. | 
**wvm** | **string**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
**wvmid** | **string**| Workspace (w), Version (v) or Microversion (m) ID. | 
**eid** | **string**| Element ID. | 
 **optional** | ***ExportStl1Opts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a ExportStl1Opts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **partIds** | **optional.String**| IDs of the parts to retrieve. Repeat query param to add more than one (i.e. partId&#x3D;JHK&amp;partId&#x3D;JHD). May not be combined with other ID filters | 
 **mode** | **optional.String**| Type of file: text, binary | [default to text]
 **grouping** | **optional.Bool**| Whether parts should be exported as a group or individually in a .zip file | [default to true]
 **scale** | **optional.Float64**| Scale for measurements. | [default to 1.0]
 **units** | **optional.String**| Name of base unit (meter, centimeter, millimeter, inch, foot, or yard) | [default to inch]
 **angleTolerance** | **optional.Float64**| Angle tolerance (in radians). This specifies the limit on the sum of the angular deviations of a tessellation chord from the tangent vectors at two chord endpoints. The specified value must be less than PI/2. This parameter currently has a default value chosen based on the complexity of the parts being tessellated. | 
 **chordTolerance** | **optional.Float64**| Chord tolerance (in meters). This specifies the limit on the maximum deviation of a tessellation chord from the true surface/edge. This parameter currently has a default value chosen based on the size and complexity of the parts being tessellated. | 
 **maxFacetWidth** | **optional.Float64**| Max facet width. This specifies the limit on the size of any side of a tessellation facet. | 
 **minFacetWidth** | **optional.Float64**| Max facet width. This specifies the limit on the size of any side of a tessellation facet. | 
 **configuration** | **optional.String**| Configuration string. | 
 **linkDocumentId** | **optional.String**| Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. | 

### Return type

 (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetPartStudioBodyDetails

> BtExportModelBodiesResponse734 GetPartStudioBodyDetails(ctx, did, wvm, wvmid, eid, optional)

Array of body information

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
 **optional** | ***GetPartStudioBodyDetailsOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetPartStudioBodyDetailsOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **configuration** | **optional.String**|  | 
 **linkDocumentId** | **optional.String**|  | 
 **rollbackBarIndex** | **optional.Int32**|  | [default to -1]
 **body** | **optional.String**|  | 

### Return type

[**BtExportModelBodiesResponse734**](BTExportModelBodiesResponse-734.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2
- **Accept**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetPartStudioBoundingBoxes

> BtBoundingBoxInfo GetPartStudioBoundingBoxes(ctx, did, wvm, wvmid, eid, optional)

Mass properties of parts or a PartStudio.

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**| Document ID. | 
**wvm** | **string**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
**wvmid** | **string**| Workspace (w), Version (v) or Microversion (m) ID. | 
**eid** | **string**| Element ID. | 
 **optional** | ***GetPartStudioBoundingBoxesOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetPartStudioBoundingBoxesOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **includeHidden** | **optional.Bool**| Whether or not to include bounding boxes for hidden parts. | [default to false]
 **includeWireBodies** | **optional.Bool**| Whether to include wire bodies in the bounding box. | [default to true]
 **configuration** | **optional.String**| Configuration string. | 
 **linkDocumentId** | **optional.String**| Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. | 

### Return type

[**BtBoundingBoxInfo**](BTBoundingBoxInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetPartStudioConfiguration

> GetPartStudioConfiguration(ctx, did, wvm, wvmid, eid)

Get Configuration

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 

### Return type

 (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetPartStudioFeatureSpecs

> BtFeatureSpecsResponse664 GetPartStudioFeatureSpecs(ctx, did, wvm, wvmid, eid)

Get Feature Specs

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**| Document ID. | 
**wvm** | **string**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
**wvmid** | **string**| Workspace (w), Version (v) or Microversion (m) ID. | 
**eid** | **string**| Element ID. | 

### Return type

[**BtFeatureSpecsResponse664**](BTFeatureSpecsResponse-664.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetPartStudioFeatures

> BtFeatureListResponse2457 GetPartStudioFeatures(ctx, did, wvm, wvmid, eid, optional)

Get Feature List

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**| Document ID. | 
**wvm** | **string**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
**wvmid** | **string**| Workspace (w), Version (v) or Microversion (m) ID. | 
**eid** | **string**| Element ID. | 
 **optional** | ***GetPartStudioFeaturesOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetPartStudioFeaturesOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **featureId** | [**optional.Interface of []string**](string.md)| ID of a feature; repeat query param to add more than one | 
 **linkDocumentId** | **optional.String**| Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. | 
 **noSketchGeometry** | **optional.Bool**| Whether or not to output simple sketch info without geometry | [default to false]

### Return type

[**BtFeatureListResponse2457**](BTFeatureListResponse-2457.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetPartStudioMassProperties

> BtMassPropertiesBulkInfo GetPartStudioMassProperties(ctx, did, wvm, wvmid, eid, optional)

Mass properties of parts or a PartStudio.

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**| Document ID. | 
**wvm** | **string**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
**wvmid** | **string**| Workspace (w), Version (v) or Microversion (m) ID. | 
**eid** | **string**| Element ID. | 
 **optional** | ***GetPartStudioMassPropertiesOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetPartStudioMassPropertiesOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **partId** | [**optional.Interface of []string**](string.md)| IDs of the parts to retrieve. Repeat query param to add more than one (i.e. partId&#x3D;JHK&amp;partId&#x3D;JHD). May not be combined with other ID filters | 
 **massAsGroup** | **optional.Bool**| If true, specified parts will be evaluated as a single object instead of individually | [default to true]
 **configuration** | **optional.String**| Configuration string. | 
 **linkDocumentId** | **optional.String**| Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. | 

### Return type

[**BtMassPropertiesBulkInfo**](BTMassPropertiesBulkInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetPartStudioNamedViews

> BtNamedViewsInfo GetPartStudioNamedViews(ctx, did, eid, optional)

Get Named Views

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**| Document ID. | 
**eid** | **string**| Element ID. | 
 **optional** | ***GetPartStudioNamedViewsOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetPartStudioNamedViewsOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


 **skipPerspective** | **optional.Bool**| Whether views with a perspective projection should be omitted. | [default to true]
 **includeSectionCutViews** | **optional.Bool**|  | [default to false]
 **linkDocumentId** | **optional.String**|  | 

### Return type

[**BtNamedViewsInfo**](BTNamedViewsInfo.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetPartStudioShadedViews

> BtShadedViewsInfo GetPartStudioShadedViews(ctx, did, wvm, wvmid, eid, optional)

Get Shaded Views

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**| Document ID. | 
**wvm** | **string**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
**wvmid** | **string**| Workspace (w), Version (v) or Microversion (m) ID. | 
**eid** | **string**| Element ID. | 
 **optional** | ***GetPartStudioShadedViewsOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetPartStudioShadedViewsOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **viewMatrix** | **optional.String**| 12-number view matrix (comma-separated), or one of the following named views: top, bottom, front, back, left, right The 12 entries in the view matrix form three rows and four columns, which is a linear transformation applied to the model itself. The matrix&#39;s first three columns maps the coordinate axes of the model to the coordinate axes of the view, and the fourth column translates the origin (in meters). The view coordinates have x pointing right, y pointing up, and z pointing towards the viewer, while a front view of the model has x pointing right, y pointing away from the viewer, and z pointing up. For example, the identity matrix viewMatrix&#x3D;1,0,0,0,0,1,0,0,0,0,1,0 corresponds to the top view, and viewMatrix&#x3D;0.612,0.612,0,0,-0.354,0.354,0.707,0,0.707,-0.707,0.707,0 corresponds (approximately) to the isometric view. The first three columns of the view matrix should be orthonormal and have a positive determinant.  If this is not the case, view behavior may be undefined. | [default to front]
 **outputHeight** | **optional.Int32**| Output image height (in pixels) | [default to 500]
 **outputWidth** | **optional.Int32**| Output image width (in pixels) | [default to 500]
 **pixelSize** | **optional.Float64**| Height and width represented by each pixel (in meters). If the value is 0, the display will be sized to fit the output image dimensions. | [default to 0.003]
 **edges** | **optional.String**| The treatment to be applied to edges in the display. Options are show: show visible edges, hide: hide visible edges. | [default to show]
 **showAllParts** | **optional.Bool**| Whether or not all parts should be shown in the element, regardless of user setting. If false, the visibility setting made by the user will be reflected in the image. If true, all parts will be shown. | [default to false]
 **includeSurfaces** | **optional.Bool**| Whether or not surfaces should be shown in the element. It is applicable only when showAllParts is true. If false, surfaces will be excluded. If true, all surfaces will be shown. | [default to false]
 **useAntiAliasing** | **optional.Bool**| If true, an anti-aliasing factor will be used to smooth model boundaries in the final image result. If false, the image will be rasterized at the given resolution. Setting to true can have negative performance implications with respect to rendering time and memory usage. If a high-resolution image is requested and anti-aliasing is turned on, the server may not be able to fulfill the request. | [default to false]
 **configuration** | **optional.String**| Configuration string. | 
 **linkDocumentId** | **optional.String**| Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. | 

### Return type

[**BtShadedViewsInfo**](BTShadedViewsInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetPartStudioTessellatedEdges

> BtExportTessellatedEdgesResponse327 GetPartStudioTessellatedEdges(ctx, did, wvm, wvmid, eid, optional)

Tesselated edges from a PartStudio.

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
 **optional** | ***GetPartStudioTessellatedEdgesOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetPartStudioTessellatedEdgesOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **angleTolerance** | **optional.Float64**|  | 
 **chordTolerance** | **optional.Float64**|  | 
 **partId** | [**optional.Interface of []string**](string.md)|  | 
 **edgeId** | [**optional.Interface of []string**](string.md)|  | 
 **configuration** | **optional.String**|  | 
 **linkDocumentId** | **optional.String**|  | 

### Return type

[**BtExportTessellatedEdgesResponse327**](BTExportTessellatedEdgesResponse-327.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetPartStudioTessellatedFaces

> BtExportTessellatedFacesResponse898 GetPartStudioTessellatedFaces(ctx, did, wvm, wvmid, eid, optional)

Tesselated faces of the parts in the Part Studio.

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
 **optional** | ***GetPartStudioTessellatedFacesOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetPartStudioTessellatedFacesOpts struct


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
 **partId** | [**optional.Interface of []string**](string.md)|  | 
 **faceId** | [**optional.Interface of []string**](string.md)|  | 
 **outputErrorFaces** | **optional.Bool**|  | [default to false]
 **configuration** | **optional.String**|  | 
 **linkDocumentId** | **optional.String**|  | 
 **body** | **optional.String**|  | 

### Return type

[**BtExportTessellatedFacesResponse898**](BTExportTessellatedFacesResponse-898.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2
- **Accept**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## TranslateIds

> BtIdTranslationInfo TranslateIds(ctx, did, wvm, wvmid, eid, btIdTranslationParams)

Id Translations

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**| Document ID. | 
**wvm** | **string**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
**wvmid** | **string**| Workspace (w), Version (v) or Microversion (m) ID. | 
**eid** | **string**| Element ID. | 
**btIdTranslationParams** | [**BtIdTranslationParams**](BtIdTranslationParams.md)|  | 

### Return type

[**BtIdTranslationInfo**](BTIdTranslationInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2
- **Accept**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpdateFeatures

> BtUpdateFeaturesResponse1333 UpdateFeatures(ctx, did, wid, eid, optional)

Update Features

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**| Document ID. | 
**wid** | **string**| Workspace ID. | 
**eid** | **string**| Element ID. | 
 **optional** | ***UpdateFeaturesOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a UpdateFeaturesOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------



 **body** | **optional.String**| feature The serialized feature definition | 

### Return type

[**BtUpdateFeaturesResponse1333**](BTUpdateFeaturesResponse-1333.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2
- **Accept**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpdatePartStudioConfiguration

> BtConfigurationResponse2019 UpdatePartStudioConfiguration(ctx, did, wvm, wvmid, eid, optional)

Update Configuration

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**|  | 
**wvm** | **string**|  | 
**wvmid** | **string**|  | 
**eid** | **string**|  | 
 **optional** | ***UpdatePartStudioConfigurationOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a UpdatePartStudioConfigurationOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **body** | **optional.String**|  | 

### Return type

[**BtConfigurationResponse2019**](BTConfigurationResponse-2019.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2
- **Accept**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpdatePartStudioFeature

> BtFeatureDefinitionResponse1617 UpdatePartStudioFeature(ctx, did, wid, eid, fid, optional)

Update Feature

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**| Document ID. | 
**wid** | **string**| Workspace ID. | 
**eid** | **string**| Element ID. | 
**fid** | **string**| The id of the feature being updated. This id should be URL encoded and must match the featureId found in the serialized structure | 
 **optional** | ***UpdatePartStudioFeatureOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a UpdatePartStudioFeatureOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------




 **body** | **optional.String**| feature The serialized feature definition | 

### Return type

[**BtFeatureDefinitionResponse1617**](BTFeatureDefinitionResponse-1617.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2
- **Accept**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpdateRollback

> BtSetFeatureRollbackResponse1042 UpdateRollback(ctx, did, wid, eid, optional)

Update Feature Rollback

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**did** | **string**| Document ID. | 
**wid** | **string**| Workspace ID. | 
**eid** | **string**| Element ID. | 
 **optional** | ***UpdateRollbackOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a UpdateRollbackOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------



 **body** | **optional.String**| The index at which the rollback index should be placed. Features  with entry index (0-based) higher than or equal to the value are rolled back. Value of -1 is treated  as an alias for \&quot;end of feature list\&quot;. Otherwise the value must be in the range 0 to the number of  entries in the feature list | 

### Return type

[**BtSetFeatureRollbackResponse1042**](BTSetFeatureRollbackResponse-1042.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2
- **Accept**: application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

