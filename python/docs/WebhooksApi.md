# onshape_client.oas.WebhooksApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create_webhook**](WebhooksApi.md#create_webhook) | **POST** /api/webhooks | 
[**get_webhook**](WebhooksApi.md#get_webhook) | **GET** /api/webhooks/{webhookid} | 
[**get_webhooks**](WebhooksApi.md#get_webhooks) | **GET** /api/webhooks | 
[**ping_webhook**](WebhooksApi.md#ping_webhook) | **POST** /api/webhooks/{webhookid}/ping | 
[**unregister_webhook**](WebhooksApi.md#unregister_webhook) | **DELETE** /api/webhooks/{webhookid} | 
[**update_webhook**](WebhooksApi.md#update_webhook) | **POST** /api/webhooks/{webhookid} | 


# **create_webhook**
> bt_webhook_info.BTWebhookInfo create_webhook()



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
    api_instance = onshape_client.oas.WebhooksApi(api_client)
    bt_webhook_params = onshape_client.oas.BTWebhookParams() # bt_webhook_params.BTWebhookParams |  (optional)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.create_webhook(bt_webhook_params=bt_webhook_params)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling WebhooksApi->create_webhook: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **bt_webhook_params** | [**bt_webhook_params.BTWebhookParams**](BTWebhookParams.md)|  | [optional]

### Return type

[**bt_webhook_info.BTWebhookInfo**](BTWebhookInfo.md)

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

# **get_webhook**
> bt_webhook_info.BTWebhookInfo get_webhook(webhookid)



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
    api_instance = onshape_client.oas.WebhooksApi(api_client)
    webhookid = 'webhookid_example' # str | 
    
    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.get_webhook(webhookid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling WebhooksApi->get_webhook: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **webhookid** | **str**|  |

### Return type

[**bt_webhook_info.BTWebhookInfo**](BTWebhookInfo.md)

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

# **get_webhooks**
> bt_list_response_bt_webhook_info.BTListResponseBTWebhookInfo get_webhooks()



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
    api_instance = onshape_client.oas.WebhooksApi(api_client)
    company = '' # str |  (optional) if omitted the server will use the default value of ''
user = 'user_example' # str |  (optional)
offset = 0 # int |  (optional) if omitted the server will use the default value of 0
limit = 20 # int |  (optional) if omitted the server will use the default value of 20

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.get_webhooks(company=company, user=user, offset=offset, limit=limit)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling WebhooksApi->get_webhooks: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **company** | **str**|  | [optional] if omitted the server will use the default value of ''
 **user** | **str**|  | [optional]
 **offset** | **int**|  | [optional] if omitted the server will use the default value of 0
 **limit** | **int**|  | [optional] if omitted the server will use the default value of 20

### Return type

[**bt_list_response_bt_webhook_info.BTListResponseBTWebhookInfo**](BTListResponseBTWebhookInfo.md)

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

# **ping_webhook**
> ping_webhook(webhookid)



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
    api_instance = onshape_client.oas.WebhooksApi(api_client)
    webhookid = 'webhookid_example' # str | 
    
    # example passing only required values which don't have defaults set
    try:
        api_instance.ping_webhook(webhookid)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling WebhooksApi->ping_webhook: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **webhookid** | **str**|  |

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

# **unregister_webhook**
> unregister_webhook(webhookid)



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
    api_instance = onshape_client.oas.WebhooksApi(api_client)
    webhookid = 'webhookid_example' # str | 
    
    # example passing only required values which don't have defaults set
    try:
        api_instance.unregister_webhook(webhookid)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling WebhooksApi->unregister_webhook: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **webhookid** | **str**|  |

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

# **update_webhook**
> bt_webhook_info.BTWebhookInfo update_webhook(webhookid)



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
    api_instance = onshape_client.oas.WebhooksApi(api_client)
    webhookid = 'webhookid_example' # str | 
    bt_webhook_params = onshape_client.oas.BTWebhookParams() # bt_webhook_params.BTWebhookParams |  (optional)

    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.update_webhook(webhookid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling WebhooksApi->update_webhook: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.update_webhook(webhookid, bt_webhook_params=bt_webhook_params)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling WebhooksApi->update_webhook: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **webhookid** | **str**|  |
 **bt_webhook_params** | [**bt_webhook_params.BTWebhookParams**](BTWebhookParams.md)|  | [optional]

### Return type

[**bt_webhook_info.BTWebhookInfo**](BTWebhookInfo.md)

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

