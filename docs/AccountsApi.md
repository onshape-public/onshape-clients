# onshape_client.AccountsApi

All URIs are relative to *https://cad.onshape.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**cancel_purchase_new**](AccountsApi.md#cancel_purchase_new) | **DELETE** /accounts/{aid}/purchases/{pid} | Cancel Recurring Subscription
[**consume_purchase**](AccountsApi.md#consume_purchase) | **POST** /accounts/purchases/{pid}/consume | Mark Purchase Consumed For User
[**get_plan_purchases**](AccountsApi.md#get_plan_purchases) | **GET** /accounts/plans/{planId}/purchases | Get Plan Purchases
[**get_purchases**](AccountsApi.md#get_purchases) | **GET** /accounts/purchases | Get User&#39;s Appstore Purchases


# **cancel_purchase_new**
> cancel_purchase_new(pid, aid)

Cancel Recurring Subscription

Cancel a recurring subscription. This API is can be used in a context of OAuth-enabled                 application.

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.AccountsApi(onshape_client.ApiClient(configuration))
pid = 'pid_example' # str | Purchase id
aid = 'aid_example' # str | account id

try:
    # Cancel Recurring Subscription
    api_instance.cancel_purchase_new(pid, aid)
except ApiException as e:
    print("Exception when calling AccountsApi->cancel_purchase_new: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pid** | **str**| Purchase id | 
 **aid** | **str**| account id | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **consume_purchase**
> AccountsConsumePurchaseResponse200 consume_purchase(pid)

Mark Purchase Consumed For User

Mark a purchase as consumed for the specified user. This API is expected to be used in a context                 of OAuth-enabled application. Preliminary version, expected to be changed soon.

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.AccountsApi(onshape_client.ApiClient(configuration))
pid = 'pid_example' # str | Purchase id

try:
    # Mark Purchase Consumed For User
    api_response = api_instance.consume_purchase(pid)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AccountsApi->consume_purchase: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pid** | **str**| Purchase id | 

### Return type

[**AccountsConsumePurchaseResponse200**](AccountsConsumePurchaseResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_plan_purchases**
> AccountsGetPlanPurchasesResponse200 get_plan_purchases(plan_id, offset=offset, limit=limit)

Get Plan Purchases

Return a list of purchases associated with a plan, along with user information for the                 subscribers involved. Information returned depends on whether the app associated with the plan                 has the OAuth2ReadPII scope. This API can only be called by an admin of the app associated with                 the plan.

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.AccountsApi(onshape_client.ApiClient(configuration))
plan_id = 'plan_id_example' # str | Plan Id
offset = 8.14 # float | Where to begin search results (optional)
limit = 8.14 # float | Number of results to return per page (max is 20) (optional)

try:
    # Get Plan Purchases
    api_response = api_instance.get_plan_purchases(plan_id, offset=offset, limit=limit)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AccountsApi->get_plan_purchases: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **plan_id** | **str**| Plan Id | 
 **offset** | **float**| Where to begin search results | [optional] 
 **limit** | **float**| Number of results to return per page (max is 20) | [optional] 

### Return type

[**AccountsGetPlanPurchasesResponse200**](AccountsGetPlanPurchasesResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_purchases**
> AccountsGetPurchasesResponse200 get_purchases()

Get User's Appstore Purchases

Returns list of application purchases for the current user. This API is expected to be used in a                 context of OAuth-enabled application.

### Example
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = onshape_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = onshape_client.AccountsApi(onshape_client.ApiClient(configuration))

try:
    # Get User's Appstore Purchases
    api_response = api_instance.get_purchases()
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AccountsApi->get_purchases: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**AccountsGetPurchasesResponse200**](AccountsGetPurchasesResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

