# onshape_client.oas.OpenAPIApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_open_api**](OpenAPIApi.md#get_open_api) | **GET** /api/openapi | OpenAPI spec documentation for the Onshape REST API.


# **get_open_api**
> OpenAPI get_open_api(file_type=file_type, excluded_tags=excluded_tags, included_tags=included_tags, include_deprecated=include_deprecated, documentation_status=documentation_status)

OpenAPI spec documentation for the Onshape REST API.

### Example

```python
from __future__ import print_function
import time
import onshape_client.oas
from onshape_client.oas.rest import ApiException
from pprint import pprint

# Create an instance of the API class
api_instance = onshape_client.oas.OpenAPIApi()
file_type = 'JSON' # str | The type of file to return. Defaults to JSON. (optional) (default to 'JSON')
excluded_tags = 'excluded_tags_example' # str | If an operation contains an excluded tag, it is not returned from this endpoint. (optional)
included_tags = 'included_tags_example' # str | Return only operations with tags included in includedTags. (optional)
include_deprecated = True # bool | Include deprecated endpoints. (optional)
documentation_status = ['documentation_status_example'] # list[str] | Only return endpoints that have the specified document status. Default is to return all the endpoints the user should have access to. (optional)

try:
    # OpenAPI spec documentation for the Onshape REST API.
    api_response = api_instance.get_open_api(file_type=file_type, excluded_tags=excluded_tags, included_tags=included_tags, include_deprecated=include_deprecated, documentation_status=documentation_status)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling OpenAPIApi->get_open_api: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **file_type** | **str**| The type of file to return. Defaults to JSON. | [optional] [default to &#39;JSON&#39;]
 **excluded_tags** | **str**| If an operation contains an excluded tag, it is not returned from this endpoint. | [optional] 
 **included_tags** | **str**| Return only operations with tags included in includedTags. | [optional] 
 **include_deprecated** | **bool**| Include deprecated endpoints. | [optional] 
 **documentation_status** | [**list[str]**](str.md)| Only return endpoints that have the specified document status. Default is to return all the endpoints the user should have access to. | [optional] 

### Return type

[**OpenAPI**](OpenAPI.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

