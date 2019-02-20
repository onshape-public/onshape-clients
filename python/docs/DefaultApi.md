# onshape_client.DefaultApi

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_open_api**](DefaultApi.md#get_open_api) | **GET** /api/openapi | OpenAPI spec documentation for the Onshape REST API.


# **get_open_api**
> OpenAPI get_open_api(file_type=file_type, excluded_tags=excluded_tags, included_tags=included_tags, documentation_status=documentation_status)

OpenAPI spec documentation for the Onshape REST API.

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = onshape_client.DefaultApi()
file_type = 'json' # str | The type of file to return. Defaults to JSON. (optional) (default to 'json')
excluded_tags = 'excluded_tags_example' # str | If an operation contains an excluded tag, it is not returned from this endpoint. (optional)
included_tags = 'included_tags_example' # str | Return at most all the operations with tags included in includedTags. If not given, this will default to all tags. (optional)
documentation_status = ['documentation_status_example'] # list[str] | Only return endpoints that have the specified document status. Default is to return all the keys the user should have access to. (optional)

try:
    # OpenAPI spec documentation for the Onshape REST API.
    api_response = api_instance.get_open_api(file_type=file_type, excluded_tags=excluded_tags, included_tags=included_tags, documentation_status=documentation_status)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DefaultApi->get_open_api: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **file_type** | **str**| The type of file to return. Defaults to JSON. | [optional] [default to &#39;json&#39;]
 **excluded_tags** | **str**| If an operation contains an excluded tag, it is not returned from this endpoint. | [optional] 
 **included_tags** | **str**| Return at most all the operations with tags included in includedTags. If not given, this will default to all tags. | [optional] 
 **documentation_status** | [**list[str]**](str.md)| Only return endpoints that have the specified document status. Default is to return all the keys the user should have access to. | [optional] 

### Return type

[**OpenAPI**](OpenAPI.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

