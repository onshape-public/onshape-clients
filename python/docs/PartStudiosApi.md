# onshape_client.PartStudiosApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_feature1**](PartStudiosApi.md#add_feature1) | **POST** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/features | Add Feature
[**compare_part_studios1**](PartStudiosApi.md#compare_part_studios1) | **GET** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/compare | Compare Part Studios
[**create_part_studio**](PartStudiosApi.md#create_part_studio) | **POST** /api/partstudios/d/{did}/w/{wid} | Create Part Studio
[**delete_feature**](PartStudiosApi.md#delete_feature) | **DELETE** /api/partstudios/d/{did}/w/{wid}/e/{eid}/features/featureid/{fid} | Delete Feature
[**eval_feature_script**](PartStudiosApi.md#eval_feature_script) | **POST** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/featurescript | Evaluate FeatureScript
[**export_ps1**](PartStudiosApi.md#export_ps1) | **GET** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/parasolid | Export Part Studio to Parasolid
[**export_stl1**](PartStudiosApi.md#export_stl1) | **GET** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/stl | Export Part Studio to STL
[**get_body_details2**](PartStudiosApi.md#get_body_details2) | **GET** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/bodydetails | Array of body information
[**get_bounding_boxes2**](PartStudiosApi.md#get_bounding_boxes2) | **GET** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/boundingboxes | Mass properties of parts or a PartStudio.
[**get_configuration4**](PartStudiosApi.md#get_configuration4) | **GET** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/configuration | Get Configuration
[**get_edges2**](PartStudiosApi.md#get_edges2) | **GET** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/tessellatededges | Tesselated edges from a PartStudio.
[**get_faces2**](PartStudiosApi.md#get_faces2) | **GET** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/tessellatedfaces | Tesselated faces of the parts in the Part Studio.
[**get_feature_specs**](PartStudiosApi.md#get_feature_specs) | **GET** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/featurespecs | Get Feature Specs
[**get_features**](PartStudiosApi.md#get_features) | **GET** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/features | Get Feature List
[**get_mass_properties**](PartStudiosApi.md#get_mass_properties) | **GET** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/massproperties | Mass properties of parts or a PartStudio.
[**get_named_views2**](PartStudiosApi.md#get_named_views2) | **GET** /api/partstudios/d/{did}/e/{eid}/namedViews | Get Named Views
[**get_shaded_views1**](PartStudiosApi.md#get_shaded_views1) | **GET** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/shadedviews | Get Shaded Views
[**get_translator_formats4**](PartStudiosApi.md#get_translator_formats4) | **GET** /api/partstudios/d/{did}/w/{wid}/e/{eid}/translationformats | Get Translation Formats
[**translate_format5**](PartStudiosApi.md#translate_format5) | **POST** /api/partstudios/d/{did}/{wv}/{wvid}/e/{eid}/translations | Create Part Studio translation
[**translate_ids1**](PartStudiosApi.md#translate_ids1) | **POST** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/idtranslations | Id Translations
[**update_configuration3**](PartStudiosApi.md#update_configuration3) | **POST** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/configuration | Update Configuration
[**update_feature**](PartStudiosApi.md#update_feature) | **POST** /api/partstudios/d/{did}/w/{wid}/e/{eid}/features/featureid/{fid} | Update Feature
[**update_features1**](PartStudiosApi.md#update_features1) | **POST** /api/partstudios/d/{did}/w/{wid}/e/{eid}/features/updates | Update Features
[**update_rollback**](PartStudiosApi.md#update_rollback) | **POST** /api/partstudios/d/{did}/w/{wid}/e/{eid}/features/rollback | Update Feature Rollback


# **add_feature1**
> BTFeatureDefinitionResponse add_feature1(did, wvm, wvmid, eid, body=body)

Add Feature

### Example

* OAuth Authentication (OAuth2): 
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID.
wvm = 'wvm_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
wvmid = 'wvmid_example' # str | Workspace (w), Version (v) or Microversion (m) ID.
eid = 'eid_example' # str | Element ID.
body = 'body_example' # str | feature The serialized feature definition (optional)

try:
    # Add Feature
    api_response = api_instance.add_feature1(did, wvm, wvmid, eid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->add_feature1: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. | 
 **wvm** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **wvmid** | **str**| Workspace (w), Version (v) or Microversion (m) ID. | 
 **eid** | **str**| Element ID. | 
 **body** | **str**| feature The serialized feature definition | [optional] 

### Return type

[**BTFeatureDefinitionResponse**](BTFeatureDefinitionResponse.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8
 - **Accept**: application/vnd.onshape.v2+json;charset=UTF-8; qs=0.2

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **compare_part_studios1**
> BTRootDiffInfo compare_part_studios1(did, wvm, wvmid, eid, workspace_id=workspace_id, version_id=version_id, microversion_id=microversion_id, source_configuration=source_configuration, target_configuration=target_configuration, link_document_id=link_document_id)

Compare Part Studios

### Example

* OAuth Authentication (OAuth2): 
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID.
wvm = 'wvm_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
wvmid = 'wvmid_example' # str | Workspace (w), Version (v) or Microversion (m) ID.
eid = 'eid_example' # str | Element ID.
workspace_id = 'workspace_id_example' # str |  (optional)
version_id = 'version_id_example' # str |  (optional)
microversion_id = 'microversion_id_example' # str |  (optional)
source_configuration = 'source_configuration_example' # str |  (optional)
target_configuration = 'target_configuration_example' # str |  (optional)
link_document_id = 'link_document_id_example' # str |  (optional)

try:
    # Compare Part Studios
    api_response = api_instance.compare_part_studios1(did, wvm, wvmid, eid, workspace_id=workspace_id, version_id=version_id, microversion_id=microversion_id, source_configuration=source_configuration, target_configuration=target_configuration, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->compare_part_studios1: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. | 
 **wvm** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **wvmid** | **str**| Workspace (w), Version (v) or Microversion (m) ID. | 
 **eid** | **str**| Element ID. | 
 **workspace_id** | **str**|  | [optional] 
 **version_id** | **str**|  | [optional] 
 **microversion_id** | **str**|  | [optional] 
 **source_configuration** | **str**|  | [optional] 
 **target_configuration** | **str**|  | [optional] 
 **link_document_id** | **str**|  | [optional] 

### Return type

[**BTRootDiffInfo**](BTRootDiffInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8; qs=0.1, application/json;charset=UTF-8; qs=0.9

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_part_studio**
> BTDocumentElementInfo create_part_studio(did, wid, bt_model_element_params)

Create Part Studio

### Example

* OAuth Authentication (OAuth2): 
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID.
wid = 'wid_example' # str | Workspace ID.
bt_model_element_params = onshape_client.BTModelElementParams() # BTModelElementParams | 

try:
    # Create Part Studio
    api_response = api_instance.create_part_studio(did, wid, bt_model_element_params)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->create_part_studio: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. | 
 **wid** | **str**| Workspace ID. | 
 **bt_model_element_params** | [**BTModelElementParams**](BTModelElementParams.md)|  | 

### Return type

[**BTDocumentElementInfo**](BTDocumentElementInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8; qs=0.1, application/json;charset=UTF-8; qs=0.9

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_feature**
> delete_feature(did, wid, eid, fid)

Delete Feature

### Example

* OAuth Authentication (OAuth2): 
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID.
wid = 'wid_example' # str | Workspace ID.
eid = 'eid_example' # str | Element ID.
fid = 'fid_example' # str | The id of the feature being updated.  This id should be URL encoded and must match the featureId found in the serialized structure

try:
    # Delete Feature
    api_instance.delete_feature(did, wid, eid, fid)
except ApiException as e:
    print("Exception when calling PartStudiosApi->delete_feature: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. | 
 **wid** | **str**| Workspace ID. | 
 **eid** | **str**| Element ID. | 
 **fid** | **str**| The id of the feature being updated.  This id should be URL encoded and must match the featureId found in the serialized structure | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **eval_feature_script**
> BTFeatureScriptEvalResponse eval_feature_script(did, wvm, wvmid, eid, configuration=configuration, bt_feature_script_eval_call=bt_feature_script_eval_call)

Evaluate FeatureScript

### Example

* OAuth Authentication (OAuth2): 
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID.
wvm = 'wvm_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
wvmid = 'wvmid_example' # str | Workspace (w), Version (v) or Microversion (m) ID.
eid = 'eid_example' # str | Element ID.
configuration = 'configuration_example' # str | Configuration string. (optional)
bt_feature_script_eval_call = onshape_client.BTFeatureScriptEvalCall() # BTFeatureScriptEvalCall |  (optional)

try:
    # Evaluate FeatureScript
    api_response = api_instance.eval_feature_script(did, wvm, wvmid, eid, configuration=configuration, bt_feature_script_eval_call=bt_feature_script_eval_call)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->eval_feature_script: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. | 
 **wvm** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **wvmid** | **str**| Workspace (w), Version (v) or Microversion (m) ID. | 
 **eid** | **str**| Element ID. | 
 **configuration** | **str**| Configuration string. | [optional] 
 **bt_feature_script_eval_call** | [**BTFeatureScriptEvalCall**](BTFeatureScriptEvalCall.md)|  | [optional] 

### Return type

[**BTFeatureScriptEvalResponse**](BTFeatureScriptEvalResponse.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8; qs=0.1, application/json;charset=UTF-8; qs=0.9

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **export_ps1**
> export_ps1(did, wvm, wvmid, eid, part_ids=part_ids, version=version, include_export_ids=include_export_ids, configuration=configuration, link_document_id=link_document_id)

Export Part Studio to Parasolid

### Example

* OAuth Authentication (OAuth2): 
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID.
wvm = 'wvm_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
wvmid = 'wvmid_example' # str | Workspace (w), Version (v) or Microversion (m) ID.
eid = 'eid_example' # str | Element ID.
part_ids = 'part_ids_example' # str | IDs of the parts to retrieve. Repeat query param to add more than one, i.e. partId=JHK&partId=JHD). May not be combined with other ID filters (optional)
version = '0' # str | Parasolid version (optional) (default to '0')
include_export_ids = False # bool | Whether topolgy ids should be exported as parasolid attributes (optional) (default to False)
configuration = 'configuration_example' # str | Configuration string. (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

try:
    # Export Part Studio to Parasolid
    api_instance.export_ps1(did, wvm, wvmid, eid, part_ids=part_ids, version=version, include_export_ids=include_export_ids, configuration=configuration, link_document_id=link_document_id)
except ApiException as e:
    print("Exception when calling PartStudiosApi->export_ps1: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. | 
 **wvm** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **wvmid** | **str**| Workspace (w), Version (v) or Microversion (m) ID. | 
 **eid** | **str**| Element ID. | 
 **part_ids** | **str**| IDs of the parts to retrieve. Repeat query param to add more than one, i.e. partId&#x3D;JHK&amp;partId&#x3D;JHD). May not be combined with other ID filters | [optional] 
 **version** | **str**| Parasolid version | [optional] [default to &#39;0&#39;]
 **include_export_ids** | **bool**| Whether topolgy ids should be exported as parasolid attributes | [optional] [default to False]
 **configuration** | **str**| Configuration string. | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **export_stl1**
> export_stl1(did, wvm, wvmid, eid, part_ids=part_ids, mode=mode, grouping=grouping, scale=scale, units=units, angle_tolerance=angle_tolerance, chord_tolerance=chord_tolerance, max_facet_width=max_facet_width, min_facet_width=min_facet_width, configuration=configuration, link_document_id=link_document_id)

Export Part Studio to STL

### Example

* OAuth Authentication (OAuth2): 
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID.
wvm = 'wvm_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
wvmid = 'wvmid_example' # str | Workspace (w), Version (v) or Microversion (m) ID.
eid = 'eid_example' # str | Element ID.
part_ids = 'part_ids_example' # str | IDs of the parts to retrieve. Repeat query param to add more than one, i.e. partId=JHK&partId=JHD). May not be combined with other ID filters (optional)
mode = 'text' # str | Type of file: text, binary (optional) (default to 'text')
grouping = True # bool | Whether parts should be exported as a group or individually in a .zip file (optional) (default to True)
scale = 1.0 # float | Scale for measurements. (optional) (default to 1.0)
units = 'inch' # str | Name of base unit (meter, centimeter, millimeter, inch, foot, or yard) (optional) (default to 'inch')
angle_tolerance = 3.4 # float | Angle tolerance (in radians). This specifies the limit on the sum of the angular deviations of a tessellation chord from the tangent vectors at two chord endpoints. The specified value must be less than PI/2. This parameter currently has a default value chosen based on the complexity of the parts being tessellated. (optional)
chord_tolerance = 3.4 # float | Chord tolerance (in meters). This specifies the limit on the maximum deviation of a tessellation chord from the true surface/edge. This parameter currently has a default value chosen based on the size and complexity of the parts being tessellated. (optional)
max_facet_width = 3.4 # float | Max facet width. This specifies the limit on the size of any side of a tessellation facet. (optional)
min_facet_width = 3.4 # float | Max facet width. This specifies the limit on the size of any side of a tessellation facet. (optional)
configuration = 'configuration_example' # str | Configuration string. (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

try:
    # Export Part Studio to STL
    api_instance.export_stl1(did, wvm, wvmid, eid, part_ids=part_ids, mode=mode, grouping=grouping, scale=scale, units=units, angle_tolerance=angle_tolerance, chord_tolerance=chord_tolerance, max_facet_width=max_facet_width, min_facet_width=min_facet_width, configuration=configuration, link_document_id=link_document_id)
except ApiException as e:
    print("Exception when calling PartStudiosApi->export_stl1: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. | 
 **wvm** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **wvmid** | **str**| Workspace (w), Version (v) or Microversion (m) ID. | 
 **eid** | **str**| Element ID. | 
 **part_ids** | **str**| IDs of the parts to retrieve. Repeat query param to add more than one, i.e. partId&#x3D;JHK&amp;partId&#x3D;JHD). May not be combined with other ID filters | [optional] 
 **mode** | **str**| Type of file: text, binary | [optional] [default to &#39;text&#39;]
 **grouping** | **bool**| Whether parts should be exported as a group or individually in a .zip file | [optional] [default to True]
 **scale** | **float**| Scale for measurements. | [optional] [default to 1.0]
 **units** | **str**| Name of base unit (meter, centimeter, millimeter, inch, foot, or yard) | [optional] [default to &#39;inch&#39;]
 **angle_tolerance** | **float**| Angle tolerance (in radians). This specifies the limit on the sum of the angular deviations of a tessellation chord from the tangent vectors at two chord endpoints. The specified value must be less than PI/2. This parameter currently has a default value chosen based on the complexity of the parts being tessellated. | [optional] 
 **chord_tolerance** | **float**| Chord tolerance (in meters). This specifies the limit on the maximum deviation of a tessellation chord from the true surface/edge. This parameter currently has a default value chosen based on the size and complexity of the parts being tessellated. | [optional] 
 **max_facet_width** | **float**| Max facet width. This specifies the limit on the size of any side of a tessellation facet. | [optional] 
 **min_facet_width** | **float**| Max facet width. This specifies the limit on the size of any side of a tessellation facet. | [optional] 
 **configuration** | **str**| Configuration string. | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_body_details2**
> list[BTExportModelBodiesResponse] get_body_details2(did, wvm, wvmid, eid, configuration=configuration, link_document_id=link_document_id)

Array of body information

### Example

* OAuth Authentication (OAuth2): 
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID.
wvm = 'wvm_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
wvmid = 'wvmid_example' # str | Workspace (w), Version (v) or Microversion (m) ID.
eid = 'eid_example' # str | Element ID.
configuration = 'configuration_example' # str | Configuration string. (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

try:
    # Array of body information
    api_response = api_instance.get_body_details2(did, wvm, wvmid, eid, configuration=configuration, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->get_body_details2: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. | 
 **wvm** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **wvmid** | **str**| Workspace (w), Version (v) or Microversion (m) ID. | 
 **eid** | **str**| Element ID. | 
 **configuration** | **str**| Configuration string. | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 

### Return type

[**list[BTExportModelBodiesResponse]**](BTExportModelBodiesResponse.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8; qs=0.1, application/json;charset=UTF-8; qs=0.9

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_bounding_boxes2**
> BTBoundingBox get_bounding_boxes2(did, wvm, wvmid, eid, include_hidden=include_hidden, include_wire_bodies=include_wire_bodies, configuration=configuration, link_document_id=link_document_id)

Mass properties of parts or a PartStudio.

### Example

* OAuth Authentication (OAuth2): 
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID.
wvm = 'wvm_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
wvmid = 'wvmid_example' # str | Workspace (w), Version (v) or Microversion (m) ID.
eid = 'eid_example' # str | Element ID.
include_hidden = False # bool | Whether or not to include bounding boxes for hidden parts. (optional) (default to False)
include_wire_bodies = True # bool | Whether to include wire bodies in the bounding box. (optional) (default to True)
configuration = 'configuration_example' # str | Configuration string. (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

try:
    # Mass properties of parts or a PartStudio.
    api_response = api_instance.get_bounding_boxes2(did, wvm, wvmid, eid, include_hidden=include_hidden, include_wire_bodies=include_wire_bodies, configuration=configuration, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->get_bounding_boxes2: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. | 
 **wvm** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **wvmid** | **str**| Workspace (w), Version (v) or Microversion (m) ID. | 
 **eid** | **str**| Element ID. | 
 **include_hidden** | **bool**| Whether or not to include bounding boxes for hidden parts. | [optional] [default to False]
 **include_wire_bodies** | **bool**| Whether to include wire bodies in the bounding box. | [optional] [default to True]
 **configuration** | **str**| Configuration string. | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 

### Return type

[**BTBoundingBox**](BTBoundingBox.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8; qs=0.1, application/json;charset=UTF-8; qs=0.9

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_configuration4**
> get_configuration4(did, wvm, wvmid, eid)

Get Configuration

### Example

* OAuth Authentication (OAuth2): 
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | 
wvm = 'wvm_example' # str | 
wvmid = 'wvmid_example' # str | 
eid = 'eid_example' # str | 

try:
    # Get Configuration
    api_instance.get_configuration4(did, wvm, wvmid, eid)
except ApiException as e:
    print("Exception when calling PartStudiosApi->get_configuration4: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wvm** | **str**|  | 
 **wvmid** | **str**|  | 
 **eid** | **str**|  | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_edges2**
> BTExportTessellatedEdgesResponse get_edges2(did, wvm, wvmid, eid, angle_tolerance=angle_tolerance, chord_tolerance=chord_tolerance, part_id=part_id, edge_id=edge_id, configuration=configuration, link_document_id=link_document_id)

Tesselated edges from a PartStudio.

### Example

* OAuth Authentication (OAuth2): 
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | 
wvm = 'wvm_example' # str | 
wvmid = 'wvmid_example' # str | 
eid = 'eid_example' # str | 
angle_tolerance = 3.4 # float |  (optional)
chord_tolerance = 3.4 # float |  (optional)
part_id = ['part_id_example'] # list[str] |  (optional)
edge_id = ['edge_id_example'] # list[str] |  (optional)
configuration = 'configuration_example' # str |  (optional)
link_document_id = 'link_document_id_example' # str |  (optional)

try:
    # Tesselated edges from a PartStudio.
    api_response = api_instance.get_edges2(did, wvm, wvmid, eid, angle_tolerance=angle_tolerance, chord_tolerance=chord_tolerance, part_id=part_id, edge_id=edge_id, configuration=configuration, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->get_edges2: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wvm** | **str**|  | 
 **wvmid** | **str**|  | 
 **eid** | **str**|  | 
 **angle_tolerance** | **float**|  | [optional] 
 **chord_tolerance** | **float**|  | [optional] 
 **part_id** | [**list[str]**](str.md)|  | [optional] 
 **edge_id** | [**list[str]**](str.md)|  | [optional] 
 **configuration** | **str**|  | [optional] 
 **link_document_id** | **str**|  | [optional] 

### Return type

[**BTExportTessellatedEdgesResponse**](BTExportTessellatedEdgesResponse.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_faces2**
> BTExportTessellatedFacesResponse get_faces2(did, wvm, wvmid, eid, angle_tolerance=angle_tolerance, chord_tolerance=chord_tolerance, max_facet_width=max_facet_width, output_vertex_normals=output_vertex_normals, output_facet_normals=output_facet_normals, output_texture_coordinates=output_texture_coordinates, output_index_table=output_index_table, part_id=part_id, face_id=face_id, output_error_faces=output_error_faces, configuration=configuration, link_document_id=link_document_id)

Tesselated faces of the parts in the Part Studio.

### Example

* OAuth Authentication (OAuth2): 
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID.
wvm = 'wvm_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
wvmid = 'wvmid_example' # str | Workspace (w), Version (v) or Microversion (m) ID.
eid = 'eid_example' # str | Element ID.
angle_tolerance = 3.4 # float | Angle tolerance (in radians). This specifies the limit on the sum of the angular deviations of a tessellation chord from the tangent vectors at two chord endpoints. The specified value must be less than PI/2. This parameter currently has a default value chosen based on the complexity of the parts being tessellated. (optional)
chord_tolerance = 3.4 # float | Chord tolerance (in meters). This specifies the limit on the maximum deviation of a tessellation chord from the true surface/edge. This parameter currently has a default value chosen based on the size and complexity of the parts being tessellated. (optional)
max_facet_width = 3.4 # float | Max facet width. This specifies the limit on the size of any side of a tessellation facet. (optional)
output_vertex_normals = False # bool | If true, output vertex normals corresponding to surface normals at facet vertex points. (optional) (default to False)
output_facet_normals = True # bool | Output facet normals. (optional) (default to True)
output_texture_coordinates = False # bool | Output texture coordinates. (optional) (default to False)
output_index_table = False # bool | Output index table. (optional) (default to False)
part_id = ['part_id_example'] # list[str] | IDs of the parts to retrieve. Repeat query param to add more than one, i.e. partId=JHK&partId=JHD). May not be combined with other ID filters (optional)
face_id = ['face_id_example'] # list[str] | IDs of the faces to tessellate (repeat query param to add more than one, i.e. faceId=JHK&faceId=JHD) (optional)
output_error_faces = False # bool | Whether or not to output faces that cause an error (optional) (default to False)
configuration = 'configuration_example' # str | Configuration string. (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

try:
    # Tesselated faces of the parts in the Part Studio.
    api_response = api_instance.get_faces2(did, wvm, wvmid, eid, angle_tolerance=angle_tolerance, chord_tolerance=chord_tolerance, max_facet_width=max_facet_width, output_vertex_normals=output_vertex_normals, output_facet_normals=output_facet_normals, output_texture_coordinates=output_texture_coordinates, output_index_table=output_index_table, part_id=part_id, face_id=face_id, output_error_faces=output_error_faces, configuration=configuration, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->get_faces2: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. | 
 **wvm** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **wvmid** | **str**| Workspace (w), Version (v) or Microversion (m) ID. | 
 **eid** | **str**| Element ID. | 
 **angle_tolerance** | **float**| Angle tolerance (in radians). This specifies the limit on the sum of the angular deviations of a tessellation chord from the tangent vectors at two chord endpoints. The specified value must be less than PI/2. This parameter currently has a default value chosen based on the complexity of the parts being tessellated. | [optional] 
 **chord_tolerance** | **float**| Chord tolerance (in meters). This specifies the limit on the maximum deviation of a tessellation chord from the true surface/edge. This parameter currently has a default value chosen based on the size and complexity of the parts being tessellated. | [optional] 
 **max_facet_width** | **float**| Max facet width. This specifies the limit on the size of any side of a tessellation facet. | [optional] 
 **output_vertex_normals** | **bool**| If true, output vertex normals corresponding to surface normals at facet vertex points. | [optional] [default to False]
 **output_facet_normals** | **bool**| Output facet normals. | [optional] [default to True]
 **output_texture_coordinates** | **bool**| Output texture coordinates. | [optional] [default to False]
 **output_index_table** | **bool**| Output index table. | [optional] [default to False]
 **part_id** | [**list[str]**](str.md)| IDs of the parts to retrieve. Repeat query param to add more than one, i.e. partId&#x3D;JHK&amp;partId&#x3D;JHD). May not be combined with other ID filters | [optional] 
 **face_id** | [**list[str]**](str.md)| IDs of the faces to tessellate (repeat query param to add more than one, i.e. faceId&#x3D;JHK&amp;faceId&#x3D;JHD) | [optional] 
 **output_error_faces** | **bool**| Whether or not to output faces that cause an error | [optional] [default to False]
 **configuration** | **str**| Configuration string. | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 

### Return type

[**BTExportTessellatedFacesResponse**](BTExportTessellatedFacesResponse.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_feature_specs**
> get_feature_specs(did, wvm, wvmid, eid)

Get Feature Specs

### Example

* OAuth Authentication (OAuth2): 
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID.
wvm = 'wvm_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
wvmid = 'wvmid_example' # str | Workspace (w), Version (v) or Microversion (m) ID.
eid = 'eid_example' # str | Element ID.

try:
    # Get Feature Specs
    api_instance.get_feature_specs(did, wvm, wvmid, eid)
except ApiException as e:
    print("Exception when calling PartStudiosApi->get_feature_specs: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. | 
 **wvm** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **wvmid** | **str**| Workspace (w), Version (v) or Microversion (m) ID. | 
 **eid** | **str**| Element ID. | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_features**
> BTFeatureListResponse get_features(did, wvm, wvmid, eid, feature_id=feature_id, link_document_id=link_document_id, no_sketch_geometry=no_sketch_geometry)

Get Feature List

### Example

* OAuth Authentication (OAuth2): 
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID.
wvm = 'wvm_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
wvmid = 'wvmid_example' # str | Workspace (w), Version (v) or Microversion (m) ID.
eid = 'eid_example' # str | Element ID.
feature_id = ['feature_id_example'] # list[str] | ID of a feature; repeat query param to add more than one (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)
no_sketch_geometry = False # bool | Whether or not to output simple sketch info without geometry (optional) (default to False)

try:
    # Get Feature List
    api_response = api_instance.get_features(did, wvm, wvmid, eid, feature_id=feature_id, link_document_id=link_document_id, no_sketch_geometry=no_sketch_geometry)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->get_features: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. | 
 **wvm** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **wvmid** | **str**| Workspace (w), Version (v) or Microversion (m) ID. | 
 **eid** | **str**| Element ID. | 
 **feature_id** | [**list[str]**](str.md)| ID of a feature; repeat query param to add more than one | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 
 **no_sketch_geometry** | **bool**| Whether or not to output simple sketch info without geometry | [optional] [default to False]

### Return type

[**BTFeatureListResponse**](BTFeatureListResponse.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v2+json;charset=UTF-8; qs=0.2

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_mass_properties**
> BTMassPropResponse get_mass_properties(did, wvm, wvmid, eid, part_id=part_id, mass_as_group=mass_as_group, configuration=configuration, link_document_id=link_document_id)

Mass properties of parts or a PartStudio.

### Example

* OAuth Authentication (OAuth2): 
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID.
wvm = 'wvm_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
wvmid = 'wvmid_example' # str | Workspace (w), Version (v) or Microversion (m) ID.
eid = 'eid_example' # str | Element ID.
part_id = ['part_id_example'] # list[str] | IDs of the parts to retrieve. Repeat query param to add more than one, i.e. partId=JHK&partId=JHD). May not be combined with other ID filters (optional)
mass_as_group = True # bool | If true, specified parts will be evaluated as a single object instead of individually (optional) (default to True)
configuration = 'configuration_example' # str | Configuration string. (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

try:
    # Mass properties of parts or a PartStudio.
    api_response = api_instance.get_mass_properties(did, wvm, wvmid, eid, part_id=part_id, mass_as_group=mass_as_group, configuration=configuration, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->get_mass_properties: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. | 
 **wvm** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **wvmid** | **str**| Workspace (w), Version (v) or Microversion (m) ID. | 
 **eid** | **str**| Element ID. | 
 **part_id** | [**list[str]**](str.md)| IDs of the parts to retrieve. Repeat query param to add more than one, i.e. partId&#x3D;JHK&amp;partId&#x3D;JHD). May not be combined with other ID filters | [optional] 
 **mass_as_group** | **bool**| If true, specified parts will be evaluated as a single object instead of individually | [optional] [default to True]
 **configuration** | **str**| Configuration string. | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 

### Return type

[**BTMassPropResponse**](BTMassPropResponse.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8; qs=0.1, application/json;charset=UTF-8; qs=0.9

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_named_views2**
> BTNamedViewsInfo get_named_views2(did, eid, skip_perspective=skip_perspective)

Get Named Views

### Example

* OAuth Authentication (OAuth2): 
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID.
eid = 'eid_example' # str | Element ID.
skip_perspective = True # bool | Whether views with a perspective projection should be omitted. (optional) (default to True)

try:
    # Get Named Views
    api_response = api_instance.get_named_views2(did, eid, skip_perspective=skip_perspective)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->get_named_views2: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. | 
 **eid** | **str**| Element ID. | 
 **skip_perspective** | **bool**| Whether views with a perspective projection should be omitted. | [optional] [default to True]

### Return type

[**BTNamedViewsInfo**](BTNamedViewsInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8; qs=0.1, application/json;charset=UTF-8; qs=0.9

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_shaded_views1**
> BTShadedRenderDocumentResponse get_shaded_views1(did, wvm, wvmid, eid, view_matrix=view_matrix, output_height=output_height, output_width=output_width, pixel_size=pixel_size, edges=edges, show_all_parts=show_all_parts, include_surfaces=include_surfaces, use_anti_aliasing=use_anti_aliasing, configuration=configuration, link_document_id=link_document_id)

Get Shaded Views

### Example

* OAuth Authentication (OAuth2): 
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID.
wvm = 'wvm_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
wvmid = 'wvmid_example' # str | Workspace (w), Version (v) or Microversion (m) ID.
eid = 'eid_example' # str | Element ID.
view_matrix = 'front' # str | 12-number view matrix (comma-separated), or one of the following named views: top, bottom, front, back, left, right The 12 entries in the view matrix form three rows and four columns, which is a linear transformation applied to the model itself. The matrix's first three columns maps the coordinate axes of the model to the coordinate axes of the view, and the fourth column translates the origin (in meters). The view coordinates have x pointing right, y pointing up, and z pointing towards the viewer, while a front view of the model has x pointing right, y pointing away from the viewer, and z pointing up. For example, the identity matrix viewMatrix=1,0,0,0,0,1,0,0,0,0,1,0 corresponds to the top view, and viewMatrix=0.612,0.612,0,0,-0.354,0.354,0.707,0,0.707,-0.707,0.707,0 corresponds (approximately) to the isometric view. The first three columns of the view matrix should be orthonormal and have a positive determinant.  If this is not the case, view behavior may be undefined. (optional) (default to 'front')
output_height = 500 # int | Output image height (in pixels) (optional) (default to 500)
output_width = 500 # int | Output image width (in pixels) (optional) (default to 500)
pixel_size = 0.003 # float | Height and width represented by each pixel (in meters). If the value is 0, the display will be sized to fit the output image dimensions. (optional) (default to 0.003)
edges = 'show' # str | The treatment to be applied to edges in the display. Options are show: show visible edges, hide: hide visible edges. (optional) (default to 'show')
show_all_parts = False # bool | Whether or not all parts should be shown in the element, regardless of user setting. If false, the visibility setting made by the user will be reflected in the image. If true, all parts will be shown. (optional) (default to False)
include_surfaces = False # bool | Whether or not surfaces should be shown in the element. It is applicable only when showAllParts is true. If false, surfaces will be excluded. If true, all surfaces will be shown. (optional) (default to False)
use_anti_aliasing = False # bool | If true, an anti-aliasing factor will be used to smooth model boundaries in the final image result. If false, the image will be rasterized at the given resolution. Setting to true can have negative performance implications with respect to rendering time and memory usage. If a high-resolution image is requested and anti-aliasing is turned on, the server may not be able to fulfill the request. (optional) (default to False)
configuration = 'configuration_example' # str | Configuration string. (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

try:
    # Get Shaded Views
    api_response = api_instance.get_shaded_views1(did, wvm, wvmid, eid, view_matrix=view_matrix, output_height=output_height, output_width=output_width, pixel_size=pixel_size, edges=edges, show_all_parts=show_all_parts, include_surfaces=include_surfaces, use_anti_aliasing=use_anti_aliasing, configuration=configuration, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->get_shaded_views1: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. | 
 **wvm** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **wvmid** | **str**| Workspace (w), Version (v) or Microversion (m) ID. | 
 **eid** | **str**| Element ID. | 
 **view_matrix** | **str**| 12-number view matrix (comma-separated), or one of the following named views: top, bottom, front, back, left, right The 12 entries in the view matrix form three rows and four columns, which is a linear transformation applied to the model itself. The matrix&#39;s first three columns maps the coordinate axes of the model to the coordinate axes of the view, and the fourth column translates the origin (in meters). The view coordinates have x pointing right, y pointing up, and z pointing towards the viewer, while a front view of the model has x pointing right, y pointing away from the viewer, and z pointing up. For example, the identity matrix viewMatrix&#x3D;1,0,0,0,0,1,0,0,0,0,1,0 corresponds to the top view, and viewMatrix&#x3D;0.612,0.612,0,0,-0.354,0.354,0.707,0,0.707,-0.707,0.707,0 corresponds (approximately) to the isometric view. The first three columns of the view matrix should be orthonormal and have a positive determinant.  If this is not the case, view behavior may be undefined. | [optional] [default to &#39;front&#39;]
 **output_height** | **int**| Output image height (in pixels) | [optional] [default to 500]
 **output_width** | **int**| Output image width (in pixels) | [optional] [default to 500]
 **pixel_size** | **float**| Height and width represented by each pixel (in meters). If the value is 0, the display will be sized to fit the output image dimensions. | [optional] [default to 0.003]
 **edges** | **str**| The treatment to be applied to edges in the display. Options are show: show visible edges, hide: hide visible edges. | [optional] [default to &#39;show&#39;]
 **show_all_parts** | **bool**| Whether or not all parts should be shown in the element, regardless of user setting. If false, the visibility setting made by the user will be reflected in the image. If true, all parts will be shown. | [optional] [default to False]
 **include_surfaces** | **bool**| Whether or not surfaces should be shown in the element. It is applicable only when showAllParts is true. If false, surfaces will be excluded. If true, all surfaces will be shown. | [optional] [default to False]
 **use_anti_aliasing** | **bool**| If true, an anti-aliasing factor will be used to smooth model boundaries in the final image result. If false, the image will be rasterized at the given resolution. Setting to true can have negative performance implications with respect to rendering time and memory usage. If a high-resolution image is requested and anti-aliasing is turned on, the server may not be able to fulfill the request. | [optional] [default to False]
 **configuration** | **str**| Configuration string. | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 

### Return type

[**BTShadedRenderDocumentResponse**](BTShadedRenderDocumentResponse.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8; qs=0.1, application/json;charset=UTF-8; qs=0.9

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_translator_formats4**
> list[BTModelFormatInfo] get_translator_formats4(did, wid, eid, check_content=check_content)

Get Translation Formats

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi()
did = 'did_example' # str | Document ID.
wid = 'wid_example' # str | Workspace ID.
eid = 'eid_example' # str | Element ID.
check_content = True # bool |     Whether the current content or lack thereof should be considered when determining the available formats. Empty part studios cannot be translated into any format. (optional) (default to True)

try:
    # Get Translation Formats
    api_response = api_instance.get_translator_formats4(did, wid, eid, check_content=check_content)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->get_translator_formats4: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. | 
 **wid** | **str**| Workspace ID. | 
 **eid** | **str**| Element ID. | 
 **check_content** | **bool**|     Whether the current content or lack thereof should be considered when determining the available formats. Empty part studios cannot be translated into any format. | [optional] [default to True]

### Return type

[**list[BTModelFormatInfo]**](BTModelFormatInfo.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8; qs=0.1, application/json;charset=UTF-8; qs=0.9

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **translate_format5**
> BTTranslationRequestInfo translate_format5(did, wv, wvid, eid, bt_translate_format_params)

Create Part Studio translation

### Example

* OAuth Authentication (OAuth2): 
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID.
wv = 'wv_example' # str | One of w or v corresponding to whether a workspace or version was entered.
wvid = 'wvid_example' # str | Workspace (w) or Version (v).
eid = 'eid_example' # str | Element ID.
bt_translate_format_params = onshape_client.BTTranslateFormatParams() # BTTranslateFormatParams | 

try:
    # Create Part Studio translation
    api_response = api_instance.translate_format5(did, wv, wvid, eid, bt_translate_format_params)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->translate_format5: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. | 
 **wv** | **str**| One of w or v corresponding to whether a workspace or version was entered. | 
 **wvid** | **str**| Workspace (w) or Version (v). | 
 **eid** | **str**| Element ID. | 
 **bt_translate_format_params** | [**BTTranslateFormatParams**](BTTranslateFormatParams.md)|  | 

### Return type

[**BTTranslationRequestInfo**](BTTranslationRequestInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8; qs=0.1, application/json;charset=UTF-8; qs=0.9

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **translate_ids1**
> BTIdTranslationInfo translate_ids1(did, wvm, wvmid, eid, bt_id_translation_params)

Id Translations

### Example

* OAuth Authentication (OAuth2): 
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID.
wvm = 'wvm_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
wvmid = 'wvmid_example' # str | Workspace (w), Version (v) or Microversion (m) ID.
eid = 'eid_example' # str | Element ID.
bt_id_translation_params = onshape_client.BTIdTranslationParams() # BTIdTranslationParams | 

try:
    # Id Translations
    api_response = api_instance.translate_ids1(did, wvm, wvmid, eid, bt_id_translation_params)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->translate_ids1: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. | 
 **wvm** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **wvmid** | **str**| Workspace (w), Version (v) or Microversion (m) ID. | 
 **eid** | **str**| Element ID. | 
 **bt_id_translation_params** | [**BTIdTranslationParams**](BTIdTranslationParams.md)|  | 

### Return type

[**BTIdTranslationInfo**](BTIdTranslationInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8; qs=0.1, application/json;charset=UTF-8; qs=0.9

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_configuration3**
> update_configuration3(did, wvm, wvmid, eid, body=body)

Update Configuration

### Example

* OAuth Authentication (OAuth2): 
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | 
wvm = 'wvm_example' # str | 
wvmid = 'wvmid_example' # str | 
eid = 'eid_example' # str | 
body = 'body_example' # str |  (optional)

try:
    # Update Configuration
    api_instance.update_configuration3(did, wvm, wvmid, eid, body=body)
except ApiException as e:
    print("Exception when calling PartStudiosApi->update_configuration3: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wvm** | **str**|  | 
 **wvmid** | **str**|  | 
 **eid** | **str**|  | 
 **body** | **str**|  | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_feature**
> update_feature(did, wid, eid, fid, body=body)

Update Feature

### Example

* OAuth Authentication (OAuth2): 
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID.
wid = 'wid_example' # str | Workspace ID.
eid = 'eid_example' # str | Element ID.
fid = 'fid_example' # str | The id of the feature being updated.  This id should be URL encoded and must match the featureId found in the serialized structure
body = 'body_example' # str | feature The serialized feature definition (optional)

try:
    # Update Feature
    api_instance.update_feature(did, wid, eid, fid, body=body)
except ApiException as e:
    print("Exception when calling PartStudiosApi->update_feature: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. | 
 **wid** | **str**| Workspace ID. | 
 **eid** | **str**| Element ID. | 
 **fid** | **str**| The id of the feature being updated.  This id should be URL encoded and must match the featureId found in the serialized structure | 
 **body** | **str**| feature The serialized feature definition | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_features1**
> update_features1(did, wid, eid, body=body)

Update Features

### Example

* OAuth Authentication (OAuth2): 
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID.
wid = 'wid_example' # str | Workspace ID.
eid = 'eid_example' # str | Element ID.
body = 'body_example' # str | feature The serialized feature definition (optional)

try:
    # Update Features
    api_instance.update_features1(did, wid, eid, body=body)
except ApiException as e:
    print("Exception when calling PartStudiosApi->update_features1: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. | 
 **wid** | **str**| Workspace ID. | 
 **eid** | **str**| Element ID. | 
 **body** | **str**| feature The serialized feature definition | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_rollback**
> update_rollback(did, wid, eid, body=body)

Update Feature Rollback

### Example

* OAuth Authentication (OAuth2): 
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID.
wid = 'wid_example' # str | Workspace ID.
eid = 'eid_example' # str | Element ID.
body = 'body_example' # str | The index at which the rollback index should be placed. Features      *   with entry index (0-based) higher than or equal to this value are rolled back.  The value -1 is treated      *   as an alias for \"end of feature list\".  Otherwise the value must be in the range 0 to the number of      *   entries in the feature list (optional)

try:
    # Update Feature Rollback
    api_instance.update_rollback(did, wid, eid, body=body)
except ApiException as e:
    print("Exception when calling PartStudiosApi->update_rollback: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. | 
 **wid** | **str**| Workspace ID. | 
 **eid** | **str**| Element ID. | 
 **body** | **str**| The index at which the rollback index should be placed. Features      *   with entry index (0-based) higher than or equal to this value are rolled back.  The value -1 is treated      *   as an alias for \&quot;end of feature list\&quot;.  Otherwise the value must be in the range 0 to the number of      *   entries in the feature list | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

