# onshape_client.oas.TranslationsApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create_translation**](TranslationsApi.md#create_translation) | **POST** /api/translations/d/{did}/w/{wid} | 
[**delete_translation**](TranslationsApi.md#delete_translation) | **DELETE** /api/translations/{tid} | 
[**get_all_translator_formats**](TranslationsApi.md#get_all_translator_formats) | **GET** /api/translations/translationformats | 
[**get_document_translations**](TranslationsApi.md#get_document_translations) | **GET** /api/translations/d/{did} | 
[**get_translation**](TranslationsApi.md#get_translation) | **GET** /api/translations/{tid} | 


# **create_translation**
> bt_translation_request_info.BTTranslationRequestInfo create_translation(did, wid)



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
    api_instance = onshape_client.oas.TranslationsApi(api_client)
    did = 'did_example' # str | 
    wid = 'wid_example' # str | 
    body_parts = onshape_client.oas.BodyPart() # [body_part.BodyPart] |  (optional)
content_disposition = onshape_client.oas.ContentDisposition() # content_disposition.ContentDisposition |  (optional)
entity = None # bool, date, datetime, dict, float, int, list, str |  (optional)
media_type = onshape_client.oas.BodyPartMediaType() # body_part_media_type.BodyPartMediaType |  (optional)
message_body_workers = None # bool, date, datetime, dict, float, int, list, str |  (optional)
parent = onshape_client.oas.MultiPart() # multi_part.MultiPart |  (optional)
providers = None # bool, date, datetime, dict, float, int, list, str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.create_translation(did, wid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling TranslationsApi->create_translation: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.create_translation(did, wid, body_parts=body_parts, content_disposition=content_disposition, entity=entity, media_type=media_type, message_body_workers=message_body_workers, parent=parent, providers=providers)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling TranslationsApi->create_translation: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wid** | **str**|  |
 **body_parts** | [**[body_part.BodyPart]**](body_part.BodyPart.md)|  | [optional]
 **content_disposition** | [**content_disposition.ContentDisposition**](content_disposition.ContentDisposition.md)|  | [optional]
 **entity** | **bool, date, datetime, dict, float, int, list, str**|  | [optional]
 **media_type** | [**body_part_media_type.BodyPartMediaType**](body_part_media_type.BodyPartMediaType.md)|  | [optional]
 **message_body_workers** | **bool, date, datetime, dict, float, int, list, str**|  | [optional]
 **parent** | [**multi_part.MultiPart**](multi_part.MultiPart.md)|  | [optional]
 **providers** | **bool, date, datetime, dict, float, int, list, str**|  | [optional]

### Return type

[**bt_translation_request_info.BTTranslationRequestInfo**](BTTranslationRequestInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_translation**
> delete_translation(tid)



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
    api_instance = onshape_client.oas.TranslationsApi(api_client)
    tid = 'tid_example' # str | 
    
    # example passing only required values which don't have defaults set
    try:
        api_instance.delete_translation(tid)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling TranslationsApi->delete_translation: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **tid** | **str**|  |

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_all_translator_formats**
> [bt_model_format_full_info.BTModelFormatFullInfo] get_all_translator_formats()



### Example

```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.TranslationsApi(api_client)
    
    # example, this endpoint has no required or optional parameters
    try:
        api_response = api_instance.get_all_translator_formats()
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling TranslationsApi->get_all_translator_formats: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**[bt_model_format_full_info.BTModelFormatFullInfo]**](BTModelFormatFullInfo.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_document_translations**
> bt_list_response_bt_translation_request_info.BTListResponseBTTranslationRequestInfo get_document_translations(did)



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
    api_instance = onshape_client.oas.TranslationsApi(api_client)
    did = 'did_example' # str | 
    offset = 0 # int |  (optional) if omitted the server will use the default value of 0
limit = 20 # int |  (optional) if omitted the server will use the default value of 20

    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.get_document_translations(did)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling TranslationsApi->get_document_translations: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.get_document_translations(did, offset=offset, limit=limit)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling TranslationsApi->get_document_translations: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **offset** | **int**|  | [optional] if omitted the server will use the default value of 0
 **limit** | **int**|  | [optional] if omitted the server will use the default value of 20

### Return type

[**bt_list_response_bt_translation_request_info.BTListResponseBTTranslationRequestInfo**](BTListResponseBTTranslationRequestInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_translation**
> bt_translation_request_info.BTTranslationRequestInfo get_translation(tid)



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
    api_instance = onshape_client.oas.TranslationsApi(api_client)
    tid = 'tid_example' # str | 
    
    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.get_translation(tid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling TranslationsApi->get_translation: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **tid** | **str**|  |

### Return type

[**bt_translation_request_info.BTTranslationRequestInfo**](BTTranslationRequestInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

