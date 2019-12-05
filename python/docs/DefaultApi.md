# onshape_client.oas.DefaultApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_latest_in_document**](DefaultApi.md#get_latest_in_document) | **GET** /api/insertables/d/{did}/latest | insertables for a document


# **get_latest_in_document**
> BTListResponseBTInsertableInfo get_latest_in_document(did, beta_capability_ids=beta_capability_ids, include_parts=include_parts, include_surfaces=include_surfaces, include_wires=include_wires, include_sketches=include_sketches, include_reference_features=include_reference_features, include_assemblies=include_assemblies, include_features=include_features, include_feature_studios=include_feature_studios, include_part_studios=include_part_studios, include_blobs=include_blobs, include_meshes=include_meshes, include_flattened_bodies=include_flattened_bodies, allowed_blob_mime_types=allowed_blob_mime_types, max_feature_script_version=max_feature_script_version, include_applications=include_applications, allowed_application_mime_types=allowed_application_mime_types, include_composite_parts=include_composite_parts)

insertables for a document

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
api_instance = onshape_client.oas.DefaultApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
beta_capability_ids = ['beta_capability_ids_example'] # list[str] |  (optional)
include_parts = False # bool |  (optional) (default to False)
include_surfaces = False # bool |  (optional) (default to False)
include_wires = False # bool |  (optional) (default to False)
include_sketches = False # bool |  (optional) (default to False)
include_reference_features = False # bool |  (optional) (default to False)
include_assemblies = False # bool |  (optional) (default to False)
include_features = False # bool |  (optional) (default to False)
include_feature_studios = False # bool |  (optional) (default to False)
include_part_studios = False # bool |  (optional) (default to False)
include_blobs = False # bool |  (optional) (default to False)
include_meshes = False # bool |  (optional) (default to False)
include_flattened_bodies = False # bool |  (optional) (default to False)
allowed_blob_mime_types = '' # str |  (optional) (default to '')
max_feature_script_version = 0 # int |  (optional) (default to 0)
include_applications = False # bool |  (optional) (default to False)
allowed_application_mime_types = '' # str |  (optional) (default to '')
include_composite_parts = False # bool |  (optional) (default to False)

try:
    # insertables for a document
    api_response = api_instance.get_latest_in_document(did, beta_capability_ids=beta_capability_ids, include_parts=include_parts, include_surfaces=include_surfaces, include_wires=include_wires, include_sketches=include_sketches, include_reference_features=include_reference_features, include_assemblies=include_assemblies, include_features=include_features, include_feature_studios=include_feature_studios, include_part_studios=include_part_studios, include_blobs=include_blobs, include_meshes=include_meshes, include_flattened_bodies=include_flattened_bodies, allowed_blob_mime_types=allowed_blob_mime_types, max_feature_script_version=max_feature_script_version, include_applications=include_applications, allowed_application_mime_types=allowed_application_mime_types, include_composite_parts=include_composite_parts)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DefaultApi->get_latest_in_document: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **beta_capability_ids** | [**list[str]**](str.md)|  | [optional] 
 **include_parts** | **bool**|  | [optional] [default to False]
 **include_surfaces** | **bool**|  | [optional] [default to False]
 **include_wires** | **bool**|  | [optional] [default to False]
 **include_sketches** | **bool**|  | [optional] [default to False]
 **include_reference_features** | **bool**|  | [optional] [default to False]
 **include_assemblies** | **bool**|  | [optional] [default to False]
 **include_features** | **bool**|  | [optional] [default to False]
 **include_feature_studios** | **bool**|  | [optional] [default to False]
 **include_part_studios** | **bool**|  | [optional] [default to False]
 **include_blobs** | **bool**|  | [optional] [default to False]
 **include_meshes** | **bool**|  | [optional] [default to False]
 **include_flattened_bodies** | **bool**|  | [optional] [default to False]
 **allowed_blob_mime_types** | **str**|  | [optional] [default to &#39;&#39;]
 **max_feature_script_version** | **int**|  | [optional] [default to 0]
 **include_applications** | **bool**|  | [optional] [default to False]
 **allowed_application_mime_types** | **str**|  | [optional] [default to &#39;&#39;]
 **include_composite_parts** | **bool**|  | [optional] [default to False]

### Return type

[**BTListResponseBTInsertableInfo**](BTListResponseBTInsertableInfo.md)

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

