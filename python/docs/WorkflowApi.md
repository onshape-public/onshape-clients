# onshape_client.oas.WorkflowApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_active_workflows**](WorkflowApi.md#get_active_workflows) | **GET** /api/workflow/active | 


# **get_active_workflows**
> bt_active_workflow_info.BTActiveWorkflowInfo get_active_workflows()



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
    api_instance = onshape_client.oas.WorkflowApi(api_client)
    document_id = '' # str |  (optional) if omitted the server will use the default value of ''

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.get_active_workflows(document_id=document_id)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling WorkflowApi->get_active_workflows: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **document_id** | **str**|  | [optional] if omitted the server will use the default value of ''

### Return type

[**bt_active_workflow_info.BTActiveWorkflowInfo**](BTActiveWorkflowInfo.md)

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

