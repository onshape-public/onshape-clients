# onshape_client.PartStudiosApi

All URIs are relative to *https://cad.onshape.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_feature**](PartStudiosApi.md#add_feature) | **POST** /partstudios/d/{did}/w/{wid}/e/{eid}/features | Add Feature
[**compare_part_studio**](PartStudiosApi.md#compare_part_studio) | **GET** /partstudios/d/{did}/{wvm_char}/{wvm}/e/{eid}/compare | Compare Part Studio
[**create_part_studio**](PartStudiosApi.md#create_part_studio) | **POST** /partstudios/d/{did}/w/{wid} | Create Part Studio
[**create_translation**](PartStudiosApi.md#create_translation) | **POST** /partstudios/d/{did}/{wv_char}/{wv}/e/{eid}/translations | Create Part Studio translation
[**delete_feature**](PartStudiosApi.md#delete_feature) | **DELETE** /partstudios/d/{did}/w/{wid}/e/{eid}/features/featureid/{fid} | Delete Feature
[**eval_feature_script**](PartStudiosApi.md#eval_feature_script) | **POST** /partstudios/d/{did}/{wvm_char}/{wvm}/e/{eid}/featurescript | Evaluate FeatureScript
[**export_parasolid**](PartStudiosApi.md#export_parasolid) | **GET** /partstudios/d/{did}/{wvm_char}/{wvm}/e/{eid}/parasolid | Export Part Studio to Parasolid
[**export_stl**](PartStudiosApi.md#export_stl) | **GET** /partstudios/d/{did}/{wvm_char}/{wvm}/e/{eid}/stl | Export Part Studio to STL
[**get_body_details**](PartStudiosApi.md#get_body_details) | **GET** /partstudios/d/{did}/{wvm_char}/{wvm}/e/{eid}/bodydetails | Body Details
[**get_bounding_boxes**](PartStudiosApi.md#get_bounding_boxes) | **GET** /partstudios/d/{did}/{wvm_char}/{wvm}/e/{eid}/boundingboxes | Bounding Box
[**get_bounding_boxes_for_sketch**](PartStudiosApi.md#get_bounding_boxes_for_sketch) | **GET** /partstudios/d/{did}/{wvm_char}/{wvm}/e/{eid}/sketches/{sid}/boundingboxes | Sketch Bounding Box
[**get_configuration**](PartStudiosApi.md#get_configuration) | **GET** /partstudios/d/{did}/{wvm_char}/{wvm}/e/{eid}/configuration | Get Configuration
[**get_edges**](PartStudiosApi.md#get_edges) | **GET** /partstudios/d/{did}/{wvm_char}/{wvm}/e/{eid}/tessellatededges | Tessellated Edges
[**get_faces**](PartStudiosApi.md#get_faces) | **GET** /partstudios/d/{did}/{wvm_char}/{wvm}/e/{eid}/tessellatedfaces | Tessellated Faces
[**get_feature_specs**](PartStudiosApi.md#get_feature_specs) | **GET** /partstudios/d/{did}/{wvm_char}/{wvm}/e/{eid}/featurespecs | Get Feature Specs
[**get_features**](PartStudiosApi.md#get_features) | **GET** /partstudios/d/{did}/{wvm_char}/{wvm}/e/{eid}/features | Get Feature List
[**get_mass_properties**](PartStudiosApi.md#get_mass_properties) | **GET** /partstudios/d/{did}/{wvm_char}/{wvm}/e/{eid}/massproperties | Mass Properties
[**get_metadata**](PartStudiosApi.md#get_metadata) | **GET** /partstudios/d/{did}/{wvm_char}/{wvm}/e/{eid}/metadata | Part Metadata
[**get_named_views**](PartStudiosApi.md#get_named_views) | **GET** /partstudios/d/{did}/e/{eid}/namedViews | Get Named Views
[**get_shaded_views**](PartStudiosApi.md#get_shaded_views) | **GET** /partstudios/d/{did}/{wvm_char}/{wvm}/e/{eid}/shadedviews | Shaded Views
[**get_sketch_info**](PartStudiosApi.md#get_sketch_info) | **GET** /partstudios/d/{did}/{wvm_char}/{wvm}/e/{eid}/sketches | Sketch Information
[**get_tessellated_entities**](PartStudiosApi.md#get_tessellated_entities) | **GET** /partstudios/d/{did}/{wvm_char}/{wvm}/e/{eid}/sketches/{sid}/tessellatedentities | Tessellated sketch entitites
[**get_translation_formats**](PartStudiosApi.md#get_translation_formats) | **GET** /partstudios/d/{did}/w/{wid}/e/{eid}/translationformats | Get Translation Formats
[**id_translations**](PartStudiosApi.md#id_translations) | **POST** /partstudios/d/{did}/{wvm_char}/{wvm}/e/{eid}/idtranslations | Id Translations
[**update_configuration**](PartStudiosApi.md#update_configuration) | **POST** /partstudios/d/{did}/w/{wid}/e/{eid}/configuration | Update Configuration
[**update_feature**](PartStudiosApi.md#update_feature) | **POST** /partstudios/d/{did}/w/{wid}/e/{eid}/features/featureid/{fid} | Update Feature
[**update_features**](PartStudiosApi.md#update_features) | **POST** /partstudios/d/{did}/w/{wid}/e/{eid}/features/updates | Update Features
[**update_rollback**](PartStudiosApi.md#update_rollback) | **POST** /partstudios/d/{did}/w/{wid}/e/{eid}/features/rollback | Update Feature Rollback


# **add_feature**
> PartStudiosAddFeatureResponse200 add_feature(did, wid, eid, body=body)

Add Feature

Add a feature to the feature list for a part studio. See the developer portal feature list                 help topic for additional information

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
eid = 'eid_example' # str | Element ID
body = onshape_client.PartStudiosAddFeatureBody() # PartStudiosAddFeatureBody | The JSON request body. (optional)

try:
    # Add Feature
    api_response = api_instance.add_feature(did, wid, eid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->add_feature: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **eid** | **str**| Element ID | 
 **body** | [**PartStudiosAddFeatureBody**](PartStudiosAddFeatureBody.md)| The JSON request body. | [optional] 

### Return type

[**PartStudiosAddFeatureResponse200**](PartStudiosAddFeatureResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **compare_part_studio**
> PartStudiosComparePartStudioResponse200 compare_part_studio(wvm_char, did, wvm, eid, workspace_id=workspace_id, version_id=version_id, microversion_id=microversion_id, link_document_id=link_document_id)

Compare Part Studio

Compare Part Studio in different versions / workspaces of a Document. Comparison can be done                 between any combinations of source Workspace | Version | Microversion (specified in URL) and                 target Workspace | Version | Microversion (specified as a query parameter). One of versionId,                 workspaceId, or microversionId query parameters needs to be specified to identify target                 microversion of the comparison. The result of the comparison is indicated by the following                 values: of NONE - entity exists in both source and target states and there's no change in its                 state | MODIFIED - entity exists in both source and target states and there's some change in its                 state | ADDED - entity exists in target only | DELETED - entity exists in source only.

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID
workspace_id = 'workspace_id_example' # str | Id of the Workspace to compare the Part Studio with (optional)
version_id = 'version_id_example' # str | Id of a Version to compare the Part Studio with (optional)
microversion_id = 8.14 # float | Id of a document microversion to compare the Part Studio with (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

try:
    # Compare Part Studio
    api_response = api_instance.compare_part_studio(wvm_char, did, wvm, eid, workspace_id=workspace_id, version_id=version_id, microversion_id=microversion_id, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->compare_part_studio: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 
 **workspace_id** | **str**| Id of the Workspace to compare the Part Studio with | [optional] 
 **version_id** | **str**| Id of a Version to compare the Part Studio with | [optional] 
 **microversion_id** | **float**| Id of a document microversion to compare the Part Studio with | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 

### Return type

[**PartStudiosComparePartStudioResponse200**](PartStudiosComparePartStudioResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_part_studio**
> PartStudiosCreatePartStudioResponse200 create_part_studio(did, wid, body=body)

Create Part Studio

Create an new part studio tab in the document.

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
body = onshape_client.PartStudiosCreatePartStudioBody() # PartStudiosCreatePartStudioBody | The JSON request body. (optional)

try:
    # Create Part Studio
    api_response = api_instance.create_part_studio(did, wid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->create_part_studio: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **body** | [**PartStudiosCreatePartStudioBody**](PartStudiosCreatePartStudioBody.md)| The JSON request body. | [optional] 

### Return type

[**PartStudiosCreatePartStudioResponse200**](PartStudiosCreatePartStudioResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_translation**
> PartStudiosCreateTranslationResponse200 create_translation(wv_char, did, wv, eid, body=body)

Create Part Studio translation

Create an element translation. The translation may be incomplete at the time that the call                 completes. If the requestState is ACTIVE, the translation can be polled until the state becomes                 either DONE or FAILED. Alternatively, a webhook callback can be registered for notification of                 translation completion. (Requires Write scope if storeInDocument is true)

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
wv_char = 'wv_char_example' # str | One of w or v corresponding to whether a workspace or version was entered.
did = 'did_example' # str | Document ID
wv = 'wv_example' # str | Workspace (w) or Version (v) ID
eid = 'eid_example' # str | Element ID
body = onshape_client.PartStudiosCreateTranslationBody() # PartStudiosCreateTranslationBody | The JSON request body. (optional)

try:
    # Create Part Studio translation
    api_response = api_instance.create_translation(wv_char, did, wv, eid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->create_translation: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wv_char** | **str**| One of w or v corresponding to whether a workspace or version was entered. | 
 **did** | **str**| Document ID | 
 **wv** | **str**| Workspace (w) or Version (v) ID | 
 **eid** | **str**| Element ID | 
 **body** | [**PartStudiosCreateTranslationBody**](PartStudiosCreateTranslationBody.md)| The JSON request body. | [optional] 

### Return type

[**PartStudiosCreateTranslationResponse200**](PartStudiosCreateTranslationResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_feature**
> PartStudiosDeleteFeatureResponse200 delete_feature(fid, did, wid, eid)

Delete Feature

Delete an existing feature in the feature list for a part studio. See the developer                 portal feature list help topic for additional information

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
fid = 'fid_example' # str | The id of the feature being updated.  This id should be URL encoded
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
eid = 'eid_example' # str | Element ID

try:
    # Delete Feature
    api_response = api_instance.delete_feature(fid, did, wid, eid)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->delete_feature: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **fid** | **str**| The id of the feature being updated.  This id should be URL encoded | 
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **eid** | **str**| Element ID | 

### Return type

[**PartStudiosDeleteFeatureResponse200**](PartStudiosDeleteFeatureResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **eval_feature_script**
> PartStudiosEvalFeatureScriptResponse200 eval_feature_script(wvm_char, did, wvm, eid, body=body)

Evaluate FeatureScript

Evaluate featurescript in the context of a part studio. See the developer portal feature list                 help topic for additional information

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID
body = onshape_client.PartStudiosEvalFeatureScriptBody() # PartStudiosEvalFeatureScriptBody | The JSON request body. (optional)

try:
    # Evaluate FeatureScript
    api_response = api_instance.eval_feature_script(wvm_char, did, wvm, eid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->eval_feature_script: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 
 **body** | [**PartStudiosEvalFeatureScriptBody**](PartStudiosEvalFeatureScriptBody.md)| The JSON request body. | [optional] 

### Return type

[**PartStudiosEvalFeatureScriptResponse200**](PartStudiosEvalFeatureScriptResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **export_parasolid**
> file export_parasolid(wvm_char, did, wvm, eid, part_ids=part_ids, version=version, include_export_ids=include_export_ids, link_document_id=link_document_id, configuration=configuration)

Export Part Studio to Parasolid

Export the part studio in text Parasolid format; returns a 307 redirect.

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID
part_ids = 'part_ids_example' # str | Comma-separated list of part IDs to export (omit to export entire part           studio) (optional)
version = 8.14 # float | Parasolid version (optional)
include_export_ids = true # bool | Whether topolgy ids should be exported as parasolid           attributes (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)
configuration = 'configuration_example' # str | Configuration string (optional)

try:
    # Export Part Studio to Parasolid
    api_response = api_instance.export_parasolid(wvm_char, did, wvm, eid, part_ids=part_ids, version=version, include_export_ids=include_export_ids, link_document_id=link_document_id, configuration=configuration)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->export_parasolid: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 
 **part_ids** | **str**| Comma-separated list of part IDs to export (omit to export entire part           studio) | [optional] 
 **version** | **float**| Parasolid version | [optional] 
 **include_export_ids** | **bool**| Whether topolgy ids should be exported as parasolid           attributes | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 
 **configuration** | **str**| Configuration string | [optional] 

### Return type

[**file**](file.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **export_stl**
> file export_stl(wvm_char, did, wvm, eid, part_ids=part_ids, grouping=grouping, scale=scale, units=units, angle_tolerance=angle_tolerance, chord_tolerance=chord_tolerance, max_facet_width=max_facet_width, min_facet_width=min_facet_width, mode=mode, link_document_id=link_document_id, configuration=configuration)

Export Part Studio to STL

Export the part studio in text or binary STL format; returns a 307 redirect.

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID
part_ids = 'part_ids_example' # str | Comma-separated list of part IDs to export (omit to export entire part           studio) (optional)
grouping = true # bool | Whether parts should be exported as a group or individually in a           .zip file (optional)
scale = 8.14 # float | Scale for measurements (optional)
units = 'units_example' # str | Name of base unit (meter, centimeter, millimeter, inch, foot, or           yard) (optional)
angle_tolerance = 8.14 # float | Angle tolerance (in radians; must be < pi/2) (optional)
chord_tolerance = 8.14 # float | Chord tolerance (in selected units) (optional)
max_facet_width = 8.14 # float | Maximum facet width (in selected units) (optional)
min_facet_width = 8.14 # float | Minimum facet width (in selected units - must be <           maximumFacetWidth) (optional)
mode = 'mode_example' # str | Type of file: text, binary (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)
configuration = 'configuration_example' # str | Configuration string (optional)

try:
    # Export Part Studio to STL
    api_response = api_instance.export_stl(wvm_char, did, wvm, eid, part_ids=part_ids, grouping=grouping, scale=scale, units=units, angle_tolerance=angle_tolerance, chord_tolerance=chord_tolerance, max_facet_width=max_facet_width, min_facet_width=min_facet_width, mode=mode, link_document_id=link_document_id, configuration=configuration)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->export_stl: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 
 **part_ids** | **str**| Comma-separated list of part IDs to export (omit to export entire part           studio) | [optional] 
 **grouping** | **bool**| Whether parts should be exported as a group or individually in a           .zip file | [optional] 
 **scale** | **float**| Scale for measurements | [optional] 
 **units** | **str**| Name of base unit (meter, centimeter, millimeter, inch, foot, or           yard) | [optional] 
 **angle_tolerance** | **float**| Angle tolerance (in radians; must be &lt; pi/2) | [optional] 
 **chord_tolerance** | **float**| Chord tolerance (in selected units) | [optional] 
 **max_facet_width** | **float**| Maximum facet width (in selected units) | [optional] 
 **min_facet_width** | **float**| Minimum facet width (in selected units - must be &lt;           maximumFacetWidth) | [optional] 
 **mode** | **str**| Type of file: text, binary | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 
 **configuration** | **str**| Configuration string | [optional] 

### Return type

[**file**](file.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_body_details**
> PartStudiosGetBodyDetailsResponse200 get_body_details(wvm_char, did, wvm, eid, link_document_id=link_document_id, configuration=configuration)

Body Details

Get the body details of a Part Studio.  All coordinates are in meters.

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)
configuration = 'configuration_example' # str | Configuration string (optional)

try:
    # Body Details
    api_response = api_instance.get_body_details(wvm_char, did, wvm, eid, link_document_id=link_document_id, configuration=configuration)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->get_body_details: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 
 **configuration** | **str**| Configuration string | [optional] 

### Return type

[**PartStudiosGetBodyDetailsResponse200**](PartStudiosGetBodyDetailsResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_bounding_boxes**
> PartStudiosGetBoundingBoxesResponse200 get_bounding_boxes(wvm_char, did, wvm, eid, include_hidden=include_hidden, include_wire_bodies=include_wire_bodies, link_document_id=link_document_id, configuration=configuration)

Bounding Box

Get the bounding box of a Part Studio, or an empty object if the Part Studio is empty. All                 coordinates are in meters. Sketches are not used in computing the result.

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID
include_hidden = true # bool | Whether or not to include bounding boxes for hidden parts (optional)
include_wire_bodies = true # bool | Whether to include wire bodies in the bounding box           calculation (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)
configuration = 'configuration_example' # str | Configuration string (optional)

try:
    # Bounding Box
    api_response = api_instance.get_bounding_boxes(wvm_char, did, wvm, eid, include_hidden=include_hidden, include_wire_bodies=include_wire_bodies, link_document_id=link_document_id, configuration=configuration)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->get_bounding_boxes: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 
 **include_hidden** | **bool**| Whether or not to include bounding boxes for hidden parts | [optional] 
 **include_wire_bodies** | **bool**| Whether to include wire bodies in the bounding box           calculation | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 
 **configuration** | **str**| Configuration string | [optional] 

### Return type

[**PartStudiosGetBoundingBoxesResponse200**](PartStudiosGetBoundingBoxesResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_bounding_boxes_for_sketch**
> PartStudiosGetBoundingBoxesForSketchResponse200 get_bounding_boxes_for_sketch(wvm_char, did, wvm, eid, sid, link_document_id=link_document_id)

Sketch Bounding Box

Get the bounding box of a sketch. All coordinates are in meters.

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID
sid = 'sid_example' # str | Sketch feature ID
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

try:
    # Sketch Bounding Box
    api_response = api_instance.get_bounding_boxes_for_sketch(wvm_char, did, wvm, eid, sid, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->get_bounding_boxes_for_sketch: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 
 **sid** | **str**| Sketch feature ID | 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 

### Return type

[**PartStudiosGetBoundingBoxesForSketchResponse200**](PartStudiosGetBoundingBoxesForSketchResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_configuration**
> PartStudiosGetConfigurationResponse200 get_configuration(wvm_char, did, wvm, eid)

Get Configuration

Get the configuration definition for a part studio. See the developer portal feature list                 help topic for additional information

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID

try:
    # Get Configuration
    api_response = api_instance.get_configuration(wvm_char, did, wvm, eid)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->get_configuration: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 

### Return type

[**PartStudiosGetConfigurationResponse200**](PartStudiosGetConfigurationResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_edges**
> PartStudiosGetEdgesResponse200 get_edges(wvm_char, did, wvm, eid, angle_tolerance=angle_tolerance, chord_tolerance=chord_tolerance, edge_id=edge_id, part_id=part_id, link_document_id=link_document_id, configuration=configuration)

Tessellated Edges

Get the tessellated edges of the parts in a Part Studio. The accuracy of the tessellation     approximation to exact geometry is controlled by the angleTolerance and chordTolerance parameters. The     tessellation points are computed close enough so that neither the angle tolerance nor the chord tolerance are     exceeded.     All coordinates are in meters.

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID
angle_tolerance = 8.14 # float | Angle tolerance (in radians). This specifies the limit     on the sum of the angular deviations of a tessellation chord from the tangent vectors at two chord endpoints.     The specified value must be less than PI/2. This parameter currently has a default value chosen based on     the complexity of the parts being tessellated. (optional)
chord_tolerance = 8.14 # float | Chord tolerance (in meters). This specifies the limit on     the maximum deviation of a tessellation chord from the true edge. This parameter currently has a default     value chosen based on the size and complexity of the parts being tessellated. (optional)
edge_id = 'edge_id_example' # str | IDs of edges to tessellate (repeat query param to add more than one,     i.e. edgeId=JHK&edgeId=JHD) (optional)
part_id = 'part_id_example' # str | IDs of the parts to tessellate (repeat query param to add more than one,     i.e. partId=JHK&partId=JHD).  May not be combined with edgeId (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)
configuration = 'configuration_example' # str | Configuration string (optional)

try:
    # Tessellated Edges
    api_response = api_instance.get_edges(wvm_char, did, wvm, eid, angle_tolerance=angle_tolerance, chord_tolerance=chord_tolerance, edge_id=edge_id, part_id=part_id, link_document_id=link_document_id, configuration=configuration)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->get_edges: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 
 **angle_tolerance** | **float**| Angle tolerance (in radians). This specifies the limit     on the sum of the angular deviations of a tessellation chord from the tangent vectors at two chord endpoints.     The specified value must be less than PI/2. This parameter currently has a default value chosen based on     the complexity of the parts being tessellated. | [optional] 
 **chord_tolerance** | **float**| Chord tolerance (in meters). This specifies the limit on     the maximum deviation of a tessellation chord from the true edge. This parameter currently has a default     value chosen based on the size and complexity of the parts being tessellated. | [optional] 
 **edge_id** | **str**| IDs of edges to tessellate (repeat query param to add more than one,     i.e. edgeId&#x3D;JHK&amp;edgeId&#x3D;JHD) | [optional] 
 **part_id** | **str**| IDs of the parts to tessellate (repeat query param to add more than one,     i.e. partId&#x3D;JHK&amp;partId&#x3D;JHD).  May not be combined with edgeId | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 
 **configuration** | **str**| Configuration string | [optional] 

### Return type

[**PartStudiosGetEdgesResponse200**](PartStudiosGetEdgesResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_faces**
> PartStudiosGetFacesResponse200 get_faces(wvm_char, did, wvm, eid, angle_tolerance=angle_tolerance, chord_tolerance=chord_tolerance, max_facet_width=max_facet_width, output_vertex_normals=output_vertex_normals, output_facet_normals=output_facet_normals, output_texture_coordinates=output_texture_coordinates, output_index_table=output_index_table, face_id=face_id, part_id=part_id, output_error_faces=output_error_faces, link_document_id=link_document_id, configuration=configuration)

Tessellated Faces

Get the tessellated faces of the parts in a Part Studio. The accuracy of the tessellation                 approximation to exact geometry is controlled by the angleTolerance, chordTolerance and                 maxFacetWidth parameters. The tessellation points are computed close enough so that none of these                 parameters are exceeded. All coordinates are in meters.

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID
angle_tolerance = 8.14 # float | Angle tolerance (in radians). This specifies the limit on the           sum of the angular deviations of a tessellation chord from the tangent vectors at two chord endpoints.           The specified value must be less than PI/2. This parameter currently has a default value chosen based           on the complexity of the parts being tessellated. (optional)
chord_tolerance = 8.14 # float | Chord tolerance (in meters). This specifies the limit on the           maximum deviation of a tessellation chord from the true surface/edge. This parameter currently has a           default value chosen based on the size and complexity of the parts being tessellated. (optional)
max_facet_width = 8.14 # float | Max facet width. This specifies the limit on the size of any side           of a tessellation facet. (optional)
output_vertex_normals = true # bool | If true, output vertex normals corresponding to           surface normals at facet vertex points. (optional)
output_facet_normals = true # bool | Output facet normals (optional)
output_texture_coordinates = true # bool | Output texture coordinates (optional)
output_index_table = true # bool | Output index table (optional)
face_id = 'face_id_example' # str | IDs of the faces to tessellate (repeat query param to add more than one,           i.e. faceId=JHK&faceId=JHD) (optional)
part_id = 'part_id_example' # str | IDs of the parts to tessellate (repeat query param to add more than one,           i.e. partId=JHK&partId=JHD). May not be combined with faceId (optional)
output_error_faces = true # bool | Whether or not to output faces that cause an error (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)
configuration = 'configuration_example' # str | Configuration string (optional)

try:
    # Tessellated Faces
    api_response = api_instance.get_faces(wvm_char, did, wvm, eid, angle_tolerance=angle_tolerance, chord_tolerance=chord_tolerance, max_facet_width=max_facet_width, output_vertex_normals=output_vertex_normals, output_facet_normals=output_facet_normals, output_texture_coordinates=output_texture_coordinates, output_index_table=output_index_table, face_id=face_id, part_id=part_id, output_error_faces=output_error_faces, link_document_id=link_document_id, configuration=configuration)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->get_faces: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 
 **angle_tolerance** | **float**| Angle tolerance (in radians). This specifies the limit on the           sum of the angular deviations of a tessellation chord from the tangent vectors at two chord endpoints.           The specified value must be less than PI/2. This parameter currently has a default value chosen based           on the complexity of the parts being tessellated. | [optional] 
 **chord_tolerance** | **float**| Chord tolerance (in meters). This specifies the limit on the           maximum deviation of a tessellation chord from the true surface/edge. This parameter currently has a           default value chosen based on the size and complexity of the parts being tessellated. | [optional] 
 **max_facet_width** | **float**| Max facet width. This specifies the limit on the size of any side           of a tessellation facet. | [optional] 
 **output_vertex_normals** | **bool**| If true, output vertex normals corresponding to           surface normals at facet vertex points. | [optional] 
 **output_facet_normals** | **bool**| Output facet normals | [optional] 
 **output_texture_coordinates** | **bool**| Output texture coordinates | [optional] 
 **output_index_table** | **bool**| Output index table | [optional] 
 **face_id** | **str**| IDs of the faces to tessellate (repeat query param to add more than one,           i.e. faceId&#x3D;JHK&amp;faceId&#x3D;JHD) | [optional] 
 **part_id** | **str**| IDs of the parts to tessellate (repeat query param to add more than one,           i.e. partId&#x3D;JHK&amp;partId&#x3D;JHD). May not be combined with faceId | [optional] 
 **output_error_faces** | **bool**| Whether or not to output faces that cause an error | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 
 **configuration** | **str**| Configuration string | [optional] 

### Return type

[**PartStudiosGetFacesResponse200**](PartStudiosGetFacesResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_feature_specs**
> PartStudiosGetFeatureSpecsResponse200 get_feature_specs(wvm_char, did, wvm, eid)

Get Feature Specs

Get the definition of the feature specs for a part studio. See the developer                 portal feature list help topic for additional information

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID

try:
    # Get Feature Specs
    api_response = api_instance.get_feature_specs(wvm_char, did, wvm, eid)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->get_feature_specs: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 

### Return type

[**PartStudiosGetFeatureSpecsResponse200**](PartStudiosGetFeatureSpecsResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_features**
> PartStudiosGetFeaturesResponse200 get_features(wvm_char, did, wvm, eid, feature_id=feature_id, no_sketch_geometry=no_sketch_geometry, link_document_id=link_document_id)

Get Feature List

Get the definition of the feature list for a part studio. See the developer portal feature list                 help topic for additional information

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID
feature_id = 'feature_id_example' # str | ID of a feature; repeat query param to add more than one (optional)
no_sketch_geometry = true # bool | Whether or not to output simple sketch info without           geometry (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

try:
    # Get Feature List
    api_response = api_instance.get_features(wvm_char, did, wvm, eid, feature_id=feature_id, no_sketch_geometry=no_sketch_geometry, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->get_features: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 
 **feature_id** | **str**| ID of a feature; repeat query param to add more than one | [optional] 
 **no_sketch_geometry** | **bool**| Whether or not to output simple sketch info without           geometry | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 

### Return type

[**PartStudiosGetFeaturesResponse200**](PartStudiosGetFeaturesResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_mass_properties**
> PartStudiosGetMassPropertiesResponse200 get_mass_properties(wvm_char, did, wvm, eid, part_id=part_id, mass_as_group=mass_as_group, link_document_id=link_document_id, configuration=configuration)

Mass Properties

Get the mass properties of a part studio or parts; parts must have density in order to have mass.                 For properties that come in sets of three, the first set is the calculated value, and the second                 and third are minimum and maximum possible values considering tolerance.

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID
part_id = 'part_id_example' # str | IDs of the parts for which to retrieve mass properties (repeat query           param to add more than one, i.e. partId=JHK&partId=JHD) (optional)
mass_as_group = true # bool | If true, specified parts will be evaluated as a single object           instead of individually (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)
configuration = 'configuration_example' # str | Configuration string (optional)

try:
    # Mass Properties
    api_response = api_instance.get_mass_properties(wvm_char, did, wvm, eid, part_id=part_id, mass_as_group=mass_as_group, link_document_id=link_document_id, configuration=configuration)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->get_mass_properties: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 
 **part_id** | **str**| IDs of the parts for which to retrieve mass properties (repeat query           param to add more than one, i.e. partId&#x3D;JHK&amp;partId&#x3D;JHD) | [optional] 
 **mass_as_group** | **bool**| If true, specified parts will be evaluated as a single object           instead of individually | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 
 **configuration** | **str**| Configuration string | [optional] 

### Return type

[**PartStudiosGetMassPropertiesResponse200**](PartStudiosGetMassPropertiesResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_metadata**
> PartStudiosGetMetadataResponse200 get_metadata(wvm_char, did, wvm, eid, part_ids=part_ids, link_document_id=link_document_id)

Part Metadata

Get metadata for the parts in the part studio

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID
part_ids = 'part_ids_example' # str | Comma-separated list of part IDs for which to get part metadata (omit           to get part metadata for entire part studio) (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

try:
    # Part Metadata
    api_response = api_instance.get_metadata(wvm_char, did, wvm, eid, part_ids=part_ids, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->get_metadata: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 
 **part_ids** | **str**| Comma-separated list of part IDs for which to get part metadata (omit           to get part metadata for entire part studio) | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 

### Return type

[**PartStudiosGetMetadataResponse200**](PartStudiosGetMetadataResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_named_views**
> PartStudiosGetNamedViewsResponse200 get_named_views(did, eid, skip_perspective=skip_perspective)

Get Named Views

Returns a map from view name to view data for the given element

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
eid = 'eid_example' # str | Element ID
skip_perspective = true # bool | Whether views with a perspective projection should be omitted. (optional)

try:
    # Get Named Views
    api_response = api_instance.get_named_views(did, eid, skip_perspective=skip_perspective)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->get_named_views: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **eid** | **str**| Element ID | 
 **skip_perspective** | **bool**| Whether views with a perspective projection should be omitted. | [optional] 

### Return type

[**PartStudiosGetNamedViewsResponse200**](PartStudiosGetNamedViewsResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_shaded_views**
> PartStudiosGetShadedViewsResponse200 get_shaded_views(wvm_char, did, wvm, eid, output_height=output_height, output_width=output_width, pixel_size=pixel_size, edges=edges, show_all_parts=show_all_parts, include_surfaces=include_surfaces, use_anti_aliasing=use_anti_aliasing, view_matrix=view_matrix, link_document_id=link_document_id, configuration=configuration)

Shaded Views

Get a shaded image rendering of a Part Studio

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID
output_height = 8.14 # float | Output image height (in pixels) (optional)
output_width = 8.14 # float | Output image width (in pixels) (optional)
pixel_size = 8.14 # float | Height and width represented by each pixel (in meters). If the           value is 0, the display will be sized to fit the output image dimensions. (optional)
edges = 'edges_example' # str | The treatment to be applied to edges in the display. Options are           show: show visible edges, hide: hide visible edges (optional)
show_all_parts = true # bool | Whether or not all parts should be shown in the element,           regardless of user setting. If false, the visibility setting made by the user will be reflected in the           image. If true, all parts will be shown. (optional)
include_surfaces = true # bool | Whether or not surfaces should be shown in the element.           It is applicable only when showAllParts is true. If false, surfaces will be excluded.           If true, all surfaces will be shown. (optional)
use_anti_aliasing = true # bool | If true, an anti-aliasing factor will be used to smooth           model boundaries in the final image result. If false, the image will be rasterized at the given           resolution. Setting to true can have negative performance implications with respect to rendering time           and memory usage. If a high-resolution image is requested and anti-aliasing is turned on, the server           may not be able to fulfill the request. (optional)
view_matrix = 'view_matrix_example' # str | 12-number view matrix (comma-separated), or one of the following named views: top, bottom, front, back, left, right The 12 entries in the view matrix form three rows and four columns, which is a linear transformation applied to the model itself. The matrix's first three columns maps the coordinate axes of the model to the coordinate axes of the view, and the fourth column translates the origin (in meters). The view coordinates have x pointing right, y pointing up, and z pointing towards the viewer, while a front view of the model has x pointing right, y pointing away from the viewer, and z pointing up. For example, the identity matrix viewMatrix=1,0,0,0,0,1,0,0,0,0,1,0 corresponds to the top view, and viewMatrix=0.612,0.612,0,0,-0.354,0.354,0.707,0,0.707,-0.707,0.707,0 corresponds (approximately) to the isometric view. The first three columns of the view matrix should be orthonormal and have a positive determinant.  If this is not the case, view behavior may be undefined. (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)
configuration = 'configuration_example' # str | Configuration string (optional)

try:
    # Shaded Views
    api_response = api_instance.get_shaded_views(wvm_char, did, wvm, eid, output_height=output_height, output_width=output_width, pixel_size=pixel_size, edges=edges, show_all_parts=show_all_parts, include_surfaces=include_surfaces, use_anti_aliasing=use_anti_aliasing, view_matrix=view_matrix, link_document_id=link_document_id, configuration=configuration)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->get_shaded_views: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 
 **output_height** | **float**| Output image height (in pixels) | [optional] 
 **output_width** | **float**| Output image width (in pixels) | [optional] 
 **pixel_size** | **float**| Height and width represented by each pixel (in meters). If the           value is 0, the display will be sized to fit the output image dimensions. | [optional] 
 **edges** | **str**| The treatment to be applied to edges in the display. Options are           show: show visible edges, hide: hide visible edges | [optional] 
 **show_all_parts** | **bool**| Whether or not all parts should be shown in the element,           regardless of user setting. If false, the visibility setting made by the user will be reflected in the           image. If true, all parts will be shown. | [optional] 
 **include_surfaces** | **bool**| Whether or not surfaces should be shown in the element.           It is applicable only when showAllParts is true. If false, surfaces will be excluded.           If true, all surfaces will be shown. | [optional] 
 **use_anti_aliasing** | **bool**| If true, an anti-aliasing factor will be used to smooth           model boundaries in the final image result. If false, the image will be rasterized at the given           resolution. Setting to true can have negative performance implications with respect to rendering time           and memory usage. If a high-resolution image is requested and anti-aliasing is turned on, the server           may not be able to fulfill the request. | [optional] 
 **view_matrix** | **str**| 12-number view matrix (comma-separated), or one of the following named views: top, bottom, front, back, left, right The 12 entries in the view matrix form three rows and four columns, which is a linear transformation applied to the model itself. The matrix&#39;s first three columns maps the coordinate axes of the model to the coordinate axes of the view, and the fourth column translates the origin (in meters). The view coordinates have x pointing right, y pointing up, and z pointing towards the viewer, while a front view of the model has x pointing right, y pointing away from the viewer, and z pointing up. For example, the identity matrix viewMatrix&#x3D;1,0,0,0,0,1,0,0,0,0,1,0 corresponds to the top view, and viewMatrix&#x3D;0.612,0.612,0,0,-0.354,0.354,0.707,0,0.707,-0.707,0.707,0 corresponds (approximately) to the isometric view. The first three columns of the view matrix should be orthonormal and have a positive determinant.  If this is not the case, view behavior may be undefined. | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 
 **configuration** | **str**| Configuration string | [optional] 

### Return type

[**PartStudiosGetShadedViewsResponse200**](PartStudiosGetShadedViewsResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_sketch_info**
> PartStudiosGetSketchInfoResponse200 get_sketch_info(wvm_char, did, wvm, eid, sketch_id=sketch_id, output3_d=output3_d, curve_points=curve_points, include_geometry=include_geometry, link_document_id=link_document_id)

Sketch Information

Get information for sketches in a part studio

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID
sketch_id = 'sketch_id_example' # str | ID of a sketch feature; repeat query param to add more than one. If no sketchId query     parameter is passed, all sketches in the part studio are returned. (optional)
output3_d = true # bool | Whether or not to output with respect to global 3D coordinate system (optional)
curve_points = true # bool | Whether or not to output start/quarter/mid/end points, start/end tangent vectors, and length of sketch curves (optional)
include_geometry = true # bool | Whether or not to just output simple sketch info without geometry (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

try:
    # Sketch Information
    api_response = api_instance.get_sketch_info(wvm_char, did, wvm, eid, sketch_id=sketch_id, output3_d=output3_d, curve_points=curve_points, include_geometry=include_geometry, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->get_sketch_info: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 
 **sketch_id** | **str**| ID of a sketch feature; repeat query param to add more than one. If no sketchId query     parameter is passed, all sketches in the part studio are returned. | [optional] 
 **output3_d** | **bool**| Whether or not to output with respect to global 3D coordinate system | [optional] 
 **curve_points** | **bool**| Whether or not to output start/quarter/mid/end points, start/end tangent vectors, and length of sketch curves | [optional] 
 **include_geometry** | **bool**| Whether or not to just output simple sketch info without geometry | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 

### Return type

[**PartStudiosGetSketchInfoResponse200**](PartStudiosGetSketchInfoResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_tessellated_entities**
> PartStudiosGetTessellatedEntitiesResponse200 get_tessellated_entities(wvm_char, did, wvm, eid, sid, entity_id=entity_id, angle_tolerance=angle_tolerance, chord_tolerance=chord_tolerance, link_document_id=link_document_id)

Tessellated sketch entitites

Get the tessellations of the sketch entities of a sketch in a part studio. The accuracy of the                 tessellation to exact geometry is controlled by the angleTolerance and chordTolerance parameters.                 The tessellation points are computed close enough so that neither the angle tolerance nor the                 chord tolerance are exceeded. For most parts, the angular tolerance is the most restrictive of                 the two default tolerances.

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID
sid = 'sid_example' # str | Sketch feature ID
entity_id = 'entity_id_example' # str | Sketch entity id to be tessellated. All entities in the sketch are           tessellated if none are provided. (optional)
angle_tolerance = 8.14 # float | Angle tolerance (in radians). This specifies the limit on the           sum of the angular deviations of a tessellation chord from the tangent vectors at two chord endpoints.           The specified value must be less than PI/2. This parameter currently has a default value of 0.087267           radians, but is subject to change. (optional)
chord_tolerance = 8.14 # float | Chord tolerance (in meters). This specifies the limit on the           maximum deviation of a tessellation chord from the true curve. This parameter currently has a default           value of 0.02 meters, but is subject to change. (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

try:
    # Tessellated sketch entitites
    api_response = api_instance.get_tessellated_entities(wvm_char, did, wvm, eid, sid, entity_id=entity_id, angle_tolerance=angle_tolerance, chord_tolerance=chord_tolerance, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->get_tessellated_entities: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 
 **sid** | **str**| Sketch feature ID | 
 **entity_id** | **str**| Sketch entity id to be tessellated. All entities in the sketch are           tessellated if none are provided. | [optional] 
 **angle_tolerance** | **float**| Angle tolerance (in radians). This specifies the limit on the           sum of the angular deviations of a tessellation chord from the tangent vectors at two chord endpoints.           The specified value must be less than PI/2. This parameter currently has a default value of 0.087267           radians, but is subject to change. | [optional] 
 **chord_tolerance** | **float**| Chord tolerance (in meters). This specifies the limit on the           maximum deviation of a tessellation chord from the true curve. This parameter currently has a default           value of 0.02 meters, but is subject to change. | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 

### Return type

[**PartStudiosGetTessellatedEntitiesResponse200**](PartStudiosGetTessellatedEntitiesResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_translation_formats**
> PartStudiosGetTranslationFormatsResponse200 get_translation_formats(did, wid, eid, check_content=check_content)

Get Translation Formats

Returns a list of the available formats to which this Part Studio can be translated

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
eid = 'eid_example' # str | Element ID
check_content = true # bool | Whether the current content or lack thereof should be        considered when determining the available formats. Empty part studios cannot be translated into any format. (optional)

try:
    # Get Translation Formats
    api_response = api_instance.get_translation_formats(did, wid, eid, check_content=check_content)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->get_translation_formats: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **eid** | **str**| Element ID | 
 **check_content** | **bool**| Whether the current content or lack thereof should be        considered when determining the available formats. Empty part studios cannot be translated into any format. | [optional] 

### Return type

[**PartStudiosGetTranslationFormatsResponse200**](PartStudiosGetTranslationFormatsResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **id_translations**
> PartStudiosIdTranslationsResponse200 id_translations(wvm_char, did, wvm, eid, body=body)

Id Translations

Translate a list of part, face, etc ids defined in a specific microversion of a document to a                 corresponding list of ids in the current microversion of a workspace of the document or other                 specific version/microversion. This will also allow converting between configurations, although a                 particular ID might not have an equivalent in another configuration.

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID
body = onshape_client.PartStudiosIdTranslationsBody() # PartStudiosIdTranslationsBody | The JSON request body. (optional)

try:
    # Id Translations
    api_response = api_instance.id_translations(wvm_char, did, wvm, eid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->id_translations: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 
 **body** | [**PartStudiosIdTranslationsBody**](PartStudiosIdTranslationsBody.md)| The JSON request body. | [optional] 

### Return type

[**PartStudiosIdTranslationsResponse200**](PartStudiosIdTranslationsResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_configuration**
> PartStudiosUpdateConfigurationResponse200 update_configuration(did, wid, eid, body=body)

Update Configuration

Update the configuration for a part studio. See the developer portal feature list                 help topic for additional information

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
eid = 'eid_example' # str | Element ID
body = onshape_client.PartStudiosUpdateConfigurationBody() # PartStudiosUpdateConfigurationBody | The JSON request body. (optional)

try:
    # Update Configuration
    api_response = api_instance.update_configuration(did, wid, eid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->update_configuration: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **eid** | **str**| Element ID | 
 **body** | [**PartStudiosUpdateConfigurationBody**](PartStudiosUpdateConfigurationBody.md)| The JSON request body. | [optional] 

### Return type

[**PartStudiosUpdateConfigurationResponse200**](PartStudiosUpdateConfigurationResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_feature**
> PartStudiosUpdateFeatureResponse200 update_feature(fid, did, wid, eid, body=body)

Update Feature

Update an existing feature in the feature list for a part studio. See the developer portal                 feature list help topic for additional information

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
fid = 'fid_example' # str | The id of the feature being updated.  This id should be URL encoded and must   match the featureId found in the serialized structure
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
eid = 'eid_example' # str | Element ID
body = onshape_client.PartStudiosUpdateFeatureBody() # PartStudiosUpdateFeatureBody | The JSON request body. (optional)

try:
    # Update Feature
    api_response = api_instance.update_feature(fid, did, wid, eid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->update_feature: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **fid** | **str**| The id of the feature being updated.  This id should be URL encoded and must   match the featureId found in the serialized structure | 
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **eid** | **str**| Element ID | 
 **body** | [**PartStudiosUpdateFeatureBody**](PartStudiosUpdateFeatureBody.md)| The JSON request body. | [optional] 

### Return type

[**PartStudiosUpdateFeatureResponse200**](PartStudiosUpdateFeatureResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_features**
> PartStudiosUpdateFeaturesResponse200 update_features(did, wid, eid, body=body)

Update Features

Update parameters of existing features in the feature list for a part studio. Multiple features                 may be updated simultaneously with a single call, allowing for faster regeneration. Only the                 parameters that are present in the passed features are updated. Existing parameters that are                 not included in the passed feature are left untouched. In addition, if the field                 updateSuppressionAttributes is set to true, the suppress and suppressionState values for the                 updated features are set from the passed feature objects. See the developer portal feature list                 help topic for additional information

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
eid = 'eid_example' # str | Element ID
body = onshape_client.PartStudiosUpdateFeaturesBody() # PartStudiosUpdateFeaturesBody | The JSON request body. (optional)

try:
    # Update Features
    api_response = api_instance.update_features(did, wid, eid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->update_features: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **eid** | **str**| Element ID | 
 **body** | [**PartStudiosUpdateFeaturesBody**](PartStudiosUpdateFeaturesBody.md)| The JSON request body. | [optional] 

### Return type

[**PartStudiosUpdateFeaturesResponse200**](PartStudiosUpdateFeaturesResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_rollback**
> PartStudiosUpdateRollbackResponse200 update_rollback(did, wid, eid, body=body)

Update Feature Rollback

Move the rollback bar in the feature list for a part studio. See the developer portal                 feature list help topic for additional information

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.PartStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
eid = 'eid_example' # str | Element ID
body = onshape_client.PartStudiosUpdateRollbackBody() # PartStudiosUpdateRollbackBody | The JSON request body. (optional)

try:
    # Update Feature Rollback
    api_response = api_instance.update_rollback(did, wid, eid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartStudiosApi->update_rollback: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **eid** | **str**| Element ID | 
 **body** | [**PartStudiosUpdateRollbackBody**](PartStudiosUpdateRollbackBody.md)| The JSON request body. | [optional] 

### Return type

[**PartStudiosUpdateRollbackResponse200**](PartStudiosUpdateRollbackResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

