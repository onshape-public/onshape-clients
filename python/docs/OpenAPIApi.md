# onshape_client.oas.OpenAPIApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_open_api**](OpenAPIApi.md#get_open_api) | **GET** /api/openapi | OpenAPI spec documentation for the Onshape REST API.


# **get_open_api**
> open_api.OpenAPI get_open_api()

OpenAPI spec documentation for the Onshape REST API.

### Example

```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.OpenAPIApi(api_client)
    excluded_tags = 'excluded_tags_example' # str | If an operation contains an excluded tag, it is not returned from this endpoint. (optional)
included_tags = 'included_tags_example' # str | Return only operations with tags included in includedTags. (optional)
include_deprecated = True # bool | Include deprecated endpoints. (optional)
documentation_status = ['documentation_status_example'] # [str] | Only return endpoints that have the specified document status. Default is to return all the endpoints the user should have access to. (optional)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # OpenAPI spec documentation for the Onshape REST API.
        api_response = api_instance.get_open_api(excluded_tags=excluded_tags, included_tags=included_tags, include_deprecated=include_deprecated, documentation_status=documentation_status)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling OpenAPIApi->get_open_api: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **excluded_tags** | **str**| If an operation contains an excluded tag, it is not returned from this endpoint. | [optional]
 **included_tags** | **str**| Return only operations with tags included in includedTags. | [optional]
 **include_deprecated** | **bool**| Include deprecated endpoints. | [optional]
 **documentation_status** | **[str]**| Only return endpoints that have the specified document status. Default is to return all the endpoints the user should have access to. | [optional]

### Return type

[**open_api.OpenAPI**](OpenAPI.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v1+yaml;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2, application/json;charset=UTF-8; qs=0.09, application/yaml;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

