# onshape_client.oas.PartStudiosApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_part_studio_feature**](PartStudiosApi.md#add_part_studio_feature) | **POST** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/features | Add Feature
[**compare_part_studios**](PartStudiosApi.md#compare_part_studios) | **GET** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/compare | Compare Part Studios
[**create_part_studio**](PartStudiosApi.md#create_part_studio) | **POST** /api/partstudios/d/{did}/w/{wid} | Create Part Studio
[**create_part_studio_translation**](PartStudiosApi.md#create_part_studio_translation) | **POST** /api/partstudios/d/{did}/{wv}/{wvid}/e/{eid}/translations | Create Part Studio translation
[**delete_part_studio_feature**](PartStudiosApi.md#delete_part_studio_feature) | **DELETE** /api/partstudios/d/{did}/w/{wid}/e/{eid}/features/featureid/{fid} | Delete Feature
[**eval_feature_script**](PartStudiosApi.md#eval_feature_script) | **POST** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/featurescript | Evaluate FeatureScript
[**export_ps1**](PartStudiosApi.md#export_ps1) | **GET** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/parasolid | Export Part Studio to Parasolid
[**export_stl1**](PartStudiosApi.md#export_stl1) | **GET** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/stl | Export Part Studio to STL
[**get_part_studio_body_details**](PartStudiosApi.md#get_part_studio_body_details) | **GET** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/bodydetails | Array of body information
[**get_part_studio_bounding_boxes**](PartStudiosApi.md#get_part_studio_bounding_boxes) | **GET** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/boundingboxes | Mass properties of parts or a PartStudio.
[**get_part_studio_configuration**](PartStudiosApi.md#get_part_studio_configuration) | **GET** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/configuration | Get Configuration
[**get_part_studio_feature_specs**](PartStudiosApi.md#get_part_studio_feature_specs) | **GET** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/featurespecs | Get Feature Specs
[**get_part_studio_features**](PartStudiosApi.md#get_part_studio_features) | **GET** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/features | Get Feature List
[**get_part_studio_mass_properties**](PartStudiosApi.md#get_part_studio_mass_properties) | **GET** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/massproperties | Mass properties of parts or a PartStudio.
[**get_part_studio_named_views**](PartStudiosApi.md#get_part_studio_named_views) | **GET** /api/partstudios/d/{did}/e/{eid}/namedViews | Get Named Views
[**get_part_studio_shaded_views**](PartStudiosApi.md#get_part_studio_shaded_views) | **GET** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/shadedviews | Get Shaded Views
[**get_part_studio_tessellated_edges**](PartStudiosApi.md#get_part_studio_tessellated_edges) | **GET** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/tessellatededges | Tesselated edges from a PartStudio.
[**get_part_studio_tessellated_faces**](PartStudiosApi.md#get_part_studio_tessellated_faces) | **GET** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/tessellatedfaces | Tesselated faces of the parts in the Part Studio.
[**translate_ids**](PartStudiosApi.md#translate_ids) | **POST** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/idtranslations | Id Translations
[**update_features**](PartStudiosApi.md#update_features) | **POST** /api/partstudios/d/{did}/w/{wid}/e/{eid}/features/updates | Update Features
[**update_part_studio_configuration**](PartStudiosApi.md#update_part_studio_configuration) | **POST** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/configuration | Update Configuration
[**update_part_studio_feature**](PartStudiosApi.md#update_part_studio_feature) | **POST** /api/partstudios/d/{did}/w/{wid}/e/{eid}/features/featureid/{fid} | Update Feature
[**update_rollback**](PartStudiosApi.md#update_rollback) | **POST** /api/partstudios/d/{did}/w/{wid}/e/{eid}/features/rollback | Update Feature Rollback


# **add_part_studio_feature**
> bt_feature_definition_response1617.BTFeatureDefinitionResponse1617 add_part_studio_feature(did, wvm, wvmid, eid)

Add Feature

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.PartStudiosApi(api_client)
    did = 'did_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    eid = 'eid_example' # str | 
    bt_feature_definition_call_1406 = onshape_client.oas.BTFeatureDefinitionCall1406() # bt_feature_definition_call1406.BTFeatureDefinitionCall1406 | feature The serialized feature definition (optional)

    # example passing only required values which don't have defaults set
    try:
        # Add Feature
        api_response = api_instance.add_part_studio_feature(did, wvm, wvmid, eid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->add_part_studio_feature: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Add Feature
        api_response = api_instance.add_part_studio_feature(did, wvm, wvmid, eid, bt_feature_definition_call_1406=bt_feature_definition_call_1406)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->add_part_studio_feature: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **eid** | **str**|  |
 **bt_feature_definition_call_1406** | [**bt_feature_definition_call1406.BTFeatureDefinitionCall1406**](BTFeatureDefinitionCall1406.md)| feature The serialized feature definition | [optional]

### Return type

[**bt_feature_definition_response1617.BTFeatureDefinitionResponse1617**](BTFeatureDefinitionResponse1617.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2
 - **Accept**: application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **compare_part_studios**
> bt_root_diff_info.BTRootDiffInfo compare_part_studios(did, wvm, wvmid, eid)

Compare Part Studios

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.PartStudiosApi(api_client)
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

    # example passing only required values which don't have defaults set
    try:
        # Compare Part Studios
        api_response = api_instance.compare_part_studios(did, wvm, wvmid, eid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->compare_part_studios: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Compare Part Studios
        api_response = api_instance.compare_part_studios(did, wvm, wvmid, eid, workspace_id=workspace_id, version_id=version_id, microversion_id=microversion_id, source_configuration=source_configuration, target_configuration=target_configuration, link_document_id=link_document_id)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->compare_part_studios: %s\n" % e)
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

[**bt_root_diff_info.BTRootDiffInfo**](BTRootDiffInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_part_studio**
> bt_document_element_info.BTDocumentElementInfo create_part_studio(did, wid, bt_model_element_params)

Create Part Studio

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.PartStudiosApi(api_client)
    did = 'did_example' # str | Document ID.
    wid = 'wid_example' # str | Workspace ID.
    bt_model_element_params = onshape_client.oas.BTModelElementParams() # bt_model_element_params.BTModelElementParams | 
    
    # example passing only required values which don't have defaults set
    try:
        # Create Part Studio
        api_response = api_instance.create_part_studio(did, wid, bt_model_element_params)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->create_part_studio: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. |
 **wid** | **str**| Workspace ID. |
 **bt_model_element_params** | [**bt_model_element_params.BTModelElementParams**](BTModelElementParams.md)|  |

### Return type

[**bt_document_element_info.BTDocumentElementInfo**](BTDocumentElementInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8; qs=0.09
 - **Accept**: application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_part_studio_translation**
> bt_translation_request_info.BTTranslationRequestInfo create_part_studio_translation(did, wv, wvid, eid, bt_translate_format_params)

Create Part Studio translation

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.PartStudiosApi(api_client)
    did = 'did_example' # str | Document ID.
    wv = 'wv_example' # str | One of w or v corresponding to whether a workspace or version was specified.
    wvid = 'wvid_example' # str | Workspace (w) or Version (v) ID.
    eid = 'eid_example' # str | Element ID.
    bt_translate_format_params = onshape_client.oas.BTTranslateFormatParams() # bt_translate_format_params.BTTranslateFormatParams | 
    
    # example passing only required values which don't have defaults set
    try:
        # Create Part Studio translation
        api_response = api_instance.create_part_studio_translation(did, wv, wvid, eid, bt_translate_format_params)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->create_part_studio_translation: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. |
 **wv** | **str**| One of w or v corresponding to whether a workspace or version was specified. |
 **wvid** | **str**| Workspace (w) or Version (v) ID. |
 **eid** | **str**| Element ID. |
 **bt_translate_format_params** | [**bt_translate_format_params.BTTranslateFormatParams**](BTTranslateFormatParams.md)|  |

### Return type

[**bt_translation_request_info.BTTranslationRequestInfo**](BTTranslationRequestInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8; qs=0.09
 - **Accept**: application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_part_studio_feature**
> bt_feature_api_base1430.BTFeatureApiBase1430 delete_part_studio_feature(did, wid, eid, fid)

Delete Feature

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.PartStudiosApi(api_client)
    did = 'did_example' # str | Document ID.
    wid = 'wid_example' # str | Workspace ID.
    eid = 'eid_example' # str | Element ID.
    fid = 'fid_example' # str | The id of the feature being updated. This id should be URL encoded and must match the featureId found in the serialized structure
    
    # example passing only required values which don't have defaults set
    try:
        # Delete Feature
        api_response = api_instance.delete_part_studio_feature(did, wid, eid, fid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->delete_part_studio_feature: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. |
 **wid** | **str**| Workspace ID. |
 **eid** | **str**| Element ID. |
 **fid** | **str**| The id of the feature being updated. This id should be URL encoded and must match the featureId found in the serialized structure |

### Return type

[**bt_feature_api_base1430.BTFeatureApiBase1430**](BTFeatureApiBase1430.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **eval_feature_script**
> bt_feature_script_eval_response1859.BTFeatureScriptEvalResponse1859 eval_feature_script(did, wvm, wvmid, eid)

Evaluate FeatureScript

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.PartStudiosApi(api_client)
    did = 'did_example' # str | Document ID.
    wvm = 'wvm_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
    wvmid = 'wvmid_example' # str | Workspace (w), Version (v) or Microversion (m) ID.
    eid = 'eid_example' # str | Element ID.
    configuration = 'configuration_example' # str | Configuration string. (optional)
bt_feature_script_eval_call_2377 = onshape_client.oas.BTFeatureScriptEvalCall2377() # bt_feature_script_eval_call2377.BTFeatureScriptEvalCall2377 |  (optional)

    # example passing only required values which don't have defaults set
    try:
        # Evaluate FeatureScript
        api_response = api_instance.eval_feature_script(did, wvm, wvmid, eid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->eval_feature_script: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Evaluate FeatureScript
        api_response = api_instance.eval_feature_script(did, wvm, wvmid, eid, configuration=configuration, bt_feature_script_eval_call_2377=bt_feature_script_eval_call_2377)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
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
 **bt_feature_script_eval_call_2377** | [**bt_feature_script_eval_call2377.BTFeatureScriptEvalCall2377**](BTFeatureScriptEvalCall2377.md)|  | [optional]

### Return type

[**bt_feature_script_eval_response1859.BTFeatureScriptEvalResponse1859**](BTFeatureScriptEvalResponse1859.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8; qs=0.09
 - **Accept**: application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **export_ps1**
> export_ps1(did, wvm, wvmid, eid)

Export Part Studio to Parasolid

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.PartStudiosApi(api_client)
    did = 'did_example' # str | Document ID.
    wvm = 'wvm_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
    wvmid = 'wvmid_example' # str | Workspace (w), Version (v) or Microversion (m) ID.
    eid = 'eid_example' # str | Element ID.
    part_ids = 'part_ids_example' # str | IDs of the parts to retrieve. Repeat query param to add more than one (i.e. partId=JHK&partId=JHD). May not be combined with other ID filters (optional)
version = '0' # str | Parasolid version (optional) if omitted the server will use the default value of '0'
include_export_ids = False # bool | Whether topolgy ids should be exported as parasolid attributes (optional) if omitted the server will use the default value of False
configuration = 'configuration_example' # str | Configuration string. (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

    # example passing only required values which don't have defaults set
    try:
        # Export Part Studio to Parasolid
        api_instance.export_ps1(did, wvm, wvmid, eid)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->export_ps1: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Export Part Studio to Parasolid
        api_instance.export_ps1(did, wvm, wvmid, eid, part_ids=part_ids, version=version, include_export_ids=include_export_ids, configuration=configuration, link_document_id=link_document_id)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->export_ps1: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. |
 **wvm** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. |
 **wvmid** | **str**| Workspace (w), Version (v) or Microversion (m) ID. |
 **eid** | **str**| Element ID. |
 **part_ids** | **str**| IDs of the parts to retrieve. Repeat query param to add more than one (i.e. partId&#x3D;JHK&amp;partId&#x3D;JHD). May not be combined with other ID filters | [optional]
 **version** | **str**| Parasolid version | [optional] if omitted the server will use the default value of '0'
 **include_export_ids** | **bool**| Whether topolgy ids should be exported as parasolid attributes | [optional] if omitted the server will use the default value of False
 **configuration** | **str**| Configuration string. | [optional]
 **link_document_id** | **str**| Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional]

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**307** | A Redirect! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **export_stl1**
> export_stl1(did, wvm, wvmid, eid)

Export Part Studio to STL

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.PartStudiosApi(api_client)
    did = 'did_example' # str | Document ID.
    wvm = 'wvm_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
    wvmid = 'wvmid_example' # str | Workspace (w), Version (v) or Microversion (m) ID.
    eid = 'eid_example' # str | Element ID.
    part_ids = 'part_ids_example' # str | IDs of the parts to retrieve. Repeat query param to add more than one (i.e. partId=JHK&partId=JHD). May not be combined with other ID filters (optional)
mode = 'text' # str | Type of file: text, binary (optional) if omitted the server will use the default value of 'text'
grouping = True # bool | Whether parts should be exported as a group or individually in a .zip file (optional) if omitted the server will use the default value of True
scale = 1.0 # float | Scale for measurements. (optional) if omitted the server will use the default value of 1.0
units = 'inch' # str | Name of base unit (meter, centimeter, millimeter, inch, foot, or yard) (optional) if omitted the server will use the default value of 'inch'
angle_tolerance = 3.4 # float | Angle tolerance (in radians). This specifies the limit on the sum of the angular deviations of a tessellation chord from the tangent vectors at two chord endpoints. The specified value must be less than PI/2. This parameter currently has a default value chosen based on the complexity of the parts being tessellated. (optional)
chord_tolerance = 3.4 # float | Chord tolerance (in meters). This specifies the limit on the maximum deviation of a tessellation chord from the true surface/edge. This parameter currently has a default value chosen based on the size and complexity of the parts being tessellated. (optional)
max_facet_width = 3.4 # float | Max facet width. This specifies the limit on the size of any side of a tessellation facet. (optional)
min_facet_width = 3.4 # float | Max facet width. This specifies the limit on the size of any side of a tessellation facet. (optional)
configuration = 'configuration_example' # str | Configuration string. (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

    # example passing only required values which don't have defaults set
    try:
        # Export Part Studio to STL
        api_instance.export_stl1(did, wvm, wvmid, eid)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->export_stl1: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Export Part Studio to STL
        api_instance.export_stl1(did, wvm, wvmid, eid, part_ids=part_ids, mode=mode, grouping=grouping, scale=scale, units=units, angle_tolerance=angle_tolerance, chord_tolerance=chord_tolerance, max_facet_width=max_facet_width, min_facet_width=min_facet_width, configuration=configuration, link_document_id=link_document_id)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->export_stl1: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. |
 **wvm** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. |
 **wvmid** | **str**| Workspace (w), Version (v) or Microversion (m) ID. |
 **eid** | **str**| Element ID. |
 **part_ids** | **str**| IDs of the parts to retrieve. Repeat query param to add more than one (i.e. partId&#x3D;JHK&amp;partId&#x3D;JHD). May not be combined with other ID filters | [optional]
 **mode** | **str**| Type of file: text, binary | [optional] if omitted the server will use the default value of 'text'
 **grouping** | **bool**| Whether parts should be exported as a group or individually in a .zip file | [optional] if omitted the server will use the default value of True
 **scale** | **float**| Scale for measurements. | [optional] if omitted the server will use the default value of 1.0
 **units** | **str**| Name of base unit (meter, centimeter, millimeter, inch, foot, or yard) | [optional] if omitted the server will use the default value of 'inch'
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**307** | A Redirect! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_part_studio_body_details**
> bt_export_model_bodies_response734.BTExportModelBodiesResponse734 get_part_studio_body_details(did, wvm, wvmid, eid)

Array of body information

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.PartStudiosApi(api_client)
    did = 'did_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    eid = 'eid_example' # str | 
    configuration = 'configuration_example' # str |  (optional)
link_document_id = 'link_document_id_example' # str |  (optional)
rollback_bar_index = -1 # int |  (optional) if omitted the server will use the default value of -1
body = 'body_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        # Array of body information
        api_response = api_instance.get_part_studio_body_details(did, wvm, wvmid, eid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->get_part_studio_body_details: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Array of body information
        api_response = api_instance.get_part_studio_body_details(did, wvm, wvmid, eid, configuration=configuration, link_document_id=link_document_id, rollback_bar_index=rollback_bar_index, body=body)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->get_part_studio_body_details: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **eid** | **str**|  |
 **configuration** | **str**|  | [optional]
 **link_document_id** | **str**|  | [optional]
 **rollback_bar_index** | **int**|  | [optional] if omitted the server will use the default value of -1
 **body** | **str**|  | [optional]

### Return type

[**bt_export_model_bodies_response734.BTExportModelBodiesResponse734**](BTExportModelBodiesResponse734.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8; qs=0.09
 - **Accept**: application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_part_studio_bounding_boxes**
> bt_bounding_box_info.BTBoundingBoxInfo get_part_studio_bounding_boxes(did, wvm, wvmid, eid)

Mass properties of parts or a PartStudio.

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.PartStudiosApi(api_client)
    did = 'did_example' # str | Document ID.
    wvm = 'wvm_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
    wvmid = 'wvmid_example' # str | Workspace (w), Version (v) or Microversion (m) ID.
    eid = 'eid_example' # str | Element ID.
    include_hidden = False # bool | Whether or not to include bounding boxes for hidden parts. (optional) if omitted the server will use the default value of False
include_wire_bodies = True # bool | Whether to include wire bodies in the bounding box. (optional) if omitted the server will use the default value of True
configuration = 'configuration_example' # str | Configuration string. (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

    # example passing only required values which don't have defaults set
    try:
        # Mass properties of parts or a PartStudio.
        api_response = api_instance.get_part_studio_bounding_boxes(did, wvm, wvmid, eid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->get_part_studio_bounding_boxes: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Mass properties of parts or a PartStudio.
        api_response = api_instance.get_part_studio_bounding_boxes(did, wvm, wvmid, eid, include_hidden=include_hidden, include_wire_bodies=include_wire_bodies, configuration=configuration, link_document_id=link_document_id)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->get_part_studio_bounding_boxes: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. |
 **wvm** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. |
 **wvmid** | **str**| Workspace (w), Version (v) or Microversion (m) ID. |
 **eid** | **str**| Element ID. |
 **include_hidden** | **bool**| Whether or not to include bounding boxes for hidden parts. | [optional] if omitted the server will use the default value of False
 **include_wire_bodies** | **bool**| Whether to include wire bodies in the bounding box. | [optional] if omitted the server will use the default value of True
 **configuration** | **str**| Configuration string. | [optional]
 **link_document_id** | **str**| Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional]

### Return type

[**bt_bounding_box_info.BTBoundingBoxInfo**](BTBoundingBoxInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_part_studio_configuration**
> get_part_studio_configuration(did, wvm, wvmid, eid)

Get Configuration

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.PartStudiosApi(api_client)
    did = 'did_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    eid = 'eid_example' # str | 
    
    # example passing only required values which don't have defaults set
    try:
        # Get Configuration
        api_instance.get_part_studio_configuration(did, wvm, wvmid, eid)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->get_part_studio_configuration: %s\n" % e)
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_part_studio_feature_specs**
> bt_feature_specs_response664.BTFeatureSpecsResponse664 get_part_studio_feature_specs(did, wvm, wvmid, eid)

Get Feature Specs

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.PartStudiosApi(api_client)
    did = 'did_example' # str | Document ID.
    wvm = 'wvm_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
    wvmid = 'wvmid_example' # str | Workspace (w), Version (v) or Microversion (m) ID.
    eid = 'eid_example' # str | Element ID.
    
    # example passing only required values which don't have defaults set
    try:
        # Get Feature Specs
        api_response = api_instance.get_part_studio_feature_specs(did, wvm, wvmid, eid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->get_part_studio_feature_specs: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. |
 **wvm** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. |
 **wvmid** | **str**| Workspace (w), Version (v) or Microversion (m) ID. |
 **eid** | **str**| Element ID. |

### Return type

[**bt_feature_specs_response664.BTFeatureSpecsResponse664**](BTFeatureSpecsResponse664.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_part_studio_features**
> bt_feature_list_response2457.BTFeatureListResponse2457 get_part_studio_features(did, wvm, wvmid, eid)

Get Feature List

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.PartStudiosApi(api_client)
    did = 'did_example' # str | Document ID.
    wvm = 'wvm_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
    wvmid = 'wvmid_example' # str | Workspace (w), Version (v) or Microversion (m) ID.
    eid = 'eid_example' # str | Element ID.
    feature_id = ['feature_id_example'] # [str] | ID of a feature; repeat query param to add more than one (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)
no_sketch_geometry = False # bool | Whether or not to output simple sketch info without geometry (optional) if omitted the server will use the default value of False

    # example passing only required values which don't have defaults set
    try:
        # Get Feature List
        api_response = api_instance.get_part_studio_features(did, wvm, wvmid, eid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->get_part_studio_features: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Get Feature List
        api_response = api_instance.get_part_studio_features(did, wvm, wvmid, eid, feature_id=feature_id, link_document_id=link_document_id, no_sketch_geometry=no_sketch_geometry)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->get_part_studio_features: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. |
 **wvm** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. |
 **wvmid** | **str**| Workspace (w), Version (v) or Microversion (m) ID. |
 **eid** | **str**| Element ID. |
 **feature_id** | **[str]**| ID of a feature; repeat query param to add more than one | [optional]
 **link_document_id** | **str**| Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional]
 **no_sketch_geometry** | **bool**| Whether or not to output simple sketch info without geometry | [optional] if omitted the server will use the default value of False

### Return type

[**bt_feature_list_response2457.BTFeatureListResponse2457**](BTFeatureListResponse2457.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_part_studio_mass_properties**
> bt_mass_properties_bulk_info.BTMassPropertiesBulkInfo get_part_studio_mass_properties(did, wvm, wvmid, eid)

Mass properties of parts or a PartStudio.

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.PartStudiosApi(api_client)
    did = 'did_example' # str | Document ID.
    wvm = 'wvm_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
    wvmid = 'wvmid_example' # str | Workspace (w), Version (v) or Microversion (m) ID.
    eid = 'eid_example' # str | Element ID.
    part_id = ['part_id_example'] # [str] | IDs of the parts to retrieve. Repeat query param to add more than one (i.e. partId=JHK&partId=JHD). May not be combined with other ID filters (optional)
mass_as_group = True # bool | If true, specified parts will be evaluated as a single object instead of individually (optional) if omitted the server will use the default value of True
configuration = 'configuration_example' # str | Configuration string. (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

    # example passing only required values which don't have defaults set
    try:
        # Mass properties of parts or a PartStudio.
        api_response = api_instance.get_part_studio_mass_properties(did, wvm, wvmid, eid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->get_part_studio_mass_properties: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Mass properties of parts or a PartStudio.
        api_response = api_instance.get_part_studio_mass_properties(did, wvm, wvmid, eid, part_id=part_id, mass_as_group=mass_as_group, configuration=configuration, link_document_id=link_document_id)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->get_part_studio_mass_properties: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. |
 **wvm** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. |
 **wvmid** | **str**| Workspace (w), Version (v) or Microversion (m) ID. |
 **eid** | **str**| Element ID. |
 **part_id** | **[str]**| IDs of the parts to retrieve. Repeat query param to add more than one (i.e. partId&#x3D;JHK&amp;partId&#x3D;JHD). May not be combined with other ID filters | [optional]
 **mass_as_group** | **bool**| If true, specified parts will be evaluated as a single object instead of individually | [optional] if omitted the server will use the default value of True
 **configuration** | **str**| Configuration string. | [optional]
 **link_document_id** | **str**| Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional]

### Return type

[**bt_mass_properties_bulk_info.BTMassPropertiesBulkInfo**](BTMassPropertiesBulkInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_part_studio_named_views**
> bt_named_views_info.BTNamedViewsInfo get_part_studio_named_views(did, eid)

Get Named Views

### Example

```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.PartStudiosApi(api_client)
    did = 'did_example' # str | Document ID.
    eid = 'eid_example' # str | Element ID.
    skip_perspective = True # bool | Whether views with a perspective projection should be omitted. (optional) if omitted the server will use the default value of True
include_section_cut_views = False # bool |  (optional) if omitted the server will use the default value of False
link_document_id = 'link_document_id_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        # Get Named Views
        api_response = api_instance.get_part_studio_named_views(did, eid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->get_part_studio_named_views: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Get Named Views
        api_response = api_instance.get_part_studio_named_views(did, eid, skip_perspective=skip_perspective, include_section_cut_views=include_section_cut_views, link_document_id=link_document_id)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->get_part_studio_named_views: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. |
 **eid** | **str**| Element ID. |
 **skip_perspective** | **bool**| Whether views with a perspective projection should be omitted. | [optional] if omitted the server will use the default value of True
 **include_section_cut_views** | **bool**|  | [optional] if omitted the server will use the default value of False
 **link_document_id** | **str**|  | [optional]

### Return type

[**bt_named_views_info.BTNamedViewsInfo**](BTNamedViewsInfo.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_part_studio_shaded_views**
> bt_shaded_views_info.BTShadedViewsInfo get_part_studio_shaded_views(did, wvm, wvmid, eid)

Get Shaded Views

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.PartStudiosApi(api_client)
    did = 'did_example' # str | Document ID.
    wvm = 'wvm_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
    wvmid = 'wvmid_example' # str | Workspace (w), Version (v) or Microversion (m) ID.
    eid = 'eid_example' # str | Element ID.
    view_matrix = 'front' # str | 12-number view matrix (comma-separated), or one of the following named views: top, bottom, front, back, left, right The 12 entries in the view matrix form three rows and four columns, which is a linear transformation applied to the model itself. The matrix's first three columns maps the coordinate axes of the model to the coordinate axes of the view, and the fourth column translates the origin (in meters). The view coordinates have x pointing right, y pointing up, and z pointing towards the viewer, while a front view of the model has x pointing right, y pointing away from the viewer, and z pointing up. For example, the identity matrix viewMatrix=1,0,0,0,0,1,0,0,0,0,1,0 corresponds to the top view, and viewMatrix=0.612,0.612,0,0,-0.354,0.354,0.707,0,0.707,-0.707,0.707,0 corresponds (approximately) to the isometric view. The first three columns of the view matrix should be orthonormal and have a positive determinant.  If this is not the case, view behavior may be undefined. (optional) if omitted the server will use the default value of 'front'
output_height = 500 # int | Output image height (in pixels) (optional) if omitted the server will use the default value of 500
output_width = 500 # int | Output image width (in pixels) (optional) if omitted the server will use the default value of 500
pixel_size = 0.003 # float | Height and width represented by each pixel (in meters). If the value is 0, the display will be sized to fit the output image dimensions. (optional) if omitted the server will use the default value of 0.003
edges = 'show' # str | The treatment to be applied to edges in the display. Options are show: show visible edges, hide: hide visible edges. (optional) if omitted the server will use the default value of 'show'
show_all_parts = False # bool | Whether or not all parts should be shown in the element, regardless of user setting. If false, the visibility setting made by the user will be reflected in the image. If true, all parts will be shown. (optional) if omitted the server will use the default value of False
include_surfaces = False # bool | Whether or not surfaces should be shown in the element. It is applicable only when showAllParts is true. If false, surfaces will be excluded. If true, all surfaces will be shown. (optional) if omitted the server will use the default value of False
use_anti_aliasing = False # bool | If true, an anti-aliasing factor will be used to smooth model boundaries in the final image result. If false, the image will be rasterized at the given resolution. Setting to true can have negative performance implications with respect to rendering time and memory usage. If a high-resolution image is requested and anti-aliasing is turned on, the server may not be able to fulfill the request. (optional) if omitted the server will use the default value of False
configuration = 'configuration_example' # str | Configuration string. (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

    # example passing only required values which don't have defaults set
    try:
        # Get Shaded Views
        api_response = api_instance.get_part_studio_shaded_views(did, wvm, wvmid, eid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->get_part_studio_shaded_views: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Get Shaded Views
        api_response = api_instance.get_part_studio_shaded_views(did, wvm, wvmid, eid, view_matrix=view_matrix, output_height=output_height, output_width=output_width, pixel_size=pixel_size, edges=edges, show_all_parts=show_all_parts, include_surfaces=include_surfaces, use_anti_aliasing=use_anti_aliasing, configuration=configuration, link_document_id=link_document_id)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->get_part_studio_shaded_views: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. |
 **wvm** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. |
 **wvmid** | **str**| Workspace (w), Version (v) or Microversion (m) ID. |
 **eid** | **str**| Element ID. |
 **view_matrix** | **str**| 12-number view matrix (comma-separated), or one of the following named views: top, bottom, front, back, left, right The 12 entries in the view matrix form three rows and four columns, which is a linear transformation applied to the model itself. The matrix&#39;s first three columns maps the coordinate axes of the model to the coordinate axes of the view, and the fourth column translates the origin (in meters). The view coordinates have x pointing right, y pointing up, and z pointing towards the viewer, while a front view of the model has x pointing right, y pointing away from the viewer, and z pointing up. For example, the identity matrix viewMatrix&#x3D;1,0,0,0,0,1,0,0,0,0,1,0 corresponds to the top view, and viewMatrix&#x3D;0.612,0.612,0,0,-0.354,0.354,0.707,0,0.707,-0.707,0.707,0 corresponds (approximately) to the isometric view. The first three columns of the view matrix should be orthonormal and have a positive determinant.  If this is not the case, view behavior may be undefined. | [optional] if omitted the server will use the default value of 'front'
 **output_height** | **int**| Output image height (in pixels) | [optional] if omitted the server will use the default value of 500
 **output_width** | **int**| Output image width (in pixels) | [optional] if omitted the server will use the default value of 500
 **pixel_size** | **float**| Height and width represented by each pixel (in meters). If the value is 0, the display will be sized to fit the output image dimensions. | [optional] if omitted the server will use the default value of 0.003
 **edges** | **str**| The treatment to be applied to edges in the display. Options are show: show visible edges, hide: hide visible edges. | [optional] if omitted the server will use the default value of 'show'
 **show_all_parts** | **bool**| Whether or not all parts should be shown in the element, regardless of user setting. If false, the visibility setting made by the user will be reflected in the image. If true, all parts will be shown. | [optional] if omitted the server will use the default value of False
 **include_surfaces** | **bool**| Whether or not surfaces should be shown in the element. It is applicable only when showAllParts is true. If false, surfaces will be excluded. If true, all surfaces will be shown. | [optional] if omitted the server will use the default value of False
 **use_anti_aliasing** | **bool**| If true, an anti-aliasing factor will be used to smooth model boundaries in the final image result. If false, the image will be rasterized at the given resolution. Setting to true can have negative performance implications with respect to rendering time and memory usage. If a high-resolution image is requested and anti-aliasing is turned on, the server may not be able to fulfill the request. | [optional] if omitted the server will use the default value of False
 **configuration** | **str**| Configuration string. | [optional]
 **link_document_id** | **str**| Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional]

### Return type

[**bt_shaded_views_info.BTShadedViewsInfo**](BTShadedViewsInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_part_studio_tessellated_edges**
> bt_export_tessellated_edges_response327.BTExportTessellatedEdgesResponse327 get_part_studio_tessellated_edges(did, wvm, wvmid, eid)

Tesselated edges from a PartStudio.

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.PartStudiosApi(api_client)
    did = 'did_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    eid = 'eid_example' # str | 
    angle_tolerance = 3.4 # float |  (optional)
chord_tolerance = 3.4 # float |  (optional)
part_id = ['part_id_example'] # [str] |  (optional)
edge_id = ['edge_id_example'] # [str] |  (optional)
configuration = 'configuration_example' # str |  (optional)
link_document_id = 'link_document_id_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        # Tesselated edges from a PartStudio.
        api_response = api_instance.get_part_studio_tessellated_edges(did, wvm, wvmid, eid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->get_part_studio_tessellated_edges: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Tesselated edges from a PartStudio.
        api_response = api_instance.get_part_studio_tessellated_edges(did, wvm, wvmid, eid, angle_tolerance=angle_tolerance, chord_tolerance=chord_tolerance, part_id=part_id, edge_id=edge_id, configuration=configuration, link_document_id=link_document_id)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->get_part_studio_tessellated_edges: %s\n" % e)
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
 **part_id** | **[str]**|  | [optional]
 **edge_id** | **[str]**|  | [optional]
 **configuration** | **str**|  | [optional]
 **link_document_id** | **str**|  | [optional]

### Return type

[**bt_export_tessellated_edges_response327.BTExportTessellatedEdgesResponse327**](BTExportTessellatedEdgesResponse327.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_part_studio_tessellated_faces**
> bt_export_tessellated_faces_response898.BTExportTessellatedFacesResponse898 get_part_studio_tessellated_faces(did, wvm, wvmid, eid)

Tesselated faces of the parts in the Part Studio.

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.PartStudiosApi(api_client)
    did = 'did_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    eid = 'eid_example' # str | 
    angle_tolerance = 3.4 # float |  (optional)
chord_tolerance = 3.4 # float |  (optional)
max_facet_width = 3.4 # float |  (optional)
output_vertex_normals = False # bool |  (optional) if omitted the server will use the default value of False
output_facet_normals = True # bool |  (optional) if omitted the server will use the default value of True
output_texture_coordinates = False # bool |  (optional) if omitted the server will use the default value of False
output_face_appearances = False # bool |  (optional) if omitted the server will use the default value of False
output_index_table = False # bool |  (optional) if omitted the server will use the default value of False
part_id = ['part_id_example'] # [str] |  (optional)
face_id = ['face_id_example'] # [str] |  (optional)
output_error_faces = False # bool |  (optional) if omitted the server will use the default value of False
configuration = 'configuration_example' # str |  (optional)
link_document_id = 'link_document_id_example' # str |  (optional)
body = 'body_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        # Tesselated faces of the parts in the Part Studio.
        api_response = api_instance.get_part_studio_tessellated_faces(did, wvm, wvmid, eid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->get_part_studio_tessellated_faces: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Tesselated faces of the parts in the Part Studio.
        api_response = api_instance.get_part_studio_tessellated_faces(did, wvm, wvmid, eid, angle_tolerance=angle_tolerance, chord_tolerance=chord_tolerance, max_facet_width=max_facet_width, output_vertex_normals=output_vertex_normals, output_facet_normals=output_facet_normals, output_texture_coordinates=output_texture_coordinates, output_face_appearances=output_face_appearances, output_index_table=output_index_table, part_id=part_id, face_id=face_id, output_error_faces=output_error_faces, configuration=configuration, link_document_id=link_document_id, body=body)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->get_part_studio_tessellated_faces: %s\n" % e)
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
 **max_facet_width** | **float**|  | [optional]
 **output_vertex_normals** | **bool**|  | [optional] if omitted the server will use the default value of False
 **output_facet_normals** | **bool**|  | [optional] if omitted the server will use the default value of True
 **output_texture_coordinates** | **bool**|  | [optional] if omitted the server will use the default value of False
 **output_face_appearances** | **bool**|  | [optional] if omitted the server will use the default value of False
 **output_index_table** | **bool**|  | [optional] if omitted the server will use the default value of False
 **part_id** | **[str]**|  | [optional]
 **face_id** | **[str]**|  | [optional]
 **output_error_faces** | **bool**|  | [optional] if omitted the server will use the default value of False
 **configuration** | **str**|  | [optional]
 **link_document_id** | **str**|  | [optional]
 **body** | **str**|  | [optional]

### Return type

[**bt_export_tessellated_faces_response898.BTExportTessellatedFacesResponse898**](BTExportTessellatedFacesResponse898.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8; qs=0.09
 - **Accept**: application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **translate_ids**
> bt_id_translation_info.BTIdTranslationInfo translate_ids(did, wvm, wvmid, eid, bt_id_translation_params)

Id Translations

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.PartStudiosApi(api_client)
    did = 'did_example' # str | Document ID.
    wvm = 'wvm_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
    wvmid = 'wvmid_example' # str | Workspace (w), Version (v) or Microversion (m) ID.
    eid = 'eid_example' # str | Element ID.
    bt_id_translation_params = onshape_client.oas.BTIdTranslationParams() # bt_id_translation_params.BTIdTranslationParams | 
    
    # example passing only required values which don't have defaults set
    try:
        # Id Translations
        api_response = api_instance.translate_ids(did, wvm, wvmid, eid, bt_id_translation_params)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->translate_ids: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. |
 **wvm** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. |
 **wvmid** | **str**| Workspace (w), Version (v) or Microversion (m) ID. |
 **eid** | **str**| Element ID. |
 **bt_id_translation_params** | [**bt_id_translation_params.BTIdTranslationParams**](BTIdTranslationParams.md)|  |

### Return type

[**bt_id_translation_info.BTIdTranslationInfo**](BTIdTranslationInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8; qs=0.09
 - **Accept**: application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_features**
> bt_update_features_response1333.BTUpdateFeaturesResponse1333 update_features(did, wid, eid)

Update Features

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.PartStudiosApi(api_client)
    did = 'did_example' # str | Document ID.
    wid = 'wid_example' # str | Workspace ID.
    eid = 'eid_example' # str | Element ID.
    body = 'body_example' # str | feature The serialized feature definition (optional)

    # example passing only required values which don't have defaults set
    try:
        # Update Features
        api_response = api_instance.update_features(did, wid, eid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->update_features: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Update Features
        api_response = api_instance.update_features(did, wid, eid, body=body)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->update_features: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. |
 **wid** | **str**| Workspace ID. |
 **eid** | **str**| Element ID. |
 **body** | **str**| feature The serialized feature definition | [optional]

### Return type

[**bt_update_features_response1333.BTUpdateFeaturesResponse1333**](BTUpdateFeaturesResponse1333.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8; qs=0.09
 - **Accept**: application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_part_studio_configuration**
> bt_configuration_response2019.BTConfigurationResponse2019 update_part_studio_configuration(did, wvm, wvmid, eid)

Update Configuration

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.PartStudiosApi(api_client)
    did = 'did_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    eid = 'eid_example' # str | 
    body = 'body_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        # Update Configuration
        api_response = api_instance.update_part_studio_configuration(did, wvm, wvmid, eid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->update_part_studio_configuration: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Update Configuration
        api_response = api_instance.update_part_studio_configuration(did, wvm, wvmid, eid, body=body)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->update_part_studio_configuration: %s\n" % e)
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

[**bt_configuration_response2019.BTConfigurationResponse2019**](BTConfigurationResponse2019.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8; qs=0.09
 - **Accept**: application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_part_studio_feature**
> bt_feature_definition_response1617.BTFeatureDefinitionResponse1617 update_part_studio_feature(did, wid, eid, fid)

Update Feature

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.PartStudiosApi(api_client)
    did = 'did_example' # str | Document ID.
    wid = 'wid_example' # str | Workspace ID.
    eid = 'eid_example' # str | Element ID.
    fid = 'fid_example' # str | The id of the feature being updated. This id should be URL encoded and must match the featureId found in the serialized structure
    body = 'body_example' # str | feature The serialized feature definition (optional)

    # example passing only required values which don't have defaults set
    try:
        # Update Feature
        api_response = api_instance.update_part_studio_feature(did, wid, eid, fid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->update_part_studio_feature: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Update Feature
        api_response = api_instance.update_part_studio_feature(did, wid, eid, fid, body=body)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->update_part_studio_feature: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. |
 **wid** | **str**| Workspace ID. |
 **eid** | **str**| Element ID. |
 **fid** | **str**| The id of the feature being updated. This id should be URL encoded and must match the featureId found in the serialized structure |
 **body** | **str**| feature The serialized feature definition | [optional]

### Return type

[**bt_feature_definition_response1617.BTFeatureDefinitionResponse1617**](BTFeatureDefinitionResponse1617.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8; qs=0.09
 - **Accept**: application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_rollback**
> bt_set_feature_rollback_response1042.BTSetFeatureRollbackResponse1042 update_rollback(did, wid, eid)

Update Feature Rollback

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.PartStudiosApi(api_client)
    did = 'did_example' # str | Document ID.
    wid = 'wid_example' # str | Workspace ID.
    eid = 'eid_example' # str | Element ID.
    body = 'body_example' # str | The index at which the rollback index should be placed. Features  with entry index (0-based) higher than or equal to the value are rolled back. Value of -1 is treated  as an alias for \"end of feature list\". Otherwise the value must be in the range 0 to the number of  entries in the feature list (optional)

    # example passing only required values which don't have defaults set
    try:
        # Update Feature Rollback
        api_response = api_instance.update_rollback(did, wid, eid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->update_rollback: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Update Feature Rollback
        api_response = api_instance.update_rollback(did, wid, eid, body=body)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartStudiosApi->update_rollback: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. |
 **wid** | **str**| Workspace ID. |
 **eid** | **str**| Element ID. |
 **body** | **str**| The index at which the rollback index should be placed. Features  with entry index (0-based) higher than or equal to the value are rolled back. Value of -1 is treated  as an alias for \&quot;end of feature list\&quot;. Otherwise the value must be in the range 0 to the number of  entries in the feature list | [optional]

### Return type

[**bt_set_feature_rollback_response1042.BTSetFeatureRollbackResponse1042**](BTSetFeatureRollbackResponse1042.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8; qs=0.09
 - **Accept**: application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

