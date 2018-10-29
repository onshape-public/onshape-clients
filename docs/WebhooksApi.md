# onshape_client.WebhooksApi

All URIs are relative to *https://cad.onshape.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create_webhook**](WebhooksApi.md#create_webhook) | **POST** /webhooks | Create Webhook
[**get_webhook**](WebhooksApi.md#get_webhook) | **GET** /webhooks/{webhookid} | Get Webhook
[**ping_webhook**](WebhooksApi.md#ping_webhook) | **POST** /webhooks/{webhookid}/ping | Ping Webhook
[**unregister_webhook**](WebhooksApi.md#unregister_webhook) | **DELETE** /webhooks/{webhookid} | Unregister Webhook
[**update_webhook**](WebhooksApi.md#update_webhook) | **POST** /webhooks/{webhookid} | Update Webhook


# **create_webhook**
> WebhooksCreateWebhookResponse200 create_webhook(body=body)

Create Webhook

Create a webhook, which functions like an event listener

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
api_instance = onshape_client.WebhooksApi(onshape_client.ApiClient(configuration))
body = onshape_client.WebhooksCreateWebhookBody() # WebhooksCreateWebhookBody | The JSON request body. (optional)

try:
    # Create Webhook
    api_response = api_instance.create_webhook(body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling WebhooksApi->create_webhook: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**WebhooksCreateWebhookBody**](WebhooksCreateWebhookBody.md)| The JSON request body. | [optional] 

### Return type

[**WebhooksCreateWebhookResponse200**](WebhooksCreateWebhookResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_webhook**
> WebhooksGetWebhookResponse200 get_webhook(webhookid)

Get Webhook

Get webhook info

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
api_instance = onshape_client.WebhooksApi(onshape_client.ApiClient(configuration))
webhookid = 'webhookid_example' # str | Webhook ID

try:
    # Get Webhook
    api_response = api_instance.get_webhook(webhookid)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling WebhooksApi->get_webhook: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **webhookid** | **str**| Webhook ID | 

### Return type

[**WebhooksGetWebhookResponse200**](WebhooksGetWebhookResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ping_webhook**
> ping_webhook(webhookid)

Ping Webhook

Ping a webhook

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
api_instance = onshape_client.WebhooksApi(onshape_client.ApiClient(configuration))
webhookid = 'webhookid_example' # str | ID of webhook to update

try:
    # Ping Webhook
    api_instance.ping_webhook(webhookid)
except ApiException as e:
    print("Exception when calling WebhooksApi->ping_webhook: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **webhookid** | **str**| ID of webhook to update | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **unregister_webhook**
> unregister_webhook(webhookid)

Unregister Webhook

Unregister a webhook

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
api_instance = onshape_client.WebhooksApi(onshape_client.ApiClient(configuration))
webhookid = 'webhookid_example' # str | ID of webhook to unregister

try:
    # Unregister Webhook
    api_instance.unregister_webhook(webhookid)
except ApiException as e:
    print("Exception when calling WebhooksApi->unregister_webhook: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **webhookid** | **str**| ID of webhook to unregister | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_webhook**
> WebhooksUpdateWebhookResponse200 update_webhook(webhookid, body=body)

Update Webhook

Update a webhook

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
api_instance = onshape_client.WebhooksApi(onshape_client.ApiClient(configuration))
webhookid = 'webhookid_example' # str | ID of webhook to update
body = onshape_client.WebhooksUpdateWebhookBody() # WebhooksUpdateWebhookBody | The JSON request body. (optional)

try:
    # Update Webhook
    api_response = api_instance.update_webhook(webhookid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling WebhooksApi->update_webhook: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **webhookid** | **str**| ID of webhook to update | 
 **body** | [**WebhooksUpdateWebhookBody**](WebhooksUpdateWebhookBody.md)| The JSON request body. | [optional] 

### Return type

[**WebhooksUpdateWebhookResponse200**](WebhooksUpdateWebhookResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

