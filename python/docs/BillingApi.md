# onshape_client.oas.BillingApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_client_plans**](BillingApi.md#get_client_plans) | **GET** /api/billing/plans/client/{cid} | Get billing plans for client.


# **get_client_plans**
> get_client_plans(cid)

Get billing plans for client.

### Example

```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.BillingApi(api_client)
    cid = 'cid_example' # str | 
    
    # example passing only required values which don't have defaults set
    try:
        # Get billing plans for client.
        api_instance.get_client_plans(cid)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling BillingApi->get_client_plans: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **cid** | **str**|  |

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

