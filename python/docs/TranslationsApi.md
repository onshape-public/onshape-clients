# onshape_client.oas.TranslationsApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create_translation**](TranslationsApi.md#create_translation) | **POST** /api/translations/d/{did}/w/{wid} | Create translation from upload.
[**delete_translation**](TranslationsApi.md#delete_translation) | **DELETE** /api/translations/{tid} | 
[**get_all_translator_formats**](TranslationsApi.md#get_all_translator_formats) | **GET** /api/translations/translationformats | 
[**get_document_translations**](TranslationsApi.md#get_document_translations) | **GET** /api/translations/d/{did} | 
[**get_translation**](TranslationsApi.md#get_translation) | **GET** /api/translations/{tid} | 


# **create_translation**
> bt_translation_request_info.BTTranslationRequestInfo create_translation(did, wid)

Create translation from upload.

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
    allow_faulty_parts = True # bool |  (optional)
create_composite = True # bool |  (optional)
create_drawing_if_possible = True # bool |  (optional)
encoded_filename = 'encoded_filename_example' # str |  (optional)
extract_assembly_hierarchy = True # bool |  (optional)
file = open('/path/to/file', 'rb') # file_type |  (optional)
file_body_with_details = onshape_client.oas.FormDataBodyPart() # form_data_body_part.FormDataBodyPart |  (optional)
file_content_length = 56 # int |  (optional)
file_detail = onshape_client.oas.FormDataContentDisposition() # form_data_content_disposition.FormDataContentDisposition |  (optional)
flatten_assemblies = True # bool |  (optional)
format_name = 'format_name_example' # str |  (optional)
isy_axis_is_up = True # bool |  (optional)
join_adjacent_surfaces = True # bool |  (optional)
location_element_id = 'location_element_id_example' # str |  (optional)
location_group_id = 'location_group_id_example' # str |  (optional)
location_position = 56 # int |  (optional)
notify_user = True # bool |  (optional)
owner_id = 'owner_id_example' # str |  (optional)
owner_type = 'owner_type_example' # str |  (optional)
parent_id = 'parent_id_example' # str |  (optional)
project_id = 'project_id_example' # str |  (optional)
public = True # bool |  (optional)
split_assemblies_into_multiple_documents = True # bool |  (optional)
store_in_document = True # bool |  (optional)
translate = True # bool |  (optional)
unit = 'unit_example' # str |  (optional)
upload_id = 'upload_id_example' # str |  (optional)
version_string = 'version_string_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        # Create translation from upload.
        api_response = api_instance.create_translation(did, wid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling TranslationsApi->create_translation: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Create translation from upload.
        api_response = api_instance.create_translation(did, wid, allow_faulty_parts=allow_faulty_parts, create_composite=create_composite, create_drawing_if_possible=create_drawing_if_possible, encoded_filename=encoded_filename, extract_assembly_hierarchy=extract_assembly_hierarchy, file=file, file_body_with_details=file_body_with_details, file_content_length=file_content_length, file_detail=file_detail, flatten_assemblies=flatten_assemblies, format_name=format_name, isy_axis_is_up=isy_axis_is_up, join_adjacent_surfaces=join_adjacent_surfaces, location_element_id=location_element_id, location_group_id=location_group_id, location_position=location_position, notify_user=notify_user, owner_id=owner_id, owner_type=owner_type, parent_id=parent_id, project_id=project_id, public=public, split_assemblies_into_multiple_documents=split_assemblies_into_multiple_documents, store_in_document=store_in_document, translate=translate, unit=unit, upload_id=upload_id, version_string=version_string)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling TranslationsApi->create_translation: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wid** | **str**|  |
 **allow_faulty_parts** | **bool**|  | [optional]
 **create_composite** | **bool**|  | [optional]
 **create_drawing_if_possible** | **bool**|  | [optional]
 **encoded_filename** | **str**|  | [optional]
 **extract_assembly_hierarchy** | **bool**|  | [optional]
 **file** | **file_type**|  | [optional]
 **file_body_with_details** | [**form_data_body_part.FormDataBodyPart**](form_data_body_part.FormDataBodyPart.md)|  | [optional]
 **file_content_length** | **int**|  | [optional]
 **file_detail** | [**form_data_content_disposition.FormDataContentDisposition**](form_data_content_disposition.FormDataContentDisposition.md)|  | [optional]
 **flatten_assemblies** | **bool**|  | [optional]
 **format_name** | **str**|  | [optional]
 **isy_axis_is_up** | **bool**|  | [optional]
 **join_adjacent_surfaces** | **bool**|  | [optional]
 **location_element_id** | **str**|  | [optional]
 **location_group_id** | **str**|  | [optional]
 **location_position** | **int**|  | [optional]
 **notify_user** | **bool**|  | [optional]
 **owner_id** | **str**|  | [optional]
 **owner_type** | **str**|  | [optional]
 **parent_id** | **str**|  | [optional]
 **project_id** | **str**|  | [optional]
 **public** | **bool**|  | [optional]
 **split_assemblies_into_multiple_documents** | **bool**|  | [optional]
 **store_in_document** | **bool**|  | [optional]
 **translate** | **bool**|  | [optional]
 **unit** | **str**|  | [optional]
 **upload_id** | **str**|  | [optional]
 **version_string** | **str**|  | [optional]

### Return type

[**bt_translation_request_info.BTTranslationRequestInfo**](BTTranslationRequestInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

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
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

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
with onshape_client.oas.ApiClient() as api_client:
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
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

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
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

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
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

