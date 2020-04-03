# onshape_client.oas.CompaniesApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**find_company**](CompaniesApi.md#find_company) | **GET** /api/companies | Get User companies.
[**get_company**](CompaniesApi.md#get_company) | **GET** /api/companies/{cid} | Get company.


# **find_company**
> bt_list_response_bt_company_info.BTListResponseBTCompanyInfo find_company()

Get User companies.

### Example

```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.CompaniesApi(api_client)
    uid = 'uid_example' # str |  (optional)
active_only = True # bool |  (optional) if omitted the server will use the default value of True
include_all = False # bool |  (optional) if omitted the server will use the default value of False

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Get User companies.
        api_response = api_instance.find_company(uid=uid, active_only=active_only, include_all=include_all)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling CompaniesApi->find_company: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uid** | **str**|  | [optional]
 **active_only** | **bool**|  | [optional] if omitted the server will use the default value of True
 **include_all** | **bool**|  | [optional] if omitted the server will use the default value of False

### Return type

[**bt_list_response_bt_company_info.BTListResponseBTCompanyInfo**](BTListResponseBTCompanyInfo.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_company**
> bt_company_info.BTCompanyInfo get_company(cid)

Get company.

### Example

```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.CompaniesApi(api_client)
    cid = 'cid_example' # str | 
    
    # example passing only required values which don't have defaults set
    try:
        # Get company.
        api_response = api_instance.get_company(cid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling CompaniesApi->get_company: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **cid** | **str**|  |

### Return type

[**bt_company_info.BTCompanyInfo**](BTCompanyInfo.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

