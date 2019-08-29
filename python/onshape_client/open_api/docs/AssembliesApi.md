# open_api_client.AssembliesApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_feature**](AssembliesApi.md#add_feature) | **POST** /api/assemblies/d/{did}/{wvm}/{wvmid}/e/{eid}/features | 
[**create_assembly**](AssembliesApi.md#create_assembly) | **POST** /api/assemblies/d/{did}/w/{wid} | 
[**create_instance1**](AssembliesApi.md#create_instance1) | **POST** /api/assemblies/d/{did}/w/{wid}/e/{eid}/instances | 
[**delete_feature2**](AssembliesApi.md#delete_feature2) | **DELETE** /api/assemblies/d/{did}/w/{wid}/e/{eid}/features/featureid/{fid} | 
[**delete_instance1**](AssembliesApi.md#delete_instance1) | **DELETE** /api/assemblies/d/{did}/w/{wid}/e/{eid}/instance/nodeid/{nid} | 
[**get_assembly_definition1**](AssembliesApi.md#get_assembly_definition1) | **GET** /api/assemblies/d/{did}/{wvm}/{wvmid}/e/{eid} | 
[**get_bill_of_materials1**](AssembliesApi.md#get_bill_of_materials1) | **GET** /api/assemblies/d/{did}/{wvm}/{wvmid}/e/{eid}/bom | 
[**get_bounding_boxes**](AssembliesApi.md#get_bounding_boxes) | **GET** /api/assemblies/d/{did}/{wvm}/{wvmid}/e/{eid}/boundingboxes | 
[**get_feature_specs3**](AssembliesApi.md#get_feature_specs3) | **GET** /api/assemblies/d/{did}/{wvm}/{wvmid}/e/{eid}/featurespecs | 
[**get_features2**](AssembliesApi.md#get_features2) | **GET** /api/assemblies/d/{did}/{wvm}/{wvmid}/e/{eid}/features | 
[**get_named_views1**](AssembliesApi.md#get_named_views1) | **GET** /api/assemblies/d/{did}/e/{eid}/namedViews | 
[**get_or_create_bill_of_materials_element**](AssembliesApi.md#get_or_create_bill_of_materials_element) | **POST** /api/assemblies/d/{did}/w/{wid}/e/{eid}/bomelement | 
[**get_shaded_views3**](AssembliesApi.md#get_shaded_views3) | **GET** /api/assemblies/d/{did}/{wvm}/{wvmid}/e/{eid}/shadedviews | 
[**get_translator_formats**](AssembliesApi.md#get_translator_formats) | **GET** /api/assemblies/d/{did}/w/{wid}/e/{eid}/translationformats | 
[**insert_transformed_instances**](AssembliesApi.md#insert_transformed_instances) | **POST** /api/assemblies/d/{did}/w/{wid}/e/{eid}/transformedinstances | 
[**transform_occurrences**](AssembliesApi.md#transform_occurrences) | **POST** /api/assemblies/d/{did}/w/{wid}/e/{eid}/occurrencetransforms | 
[**translate_format**](AssembliesApi.md#translate_format) | **POST** /api/assemblies/d/{did}/{wv}/{wvid}/e/{eid}/translations | 
[**update_feature2**](AssembliesApi.md#update_feature2) | **POST** /api/assemblies/d/{did}/w/{wid}/e/{eid}/features/featureid/{fid} | 


# **add_feature**
> add_feature(did, wvm, wvmid, eid, body=body)



### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import open_api_client
from open_api_client.rest import ApiException
from pprint import pprint
configuration = open_api_client.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = open_api_client.AssembliesApi(open_api_client.ApiClient(configuration))
did = 'did_example' # str | 
wvm = 'wvm_example' # str | 
wvmid = 'wvmid_example' # str | 
eid = 'eid_example' # str | 
body = 'body_example' # str |  (optional)

try:
    api_instance.add_feature(did, wvm, wvmid, eid, body=body)
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

# **create_assembly**
> create_assembly(did, wid, bt_model_element_params)



### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import open_api_client
from open_api_client.rest import ApiException
from pprint import pprint
configuration = open_api_client.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = open_api_client.AssembliesApi(open_api_client.ApiClient(configuration))
did = 'did_example' # str | 
wid = 'wid_example' # str | 
bt_model_element_params = open_api_client.BTModelElementParams() # BTModelElementParams | 

try:
    api_instance.create_assembly(did, wid, bt_model_element_params)
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

# **create_instance1**
> create_instance1(did, wid, eid, bt_assembly_instance_definition_params)



### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import open_api_client
from open_api_client.rest import ApiException
from pprint import pprint
configuration = open_api_client.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = open_api_client.AssembliesApi(open_api_client.ApiClient(configuration))
did = 'did_example' # str | 
wid = 'wid_example' # str | 
eid = 'eid_example' # str | 
bt_assembly_instance_definition_params = open_api_client.BTAssemblyInstanceDefinitionParams() # BTAssemblyInstanceDefinitionParams | 

try:
    api_instance.create_instance1(did, wid, eid, bt_assembly_instance_definition_params)
except ApiException as e:
    print("Exception when calling AssembliesApi->create_instance1: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wid** | **str**|  | 
 **eid** | **str**|  | 
 **bt_assembly_instance_definition_params** | [**BTAssemblyInstanceDefinitionParams**](BTAssemblyInstanceDefinitionParams.md)|  | 

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

# **delete_feature2**
> delete_feature2(did, wid, eid, fid)



### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import open_api_client
from open_api_client.rest import ApiException
from pprint import pprint
configuration = open_api_client.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = open_api_client.AssembliesApi(open_api_client.ApiClient(configuration))
did = 'did_example' # str | 
wid = 'wid_example' # str | 
eid = 'eid_example' # str | 
fid = 'fid_example' # str | 

try:
    api_instance.delete_feature2(did, wid, eid, fid)
except ApiException as e:
    print("Exception when calling AssembliesApi->delete_feature2: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wid** | **str**|  | 
 **eid** | **str**|  | 
 **fid** | **str**|  | 

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

# **delete_instance1**
> delete_instance1(did, eid, wid, nid)



### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import open_api_client
from open_api_client.rest import ApiException
from pprint import pprint
configuration = open_api_client.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = open_api_client.AssembliesApi(open_api_client.ApiClient(configuration))
did = 'did_example' # str | 
eid = 'eid_example' # str | 
wid = 'wid_example' # str | 
nid = 'nid_example' # str | 

try:
    api_instance.delete_instance1(did, eid, wid, nid)
except ApiException as e:
    print("Exception when calling AssembliesApi->delete_instance1: %s\n" % e)
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

# **get_assembly_definition1**
> get_assembly_definition1(did, wvm, wvmid, eid, link_document_id=link_document_id, include_mate_features=include_mate_features, include_non_solids=include_non_solids, include_mate_connectors=include_mate_connectors, configuration=configuration)



### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import open_api_client
from open_api_client.rest import ApiException
from pprint import pprint
configuration = open_api_client.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = open_api_client.AssembliesApi(open_api_client.ApiClient(configuration))
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
    api_instance.get_assembly_definition1(did, wvm, wvmid, eid, link_document_id=link_document_id, include_mate_features=include_mate_features, include_non_solids=include_non_solids, include_mate_connectors=include_mate_connectors, configuration=configuration)
except ApiException as e:
    print("Exception when calling AssembliesApi->get_assembly_definition1: %s\n" % e)
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

# **get_bill_of_materials1**
> get_bill_of_materials1(did, wvm, wvmid, eid, metadata_workspace_id=metadata_workspace_id, bom_column_ids=bom_column_ids, indented=indented, multi_level=multi_level, generate_if_absent=generate_if_absent, link_document_id=link_document_id, configuration=configuration)



### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import open_api_client
from open_api_client.rest import ApiException
from pprint import pprint
configuration = open_api_client.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = open_api_client.AssembliesApi(open_api_client.ApiClient(configuration))
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
    api_instance.get_bill_of_materials1(did, wvm, wvmid, eid, metadata_workspace_id=metadata_workspace_id, bom_column_ids=bom_column_ids, indented=indented, multi_level=multi_level, generate_if_absent=generate_if_absent, link_document_id=link_document_id, configuration=configuration)
except ApiException as e:
    print("Exception when calling AssembliesApi->get_bill_of_materials1: %s\n" % e)
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
> get_bounding_boxes(did, wvm, wvmid, eid, link_document_id=link_document_id, include_hidden=include_hidden, display_state_id=display_state_id, configuration=configuration, exploded_view_id=exploded_view_id)



### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import open_api_client
from open_api_client.rest import ApiException
from pprint import pprint
configuration = open_api_client.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = open_api_client.AssembliesApi(open_api_client.ApiClient(configuration))
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
    api_instance.get_bounding_boxes(did, wvm, wvmid, eid, link_document_id=link_document_id, include_hidden=include_hidden, display_state_id=display_state_id, configuration=configuration, exploded_view_id=exploded_view_id)
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

# **get_feature_specs3**
> get_feature_specs3(did, wvm, wvmid, eid)



### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import open_api_client
from open_api_client.rest import ApiException
from pprint import pprint
configuration = open_api_client.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = open_api_client.AssembliesApi(open_api_client.ApiClient(configuration))
did = 'did_example' # str | 
wvm = 'wvm_example' # str | 
wvmid = 'wvmid_example' # str | 
eid = 'eid_example' # str | 

try:
    api_instance.get_feature_specs3(did, wvm, wvmid, eid)
except ApiException as e:
    print("Exception when calling AssembliesApi->get_feature_specs3: %s\n" % e)
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
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_features2**
> get_features2(did, wvm, wvmid, eid, feature_id=feature_id, link_document_id=link_document_id)



### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import open_api_client
from open_api_client.rest import ApiException
from pprint import pprint
configuration = open_api_client.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = open_api_client.AssembliesApi(open_api_client.ApiClient(configuration))
did = 'did_example' # str | 
wvm = 'wvm_example' # str | 
wvmid = 'wvmid_example' # str | 
eid = 'eid_example' # str | 
feature_id = ['feature_id_example'] # list[str] |  (optional)
link_document_id = 'link_document_id_example' # str |  (optional)

try:
    api_instance.get_features2(did, wvm, wvmid, eid, feature_id=feature_id, link_document_id=link_document_id)
except ApiException as e:
    print("Exception when calling AssembliesApi->get_features2: %s\n" % e)
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

# **get_named_views1**
> get_named_views1(did, eid, skip_perspective=skip_perspective)



### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import open_api_client
from open_api_client.rest import ApiException
from pprint import pprint
configuration = open_api_client.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = open_api_client.AssembliesApi(open_api_client.ApiClient(configuration))
did = 'did_example' # str | 
eid = 'eid_example' # str | 
skip_perspective = True # bool |  (optional) (default to True)

try:
    api_instance.get_named_views1(did, eid, skip_perspective=skip_perspective)
except ApiException as e:
    print("Exception when calling AssembliesApi->get_named_views1: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **eid** | **str**|  | 
 **skip_perspective** | **bool**|  | [optional] [default to True]

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

# **get_or_create_bill_of_materials_element**
> get_or_create_bill_of_materials_element(did, wid, eid)



### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import open_api_client
from open_api_client.rest import ApiException
from pprint import pprint
configuration = open_api_client.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = open_api_client.AssembliesApi(open_api_client.ApiClient(configuration))
did = 'did_example' # str | 
wid = 'wid_example' # str | 
eid = 'eid_example' # str | 

try:
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

# **get_shaded_views3**
> get_shaded_views3(did, wvm, wvmid, eid, link_document_id=link_document_id, view_matrix=view_matrix, output_height=output_height, output_width=output_width, pixel_size=pixel_size, edges=edges, show_all_parts=show_all_parts, include_surfaces=include_surfaces, use_anti_aliasing=use_anti_aliasing, display_state_id=display_state_id, configuration=configuration, exploded_view_id=exploded_view_id)



### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import open_api_client
from open_api_client.rest import ApiException
from pprint import pprint
configuration = open_api_client.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = open_api_client.AssembliesApi(open_api_client.ApiClient(configuration))
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
    api_instance.get_shaded_views3(did, wvm, wvmid, eid, link_document_id=link_document_id, view_matrix=view_matrix, output_height=output_height, output_width=output_width, pixel_size=pixel_size, edges=edges, show_all_parts=show_all_parts, include_surfaces=include_surfaces, use_anti_aliasing=use_anti_aliasing, display_state_id=display_state_id, configuration=configuration, exploded_view_id=exploded_view_id)
except ApiException as e:
    print("Exception when calling AssembliesApi->get_shaded_views3: %s\n" % e)
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

# **get_translator_formats**
> get_translator_formats(did, wid, eid, check_content=check_content)



### Example

```python
from __future__ import print_function
import time
import open_api_client
from open_api_client.rest import ApiException
from pprint import pprint

# Create an instance of the API class
api_instance = open_api_client.AssembliesApi()
did = 'did_example' # str | 
wid = 'wid_example' # str | 
eid = 'eid_example' # str | 
check_content = True # bool |  (optional) (default to True)

try:
    api_instance.get_translator_formats(did, wid, eid, check_content=check_content)
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

void (empty response body)

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



### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import open_api_client
from open_api_client.rest import ApiException
from pprint import pprint
configuration = open_api_client.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = open_api_client.AssembliesApi(open_api_client.ApiClient(configuration))
did = 'did_example' # str | 
eid = 'eid_example' # str | 
wid = 'wid_example' # str | 
bt_assembly_transformed_instances_definition_params = open_api_client.BTAssemblyTransformedInstancesDefinitionParams() # BTAssemblyTransformedInstancesDefinitionParams | 

try:
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



### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import open_api_client
from open_api_client.rest import ApiException
from pprint import pprint
configuration = open_api_client.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = open_api_client.AssembliesApi(open_api_client.ApiClient(configuration))
did = 'did_example' # str | 
eid = 'eid_example' # str | 
wid = 'wid_example' # str | 
bt_assembly_transform_definition_params = open_api_client.BTAssemblyTransformDefinitionParams() # BTAssemblyTransformDefinitionParams | 

try:
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
> translate_format(did, wv, wvid, eid, bt_translate_format_params)



### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import open_api_client
from open_api_client.rest import ApiException
from pprint import pprint
configuration = open_api_client.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = open_api_client.AssembliesApi(open_api_client.ApiClient(configuration))
did = 'did_example' # str | 
wv = 'wv_example' # str | 
wvid = 'wvid_example' # str | 
eid = 'eid_example' # str | 
bt_translate_format_params = open_api_client.BTTranslateFormatParams() # BTTranslateFormatParams | 

try:
    api_instance.translate_format(did, wv, wvid, eid, bt_translate_format_params)
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

# **update_feature2**
> update_feature2(did, wid, eid, fid, body=body)



### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import open_api_client
from open_api_client.rest import ApiException
from pprint import pprint
configuration = open_api_client.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = open_api_client.AssembliesApi(open_api_client.ApiClient(configuration))
did = 'did_example' # str | 
wid = 'wid_example' # str | 
eid = 'eid_example' # str | 
fid = 'fid_example' # str | 
body = 'body_example' # str |  (optional)

try:
    api_instance.update_feature2(did, wid, eid, fid, body=body)
except ApiException as e:
    print("Exception when calling AssembliesApi->update_feature2: %s\n" % e)
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

