# onshape_client.oas.MetadataApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_veop_standard_content_metadata**](MetadataApi.md#get_veop_standard_content_metadata) | **GET** /api/metadata/standardcontent/d/{did}/v/{vid}/e/{eid}/{otype}/{oid}/p/{pid} | 
[**get_wmv_es_metadata**](MetadataApi.md#get_wmv_es_metadata) | **GET** /api/metadata/d/{did}/{wvm}/{wvmid}/e | 
[**get_wmve_metadata**](MetadataApi.md#get_wmve_metadata) | **GET** /api/metadata/d/{did}/{wvm}/{wvmid}/e/{eid} | 
[**get_wmve_ps_metadata**](MetadataApi.md#get_wmve_ps_metadata) | **GET** /api/metadata/d/{did}/{wvm}/{wvmid}/e/{eid}/p | 
[**get_wmvep_metadata**](MetadataApi.md#get_wmvep_metadata) | **GET** /api/metadata/d/{did}/{wvm}/{wvmid}/e/{eid}/p/{pid} | 
[**get_wv_metadata**](MetadataApi.md#get_wv_metadata) | **GET** /api/metadata/d/{did}/{wv}/{wvid} | 
[**update_veop_standard_content_part_metadata**](MetadataApi.md#update_veop_standard_content_part_metadata) | **POST** /api/metadata/standardcontent/d/{did}/v/{vid}/e/{eid}/{otype}/{oid}/p/{pid} | 
[**update_wv_metadata**](MetadataApi.md#update_wv_metadata) | **POST** /api/metadata/d/{did}/{wv}/{wvid} | 
[**update_wve_metadata**](MetadataApi.md#update_wve_metadata) | **POST** /api/metadata/d/{did}/{wvm}/{wvmid}/e/{eid} | 
[**update_wvep_metadata**](MetadataApi.md#update_wvep_metadata) | **POST** /api/metadata/d/{did}/{wvm}/{wvmid}/e/{eid}/p/{pid} | 


# **get_veop_standard_content_metadata**
> get_veop_standard_content_metadata(did, vid, eid, otype, oid, pid)



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
    api_instance = onshape_client.oas.MetadataApi(api_client)
    did = 'did_example' # str | 
    vid = 'vid_example' # str | 
    eid = 'eid_example' # str | 
    otype = 'otype_example' # str | 
    oid = 'oid_example' # str | 
    pid = 'pid_example' # str | 
    configuration = 'configuration_example' # str |  (optional)
link_document_id = 'link_document_id_example' # str |  (optional)
thumbnail = False # bool |  (optional) if omitted the server will use the default value of False

    # example passing only required values which don't have defaults set
    try:
        api_instance.get_veop_standard_content_metadata(did, vid, eid, otype, oid, pid)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling MetadataApi->get_veop_standard_content_metadata: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_instance.get_veop_standard_content_metadata(did, vid, eid, otype, oid, pid, configuration=configuration, link_document_id=link_document_id, thumbnail=thumbnail)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling MetadataApi->get_veop_standard_content_metadata: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **vid** | **str**|  |
 **eid** | **str**|  |
 **otype** | **str**|  |
 **oid** | **str**|  |
 **pid** | **str**|  |
 **configuration** | **str**|  | [optional]
 **link_document_id** | **str**|  | [optional]
 **thumbnail** | **bool**|  | [optional] if omitted the server will use the default value of False

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

# **get_wmv_es_metadata**
> get_wmv_es_metadata(did, wvm, wvmid)



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
    api_instance = onshape_client.oas.MetadataApi(api_client)
    did = 'did_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    link_document_id = 'link_document_id_example' # str |  (optional)
infer_metadata_owner = False # bool |  (optional) if omitted the server will use the default value of False
depth = '1' # str |  (optional) if omitted the server will use the default value of '1'
thumbnail = False # bool |  (optional) if omitted the server will use the default value of False

    # example passing only required values which don't have defaults set
    try:
        api_instance.get_wmv_es_metadata(did, wvm, wvmid)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling MetadataApi->get_wmv_es_metadata: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_instance.get_wmv_es_metadata(did, wvm, wvmid, link_document_id=link_document_id, infer_metadata_owner=infer_metadata_owner, depth=depth, thumbnail=thumbnail)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling MetadataApi->get_wmv_es_metadata: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **link_document_id** | **str**|  | [optional]
 **infer_metadata_owner** | **bool**|  | [optional] if omitted the server will use the default value of False
 **depth** | **str**|  | [optional] if omitted the server will use the default value of '1'
 **thumbnail** | **bool**|  | [optional] if omitted the server will use the default value of False

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

# **get_wmve_metadata**
> get_wmve_metadata(did, wvm, wvmid, eid)



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
    api_instance = onshape_client.oas.MetadataApi(api_client)
    did = 'did_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    eid = 'eid_example' # str | 
    configuration = 'configuration_example' # str |  (optional)
link_document_id = 'link_document_id_example' # str |  (optional)
infer_metadata_owner = False # bool |  (optional) if omitted the server will use the default value of False
depth = '1' # str |  (optional) if omitted the server will use the default value of '1'
thumbnail = False # bool |  (optional) if omitted the server will use the default value of False

    # example passing only required values which don't have defaults set
    try:
        api_instance.get_wmve_metadata(did, wvm, wvmid, eid)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling MetadataApi->get_wmve_metadata: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_instance.get_wmve_metadata(did, wvm, wvmid, eid, configuration=configuration, link_document_id=link_document_id, infer_metadata_owner=infer_metadata_owner, depth=depth, thumbnail=thumbnail)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling MetadataApi->get_wmve_metadata: %s\n" % e)
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
 **infer_metadata_owner** | **bool**|  | [optional] if omitted the server will use the default value of False
 **depth** | **str**|  | [optional] if omitted the server will use the default value of '1'
 **thumbnail** | **bool**|  | [optional] if omitted the server will use the default value of False

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

# **get_wmve_ps_metadata**
> get_wmve_ps_metadata(did, wvm, wvmid, eid)



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
    api_instance = onshape_client.oas.MetadataApi(api_client)
    did = 'did_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    eid = 'eid_example' # str | 
    configuration = 'configuration_example' # str |  (optional)
link_document_id = 'link_document_id_example' # str |  (optional)
infer_metadata_owner = False # bool |  (optional) if omitted the server will use the default value of False
thumbnail = False # bool |  (optional) if omitted the server will use the default value of False

    # example passing only required values which don't have defaults set
    try:
        api_instance.get_wmve_ps_metadata(did, wvm, wvmid, eid)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling MetadataApi->get_wmve_ps_metadata: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_instance.get_wmve_ps_metadata(did, wvm, wvmid, eid, configuration=configuration, link_document_id=link_document_id, infer_metadata_owner=infer_metadata_owner, thumbnail=thumbnail)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling MetadataApi->get_wmve_ps_metadata: %s\n" % e)
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
 **infer_metadata_owner** | **bool**|  | [optional] if omitted the server will use the default value of False
 **thumbnail** | **bool**|  | [optional] if omitted the server will use the default value of False

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

# **get_wmvep_metadata**
> get_wmvep_metadata(did, wvm, wvmid, eid, pid)



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
    api_instance = onshape_client.oas.MetadataApi(api_client)
    did = 'did_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    eid = 'eid_example' # str | 
    pid = 'pid_example' # str | 
    configuration = 'configuration_example' # str |  (optional)
link_document_id = 'link_document_id_example' # str |  (optional)
infer_metadata_owner = False # bool |  (optional) if omitted the server will use the default value of False
thumbnail = False # bool |  (optional) if omitted the server will use the default value of False

    # example passing only required values which don't have defaults set
    try:
        api_instance.get_wmvep_metadata(did, wvm, wvmid, eid, pid)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling MetadataApi->get_wmvep_metadata: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_instance.get_wmvep_metadata(did, wvm, wvmid, eid, pid, configuration=configuration, link_document_id=link_document_id, infer_metadata_owner=infer_metadata_owner, thumbnail=thumbnail)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling MetadataApi->get_wmvep_metadata: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **eid** | **str**|  |
 **pid** | **str**|  |
 **configuration** | **str**|  | [optional]
 **link_document_id** | **str**|  | [optional]
 **infer_metadata_owner** | **bool**|  | [optional] if omitted the server will use the default value of False
 **thumbnail** | **bool**|  | [optional] if omitted the server will use the default value of False

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

# **get_wv_metadata**
> get_wv_metadata(did, wv, wvid)



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
    api_instance = onshape_client.oas.MetadataApi(api_client)
    did = 'did_example' # str | 
    wv = 'wv_example' # str | 
    wvid = 'wvid_example' # str | 
    link_document_id = 'link_document_id_example' # str |  (optional)
infer_metadata_owner = False # bool |  (optional) if omitted the server will use the default value of False
depth = '1' # str |  (optional) if omitted the server will use the default value of '1'
thumbnail = False # bool |  (optional) if omitted the server will use the default value of False

    # example passing only required values which don't have defaults set
    try:
        api_instance.get_wv_metadata(did, wv, wvid)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling MetadataApi->get_wv_metadata: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_instance.get_wv_metadata(did, wv, wvid, link_document_id=link_document_id, infer_metadata_owner=infer_metadata_owner, depth=depth, thumbnail=thumbnail)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling MetadataApi->get_wv_metadata: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wv** | **str**|  |
 **wvid** | **str**|  |
 **link_document_id** | **str**|  | [optional]
 **infer_metadata_owner** | **bool**|  | [optional] if omitted the server will use the default value of False
 **depth** | **str**|  | [optional] if omitted the server will use the default value of '1'
 **thumbnail** | **bool**|  | [optional] if omitted the server will use the default value of False

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

# **update_veop_standard_content_part_metadata**
> update_veop_standard_content_part_metadata(did, vid, eid, otype, oid, pid, body)



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
    api_instance = onshape_client.oas.MetadataApi(api_client)
    did = 'did_example' # str | 
    vid = 'vid_example' # str | 
    eid = 'eid_example' # str | 
    otype = 'otype_example' # str | 
    oid = 'oid_example' # str | 
    pid = 'pid_example' # str | 
    body = 'body_example' # str | 
    link_document_id = 'link_document_id_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        api_instance.update_veop_standard_content_part_metadata(did, vid, eid, otype, oid, pid, body)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling MetadataApi->update_veop_standard_content_part_metadata: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_instance.update_veop_standard_content_part_metadata(did, vid, eid, otype, oid, pid, body, link_document_id=link_document_id)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling MetadataApi->update_veop_standard_content_part_metadata: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **vid** | **str**|  |
 **eid** | **str**|  |
 **otype** | **str**|  |
 **oid** | **str**|  |
 **pid** | **str**|  |
 **body** | **str**|  |
 **link_document_id** | **str**|  | [optional]

### Return type

void (empty response body)

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

# **update_wv_metadata**
> update_wv_metadata(did, wv, wvid, body)



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
    api_instance = onshape_client.oas.MetadataApi(api_client)
    did = 'did_example' # str | 
    wv = 'wv_example' # str | 
    wvid = 'wvid_example' # str | 
    body = 'body_example' # str | 
    
    # example passing only required values which don't have defaults set
    try:
        api_instance.update_wv_metadata(did, wv, wvid, body)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling MetadataApi->update_wv_metadata: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wv** | **str**|  |
 **wvid** | **str**|  |
 **body** | **str**|  |

### Return type

void (empty response body)

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

# **update_wve_metadata**
> update_wve_metadata(did, wvm, wvmid, eid, body)



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
    api_instance = onshape_client.oas.MetadataApi(api_client)
    did = 'did_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    eid = 'eid_example' # str | 
    body = 'body_example' # str | 
    configuration = 'configuration_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        api_instance.update_wve_metadata(did, wvm, wvmid, eid, body)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling MetadataApi->update_wve_metadata: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_instance.update_wve_metadata(did, wvm, wvmid, eid, body, configuration=configuration)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling MetadataApi->update_wve_metadata: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **eid** | **str**|  |
 **body** | **str**|  |
 **configuration** | **str**|  | [optional]

### Return type

void (empty response body)

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

# **update_wvep_metadata**
> update_wvep_metadata(did, wvm, wvmid, eid, pid, sub_resource, body)



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
    api_instance = onshape_client.oas.MetadataApi(api_client)
    did = 'did_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    eid = 'eid_example' # str | 
    pid = 'pid_example' # str | 
    sub_resource = 'sub_resource_example' # str | 
    body = 'body_example' # str | 
    configuration = 'configuration_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        api_instance.update_wvep_metadata(did, wvm, wvmid, eid, pid, sub_resource, body)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling MetadataApi->update_wvep_metadata: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_instance.update_wvep_metadata(did, wvm, wvmid, eid, pid, sub_resource, body, configuration=configuration)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling MetadataApi->update_wvep_metadata: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **eid** | **str**|  |
 **pid** | **str**|  |
 **sub_resource** | **str**|  |
 **body** | **str**|  |
 **configuration** | **str**|  | [optional]

### Return type

void (empty response body)

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

