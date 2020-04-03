# onshape_client.oas.AccountsApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**cancel_purchase_new**](AccountsApi.md#cancel_purchase_new) | **DELETE** /api/accounts/{aid}/purchases/{pid} | Cancel Recurring Subscription
[**consume_purchase**](AccountsApi.md#consume_purchase) | **POST** /api/accounts/purchases/{pid}/consume | Mark Purchase Consumed For User
[**get_plan_purchases**](AccountsApi.md#get_plan_purchases) | **GET** /api/accounts/plans/{planId}/purchases | Get Plan Purchases
[**get_purchases**](AccountsApi.md#get_purchases) | **GET** /api/accounts/purchases | Get User&#39;s Appstore Purchases.


# **cancel_purchase_new**
> cancel_purchase_new(aid, pid)

Cancel Recurring Subscription

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
    api_instance = onshape_client.oas.AccountsApi(api_client)
    aid = 'aid_example' # str | 
    pid = 'pid_example' # str | 
    cancel_immediately = False # bool |  (optional) if omitted the server will use the default value of False

    # example passing only required values which don't have defaults set
    try:
        # Cancel Recurring Subscription
        api_instance.cancel_purchase_new(aid, pid)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling AccountsApi->cancel_purchase_new: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Cancel Recurring Subscription
        api_instance.cancel_purchase_new(aid, pid, cancel_immediately=cancel_immediately)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling AccountsApi->cancel_purchase_new: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **aid** | **str**|  |
 **pid** | **str**|  |
 **cancel_immediately** | **bool**|  | [optional] if omitted the server will use the default value of False

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

# **consume_purchase**
> bt_purchase_info.BTPurchaseInfo consume_purchase(pid)

Mark Purchase Consumed For User

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
    api_instance = onshape_client.oas.AccountsApi(api_client)
    pid = 'pid_example' # str | 
    bt_purchase_user_params = onshape_client.oas.BTPurchaseUserParams() # bt_purchase_user_params.BTPurchaseUserParams |  (optional)

    # example passing only required values which don't have defaults set
    try:
        # Mark Purchase Consumed For User
        api_response = api_instance.consume_purchase(pid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling AccountsApi->consume_purchase: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Mark Purchase Consumed For User
        api_response = api_instance.consume_purchase(pid, bt_purchase_user_params=bt_purchase_user_params)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling AccountsApi->consume_purchase: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pid** | **str**|  |
 **bt_purchase_user_params** | [**bt_purchase_user_params.BTPurchaseUserParams**](BTPurchaseUserParams.md)|  | [optional]

### Return type

[**bt_purchase_info.BTPurchaseInfo**](BTPurchaseInfo.md)

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

# **get_plan_purchases**
> bt_list_response_bt_purchase_info.BTListResponseBTPurchaseInfo get_plan_purchases(plan_id)

Get Plan Purchases

### Example

```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.AccountsApi(api_client)
    plan_id = 'plan_id_example' # str | 
    offset = 0 # int |  (optional) if omitted the server will use the default value of 0
limit = 20 # int |  (optional) if omitted the server will use the default value of 20

    # example passing only required values which don't have defaults set
    try:
        # Get Plan Purchases
        api_response = api_instance.get_plan_purchases(plan_id)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling AccountsApi->get_plan_purchases: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Get Plan Purchases
        api_response = api_instance.get_plan_purchases(plan_id, offset=offset, limit=limit)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling AccountsApi->get_plan_purchases: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **plan_id** | **str**|  |
 **offset** | **int**|  | [optional] if omitted the server will use the default value of 0
 **limit** | **int**|  | [optional] if omitted the server will use the default value of 20

### Return type

[**bt_list_response_bt_purchase_info.BTListResponseBTPurchaseInfo**](BTListResponseBTPurchaseInfo.md)

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

# **get_purchases**
> [bt_purchase_info.BTPurchaseInfo] get_purchases()

Get User's Appstore Purchases.

### Example

```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.AccountsApi(api_client)
    all = False # bool |  (optional) if omitted the server will use the default value of False
own_purchase_only = False # bool |  (optional) if omitted the server will use the default value of False

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Get User's Appstore Purchases.
        api_response = api_instance.get_purchases(all=all, own_purchase_only=own_purchase_only)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling AccountsApi->get_purchases: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **all** | **bool**|  | [optional] if omitted the server will use the default value of False
 **own_purchase_only** | **bool**|  | [optional] if omitted the server will use the default value of False

### Return type

[**[bt_purchase_info.BTPurchaseInfo]**](BTPurchaseInfo.md)

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

