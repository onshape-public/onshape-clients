# onshape_client.oas.DrawingsApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create_drawing_app_element**](DrawingsApi.md#create_drawing_app_element) | **POST** /api/drawings/create | 
[**create_drawing_translation**](DrawingsApi.md#create_drawing_translation) | **POST** /api/drawings/d/{did}/{wv}/{wvid}/e/{eid}/translations | Create Drawing translation
[**get_drawing_translator_formats**](DrawingsApi.md#get_drawing_translator_formats) | **GET** /api/drawings/d/{did}/w/{wid}/e/{eid}/translationformats | 


# **create_drawing_app_element**
> bt_document_element_info.BTDocumentElementInfo create_drawing_app_element(bt_drawing_params)



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
    api_instance = onshape_client.oas.DrawingsApi(api_client)
    bt_drawing_params = onshape_client.oas.BTDrawingParams() # bt_drawing_params.BTDrawingParams | 
    
    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.create_drawing_app_element(bt_drawing_params)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DrawingsApi->create_drawing_app_element: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **bt_drawing_params** | [**bt_drawing_params.BTDrawingParams**](BTDrawingParams.md)|  |

### Return type

[**bt_document_element_info.BTDocumentElementInfo**](BTDocumentElementInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8; qs=0.09
 - **Accept**: application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_drawing_translation**
> bt_translation_request_info.BTTranslationRequestInfo create_drawing_translation(did, wv, wvid, eid, bt_translate_format_params)

Create Drawing translation

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
    api_instance = onshape_client.oas.DrawingsApi(api_client)
    did = 'did_example' # str | 
    wv = 'wv_example' # str | 
    wvid = 'wvid_example' # str | 
    eid = 'eid_example' # str | 
    bt_translate_format_params = onshape_client.oas.BTTranslateFormatParams() # bt_translate_format_params.BTTranslateFormatParams | 
    
    # example passing only required values which don't have defaults set
    try:
        # Create Drawing translation
        api_response = api_instance.create_drawing_translation(did, wv, wvid, eid, bt_translate_format_params)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DrawingsApi->create_drawing_translation: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wv** | **str**|  |
 **wvid** | **str**|  |
 **eid** | **str**|  |
 **bt_translate_format_params** | [**bt_translate_format_params.BTTranslateFormatParams**](BTTranslateFormatParams.md)|  |

### Return type

[**bt_translation_request_info.BTTranslationRequestInfo**](BTTranslationRequestInfo.md)

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

# **get_drawing_translator_formats**
> [bt_model_format_info.BTModelFormatInfo] get_drawing_translator_formats(did, wid, eid)



### Example

```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.DrawingsApi(api_client)
    did = 'did_example' # str | 
    wid = 'wid_example' # str | 
    eid = 'eid_example' # str | 
    
    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.get_drawing_translator_formats(did, wid, eid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DrawingsApi->get_drawing_translator_formats: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wid** | **str**|  |
 **eid** | **str**|  |

### Return type

[**[bt_model_format_info.BTModelFormatInfo]**](BTModelFormatInfo.md)

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

