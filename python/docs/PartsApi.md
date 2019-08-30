# onshape_client.oas.PartsApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_parts_wmv**](PartsApi.md#get_parts_wmv) | **GET** /api/parts/d/{did}/{wvm}/{wvmid} | Get list of parts
[**get_parts_wmve**](PartsApi.md#get_parts_wmve) | **GET** /api/parts/d/{did}/{wvm}/{wvmid}/e/{eid} | Get parts from an element.
[**update_parts_wmv**](PartsApi.md#update_parts_wmv) | **POST** /api/parts/d/{did}/{wvm}/{wvmid} | Part metadata batch update.


# **get_parts_wmv**
> list[BTPartMetadataInfo] get_parts_wmv(did, wvm, wvmid, element_id=element_id, with_thumbnails=with_thumbnails, include_property_defaults=include_property_defaults, link_document_id=link_document_id, configuration=configuration)

Get list of parts

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
api_instance = onshape_client.oas.PartsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | Document ID.
wvm = 'wvm_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
wvmid = 'wvmid_example' # str | Workspace (w), Version (v) or Microversion (m) ID.
element_id = 'element_id_example' # str | Element ID (optional)
with_thumbnails = False # bool | Whether or not to include thumbnails (not supported for microversion) (optional) (default to False)
include_property_defaults = False # bool | If true, include metadata schema property defaults in response (optional) (default to False)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)
configuration = 'configuration_example' # str | Configuration string. (optional)

try:
    # Get list of parts
    api_response = api_instance.get_parts_wmv(did, wvm, wvmid, element_id=element_id, with_thumbnails=with_thumbnails, include_property_defaults=include_property_defaults, link_document_id=link_document_id, configuration=configuration)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartsApi->get_parts_wmv: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. | 
 **wvm** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **wvmid** | **str**| Workspace (w), Version (v) or Microversion (m) ID. | 
 **element_id** | **str**| Element ID | [optional] 
 **with_thumbnails** | **bool**| Whether or not to include thumbnails (not supported for microversion) | [optional] [default to False]
 **include_property_defaults** | **bool**| If true, include metadata schema property defaults in response | [optional] [default to False]
 **link_document_id** | **str**| Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 
 **configuration** | **str**| Configuration string. | [optional] 

### Return type

[**list[BTPartMetadataInfo]**](BTPartMetadataInfo.md)

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

# **get_parts_wmve**
> list[BTPartMetadataInfo] get_parts_wmve(did, wvm, wvmid, eid, with_thumbnails=with_thumbnails, include_property_defaults=include_property_defaults, configuration=configuration, link_document_id=link_document_id)

Get parts from an element.

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
api_instance = onshape_client.oas.PartsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | Document ID.
wvm = 'wvm_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
wvmid = 'wvmid_example' # str | Workspace (w), Version (v) or Microversion (m) ID.
eid = 'eid_example' # str | Element ID.
with_thumbnails = False # bool | Whether or not to include thumbnails (not supported for microversion) (optional) (default to False)
include_property_defaults = False # bool | If true, include metadata schema property defaults in response (optional) (default to False)
configuration = 'configuration_example' # str | Configuration string. (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

try:
    # Get parts from an element.
    api_response = api_instance.get_parts_wmve(did, wvm, wvmid, eid, with_thumbnails=with_thumbnails, include_property_defaults=include_property_defaults, configuration=configuration, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling PartsApi->get_parts_wmve: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. | 
 **wvm** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **wvmid** | **str**| Workspace (w), Version (v) or Microversion (m) ID. | 
 **eid** | **str**| Element ID. | 
 **with_thumbnails** | **bool**| Whether or not to include thumbnails (not supported for microversion) | [optional] [default to False]
 **include_property_defaults** | **bool**| If true, include metadata schema property defaults in response | [optional] [default to False]
 **configuration** | **str**| Configuration string. | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 

### Return type

[**list[BTPartMetadataInfo]**](BTPartMetadataInfo.md)

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

# **update_parts_wmv**
> update_parts_wmv(did, wvm, wvmid, edit_description=edit_description, body=body)

Part metadata batch update.

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
api_instance = onshape_client.oas.PartsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | Document ID.
wvm = 'wvm_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
wvmid = 'wvmid_example' # str | Workspace (w), Version (v) or Microversion (m) ID.
edit_description = 'edit_description_example' # str | Description of the update (as appear in document history) (optional)
body = 'body_example' # str |  (optional)

try:
    # Part metadata batch update.
    api_instance.update_parts_wmv(did, wvm, wvmid, edit_description=edit_description, body=body)
except ApiException as e:
    print("Exception when calling PartsApi->update_parts_wmv: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. | 
 **wvm** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **wvmid** | **str**| Workspace (w), Version (v) or Microversion (m) ID. | 
 **edit_description** | **str**| Description of the update (as appear in document history) | [optional] 
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

