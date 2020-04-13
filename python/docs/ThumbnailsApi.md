# onshape_client.oas.ThumbnailsApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**delete_application_thumbnails**](ThumbnailsApi.md#delete_application_thumbnails) | **DELETE** /api/thumbnails/d/{did}/{wv}/{wvid}/e/{eid} | 
[**get_configured_element_thumbnail_with_size**](ThumbnailsApi.md#get_configured_element_thumbnail_with_size) | **GET** /api/thumbnails/d/{did}/w/{wid}/e/{eid}/c/{cid}/s/{sz} | 
[**get_document_thumbnail**](ThumbnailsApi.md#get_document_thumbnail) | **GET** /api/thumbnails/d/{did}/w/{wid} | 
[**get_document_thumbnail_with_size**](ThumbnailsApi.md#get_document_thumbnail_with_size) | **GET** /api/thumbnails/d/{did}/w/{wid}/s/{sz} | 
[**get_element_thumbnail**](ThumbnailsApi.md#get_element_thumbnail) | **GET** /api/thumbnails/d/{did}/{wv}/{wvid}/e/{eid} | 
[**get_element_thumbnail_with_api_configuration**](ThumbnailsApi.md#get_element_thumbnail_with_api_configuration) | **GET** /api/thumbnails/d/{did}/w/{wid}/e/{eid}/ac/{cid}/s/{sz} | 
[**get_element_thumbnail_with_size**](ThumbnailsApi.md#get_element_thumbnail_with_size) | **GET** /api/thumbnails/d/{did}/w/{wid}/e/{eid}/s/{sz} | 
[**get_thumbnail_for_document**](ThumbnailsApi.md#get_thumbnail_for_document) | **GET** /api/thumbnails/d/{did} | 
[**get_thumbnail_for_document_and_version**](ThumbnailsApi.md#get_thumbnail_for_document_and_version) | **GET** /api/thumbnails/d/{did}/v/{vid} | 
[**get_thumbnail_for_document_and_version_old**](ThumbnailsApi.md#get_thumbnail_for_document_and_version_old) | **GET** /api/thumbnails/document/{did}/version/{vid} | 
[**get_thumbnail_for_document_old**](ThumbnailsApi.md#get_thumbnail_for_document_old) | **GET** /api/thumbnails/document/{did} | 
[**set_application_element_thumbnail**](ThumbnailsApi.md#set_application_element_thumbnail) | **POST** /api/thumbnails/d/{did}/{wv}/{wvid}/e/{eid} | 


# **delete_application_thumbnails**
> delete_application_thumbnails(did, wv, wvid, eid)



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
    api_instance = onshape_client.oas.ThumbnailsApi(api_client)
    did = 'did_example' # str | 
    wv = 'wv_example' # str | 
    wvid = 'wvid_example' # str | 
    eid = 'eid_example' # str | 
    
    # example passing only required values which don't have defaults set
    try:
        api_instance.delete_application_thumbnails(did, wv, wvid, eid)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ThumbnailsApi->delete_application_thumbnails: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wv** | **str**|  |
 **wvid** | **str**|  |
 **eid** | **str**|  |

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

# **get_configured_element_thumbnail_with_size**
> get_configured_element_thumbnail_with_size(did, wid, eid, cid, sz)



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
    api_instance = onshape_client.oas.ThumbnailsApi(api_client)
    did = 'did_example' # str | 
    wid = 'wid_example' # str | 
    eid = 'eid_example' # str | 
    cid = 'cid_example' # str | 
    sz = 'sz_example' # str | 
    t = 't_example' # str |  (optional)
reject_empty = False # bool |  (optional) if omitted the server will use the default value of False

    # example passing only required values which don't have defaults set
    try:
        api_instance.get_configured_element_thumbnail_with_size(did, wid, eid, cid, sz)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ThumbnailsApi->get_configured_element_thumbnail_with_size: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_instance.get_configured_element_thumbnail_with_size(did, wid, eid, cid, sz, t=t, reject_empty=reject_empty)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ThumbnailsApi->get_configured_element_thumbnail_with_size: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wid** | **str**|  |
 **eid** | **str**|  |
 **cid** | **str**|  |
 **sz** | **str**|  |
 **t** | **str**|  | [optional]
 **reject_empty** | **bool**|  | [optional] if omitted the server will use the default value of False

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: image/*

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_document_thumbnail**
> bt_thumbnail_info.BTThumbnailInfo get_document_thumbnail(did, wid)



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
    api_instance = onshape_client.oas.ThumbnailsApi(api_client)
    did = 'did_example' # str | 
    wid = 'wid_example' # str | 
    
    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.get_document_thumbnail(did, wid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ThumbnailsApi->get_document_thumbnail: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wid** | **str**|  |

### Return type

[**bt_thumbnail_info.BTThumbnailInfo**](BTThumbnailInfo.md)

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

# **get_document_thumbnail_with_size**
> get_document_thumbnail_with_size(did, wid, sz)



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
    api_instance = onshape_client.oas.ThumbnailsApi(api_client)
    did = 'did_example' # str | 
    wid = 'wid_example' # str | 
    sz = 'sz_example' # str | 
    t = 't_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        api_instance.get_document_thumbnail_with_size(did, wid, sz)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ThumbnailsApi->get_document_thumbnail_with_size: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_instance.get_document_thumbnail_with_size(did, wid, sz, t=t)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ThumbnailsApi->get_document_thumbnail_with_size: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wid** | **str**|  |
 **sz** | **str**|  |
 **t** | **str**|  | [optional]

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: image/*

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_element_thumbnail**
> bt_thumbnail_info.BTThumbnailInfo get_element_thumbnail(did, wv, wvid, eid)



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
    api_instance = onshape_client.oas.ThumbnailsApi(api_client)
    did = 'did_example' # str | 
    wv = 'wv_example' # str | 
    wvid = 'wvid_example' # str | 
    eid = 'eid_example' # str | 
    link_document_id = 'link_document_id_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.get_element_thumbnail(did, wv, wvid, eid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ThumbnailsApi->get_element_thumbnail: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.get_element_thumbnail(did, wv, wvid, eid, link_document_id=link_document_id)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ThumbnailsApi->get_element_thumbnail: %s\n" % e)
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

[**bt_thumbnail_info.BTThumbnailInfo**](BTThumbnailInfo.md)

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

# **get_element_thumbnail_with_api_configuration**
> get_element_thumbnail_with_api_configuration(did, wid, eid, cid, sz)



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
    api_instance = onshape_client.oas.ThumbnailsApi(api_client)
    did = 'did_example' # str | 
    wid = 'wid_example' # str | 
    eid = 'eid_example' # str | 
    cid = 'cid_example' # str | 
    sz = 'sz_example' # str | 
    t = 't_example' # str |  (optional)
reject_empty = False # bool |  (optional) if omitted the server will use the default value of False

    # example passing only required values which don't have defaults set
    try:
        api_instance.get_element_thumbnail_with_api_configuration(did, wid, eid, cid, sz)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ThumbnailsApi->get_element_thumbnail_with_api_configuration: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_instance.get_element_thumbnail_with_api_configuration(did, wid, eid, cid, sz, t=t, reject_empty=reject_empty)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ThumbnailsApi->get_element_thumbnail_with_api_configuration: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wid** | **str**|  |
 **eid** | **str**|  |
 **cid** | **str**|  |
 **sz** | **str**|  |
 **t** | **str**|  | [optional]
 **reject_empty** | **bool**|  | [optional] if omitted the server will use the default value of False

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: image/*

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_element_thumbnail_with_size**
> get_element_thumbnail_with_size(did, wid, eid, sz)



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
    api_instance = onshape_client.oas.ThumbnailsApi(api_client)
    did = 'did_example' # str | 
    wid = 'wid_example' # str | 
    eid = 'eid_example' # str | 
    sz = 'sz_example' # str | 
    t = 't_example' # str |  (optional)
reject_empty = False # bool |  (optional) if omitted the server will use the default value of False

    # example passing only required values which don't have defaults set
    try:
        api_instance.get_element_thumbnail_with_size(did, wid, eid, sz)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ThumbnailsApi->get_element_thumbnail_with_size: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_instance.get_element_thumbnail_with_size(did, wid, eid, sz, t=t, reject_empty=reject_empty)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ThumbnailsApi->get_element_thumbnail_with_size: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wid** | **str**|  |
 **eid** | **str**|  |
 **sz** | **str**|  |
 **t** | **str**|  | [optional]
 **reject_empty** | **bool**|  | [optional] if omitted the server will use the default value of False

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: image/*

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_thumbnail_for_document**
> bt_thumbnail_info.BTThumbnailInfo get_thumbnail_for_document(did)



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
    api_instance = onshape_client.oas.ThumbnailsApi(api_client)
    did = 'did_example' # str | 
    
    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.get_thumbnail_for_document(did)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ThumbnailsApi->get_thumbnail_for_document: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |

### Return type

[**bt_thumbnail_info.BTThumbnailInfo**](BTThumbnailInfo.md)

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

# **get_thumbnail_for_document_and_version**
> get_thumbnail_for_document_and_version(did, vid)



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
    api_instance = onshape_client.oas.ThumbnailsApi(api_client)
    did = 'did_example' # str | 
    vid = 'vid_example' # str | 
    link_document_id = 'link_document_id_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        api_instance.get_thumbnail_for_document_and_version(did, vid)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ThumbnailsApi->get_thumbnail_for_document_and_version: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_instance.get_thumbnail_for_document_and_version(did, vid, link_document_id=link_document_id)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ThumbnailsApi->get_thumbnail_for_document_and_version: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **vid** | **str**|  |
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

# **get_thumbnail_for_document_and_version_old**
> get_thumbnail_for_document_and_version_old(did, vid)



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
    api_instance = onshape_client.oas.ThumbnailsApi(api_client)
    did = 'did_example' # str | 
    vid = 'vid_example' # str | 
    
    # example passing only required values which don't have defaults set
    try:
        api_instance.get_thumbnail_for_document_and_version_old(did, vid)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ThumbnailsApi->get_thumbnail_for_document_and_version_old: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **vid** | **str**|  |

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

# **get_thumbnail_for_document_old**
> bt_thumbnail_info.BTThumbnailInfo get_thumbnail_for_document_old(did)



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
    api_instance = onshape_client.oas.ThumbnailsApi(api_client)
    did = 'did_example' # str | 
    
    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.get_thumbnail_for_document_old(did)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ThumbnailsApi->get_thumbnail_for_document_old: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |

### Return type

[**bt_thumbnail_info.BTThumbnailInfo**](BTThumbnailInfo.md)

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

# **set_application_element_thumbnail**
> set_application_element_thumbnail(did, wv, wvid, eid, bt_application_element_thumbnail_params_array)



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
    api_instance = onshape_client.oas.ThumbnailsApi(api_client)
    did = 'did_example' # str | 
    wv = 'wv_example' # str | 
    wvid = 'wvid_example' # str | 
    eid = 'eid_example' # str | 
    bt_application_element_thumbnail_params_array = onshape_client.oas.BTApplicationElementThumbnailParamsArray() # bt_application_element_thumbnail_params_array.BTApplicationElementThumbnailParamsArray | 
    overwrite = False # bool |  (optional) if omitted the server will use the default value of False

    # example passing only required values which don't have defaults set
    try:
        api_instance.set_application_element_thumbnail(did, wv, wvid, eid, bt_application_element_thumbnail_params_array)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ThumbnailsApi->set_application_element_thumbnail: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_instance.set_application_element_thumbnail(did, wv, wvid, eid, bt_application_element_thumbnail_params_array, overwrite=overwrite)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ThumbnailsApi->set_application_element_thumbnail: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wv** | **str**|  |
 **wvid** | **str**|  |
 **eid** | **str**|  |
 **bt_application_element_thumbnail_params_array** | [**bt_application_element_thumbnail_params_array.BTApplicationElementThumbnailParamsArray**](BTApplicationElementThumbnailParamsArray.md)|  |
 **overwrite** | **bool**|  | [optional] if omitted the server will use the default value of False

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

