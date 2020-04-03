# onshape_client.oas.VersionsApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**test_versions_get**](VersionsApi.md#test_versions_get) | **GET** /api/versions/test | 
[**test_versions_post**](VersionsApi.md#test_versions_post) | **POST** /api/versions/test | 


# **test_versions_get**
> test_versions_get()



### Example

```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.VersionsApi(api_client)
    body = 'body_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_instance.test_versions_get(body=body)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling VersionsApi->test_versions_get: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | **str**|  | [optional]

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2
 - **Accept**: application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **test_versions_post**
> test_versions_post()



### Example

```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.VersionsApi(api_client)
    body = 'body_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_instance.test_versions_post(body=body)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling VersionsApi->test_versions_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | **str**|  | [optional]

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2
 - **Accept**: application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

