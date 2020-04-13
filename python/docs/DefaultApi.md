# onshape_client.oas.DefaultApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create_workflowable_test_object**](DefaultApi.md#create_workflowable_test_object) | **POST** /api/workflowabletestobject/testobject/{wfid} | 
[**delete_associative_data**](DefaultApi.md#delete_associative_data) | **DELETE** /api/appelements/d/{did}/{wvm}/{wvmid}/e/{eid}/associativedata | 
[**get_associative_data**](DefaultApi.md#get_associative_data) | **GET** /api/appelements/d/{did}/{wvm}/{wvmid}/e/{eid}/associativedata | 
[**get_latest_in_document**](DefaultApi.md#get_latest_in_document) | **GET** /api/insertables/d/{did}/latest | insertables for a document
[**get_metadata_schema**](DefaultApi.md#get_metadata_schema) | **GET** /api/metadataschema | 
[**get_properties**](DefaultApi.md#get_properties) | **GET** /api/metadataschema/properties | 
[**get_property_info**](DefaultApi.md#get_property_info) | **GET** /api/metadataschema/propertyinfo/{pid} | 
[**get_schema**](DefaultApi.md#get_schema) | **GET** /api/metadataschema/{sid} | 
[**get_sketch_bounding_boxes**](DefaultApi.md#get_sketch_bounding_boxes) | **GET** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/sketches/{sid}/boundingboxes | 
[**get_sketch_info**](DefaultApi.md#get_sketch_info) | **GET** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/sketches | 
[**get_tessellated_entities**](DefaultApi.md#get_tessellated_entities) | **GET** /api/partstudios/d/{did}/{wvm}/{wvmid}/e/{eid}/sketches/{sid}/tessellatedentities | 
[**get_workflowable_test_object**](DefaultApi.md#get_workflowable_test_object) | **GET** /api/workflowabletestobject/{oid} | 
[**post_associative_data**](DefaultApi.md#post_associative_data) | **POST** /api/appelements/d/{did}/{wvm}/{wvmid}/e/{eid}/associativedata | 
[**transition_workflowable_test_object**](DefaultApi.md#transition_workflowable_test_object) | **POST** /api/workflowabletestobject/{oid}/{transition} | 
[**update_workflowable_test_object**](DefaultApi.md#update_workflowable_test_object) | **POST** /api/workflowabletestobject/{oid} | 


# **create_workflowable_test_object**
> bt_workflowable_test_object_info.BTWorkflowableTestObjectInfo create_workflowable_test_object(wfid)



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
    api_instance = onshape_client.oas.DefaultApi(api_client)
    wfid = 'wfid_example' # str | 
    
    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.create_workflowable_test_object(wfid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DefaultApi->create_workflowable_test_object: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wfid** | **str**|  |

### Return type

[**bt_workflowable_test_object_info.BTWorkflowableTestObjectInfo**](BTWorkflowableTestObjectInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_associative_data**
> bt_app_element_basic_info.BTAppElementBasicInfo delete_associative_data(did, eid, wvm, wvmid)



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
    api_instance = onshape_client.oas.DefaultApi(api_client)
    did = 'did_example' # str | 
    eid = 'eid_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    transaction_id = '' # str |  (optional) if omitted the server will use the default value of ''
parent_change_id = '' # str |  (optional) if omitted the server will use the default value of ''
associative_data_id = ['associative_data_id_example'] # [str] |  (optional)
element_id = '' # str |  (optional) if omitted the server will use the default value of ''
view_id = '' # str |  (optional) if omitted the server will use the default value of ''
microversion_id = '' # str |  (optional) if omitted the server will use the default value of ''
document_microversion = '' # str |  (optional) if omitted the server will use the default value of ''
deterministic_id = '' # str |  (optional) if omitted the server will use the default value of ''
feature_id = '' # str |  (optional) if omitted the server will use the default value of ''
entity_id = '' # str |  (optional) if omitted the server will use the default value of ''
occurrence_id = '' # str |  (optional) if omitted the server will use the default value of ''

    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.delete_associative_data(did, eid, wvm, wvmid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DefaultApi->delete_associative_data: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.delete_associative_data(did, eid, wvm, wvmid, transaction_id=transaction_id, parent_change_id=parent_change_id, associative_data_id=associative_data_id, element_id=element_id, view_id=view_id, microversion_id=microversion_id, document_microversion=document_microversion, deterministic_id=deterministic_id, feature_id=feature_id, entity_id=entity_id, occurrence_id=occurrence_id)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DefaultApi->delete_associative_data: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **eid** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **transaction_id** | **str**|  | [optional] if omitted the server will use the default value of ''
 **parent_change_id** | **str**|  | [optional] if omitted the server will use the default value of ''
 **associative_data_id** | **[str]**|  | [optional]
 **element_id** | **str**|  | [optional] if omitted the server will use the default value of ''
 **view_id** | **str**|  | [optional] if omitted the server will use the default value of ''
 **microversion_id** | **str**|  | [optional] if omitted the server will use the default value of ''
 **document_microversion** | **str**|  | [optional] if omitted the server will use the default value of ''
 **deterministic_id** | **str**|  | [optional] if omitted the server will use the default value of ''
 **feature_id** | **str**|  | [optional] if omitted the server will use the default value of ''
 **entity_id** | **str**|  | [optional] if omitted the server will use the default value of ''
 **occurrence_id** | **str**|  | [optional] if omitted the server will use the default value of ''

### Return type

[**bt_app_element_basic_info.BTAppElementBasicInfo**](BTAppElementBasicInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_associative_data**
> bt_app_associative_data_info_array.BTAppAssociativeDataInfoArray get_associative_data(did, wvm, wvmid, eid)



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
    api_instance = onshape_client.oas.DefaultApi(api_client)
    did = 'did_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    eid = 'eid_example' # str | 
    transaction_id = '' # str |  (optional) if omitted the server will use the default value of ''
change_id = '' # str |  (optional) if omitted the server will use the default value of ''
associative_data_id = ['associative_data_id_example'] # [str] |  (optional)
element_id = '' # str |  (optional) if omitted the server will use the default value of ''
view_id = '' # str |  (optional) if omitted the server will use the default value of ''
microversion_id = '' # str |  (optional) if omitted the server will use the default value of ''
document_microversion = '' # str |  (optional) if omitted the server will use the default value of ''
deterministic_id = '' # str |  (optional) if omitted the server will use the default value of ''
feature_id = '' # str |  (optional) if omitted the server will use the default value of ''
entity_id = '' # str |  (optional) if omitted the server will use the default value of ''
occurrence_id = '' # str |  (optional) if omitted the server will use the default value of ''
return_id_tags = False # bool |  (optional) if omitted the server will use the default value of False

    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.get_associative_data(did, wvm, wvmid, eid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DefaultApi->get_associative_data: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.get_associative_data(did, wvm, wvmid, eid, transaction_id=transaction_id, change_id=change_id, associative_data_id=associative_data_id, element_id=element_id, view_id=view_id, microversion_id=microversion_id, document_microversion=document_microversion, deterministic_id=deterministic_id, feature_id=feature_id, entity_id=entity_id, occurrence_id=occurrence_id, return_id_tags=return_id_tags)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DefaultApi->get_associative_data: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **eid** | **str**|  |
 **transaction_id** | **str**|  | [optional] if omitted the server will use the default value of ''
 **change_id** | **str**|  | [optional] if omitted the server will use the default value of ''
 **associative_data_id** | **[str]**|  | [optional]
 **element_id** | **str**|  | [optional] if omitted the server will use the default value of ''
 **view_id** | **str**|  | [optional] if omitted the server will use the default value of ''
 **microversion_id** | **str**|  | [optional] if omitted the server will use the default value of ''
 **document_microversion** | **str**|  | [optional] if omitted the server will use the default value of ''
 **deterministic_id** | **str**|  | [optional] if omitted the server will use the default value of ''
 **feature_id** | **str**|  | [optional] if omitted the server will use the default value of ''
 **entity_id** | **str**|  | [optional] if omitted the server will use the default value of ''
 **occurrence_id** | **str**|  | [optional] if omitted the server will use the default value of ''
 **return_id_tags** | **bool**|  | [optional] if omitted the server will use the default value of False

### Return type

[**bt_app_associative_data_info_array.BTAppAssociativeDataInfoArray**](BTAppAssociativeDataInfoArray.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_latest_in_document**
> bt_list_response_bt_insertable_info.BTListResponseBTInsertableInfo get_latest_in_document(did)

insertables for a document

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
    api_instance = onshape_client.oas.DefaultApi(api_client)
    did = 'did_example' # str | 
    beta_capability_ids = ['beta_capability_ids_example'] # [str] |  (optional)
include_parts = False # bool |  (optional) if omitted the server will use the default value of False
include_surfaces = False # bool |  (optional) if omitted the server will use the default value of False
include_wires = False # bool |  (optional) if omitted the server will use the default value of False
include_sketches = False # bool |  (optional) if omitted the server will use the default value of False
include_reference_features = False # bool |  (optional) if omitted the server will use the default value of False
include_assemblies = False # bool |  (optional) if omitted the server will use the default value of False
include_features = False # bool |  (optional) if omitted the server will use the default value of False
include_feature_studios = False # bool |  (optional) if omitted the server will use the default value of False
include_part_studios = False # bool |  (optional) if omitted the server will use the default value of False
include_blobs = False # bool |  (optional) if omitted the server will use the default value of False
include_meshes = False # bool |  (optional) if omitted the server will use the default value of False
include_flattened_bodies = False # bool |  (optional) if omitted the server will use the default value of False
allowed_blob_mime_types = '' # str |  (optional) if omitted the server will use the default value of ''
max_feature_script_version = 0 # int |  (optional) if omitted the server will use the default value of 0
include_applications = False # bool |  (optional) if omitted the server will use the default value of False
allowed_application_mime_types = '' # str |  (optional) if omitted the server will use the default value of ''
include_composite_parts = False # bool |  (optional) if omitted the server will use the default value of False
include_fs_tables = False # bool |  (optional) if omitted the server will use the default value of False

    # example passing only required values which don't have defaults set
    try:
        # insertables for a document
        api_response = api_instance.get_latest_in_document(did)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DefaultApi->get_latest_in_document: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # insertables for a document
        api_response = api_instance.get_latest_in_document(did, beta_capability_ids=beta_capability_ids, include_parts=include_parts, include_surfaces=include_surfaces, include_wires=include_wires, include_sketches=include_sketches, include_reference_features=include_reference_features, include_assemblies=include_assemblies, include_features=include_features, include_feature_studios=include_feature_studios, include_part_studios=include_part_studios, include_blobs=include_blobs, include_meshes=include_meshes, include_flattened_bodies=include_flattened_bodies, allowed_blob_mime_types=allowed_blob_mime_types, max_feature_script_version=max_feature_script_version, include_applications=include_applications, allowed_application_mime_types=allowed_application_mime_types, include_composite_parts=include_composite_parts, include_fs_tables=include_fs_tables)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DefaultApi->get_latest_in_document: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **beta_capability_ids** | **[str]**|  | [optional]
 **include_parts** | **bool**|  | [optional] if omitted the server will use the default value of False
 **include_surfaces** | **bool**|  | [optional] if omitted the server will use the default value of False
 **include_wires** | **bool**|  | [optional] if omitted the server will use the default value of False
 **include_sketches** | **bool**|  | [optional] if omitted the server will use the default value of False
 **include_reference_features** | **bool**|  | [optional] if omitted the server will use the default value of False
 **include_assemblies** | **bool**|  | [optional] if omitted the server will use the default value of False
 **include_features** | **bool**|  | [optional] if omitted the server will use the default value of False
 **include_feature_studios** | **bool**|  | [optional] if omitted the server will use the default value of False
 **include_part_studios** | **bool**|  | [optional] if omitted the server will use the default value of False
 **include_blobs** | **bool**|  | [optional] if omitted the server will use the default value of False
 **include_meshes** | **bool**|  | [optional] if omitted the server will use the default value of False
 **include_flattened_bodies** | **bool**|  | [optional] if omitted the server will use the default value of False
 **allowed_blob_mime_types** | **str**|  | [optional] if omitted the server will use the default value of ''
 **max_feature_script_version** | **int**|  | [optional] if omitted the server will use the default value of 0
 **include_applications** | **bool**|  | [optional] if omitted the server will use the default value of False
 **allowed_application_mime_types** | **str**|  | [optional] if omitted the server will use the default value of ''
 **include_composite_parts** | **bool**|  | [optional] if omitted the server will use the default value of False
 **include_fs_tables** | **bool**|  | [optional] if omitted the server will use the default value of False

### Return type

[**bt_list_response_bt_insertable_info.BTListResponseBTInsertableInfo**](BTListResponseBTInsertableInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_metadata_schema**
> bt_metadata_schema_info.BTMetadataSchemaInfo get_metadata_schema(object_type)



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
    api_instance = onshape_client.oas.DefaultApi(api_client)
    object_type = 56 # int | 
    owner_id = 'owner_id_example' # str |  (optional)
document_id = 'document_id_example' # str |  (optional)
owner_type = 1 # int |  (optional) if omitted the server will use the default value of 1

    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.get_metadata_schema(object_type)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DefaultApi->get_metadata_schema: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.get_metadata_schema(object_type, owner_id=owner_id, document_id=document_id, owner_type=owner_type)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DefaultApi->get_metadata_schema: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **object_type** | **int**|  |
 **owner_id** | **str**|  | [optional]
 **document_id** | **str**|  | [optional]
 **owner_type** | **int**|  | [optional] if omitted the server will use the default value of 1

### Return type

[**bt_metadata_schema_info.BTMetadataSchemaInfo**](BTMetadataSchemaInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_properties**
> bt_list_response_bt_metadata_property_summary_info.BTListResponseBTMetadataPropertySummaryInfo get_properties()



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
    api_instance = onshape_client.oas.DefaultApi(api_client)
    schema_id = 'schema_id_example' # str |  (optional)
owner_id = 'owner_id_example' # str |  (optional)
document_id = 'document_id_example' # str |  (optional)
owner_type = 1 # int |  (optional) if omitted the server will use the default value of 1
object_type = 56 # int |  (optional)
strict = False # bool |  (optional) if omitted the server will use the default value of False
active_only = False # bool |  (optional) if omitted the server will use the default value of False
offset = 0 # int |  (optional) if omitted the server will use the default value of 0
limit = 200 # int |  (optional) if omitted the server will use the default value of 200

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.get_properties(schema_id=schema_id, owner_id=owner_id, document_id=document_id, owner_type=owner_type, object_type=object_type, strict=strict, active_only=active_only, offset=offset, limit=limit)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DefaultApi->get_properties: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **schema_id** | **str**|  | [optional]
 **owner_id** | **str**|  | [optional]
 **document_id** | **str**|  | [optional]
 **owner_type** | **int**|  | [optional] if omitted the server will use the default value of 1
 **object_type** | **int**|  | [optional]
 **strict** | **bool**|  | [optional] if omitted the server will use the default value of False
 **active_only** | **bool**|  | [optional] if omitted the server will use the default value of False
 **offset** | **int**|  | [optional] if omitted the server will use the default value of 0
 **limit** | **int**|  | [optional] if omitted the server will use the default value of 200

### Return type

[**bt_list_response_bt_metadata_property_summary_info.BTListResponseBTMetadataPropertySummaryInfo**](BTListResponseBTMetadataPropertySummaryInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_property_info**
> bt_metadata_property_info.BTMetadataPropertyInfo get_property_info(pid)



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
    api_instance = onshape_client.oas.DefaultApi(api_client)
    pid = 'pid_example' # str | 
    document_id = 'document_id_example' # str |  (optional)
schema_id = 'schema_id_example' # str |  (optional)
owner_id = 'owner_id_example' # str |  (optional)
owner_type = 1 # int |  (optional) if omitted the server will use the default value of 1
object_type = 56 # int |  (optional)

    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.get_property_info(pid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DefaultApi->get_property_info: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.get_property_info(pid, document_id=document_id, schema_id=schema_id, owner_id=owner_id, owner_type=owner_type, object_type=object_type)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DefaultApi->get_property_info: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pid** | **str**|  |
 **document_id** | **str**|  | [optional]
 **schema_id** | **str**|  | [optional]
 **owner_id** | **str**|  | [optional]
 **owner_type** | **int**|  | [optional] if omitted the server will use the default value of 1
 **object_type** | **int**|  | [optional]

### Return type

[**bt_metadata_property_info.BTMetadataPropertyInfo**](BTMetadataPropertyInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_schema**
> bt_metadata_schema_info.BTMetadataSchemaInfo get_schema(sid)



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
    api_instance = onshape_client.oas.DefaultApi(api_client)
    sid = 'sid_example' # str | 
    document_id = 'document_id_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.get_schema(sid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DefaultApi->get_schema: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.get_schema(sid, document_id=document_id)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DefaultApi->get_schema: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **sid** | **str**|  |
 **document_id** | **str**|  | [optional]

### Return type

[**bt_metadata_schema_info.BTMetadataSchemaInfo**](BTMetadataSchemaInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_sketch_bounding_boxes**
> bt_bounding_box_info.BTBoundingBoxInfo get_sketch_bounding_boxes(did, wvm, wvmid, eid, sid)



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
    api_instance = onshape_client.oas.DefaultApi(api_client)
    did = 'did_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    eid = 'eid_example' # str | 
    sid = 'sid_example' # str | 
    configuration = 'configuration_example' # str |  (optional)
link_document_id = 'link_document_id_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.get_sketch_bounding_boxes(did, wvm, wvmid, eid, sid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DefaultApi->get_sketch_bounding_boxes: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.get_sketch_bounding_boxes(did, wvm, wvmid, eid, sid, configuration=configuration, link_document_id=link_document_id)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DefaultApi->get_sketch_bounding_boxes: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **eid** | **str**|  |
 **sid** | **str**|  |
 **configuration** | **str**|  | [optional]
 **link_document_id** | **str**|  | [optional]

### Return type

[**bt_bounding_box_info.BTBoundingBoxInfo**](BTBoundingBoxInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_sketch_info**
> get_sketch_info(did, wvm, wvmid, eid)



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
    api_instance = onshape_client.oas.DefaultApi(api_client)
    did = 'did_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    eid = 'eid_example' # str | 
    configuration = 'configuration_example' # str |  (optional)
sketch_id = ['sketch_id_example'] # [str] |  (optional)
output3_d = False # bool |  (optional) if omitted the server will use the default value of False
curve_points = False # bool |  (optional) if omitted the server will use the default value of False
include_geometry = True # bool |  (optional) if omitted the server will use the default value of True
link_document_id = 'link_document_id_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        api_instance.get_sketch_info(did, wvm, wvmid, eid)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DefaultApi->get_sketch_info: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_instance.get_sketch_info(did, wvm, wvmid, eid, configuration=configuration, sketch_id=sketch_id, output3_d=output3_d, curve_points=curve_points, include_geometry=include_geometry, link_document_id=link_document_id)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DefaultApi->get_sketch_info: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **eid** | **str**|  |
 **configuration** | **str**|  | [optional]
 **sketch_id** | **[str]**|  | [optional]
 **output3_d** | **bool**|  | [optional] if omitted the server will use the default value of False
 **curve_points** | **bool**|  | [optional] if omitted the server will use the default value of False
 **include_geometry** | **bool**|  | [optional] if omitted the server will use the default value of True
 **link_document_id** | **str**|  | [optional]

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_tessellated_entities**
> get_tessellated_entities(did, wvm, wvmid, eid, sid)



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
    api_instance = onshape_client.oas.DefaultApi(api_client)
    did = 'did_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    eid = 'eid_example' # str | 
    sid = 'sid_example' # str | 
    configuration = 'configuration_example' # str |  (optional)
entity_id = ['entity_id_example'] # [str] |  (optional)
angle_tolerance = 3.4 # float |  (optional)
chord_tolerance = 3.4 # float |  (optional)
link_document_id = 'link_document_id_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        api_instance.get_tessellated_entities(did, wvm, wvmid, eid, sid)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DefaultApi->get_tessellated_entities: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_instance.get_tessellated_entities(did, wvm, wvmid, eid, sid, configuration=configuration, entity_id=entity_id, angle_tolerance=angle_tolerance, chord_tolerance=chord_tolerance, link_document_id=link_document_id)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DefaultApi->get_tessellated_entities: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **eid** | **str**|  |
 **sid** | **str**|  |
 **configuration** | **str**|  | [optional]
 **entity_id** | **[str]**|  | [optional]
 **angle_tolerance** | **float**|  | [optional]
 **chord_tolerance** | **float**|  | [optional]
 **link_document_id** | **str**|  | [optional]

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_workflowable_test_object**
> bt_workflowable_test_object_info.BTWorkflowableTestObjectInfo get_workflowable_test_object(oid)



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
    api_instance = onshape_client.oas.DefaultApi(api_client)
    oid = 'oid_example' # str | 
    
    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.get_workflowable_test_object(oid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DefaultApi->get_workflowable_test_object: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **oid** | **str**|  |

### Return type

[**bt_workflowable_test_object_info.BTWorkflowableTestObjectInfo**](BTWorkflowableTestObjectInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_associative_data**
> bt_app_associative_data_info_array.BTAppAssociativeDataInfoArray post_associative_data(did, eid, wvm, wvmid, body)



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
    api_instance = onshape_client.oas.DefaultApi(api_client)
    did = 'did_example' # str | 
    eid = 'eid_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    body = 'body_example' # str | 
    
    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.post_associative_data(did, eid, wvm, wvmid, body)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DefaultApi->post_associative_data: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **eid** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **body** | **str**|  |

### Return type

[**bt_app_associative_data_info_array.BTAppAssociativeDataInfoArray**](BTAppAssociativeDataInfoArray.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8; qs=0.09
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **transition_workflowable_test_object**
> bt_workflowable_test_object_info.BTWorkflowableTestObjectInfo transition_workflowable_test_object(oid, transition)



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
    api_instance = onshape_client.oas.DefaultApi(api_client)
    oid = 'oid_example' # str | 
    transition = 'transition_example' # str | 
    
    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.transition_workflowable_test_object(oid, transition)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DefaultApi->transition_workflowable_test_object: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **oid** | **str**|  |
 **transition** | **str**|  |

### Return type

[**bt_workflowable_test_object_info.BTWorkflowableTestObjectInfo**](BTWorkflowableTestObjectInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_workflowable_test_object**
> bt_workflowable_test_object_info.BTWorkflowableTestObjectInfo update_workflowable_test_object(oid, bt_update_workflowable_test_object_params)



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
    api_instance = onshape_client.oas.DefaultApi(api_client)
    oid = 'oid_example' # str | 
    bt_update_workflowable_test_object_params = onshape_client.oas.BTUpdateWorkflowableTestObjectParams() # bt_update_workflowable_test_object_params.BTUpdateWorkflowableTestObjectParams | 
    
    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.update_workflowable_test_object(oid, bt_update_workflowable_test_object_params)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DefaultApi->update_workflowable_test_object: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **oid** | **str**|  |
 **bt_update_workflowable_test_object_params** | [**bt_update_workflowable_test_object_params.BTUpdateWorkflowableTestObjectParams**](BTUpdateWorkflowableTestObjectParams.md)|  |

### Return type

[**bt_workflowable_test_object_info.BTWorkflowableTestObjectInfo**](BTWorkflowableTestObjectInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8; qs=0.09
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

