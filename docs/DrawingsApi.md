# onshape_client.DrawingsApi

All URIs are relative to *https://cad.onshape.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create_translation**](DrawingsApi.md#create_translation) | **POST** /drawings/d/{did}/{wv_char}/{wv}/e/{eid}/translations | Create Drawing Translation
[**get_translation_formats**](DrawingsApi.md#get_translation_formats) | **GET** /drawings/d/{did}/w/{wid}/e/{eid}/translationformats | Get Translation Formats


# **create_translation**
> DrawingsCreateTranslationResponse200 create_translation(wv_char, did, wv, eid, body=body)

Create Drawing Translation

Create an element translation. The translation may be incomplete at the time that the call                 completes. If the requestState is ACTIVE, the translation can be polled until the state becomes                 either DONE or FAILED. Alternatively, a webhook callback can be registered for notification of                 translation completion. (Requires Write scope if storeInDocument is true)

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
api_instance = onshape_client.DrawingsApi(onshape_client.ApiClient(configuration))
wv_char = 'wv_char_example' # str | One of w or v corresponding to whether a workspace or version was entered.
did = 'did_example' # str | Document ID
wv = 'wv_example' # str | Workspace (w) or Version (v) ID
eid = 'eid_example' # str | Element ID
body = onshape_client.DrawingsCreateTranslationBody() # DrawingsCreateTranslationBody | The JSON request body. (optional)

try:
    # Create Drawing Translation
    api_response = api_instance.create_translation(wv_char, did, wv, eid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DrawingsApi->create_translation: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wv_char** | **str**| One of w or v corresponding to whether a workspace or version was entered. | 
 **did** | **str**| Document ID | 
 **wv** | **str**| Workspace (w) or Version (v) ID | 
 **eid** | **str**| Element ID | 
 **body** | [**DrawingsCreateTranslationBody**](DrawingsCreateTranslationBody.md)| The JSON request body. | [optional] 

### Return type

[**DrawingsCreateTranslationResponse200**](DrawingsCreateTranslationResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_translation_formats**
> DrawingsGetTranslationFormatsResponse200 get_translation_formats(did, wid, eid)

Get Translation Formats

Returns a list of the available formats to which this Drawing can be translated.

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
api_instance = onshape_client.DrawingsApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
eid = 'eid_example' # str | Element ID

try:
    # Get Translation Formats
    api_response = api_instance.get_translation_formats(did, wid, eid)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DrawingsApi->get_translation_formats: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **eid** | **str**| Element ID | 

### Return type

[**DrawingsGetTranslationFormatsResponse200**](DrawingsGetTranslationFormatsResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

