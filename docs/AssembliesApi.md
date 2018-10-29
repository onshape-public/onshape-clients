# onshape_client.AssembliesApi

All URIs are relative to *https://cad.onshape.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_feature**](AssembliesApi.md#add_feature) | **POST** /assemblies/d/{did}/w/{wid}/e/{eid}/features | Add Feature
[**create_assembly**](AssembliesApi.md#create_assembly) | **POST** /assemblies/d/{did}/w/{wid} | Create Assembly
[**create_instance**](AssembliesApi.md#create_instance) | **POST** /assemblies/d/{did}/w/{wid}/e/{eid}/instances | Create assembly instance
[**create_translation**](AssembliesApi.md#create_translation) | **POST** /assemblies/d/{did}/{wv_char}/{wv}/e/{eid}/translations | Create Assembly translation
[**delete_feature**](AssembliesApi.md#delete_feature) | **DELETE** /assemblies/d/{did}/w/{wid}/e/{eid}/features/featureid/{fid} | Delete Feature
[**delete_instance**](AssembliesApi.md#delete_instance) | **DELETE** /assemblies/d/{did}/w/{wid}/e/{eid}/instance/nodeid/{nid} | Delete assembly instance
[**get_assembly_definition**](AssembliesApi.md#get_assembly_definition) | **GET** /assemblies/d/{did}/{wvm_char}/{wvm}/e/{eid} | Assembly Definition
[**get_bill_of_materials**](AssembliesApi.md#get_bill_of_materials) | **GET** /assemblies/d/{did}/{wvm_char}/{wvm}/e/{eid}/bom | Get Bill of Materials
[**get_bounding_boxes**](AssembliesApi.md#get_bounding_boxes) | **GET** /assemblies/d/{did}/{wvm_char}/{wvm}/e/{eid}/boundingboxes | Bounding Boxes
[**get_feature_specs**](AssembliesApi.md#get_feature_specs) | **GET** /assemblies/d/{did}/{wvm_char}/{wvm}/e/{eid}/featurespecs | Get Feature Specs
[**get_features**](AssembliesApi.md#get_features) | **GET** /assemblies/d/{did}/{wvm_char}/{wvm}/e/{eid}/features | Get Feature List
[**get_named_views**](AssembliesApi.md#get_named_views) | **GET** /assemblies/d/{did}/e/{eid}/namedViews | Get Named Views
[**get_or_create_bill_of_materials_element**](AssembliesApi.md#get_or_create_bill_of_materials_element) | **POST** /assemblies/d/{did}/w/{wid}/e/{eid}/bomelement | Get or Create Bill of Materials Element
[**get_shaded_views**](AssembliesApi.md#get_shaded_views) | **GET** /assemblies/d/{did}/{wvm_char}/{wvm}/e/{eid}/shadedviews | Shaded Views
[**get_translation_formats**](AssembliesApi.md#get_translation_formats) | **GET** /assemblies/d/{did}/w/{wid}/e/{eid}/translationformats | Get Translation Formats
[**insert_transformed_instances**](AssembliesApi.md#insert_transformed_instances) | **POST** /assemblies/d/{did}/w/{wid}/e/{eid}/transformedinstances | Create and transform assembly instances
[**transform_occurrences**](AssembliesApi.md#transform_occurrences) | **POST** /assemblies/d/{did}/w/{wid}/e/{eid}/occurrencetransforms | Transform assembly occurrences
[**update_feature**](AssembliesApi.md#update_feature) | **POST** /assemblies/d/{did}/w/{wid}/e/{eid}/features/featureid/{fid} | Update Feature


# **add_feature**
> AssembliesAddFeatureResponse200 add_feature(did, wid, eid, body=body)

Add Feature

Add a feature to the feature list for an assembly

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
api_instance = onshape_client.AssembliesApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
eid = 'eid_example' # str | Element ID
body = onshape_client.AssembliesAddFeatureBody() # AssembliesAddFeatureBody | The JSON request body. (optional)

try:
    # Add Feature
    api_response = api_instance.add_feature(did, wid, eid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AssembliesApi->add_feature: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **eid** | **str**| Element ID | 
 **body** | [**AssembliesAddFeatureBody**](AssembliesAddFeatureBody.md)| The JSON request body. | [optional] 

### Return type

[**AssembliesAddFeatureResponse200**](AssembliesAddFeatureResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_assembly**
> AssembliesCreateAssemblyResponse200 create_assembly(did, wid, body=body)

Create Assembly

Create an new assembly tab in the document.

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
api_instance = onshape_client.AssembliesApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
body = onshape_client.AssembliesCreateAssemblyBody() # AssembliesCreateAssemblyBody | The JSON request body. (optional)

try:
    # Create Assembly
    api_response = api_instance.create_assembly(did, wid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AssembliesApi->create_assembly: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **body** | [**AssembliesCreateAssemblyBody**](AssembliesCreateAssemblyBody.md)| The JSON request body. | [optional] 

### Return type

[**AssembliesCreateAssemblyResponse200**](AssembliesCreateAssemblyResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_instance**
> create_instance(did, wid, eid, body=body)

Create assembly instance

Create an instance of a part, part studio or assembly into an existing assembly element. If                 instanceDefinition.isAssembly == true, isWholePartStudio and partId are ignored. If                 instanceDefinition.isWholePartStudio == true, partId is ignored If both are false, partId must                 point to a valid part.

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
api_instance = onshape_client.AssembliesApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
eid = 'eid_example' # str | Element ID
body = onshape_client.AssembliesCreateInstanceBody() # AssembliesCreateInstanceBody | The JSON request body. (optional)

try:
    # Create assembly instance
    api_instance.create_instance(did, wid, eid, body=body)
except ApiException as e:
    print("Exception when calling AssembliesApi->create_instance: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **eid** | **str**| Element ID | 
 **body** | [**AssembliesCreateInstanceBody**](AssembliesCreateInstanceBody.md)| The JSON request body. | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_translation**
> AssembliesCreateTranslationResponse200 create_translation(wv_char, did, wv, eid, body=body)

Create Assembly translation

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
api_instance = onshape_client.AssembliesApi(onshape_client.ApiClient(configuration))
wv_char = 'wv_char_example' # str | One of w or v corresponding to whether a workspace or version was entered.
did = 'did_example' # str | Document ID
wv = 'wv_example' # str | Workspace (w) or Version (v) ID
eid = 'eid_example' # str | Element ID
body = onshape_client.AssembliesCreateTranslationBody() # AssembliesCreateTranslationBody | The JSON request body. (optional)

try:
    # Create Assembly translation
    api_response = api_instance.create_translation(wv_char, did, wv, eid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AssembliesApi->create_translation: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wv_char** | **str**| One of w or v corresponding to whether a workspace or version was entered. | 
 **did** | **str**| Document ID | 
 **wv** | **str**| Workspace (w) or Version (v) ID | 
 **eid** | **str**| Element ID | 
 **body** | [**AssembliesCreateTranslationBody**](AssembliesCreateTranslationBody.md)| The JSON request body. | [optional] 

### Return type

[**AssembliesCreateTranslationResponse200**](AssembliesCreateTranslationResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_feature**
> AssembliesDeleteFeatureResponse200 delete_feature(fid, did, wid, eid)

Delete Feature

Delete an existing feature in the feature list for an assembly

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
api_instance = onshape_client.AssembliesApi(onshape_client.ApiClient(configuration))
fid = 'fid_example' # str | The id of the feature being updated.  This id should be URL encoded
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
eid = 'eid_example' # str | Element ID

try:
    # Delete Feature
    api_response = api_instance.delete_feature(fid, did, wid, eid)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AssembliesApi->delete_feature: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **fid** | **str**| The id of the feature being updated.  This id should be URL encoded | 
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **eid** | **str**| Element ID | 

### Return type

[**AssembliesDeleteFeatureResponse200**](AssembliesDeleteFeatureResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_instance**
> delete_instance(nid, did, wid, eid)

Delete assembly instance

Delete an assembly instance.

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
api_instance = onshape_client.AssembliesApi(onshape_client.ApiClient(configuration))
nid = 'nid_example' # str | The node id of the instance to be deleted
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
eid = 'eid_example' # str | Element ID

try:
    # Delete assembly instance
    api_instance.delete_instance(nid, did, wid, eid)
except ApiException as e:
    print("Exception when calling AssembliesApi->delete_instance: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **nid** | **str**| The node id of the instance to be deleted | 
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **eid** | **str**| Element ID | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_assembly_definition**
> AssembliesGetAssemblyDefinitionResponse200 get_assembly_definition(wvm_char, did, wvm, eid, include_mate_features=include_mate_features, include_non_solids=include_non_solids, include_mate_connectors=include_mate_connectors, link_document_id=link_document_id)

Assembly Definition

Get information about an Assembly. All coordinates and translation matrix components are in                 meters.

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
api_instance = onshape_client.AssembliesApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID
include_mate_features = true # bool | Whether or not to include mate features in response           (adds a \"features\" array to response) (optional)
include_non_solids = true # bool | Whether or not to include non-assembly           occurrences/instances that are not parts, such as surfaces and sketches. When omitted or set to false,           surfaces and sketches are omitted from the output, as though they are not part of the assembly           definition. (optional)
include_mate_connectors = true # bool | Whether or not to include mate connectors of           assembly and parts when includeMateFeatures is also true (adds a \"mateConnectors\" array in each part           and includes mate connectors in assembly \"features\" array). (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

try:
    # Assembly Definition
    api_response = api_instance.get_assembly_definition(wvm_char, did, wvm, eid, include_mate_features=include_mate_features, include_non_solids=include_non_solids, include_mate_connectors=include_mate_connectors, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AssembliesApi->get_assembly_definition: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 
 **include_mate_features** | **bool**| Whether or not to include mate features in response           (adds a \&quot;features\&quot; array to response) | [optional] 
 **include_non_solids** | **bool**| Whether or not to include non-assembly           occurrences/instances that are not parts, such as surfaces and sketches. When omitted or set to false,           surfaces and sketches are omitted from the output, as though they are not part of the assembly           definition. | [optional] 
 **include_mate_connectors** | **bool**| Whether or not to include mate connectors of           assembly and parts when includeMateFeatures is also true (adds a \&quot;mateConnectors\&quot; array in each part           and includes mate connectors in assembly \&quot;features\&quot; array). | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 

### Return type

[**AssembliesGetAssemblyDefinitionResponse200**](AssembliesGetAssemblyDefinitionResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_bill_of_materials**
> AssembliesGetBillOfMaterialsResponse200 get_bill_of_materials(wvm_char, did, wvm, eid, metadata_workspace_id=metadata_workspace_id, bom_column_ids=bom_column_ids, indented=indented, multi_level=multi_level, generate_if_absent=generate_if_absent)

Get Bill of Materials

Get content of the bill of materials in json format matching the Onshape BOM Standard for the                 specified assembly

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
api_instance = onshape_client.AssembliesApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID
metadata_workspace_id = 'metadata_workspace_id_example' # str | if m is specified for [wvm] this workspaceId is required           and is used to retrieve metadata, otherwise it is ignored. (optional)
bom_column_ids = 'bom_column_ids_example' # str | Ids of the columns to include, or empty if all. BOM column ids           correspond to the ids of metadata properties retrieved from BTRestMetadataSchema, with the exception of           billOfMaterialsItemNo and billOfMaterialsQuantity which identify the Item Number and Quantity columns           respectively (optional)
indented = true # bool | If true will return an indented bom, otherwise a parts list will be           returned (optional)
multi_level = true # bool | Will return a multilevel bom if true, otherwise returns a top level           bom. Ignored if indented is false. (optional)
generate_if_absent = true # bool | If this is false and the BOM does not exist for the Assembly           a 404 status code will be returned. Otherwise, the contents will be generated and returned, without           creating the BOM element. (optional)

try:
    # Get Bill of Materials
    api_response = api_instance.get_bill_of_materials(wvm_char, did, wvm, eid, metadata_workspace_id=metadata_workspace_id, bom_column_ids=bom_column_ids, indented=indented, multi_level=multi_level, generate_if_absent=generate_if_absent)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AssembliesApi->get_bill_of_materials: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 
 **metadata_workspace_id** | **str**| if m is specified for [wvm] this workspaceId is required           and is used to retrieve metadata, otherwise it is ignored. | [optional] 
 **bom_column_ids** | **str**| Ids of the columns to include, or empty if all. BOM column ids           correspond to the ids of metadata properties retrieved from BTRestMetadataSchema, with the exception of           billOfMaterialsItemNo and billOfMaterialsQuantity which identify the Item Number and Quantity columns           respectively | [optional] 
 **indented** | **bool**| If true will return an indented bom, otherwise a parts list will be           returned | [optional] 
 **multi_level** | **bool**| Will return a multilevel bom if true, otherwise returns a top level           bom. Ignored if indented is false. | [optional] 
 **generate_if_absent** | **bool**| If this is false and the BOM does not exist for the Assembly           a 404 status code will be returned. Otherwise, the contents will be generated and returned, without           creating the BOM element. | [optional] 

### Return type

[**AssembliesGetBillOfMaterialsResponse200**](AssembliesGetBillOfMaterialsResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_bounding_boxes**
> AssembliesGetBoundingBoxesResponse200 get_bounding_boxes(wvm_char, did, wvm, eid, element_microversion_id=element_microversion_id, include_hidden=include_hidden, link_document_id=link_document_id)

Bounding Boxes

Get the bounding box of an Assembly, or an empty object if the Assembly is empty.  All coordinates are in meters.

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
api_instance = onshape_client.AssembliesApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID
element_microversion_id = 'element_microversion_id_example' # str | Element microversion ID (optional)
include_hidden = 'include_hidden_example' # str | Include hidden instances in bounding box computation (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

try:
    # Bounding Boxes
    api_response = api_instance.get_bounding_boxes(wvm_char, did, wvm, eid, element_microversion_id=element_microversion_id, include_hidden=include_hidden, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AssembliesApi->get_bounding_boxes: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 
 **element_microversion_id** | **str**| Element microversion ID | [optional] 
 **include_hidden** | **str**| Include hidden instances in bounding box computation | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 

### Return type

[**AssembliesGetBoundingBoxesResponse200**](AssembliesGetBoundingBoxesResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_feature_specs**
> AssembliesGetFeatureSpecsResponse200 get_feature_specs(wvm_char, did, wvm, eid)

Get Feature Specs

Get the definition of the feature specs for an assembly

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
api_instance = onshape_client.AssembliesApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID

try:
    # Get Feature Specs
    api_response = api_instance.get_feature_specs(wvm_char, did, wvm, eid)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AssembliesApi->get_feature_specs: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 

### Return type

[**AssembliesGetFeatureSpecsResponse200**](AssembliesGetFeatureSpecsResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_features**
> AssembliesGetFeaturesResponse200 get_features(wvm_char, did, wvm, eid, feature_id=feature_id, link_document_id=link_document_id)

Get Feature List

Get the definition of the feature list for an assembly

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
api_instance = onshape_client.AssembliesApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID
feature_id = 'feature_id_example' # str | ID of a feature; repeat query param to add more than one (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

try:
    # Get Feature List
    api_response = api_instance.get_features(wvm_char, did, wvm, eid, feature_id=feature_id, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AssembliesApi->get_features: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 
 **feature_id** | **str**| ID of a feature; repeat query param to add more than one | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 

### Return type

[**AssembliesGetFeaturesResponse200**](AssembliesGetFeaturesResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_named_views**
> AssembliesGetNamedViewsResponse200 get_named_views(did, eid, skip_perspective=skip_perspective)

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
api_instance = onshape_client.AssembliesApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
eid = 'eid_example' # str | Element ID
skip_perspective = true # bool | Whether views with a perspective projection should be omitted. (optional)

try:
    # Get Named Views
    api_response = api_instance.get_named_views(did, eid, skip_perspective=skip_perspective)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AssembliesApi->get_named_views: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **eid** | **str**| Element ID | 
 **skip_perspective** | **bool**| Whether views with a perspective projection should be omitted. | [optional] 

### Return type

[**AssembliesGetNamedViewsResponse200**](AssembliesGetNamedViewsResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_or_create_bill_of_materials_element**
> AssembliesGetOrCreateBillOfMaterialsElementResponse200 get_or_create_bill_of_materials_element(did, wid, eid)

Get or Create Bill of Materials Element

Create and retrieve a Bill Of Materials element for the specified assembly. If the Bill Of                 Materials already exists the existing element will be returned

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
api_instance = onshape_client.AssembliesApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
eid = 'eid_example' # str | Element ID

try:
    # Get or Create Bill of Materials Element
    api_response = api_instance.get_or_create_bill_of_materials_element(did, wid, eid)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AssembliesApi->get_or_create_bill_of_materials_element: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **eid** | **str**| Element ID | 

### Return type

[**AssembliesGetOrCreateBillOfMaterialsElementResponse200**](AssembliesGetOrCreateBillOfMaterialsElementResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_shaded_views**
> AssembliesGetShadedViewsResponse200 get_shaded_views(wvm_char, did, wvm, eid, output_height=output_height, output_width=output_width, pixel_size=pixel_size, edges=edges, show_all_parts=show_all_parts, include_surfaces=include_surfaces, use_anti_aliasing=use_anti_aliasing, view_matrix=view_matrix, link_document_id=link_document_id)

Shaded Views

Get a shaded image rendering of an Assembly

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
api_instance = onshape_client.AssembliesApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID
output_height = 8.14 # float | Output image height (in pixels) (optional)
output_width = 8.14 # float | Output image width (in pixels) (optional)
pixel_size = 8.14 # float | Height and width represented by each pixel (in meters). If the           value is 0, the display will be sized to fit the output image dimensions. (optional)
edges = 'edges_example' # str | The treatment to be applied to edges in the display. Options are           show: show visible edges, hide: hide visible edges (optional)
show_all_parts = true # bool | Whether or not all parts should be shown in the element,           regardless of user setting. If false, the visibility setting made by the user will be reflected in the           image. If true, all parts will be shown. (optional)
include_surfaces = true # bool | Whether or not surfaces should be shown in the element.           If false, surfaces will be excluded. If true, all surfaces will be shown. (optional)
use_anti_aliasing = true # bool | If true, an anti-aliasing factor will be used to smooth           model boundaries in the final image result. If false, the image will be rasterized at the given           resolution. Setting to true can have negative performance implications with respect to rendering time           and memory usage. If a high-resolution image is requested and anti-aliasing is turned on, the server           may not be able to fulfill the request. (optional)
view_matrix = 'view_matrix_example' # str | 12-number view matrix (comma-separated), or one of the following named views: top, bottom, front, back, left, right The 12 entries in the view matrix form three rows and four columns, which is a linear transformation applied to the model itself. The matrix's first three columns maps the coordinate axes of the model to the coordinate axes of the view, and the fourth column translates the origin (in meters). The view coordinates have x pointing right, y pointing up, and z pointing towards the viewer, while a front view of the model has x pointing right, y pointing away from the viewer, and z pointing up. For example, the identity matrix viewMatrix=1,0,0,0,0,1,0,0,0,0,1,0 corresponds to the top view, and viewMatrix=0.612,0.612,0,0,-0.354,0.354,0.707,0,0.707,-0.707,0.707,0 corresponds (approximately) to the isometric view. The first three columns of the view matrix should be orthonormal and have a positive determinant.  If this is not the case, view behavior may be undefined. (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

try:
    # Shaded Views
    api_response = api_instance.get_shaded_views(wvm_char, did, wvm, eid, output_height=output_height, output_width=output_width, pixel_size=pixel_size, edges=edges, show_all_parts=show_all_parts, include_surfaces=include_surfaces, use_anti_aliasing=use_anti_aliasing, view_matrix=view_matrix, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AssembliesApi->get_shaded_views: %s\n" % e)
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
 **include_surfaces** | **bool**| Whether or not surfaces should be shown in the element.           If false, surfaces will be excluded. If true, all surfaces will be shown. | [optional] 
 **use_anti_aliasing** | **bool**| If true, an anti-aliasing factor will be used to smooth           model boundaries in the final image result. If false, the image will be rasterized at the given           resolution. Setting to true can have negative performance implications with respect to rendering time           and memory usage. If a high-resolution image is requested and anti-aliasing is turned on, the server           may not be able to fulfill the request. | [optional] 
 **view_matrix** | **str**| 12-number view matrix (comma-separated), or one of the following named views: top, bottom, front, back, left, right The 12 entries in the view matrix form three rows and four columns, which is a linear transformation applied to the model itself. The matrix&#39;s first three columns maps the coordinate axes of the model to the coordinate axes of the view, and the fourth column translates the origin (in meters). The view coordinates have x pointing right, y pointing up, and z pointing towards the viewer, while a front view of the model has x pointing right, y pointing away from the viewer, and z pointing up. For example, the identity matrix viewMatrix&#x3D;1,0,0,0,0,1,0,0,0,0,1,0 corresponds to the top view, and viewMatrix&#x3D;0.612,0.612,0,0,-0.354,0.354,0.707,0,0.707,-0.707,0.707,0 corresponds (approximately) to the isometric view. The first three columns of the view matrix should be orthonormal and have a positive determinant.  If this is not the case, view behavior may be undefined. | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 

### Return type

[**AssembliesGetShadedViewsResponse200**](AssembliesGetShadedViewsResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_translation_formats**
> AssembliesGetTranslationFormatsResponse200 get_translation_formats(did, wid, eid, check_content=check_content)

Get Translation Formats

Returns a list of the available formats to which this Assembly can be translated.

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
api_instance = onshape_client.AssembliesApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
eid = 'eid_example' # str | Element ID
check_content = true # bool | Whether the current content or lack thereof should be        considered when determining the available formats. Empty assemblies cannot be translated into any format. (optional)

try:
    # Get Translation Formats
    api_response = api_instance.get_translation_formats(did, wid, eid, check_content=check_content)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AssembliesApi->get_translation_formats: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **eid** | **str**| Element ID | 
 **check_content** | **bool**| Whether the current content or lack thereof should be        considered when determining the available formats. Empty assemblies cannot be translated into any format. | [optional] 

### Return type

[**AssembliesGetTranslationFormatsResponse200**](AssembliesGetTranslationFormatsResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **insert_transformed_instances**
> insert_transformed_instances(did, wid, eid, body=body)

Create and transform assembly instances

Insert a list of instances, each with a transform.

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
api_instance = onshape_client.AssembliesApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
eid = 'eid_example' # str | Element ID
body = onshape_client.AssembliesInsertTransformedInstancesBody() # AssembliesInsertTransformedInstancesBody | The JSON request body. (optional)

try:
    # Create and transform assembly instances
    api_instance.insert_transformed_instances(did, wid, eid, body=body)
except ApiException as e:
    print("Exception when calling AssembliesApi->insert_transformed_instances: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **eid** | **str**| Element ID | 
 **body** | [**AssembliesInsertTransformedInstancesBody**](AssembliesInsertTransformedInstancesBody.md)| The JSON request body. | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **transform_occurrences**
> transform_occurrences(did, wid, eid, body=body)

Transform assembly occurrences

Transform a list of assembly occurrences.

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
api_instance = onshape_client.AssembliesApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
eid = 'eid_example' # str | Element ID
body = onshape_client.AssembliesTransformOccurrencesBody() # AssembliesTransformOccurrencesBody | The JSON request body. (optional)

try:
    # Transform assembly occurrences
    api_instance.transform_occurrences(did, wid, eid, body=body)
except ApiException as e:
    print("Exception when calling AssembliesApi->transform_occurrences: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **eid** | **str**| Element ID | 
 **body** | [**AssembliesTransformOccurrencesBody**](AssembliesTransformOccurrencesBody.md)| The JSON request body. | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_feature**
> AssembliesUpdateFeatureResponse200 update_feature(fid, did, wid, eid, body=body)

Update Feature

Update an existing feature in the feature list for an assembly

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
api_instance = onshape_client.AssembliesApi(onshape_client.ApiClient(configuration))
fid = 'fid_example' # str | The id of the feature being updated.  This id should be URL encoded and must   match the featureId found in the serialized structure
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
eid = 'eid_example' # str | Element ID
body = onshape_client.AssembliesUpdateFeatureBody() # AssembliesUpdateFeatureBody | The JSON request body. (optional)

try:
    # Update Feature
    api_response = api_instance.update_feature(fid, did, wid, eid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AssembliesApi->update_feature: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **fid** | **str**| The id of the feature being updated.  This id should be URL encoded and must   match the featureId found in the serialized structure | 
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **eid** | **str**| Element ID | 
 **body** | [**AssembliesUpdateFeatureBody**](AssembliesUpdateFeatureBody.md)| The JSON request body. | [optional] 

### Return type

[**AssembliesUpdateFeatureResponse200**](AssembliesUpdateFeatureResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

