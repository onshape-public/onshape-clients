# onshape_client.oas.AssembliesApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_feature**](AssembliesApi.md#add_feature) | **POST** /api/assemblies/d/{did}/{wvm}/{wvmid}/e/{eid}/features | Add Feature
[**create_assembly**](AssembliesApi.md#create_assembly) | **POST** /api/assemblies/d/{did}/w/{wid} | Create Assembly
[**create_instance**](AssembliesApi.md#create_instance) | **POST** /api/assemblies/d/{did}/w/{wid}/e/{eid}/instances | Create assembly instance
[**delete_feature**](AssembliesApi.md#delete_feature) | **DELETE** /api/assemblies/d/{did}/w/{wid}/e/{eid}/features/featureid/{fid} | Delete Feature
[**delete_instance**](AssembliesApi.md#delete_instance) | **DELETE** /api/assemblies/d/{did}/w/{wid}/e/{eid}/instance/nodeid/{nid} | Delete assembly instance.
[**get_assembly_definition**](AssembliesApi.md#get_assembly_definition) | **GET** /api/assemblies/d/{did}/{wvm}/{wvmid}/e/{eid} | Assembly Definition.
[**get_bill_of_materials**](AssembliesApi.md#get_bill_of_materials) | **GET** /api/assemblies/d/{did}/{wvm}/{wvmid}/e/{eid}/bom | Get Bill of Materials
[**get_bounding_boxes**](AssembliesApi.md#get_bounding_boxes) | **GET** /api/assemblies/d/{did}/{wvm}/{wvmid}/e/{eid}/boundingboxes | Bounding Boxes.
[**get_feature_specs**](AssembliesApi.md#get_feature_specs) | **GET** /api/assemblies/d/{did}/{wvm}/{wvmid}/e/{eid}/featurespecs | Get Feature Specs
[**get_features**](AssembliesApi.md#get_features) | **GET** /api/assemblies/d/{did}/{wvm}/{wvmid}/e/{eid}/features | Get Feature List
[**get_named_views**](AssembliesApi.md#get_named_views) | **GET** /api/assemblies/d/{did}/e/{eid}/namedViews | Get Named Views
[**get_or_create_bill_of_materials_element**](AssembliesApi.md#get_or_create_bill_of_materials_element) | **POST** /api/assemblies/d/{did}/w/{wid}/e/{eid}/bomelement | Get or Create Bill of Materials Element
[**get_shaded_views**](AssembliesApi.md#get_shaded_views) | **GET** /api/assemblies/d/{did}/{wvm}/{wvmid}/e/{eid}/shadedviews | Shaded Views.
[**get_translator_formats**](AssembliesApi.md#get_translator_formats) | **GET** /api/assemblies/d/{did}/w/{wid}/e/{eid}/translationformats | Get Translation Formats
[**insert_transformed_instances**](AssembliesApi.md#insert_transformed_instances) | **POST** /api/assemblies/d/{did}/w/{wid}/e/{eid}/transformedinstances | Create and transform assembly instances
[**transform_occurrences**](AssembliesApi.md#transform_occurrences) | **POST** /api/assemblies/d/{did}/w/{wid}/e/{eid}/occurrencetransforms | Transform assembly occurrences.
[**translate_format**](AssembliesApi.md#translate_format) | **POST** /api/assemblies/d/{did}/{wv}/{wvid}/e/{eid}/translations | Create Assembly translation.
[**update_feature**](AssembliesApi.md#update_feature) | **POST** /api/assemblies/d/{did}/w/{wid}/e/{eid}/features/featureid/{fid} | Update Feature


# **add_feature**
> BTFeatureDefinitionResponse1617 add_feature(did, wvm, wvmid, eid, body=body)

Add Feature

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from onshape_client.oas.rest import ApiException
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = onshape_client.oas.AssembliesApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wvm = 'wvm_example' # str | 
wvmid = 'wvmid_example' # str | 
eid = 'eid_example' # str | 
body = 'body_example' # str |  (optional)

try:
    # Add Feature
    api_response = api_instance.add_feature(did, wvm, wvmid, eid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AssembliesApi->add_feature: %s\n" % e)
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

[**BTFeatureDefinitionResponse1617**](BTFeatureDefinitionResponse1617.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8; qs=0.09
 - **Accept**: application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_assembly**
> BTDocumentElementInfo create_assembly(did, wid, bt_model_element_params)

Create Assembly

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from onshape_client.oas.rest import ApiException
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = onshape_client.oas.AssembliesApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wid = 'wid_example' # str | 
bt_model_element_params = onshape_client.oas.BTModelElementParams() # BTModelElementParams | 

try:
    # Create Assembly
    api_response = api_instance.create_assembly(did, wid, bt_model_element_params)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AssembliesApi->create_assembly: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wid** | **str**|  | 
 **bt_model_element_params** | [**BTModelElementParams**](BTModelElementParams.md)|  | 

### Return type

[**BTDocumentElementInfo**](BTDocumentElementInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8; qs=0.09
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_instance**
> list[BTOccurrence74] create_instance(did, wid, eid, bt_assembly_instance_definition_params)

Create assembly instance

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from onshape_client.oas.rest import ApiException
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = onshape_client.oas.AssembliesApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wid = 'wid_example' # str | 
eid = 'eid_example' # str | 
bt_assembly_instance_definition_params = onshape_client.oas.BTAssemblyInstanceDefinitionParams() # BTAssemblyInstanceDefinitionParams | 

try:
    # Create assembly instance
    api_response = api_instance.create_instance(did, wid, eid, bt_assembly_instance_definition_params)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AssembliesApi->create_instance: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wid** | **str**|  | 
 **eid** | **str**|  | 
 **bt_assembly_instance_definition_params** | [**BTAssemblyInstanceDefinitionParams**](BTAssemblyInstanceDefinitionParams.md)|  | 

### Return type

[**list[BTOccurrence74]**](BTOccurrence74.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8; qs=0.09
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_feature**
> BTFeatureApiBase1430 delete_feature(did, wid, eid, fid)

Delete Feature

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from onshape_client.oas.rest import ApiException
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = onshape_client.oas.AssembliesApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wid = 'wid_example' # str | 
eid = 'eid_example' # str | 
fid = 'fid_example' # str | 

try:
    # Delete Feature
    api_response = api_instance.delete_feature(did, wid, eid, fid)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AssembliesApi->delete_feature: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wid** | **str**|  | 
 **eid** | **str**|  | 
 **fid** | **str**|  | 

### Return type

[**BTFeatureApiBase1430**](BTFeatureApiBase1430.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_instance**
> delete_instance(did, eid, wid, nid)

Delete assembly instance.

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from onshape_client.oas.rest import ApiException
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = onshape_client.oas.AssembliesApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
eid = 'eid_example' # str | 
wid = 'wid_example' # str | 
nid = 'nid_example' # str | 

try:
    # Delete assembly instance.
    api_instance.delete_instance(did, eid, wid, nid)
except ApiException as e:
    print("Exception when calling AssembliesApi->delete_instance: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **eid** | **str**|  | 
 **wid** | **str**|  | 
 **nid** | **str**|  | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_assembly_definition**
> BTAssemblyDefinitionInfo get_assembly_definition(did, wvm, wvmid, eid, link_document_id=link_document_id, include_mate_features=include_mate_features, include_non_solids=include_non_solids, include_mate_connectors=include_mate_connectors, configuration=configuration)

Assembly Definition.

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from onshape_client.oas.rest import ApiException
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = onshape_client.oas.AssembliesApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wvm = 'wvm_example' # str | 
wvmid = 'wvmid_example' # str | 
eid = 'eid_example' # str | 
link_document_id = 'link_document_id_example' # str |  (optional)
include_mate_features = True # bool |  (optional)
include_non_solids = True # bool |  (optional)
include_mate_connectors = True # bool |  (optional)
configuration = 'configuration_example' # str |  (optional)

try:
    # Assembly Definition.
    api_response = api_instance.get_assembly_definition(did, wvm, wvmid, eid, link_document_id=link_document_id, include_mate_features=include_mate_features, include_non_solids=include_non_solids, include_mate_connectors=include_mate_connectors, configuration=configuration)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AssembliesApi->get_assembly_definition: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wvm** | **str**|  | 
 **wvmid** | **str**|  | 
 **eid** | **str**|  | 
 **link_document_id** | **str**|  | [optional] 
 **include_mate_features** | **bool**|  | [optional] 
 **include_non_solids** | **bool**|  | [optional] 
 **include_mate_connectors** | **bool**|  | [optional] 
 **configuration** | **str**|  | [optional] 

### Return type

[**BTAssemblyDefinitionInfo**](BTAssemblyDefinitionInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_bill_of_materials**
> get_bill_of_materials(did, wvm, wvmid, eid, metadata_workspace_id=metadata_workspace_id, bom_column_ids=bom_column_ids, indented=indented, multi_level=multi_level, generate_if_absent=generate_if_absent, link_document_id=link_document_id, configuration=configuration)

Get Bill of Materials

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from onshape_client.oas.rest import ApiException
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = onshape_client.oas.AssembliesApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wvm = 'wvm_example' # str | 
wvmid = 'wvmid_example' # str | 
eid = 'eid_example' # str | 
metadata_workspace_id = '' # str |  (optional) (default to '')
bom_column_ids = ['bom_column_ids_example'] # list[str] |  (optional)
indented = True # bool |  (optional) (default to True)
multi_level = False # bool |  (optional) (default to False)
generate_if_absent = False # bool |  (optional) (default to False)
link_document_id = 'link_document_id_example' # str |  (optional)
configuration = 'configuration_example' # str |  (optional)

try:
    # Get Bill of Materials
    api_instance.get_bill_of_materials(did, wvm, wvmid, eid, metadata_workspace_id=metadata_workspace_id, bom_column_ids=bom_column_ids, indented=indented, multi_level=multi_level, generate_if_absent=generate_if_absent, link_document_id=link_document_id, configuration=configuration)
except ApiException as e:
    print("Exception when calling AssembliesApi->get_bill_of_materials: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wvm** | **str**|  | 
 **wvmid** | **str**|  | 
 **eid** | **str**|  | 
 **metadata_workspace_id** | **str**|  | [optional] [default to &#39;&#39;]
 **bom_column_ids** | [**list[str]**](str.md)|  | [optional] 
 **indented** | **bool**|  | [optional] [default to True]
 **multi_level** | **bool**|  | [optional] [default to False]
 **generate_if_absent** | **bool**|  | [optional] [default to False]
 **link_document_id** | **str**|  | [optional] 
 **configuration** | **str**|  | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_bounding_boxes**
> BTBoundingBoxInfo get_bounding_boxes(did, wvm, wvmid, eid, link_document_id=link_document_id, include_hidden=include_hidden, display_state_id=display_state_id, configuration=configuration, exploded_view_id=exploded_view_id)

Bounding Boxes.

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from onshape_client.oas.rest import ApiException
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = onshape_client.oas.AssembliesApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wvm = 'wvm_example' # str | 
wvmid = 'wvmid_example' # str | 
eid = 'eid_example' # str | 
link_document_id = 'link_document_id_example' # str |  (optional)
include_hidden = True # bool |  (optional)
display_state_id = 'display_state_id_example' # str |  (optional)
configuration = 'configuration_example' # str |  (optional)
exploded_view_id = 'exploded_view_id_example' # str |  (optional)

try:
    # Bounding Boxes.
    api_response = api_instance.get_bounding_boxes(did, wvm, wvmid, eid, link_document_id=link_document_id, include_hidden=include_hidden, display_state_id=display_state_id, configuration=configuration, exploded_view_id=exploded_view_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AssembliesApi->get_bounding_boxes: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wvm** | **str**|  | 
 **wvmid** | **str**|  | 
 **eid** | **str**|  | 
 **link_document_id** | **str**|  | [optional] 
 **include_hidden** | **bool**|  | [optional] 
 **display_state_id** | **str**|  | [optional] 
 **configuration** | **str**|  | [optional] 
 **exploded_view_id** | **str**|  | [optional] 

### Return type

[**BTBoundingBoxInfo**](BTBoundingBoxInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_feature_specs**
> BTFeatureSpecsResponse664 get_feature_specs(did, wvm, wvmid, eid)

Get Feature Specs

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from onshape_client.oas.rest import ApiException
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = onshape_client.oas.AssembliesApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wvm = 'wvm_example' # str | 
wvmid = 'wvmid_example' # str | 
eid = 'eid_example' # str | 

try:
    # Get Feature Specs
    api_response = api_instance.get_feature_specs(did, wvm, wvmid, eid)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AssembliesApi->get_feature_specs: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wvm** | **str**|  | 
 **wvmid** | **str**|  | 
 **eid** | **str**|  | 

### Return type

[**BTFeatureSpecsResponse664**](BTFeatureSpecsResponse664.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_features**
> BTAssemblyFeatureListResponse1174 get_features(did, wvm, wvmid, eid, feature_id=feature_id, link_document_id=link_document_id)

Get Feature List

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from onshape_client.oas.rest import ApiException
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = onshape_client.oas.AssembliesApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wvm = 'wvm_example' # str | 
wvmid = 'wvmid_example' # str | 
eid = 'eid_example' # str | 
feature_id = ['feature_id_example'] # list[str] |  (optional)
link_document_id = 'link_document_id_example' # str |  (optional)

try:
    # Get Feature List
    api_response = api_instance.get_features(did, wvm, wvmid, eid, feature_id=feature_id, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AssembliesApi->get_features: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wvm** | **str**|  | 
 **wvmid** | **str**|  | 
 **eid** | **str**|  | 
 **feature_id** | [**list[str]**](str.md)|  | [optional] 
 **link_document_id** | **str**|  | [optional] 

### Return type

[**BTAssemblyFeatureListResponse1174**](BTAssemblyFeatureListResponse1174.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_named_views**
> BTNamedViewsInfo get_named_views(did, eid, skip_perspective=skip_perspective)

Get Named Views

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from onshape_client.oas.rest import ApiException
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = onshape_client.oas.AssembliesApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
eid = 'eid_example' # str | 
skip_perspective = True # bool |  (optional) (default to True)

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
 **did** | **str**|  | 
 **eid** | **str**|  | 
 **skip_perspective** | **bool**|  | [optional] [default to True]

### Return type

[**BTNamedViewsInfo**](BTNamedViewsInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_or_create_bill_of_materials_element**
> get_or_create_bill_of_materials_element(did, wid, eid)

Get or Create Bill of Materials Element

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from onshape_client.oas.rest import ApiException
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = onshape_client.oas.AssembliesApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wid = 'wid_example' # str | 
eid = 'eid_example' # str | 

try:
    # Get or Create Bill of Materials Element
    api_instance.get_or_create_bill_of_materials_element(did, wid, eid)
except ApiException as e:
    print("Exception when calling AssembliesApi->get_or_create_bill_of_materials_element: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wid** | **str**|  | 
 **eid** | **str**|  | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_shaded_views**
> BTShadedViewsInfo get_shaded_views(did, wvm, wvmid, eid, link_document_id=link_document_id, view_matrix=view_matrix, output_height=output_height, output_width=output_width, pixel_size=pixel_size, edges=edges, show_all_parts=show_all_parts, include_surfaces=include_surfaces, use_anti_aliasing=use_anti_aliasing, display_state_id=display_state_id, configuration=configuration, exploded_view_id=exploded_view_id)

Shaded Views.

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from onshape_client.oas.rest import ApiException
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = onshape_client.oas.AssembliesApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wvm = 'wvm_example' # str | 
wvmid = 'wvmid_example' # str | 
eid = 'eid_example' # str | 
link_document_id = 'link_document_id_example' # str |  (optional)
view_matrix = 'front' # str |  (optional) (default to 'front')
output_height = 500 # int |  (optional) (default to 500)
output_width = 500 # int |  (optional) (default to 500)
pixel_size = 0.003 # float |  (optional) (default to 0.003)
edges = 'show' # str |  (optional) (default to 'show')
show_all_parts = False # bool |  (optional) (default to False)
include_surfaces = True # bool |  (optional) (default to True)
use_anti_aliasing = False # bool |  (optional) (default to False)
display_state_id = 'display_state_id_example' # str |  (optional)
configuration = 'configuration_example' # str |  (optional)
exploded_view_id = 'exploded_view_id_example' # str |  (optional)

try:
    # Shaded Views.
    api_response = api_instance.get_shaded_views(did, wvm, wvmid, eid, link_document_id=link_document_id, view_matrix=view_matrix, output_height=output_height, output_width=output_width, pixel_size=pixel_size, edges=edges, show_all_parts=show_all_parts, include_surfaces=include_surfaces, use_anti_aliasing=use_anti_aliasing, display_state_id=display_state_id, configuration=configuration, exploded_view_id=exploded_view_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AssembliesApi->get_shaded_views: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wvm** | **str**|  | 
 **wvmid** | **str**|  | 
 **eid** | **str**|  | 
 **link_document_id** | **str**|  | [optional] 
 **view_matrix** | **str**|  | [optional] [default to &#39;front&#39;]
 **output_height** | **int**|  | [optional] [default to 500]
 **output_width** | **int**|  | [optional] [default to 500]
 **pixel_size** | **float**|  | [optional] [default to 0.003]
 **edges** | **str**|  | [optional] [default to &#39;show&#39;]
 **show_all_parts** | **bool**|  | [optional] [default to False]
 **include_surfaces** | **bool**|  | [optional] [default to True]
 **use_anti_aliasing** | **bool**|  | [optional] [default to False]
 **display_state_id** | **str**|  | [optional] 
 **configuration** | **str**|  | [optional] 
 **exploded_view_id** | **str**|  | [optional] 

### Return type

[**BTShadedViewsInfo**](BTShadedViewsInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_translator_formats**
> list[BTModelFormatInfo] get_translator_formats(did, wid, eid, check_content=check_content)

Get Translation Formats

### Example

```python
from __future__ import print_function
import time
import onshape_client.oas
from onshape_client.oas.rest import ApiException
from pprint import pprint

# Create an instance of the API class
api_instance = onshape_client.oas.AssembliesApi()
did = 'did_example' # str | 
wid = 'wid_example' # str | 
eid = 'eid_example' # str | 
check_content = True # bool |  (optional) (default to True)

try:
    # Get Translation Formats
    api_response = api_instance.get_translator_formats(did, wid, eid, check_content=check_content)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AssembliesApi->get_translator_formats: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wid** | **str**|  | 
 **eid** | **str**|  | 
 **check_content** | **bool**|  | [optional] [default to True]

### Return type

[**list[BTModelFormatInfo]**](BTModelFormatInfo.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **insert_transformed_instances**
> insert_transformed_instances(did, eid, wid, bt_assembly_transformed_instances_definition_params)

Create and transform assembly instances

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from onshape_client.oas.rest import ApiException
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = onshape_client.oas.AssembliesApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
eid = 'eid_example' # str | 
wid = 'wid_example' # str | 
bt_assembly_transformed_instances_definition_params = onshape_client.oas.BTAssemblyTransformedInstancesDefinitionParams() # BTAssemblyTransformedInstancesDefinitionParams | 

try:
    # Create and transform assembly instances
    api_instance.insert_transformed_instances(did, eid, wid, bt_assembly_transformed_instances_definition_params)
except ApiException as e:
    print("Exception when calling AssembliesApi->insert_transformed_instances: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **eid** | **str**|  | 
 **wid** | **str**|  | 
 **bt_assembly_transformed_instances_definition_params** | [**BTAssemblyTransformedInstancesDefinitionParams**](BTAssemblyTransformedInstancesDefinitionParams.md)|  | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8; qs=0.09
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **transform_occurrences**
> transform_occurrences(did, eid, wid, bt_assembly_transform_definition_params)

Transform assembly occurrences.

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from onshape_client.oas.rest import ApiException
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = onshape_client.oas.AssembliesApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
eid = 'eid_example' # str | 
wid = 'wid_example' # str | 
bt_assembly_transform_definition_params = onshape_client.oas.BTAssemblyTransformDefinitionParams() # BTAssemblyTransformDefinitionParams | 

try:
    # Transform assembly occurrences.
    api_instance.transform_occurrences(did, eid, wid, bt_assembly_transform_definition_params)
except ApiException as e:
    print("Exception when calling AssembliesApi->transform_occurrences: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **eid** | **str**|  | 
 **wid** | **str**|  | 
 **bt_assembly_transform_definition_params** | [**BTAssemblyTransformDefinitionParams**](BTAssemblyTransformDefinitionParams.md)|  | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8; qs=0.09
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **translate_format**
> BTTranslationRequestInfo translate_format(did, wv, wvid, eid, bt_translate_format_params)

Create Assembly translation.

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from onshape_client.oas.rest import ApiException
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = onshape_client.oas.AssembliesApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wv = 'wv_example' # str | 
wvid = 'wvid_example' # str | 
eid = 'eid_example' # str | 
bt_translate_format_params = onshape_client.oas.BTTranslateFormatParams() # BTTranslateFormatParams | 

try:
    # Create Assembly translation.
    api_response = api_instance.translate_format(did, wv, wvid, eid, bt_translate_format_params)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AssembliesApi->translate_format: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wv** | **str**|  | 
 **wvid** | **str**|  | 
 **eid** | **str**|  | 
 **bt_translate_format_params** | [**BTTranslateFormatParams**](BTTranslateFormatParams.md)|  | 

### Return type

[**BTTranslationRequestInfo**](BTTranslationRequestInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8; qs=0.09
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_feature**
> BTFeatureDefinitionResponse1617 update_feature(did, wid, eid, fid, body=body)

Update Feature

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from onshape_client.oas.rest import ApiException
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = onshape_client.oas.AssembliesApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wid = 'wid_example' # str | 
eid = 'eid_example' # str | 
fid = 'fid_example' # str | 
body = 'body_example' # str |  (optional)

try:
    # Update Feature
    api_response = api_instance.update_feature(did, wid, eid, fid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AssembliesApi->update_feature: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wid** | **str**|  | 
 **eid** | **str**|  | 
 **fid** | **str**|  | 
 **body** | **str**|  | [optional] 

### Return type

[**BTFeatureDefinitionResponse1617**](BTFeatureDefinitionResponse1617.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8; qs=0.09
 - **Accept**: application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

