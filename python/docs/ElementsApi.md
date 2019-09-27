# onshape_client.oas.ElementsApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**copy_element_from_source_document**](ElementsApi.md#copy_element_from_source_document) | **POST** /api/elements/copyelement/{did}/workspace/{wid} | 
[**decode_configuration**](ElementsApi.md#decode_configuration) | **GET** /api/elements/d/{did}/{wvm}/{wvmid}/e/{eid}/configurationencodings/{cid} | 
[**delete8**](ElementsApi.md#delete8) | **DELETE** /api/elements/d/{did}/w/{wid}/e/{eid} | 
[**encode_configuration_map**](ElementsApi.md#encode_configuration_map) | **POST** /api/elements/d/{did}/e/{eid}/configurationencodings | 
[**get_configuration**](ElementsApi.md#get_configuration) | **GET** /api/elements/d/{did}/{wvm}/{wvmid}/e/{eid}/configuration | 
[**get_element_by_version_deprecated**](ElementsApi.md#get_element_by_version_deprecated) | **GET** /api/elements/{did}/version/{vid} | 
[**get_element_by_workspace_deprecated**](ElementsApi.md#get_element_by_workspace_deprecated) | **GET** /api/elements/{did}/workspace/{wid} | 
[**get_element_metadata**](ElementsApi.md#get_element_metadata) | **GET** /api/elements/d/{did}/{wv}/{wvid}/e/{eid}/metadata | 
[**get_element_metadata_deprecated**](ElementsApi.md#get_element_metadata_deprecated) | **GET** /api/elements/{emid} | 
[**get_element_translator_formats**](ElementsApi.md#get_element_translator_formats) | **GET** /api/elements/translatorFormats/{did}/{wid}/{eid} | 
[**get_translator_formats3**](ElementsApi.md#get_translator_formats3) | **GET** /api/elements/translatorFormats | 
[**update_configuration**](ElementsApi.md#update_configuration) | **POST** /api/elements/d/{did}/{wvm}/{wvmid}/e/{eid}/configuration | 
[**update_element_metadata**](ElementsApi.md#update_element_metadata) | **POST** /api/elements/d/{did}/{wv}/{wvid}/e/{eid}/metadata | 
[**update_references**](ElementsApi.md#update_references) | **POST** /api/elements/d/{did}/w/{wid}/e/{eid}/updatereferences | 
[**upload_file1**](ElementsApi.md#upload_file1) | **POST** /api/elements/upload/{did} | 


# **copy_element_from_source_document**
> copy_element_from_source_document(did, wid, bt_copy_element_params)



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
api_instance = onshape_client.oas.ElementsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wid = 'wid_example' # str | 
bt_copy_element_params = onshape_client.oas.BTCopyElementParams() # BTCopyElementParams | 

try:
    api_instance.copy_element_from_source_document(did, wid, bt_copy_element_params)
except ApiException as e:
    print("Exception when calling ElementsApi->copy_element_from_source_document: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wid** | **str**|  | 
 **bt_copy_element_params** | [**BTCopyElementParams**](BTCopyElementParams.md)|  | 

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

# **decode_configuration**
> decode_configuration(did, wvm, wvmid, eid, cid, link_document_id=link_document_id, include_display=include_display, configuration_is_id=configuration_is_id)



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
api_instance = onshape_client.oas.ElementsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wvm = 'wvm_example' # str | 
wvmid = 'wvmid_example' # str | 
eid = 'eid_example' # str | 
cid = 'cid_example' # str | 
link_document_id = 'link_document_id_example' # str |  (optional)
include_display = False # bool |  (optional) (default to False)
configuration_is_id = False # bool |  (optional) (default to False)

try:
    api_instance.decode_configuration(did, wvm, wvmid, eid, cid, link_document_id=link_document_id, include_display=include_display, configuration_is_id=configuration_is_id)
except ApiException as e:
    print("Exception when calling ElementsApi->decode_configuration: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wvm** | **str**|  | 
 **wvmid** | **str**|  | 
 **eid** | **str**|  | 
 **cid** | **str**|  | 
 **link_document_id** | **str**|  | [optional] 
 **include_display** | **bool**|  | [optional] [default to False]
 **configuration_is_id** | **bool**|  | [optional] [default to False]

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

# **delete8**
> delete8(did, wid, eid)



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
api_instance = onshape_client.oas.ElementsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wid = 'wid_example' # str | 
eid = 'eid_example' # str | 

try:
    api_instance.delete8(did, wid, eid)
except ApiException as e:
    print("Exception when calling ElementsApi->delete8: %s\n" % e)
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

# **encode_configuration_map**
> encode_configuration_map(did, eid, bt_configuration_params, version_id=version_id, link_document_id=link_document_id)



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
api_instance = onshape_client.oas.ElementsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
eid = 'eid_example' # str | 
bt_configuration_params = onshape_client.oas.BTConfigurationParams() # BTConfigurationParams | 
version_id = 'version_id_example' # str |  (optional)
link_document_id = 'link_document_id_example' # str |  (optional)

try:
    api_instance.encode_configuration_map(did, eid, bt_configuration_params, version_id=version_id, link_document_id=link_document_id)
except ApiException as e:
    print("Exception when calling ElementsApi->encode_configuration_map: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **eid** | **str**|  | 
 **bt_configuration_params** | [**BTConfigurationParams**](BTConfigurationParams.md)|  | 
 **version_id** | **str**|  | [optional] 
 **link_document_id** | **str**|  | [optional] 

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

# **get_configuration**
> get_configuration(did, wvm, wvmid, eid)



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
api_instance = onshape_client.oas.ElementsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wvm = 'wvm_example' # str | 
wvmid = 'wvmid_example' # str | 
eid = 'eid_example' # str | 

try:
    api_instance.get_configuration(did, wvm, wvmid, eid)
except ApiException as e:
    print("Exception when calling ElementsApi->get_configuration: %s\n" % e)
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

# **get_element_by_version_deprecated**
> get_element_by_version_deprecated(did, vid, with_thumbnails=with_thumbnails)



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
api_instance = onshape_client.oas.ElementsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
vid = 'vid_example' # str | 
with_thumbnails = False # bool |  (optional) (default to False)

try:
    api_instance.get_element_by_version_deprecated(did, vid, with_thumbnails=with_thumbnails)
except ApiException as e:
    print("Exception when calling ElementsApi->get_element_by_version_deprecated: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **vid** | **str**|  | 
 **with_thumbnails** | **bool**|  | [optional] [default to False]

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

# **get_element_by_workspace_deprecated**
> get_element_by_workspace_deprecated(did, wid, with_thumbnails=with_thumbnails)



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
api_instance = onshape_client.oas.ElementsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wid = 'wid_example' # str | 
with_thumbnails = False # bool |  (optional) (default to False)

try:
    api_instance.get_element_by_workspace_deprecated(did, wid, with_thumbnails=with_thumbnails)
except ApiException as e:
    print("Exception when calling ElementsApi->get_element_by_workspace_deprecated: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wid** | **str**|  | 
 **with_thumbnails** | **bool**|  | [optional] [default to False]

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

# **get_element_metadata**
> get_element_metadata(did, wv, wvid, eid, link_document_id=link_document_id)



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
api_instance = onshape_client.oas.ElementsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wv = 'wv_example' # str | 
wvid = 'wvid_example' # str | 
eid = 'eid_example' # str | 
link_document_id = 'link_document_id_example' # str |  (optional)

try:
    api_instance.get_element_metadata(did, wv, wvid, eid, link_document_id=link_document_id)
except ApiException as e:
    print("Exception when calling ElementsApi->get_element_metadata: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wv** | **str**|  | 
 **wvid** | **str**|  | 
 **eid** | **str**|  | 
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

# **get_element_metadata_deprecated**
> get_element_metadata_deprecated(emid)



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
api_instance = onshape_client.oas.ElementsApi(onshape_client.oas.ApiClient(configuration))
emid = 'emid_example' # str | 

try:
    api_instance.get_element_metadata_deprecated(emid)
except ApiException as e:
    print("Exception when calling ElementsApi->get_element_metadata_deprecated: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **emid** | **str**|  | 

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

# **get_element_translator_formats**
> get_element_translator_formats(did, wid, eid, check_content=check_content, configuration=configuration)



### Example

```python
from __future__ import print_function
import time
import onshape_client.oas
from onshape_client.oas.rest import ApiException
from pprint import pprint

# Create an instance of the API class
api_instance = onshape_client.oas.ElementsApi()
did = 'did_example' # str | 
wid = 'wid_example' # str | 
eid = 'eid_example' # str | 
check_content = True # bool |  (optional) (default to True)
configuration = '' # str |  (optional) (default to '')

try:
    api_instance.get_element_translator_formats(did, wid, eid, check_content=check_content, configuration=configuration)
except ApiException as e:
    print("Exception when calling ElementsApi->get_element_translator_formats: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wid** | **str**|  | 
 **eid** | **str**|  | 
 **check_content** | **bool**|  | [optional] [default to True]
 **configuration** | **str**|  | [optional] [default to &#39;&#39;]

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

# **get_translator_formats3**
> get_translator_formats3()



### Example

```python
from __future__ import print_function
import time
import onshape_client.oas
from onshape_client.oas.rest import ApiException
from pprint import pprint

# Create an instance of the API class
api_instance = onshape_client.oas.ElementsApi()

try:
    api_instance.get_translator_formats3()
except ApiException as e:
    print("Exception when calling ElementsApi->get_translator_formats3: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

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

# **update_configuration**
> update_configuration(did, wvm, wvmid, eid, body=body)



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
api_instance = onshape_client.oas.ElementsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wvm = 'wvm_example' # str | 
wvmid = 'wvmid_example' # str | 
eid = 'eid_example' # str | 
body = 'body_example' # str |  (optional)

try:
    api_instance.update_configuration(did, wvm, wvmid, eid, body=body)
except ApiException as e:
    print("Exception when calling ElementsApi->update_configuration: %s\n" % e)
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

# **update_element_metadata**
> update_element_metadata(did, wv, wvid, eid, btpdm_metadata_params)



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
api_instance = onshape_client.oas.ElementsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wv = 'wv_example' # str | 
wvid = 'wvid_example' # str | 
eid = 'eid_example' # str | 
btpdm_metadata_params = onshape_client.oas.BTPDMMetadataParams() # BTPDMMetadataParams | 

try:
    api_instance.update_element_metadata(did, wv, wvid, eid, btpdm_metadata_params)
except ApiException as e:
    print("Exception when calling ElementsApi->update_element_metadata: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wv** | **str**|  | 
 **wvid** | **str**|  | 
 **eid** | **str**|  | 
 **btpdm_metadata_params** | [**BTPDMMetadataParams**](BTPDMMetadataParams.md)|  | 

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

# **update_references**
> update_references(did, wid, eid, bt_update_reference_params)



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
api_instance = onshape_client.oas.ElementsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wid = 'wid_example' # str | 
eid = 'eid_example' # str | 
bt_update_reference_params = onshape_client.oas.BTUpdateReferenceParams() # BTUpdateReferenceParams | 

try:
    api_instance.update_references(did, wid, eid, bt_update_reference_params)
except ApiException as e:
    print("Exception when calling ElementsApi->update_references: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wid** | **str**|  | 
 **eid** | **str**|  | 
 **bt_update_reference_params** | [**BTUpdateReferenceParams**](BTUpdateReferenceParams.md)|  | 

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

# **upload_file1**
> upload_file1(did, element_id=element_id, workspace_id=workspace_id, content_disposition=content_disposition, entity=entity, media_type=media_type, message_body_workers=message_body_workers, parent=parent, providers=providers, body_parts=body_parts)



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
api_instance = onshape_client.oas.ElementsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
element_id = 'element_id_example' # str |  (optional)
workspace_id = 'workspace_id_example' # str |  (optional)
content_disposition = onshape_client.oas.ContentDisposition() # ContentDisposition |  (optional)
entity = None # object |  (optional)
media_type = onshape_client.oas.BodyPartMediaType() # BodyPartMediaType |  (optional)
message_body_workers = None # object |  (optional)
parent = onshape_client.oas.MultiPart() # MultiPart |  (optional)
providers = None # object |  (optional)
body_parts = onshape_client.oas.BodyPart() # list[BodyPart] |  (optional)

try:
    api_instance.upload_file1(did, element_id=element_id, workspace_id=workspace_id, content_disposition=content_disposition, entity=entity, media_type=media_type, message_body_workers=message_body_workers, parent=parent, providers=providers, body_parts=body_parts)
except ApiException as e:
    print("Exception when calling ElementsApi->upload_file1: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **element_id** | **str**|  | [optional] 
 **workspace_id** | **str**|  | [optional] 
 **content_disposition** | [**ContentDisposition**](ContentDisposition.md)|  | [optional] 
 **entity** | [**object**](object.md)|  | [optional] 
 **media_type** | [**BodyPartMediaType**](BodyPartMediaType.md)|  | [optional] 
 **message_body_workers** | [**object**](object.md)|  | [optional] 
 **parent** | [**MultiPart**](MultiPart.md)|  | [optional] 
 **providers** | [**object**](object.md)|  | [optional] 
 **body_parts** | [**list[BodyPart]**](BodyPart.md)|  | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

