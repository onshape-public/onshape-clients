# onshape_client.oas.BlobElementsApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create_blob_translation**](BlobElementsApi.md#create_blob_translation) | **POST** /api/blobelements/d/{did}/{wv}/{wvid}/e/{eid}/translations | Create Translation.
[**download_file_workspace**](BlobElementsApi.md#download_file_workspace) | **GET** /api/blobelements/d/{did}/w/{wid}/e/{eid} | Download File From Blob Element.
[**update_units**](BlobElementsApi.md#update_units) | **POST** /api/blobelements/d/{did}/w/{wid}/e/{eid}/units | Update Mesh Units.
[**upload_file_create_element**](BlobElementsApi.md#upload_file_create_element) | **POST** /api/blobelements/d/{did}/w/{wid} | Upload File to New Blob Element.
[**upload_file_update_element**](BlobElementsApi.md#upload_file_update_element) | **POST** /api/blobelements/d/{did}/w/{wid}/e/{eid} | Update Blob Element.


# **create_blob_translation**
> bt_translation_request_info.BTTranslationRequestInfo create_blob_translation(did, wv, wvid, eid, bt_translate_format_params)

Create Translation.

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
    api_instance = onshape_client.oas.BlobElementsApi(api_client)
    did = 'did_example' # str | 
    wv = 'wv_example' # str | 
    wvid = 'wvid_example' # str | 
    eid = 'eid_example' # str | 
    bt_translate_format_params = onshape_client.oas.BTTranslateFormatParams() # bt_translate_format_params.BTTranslateFormatParams | 
    
    # example passing only required values which don't have defaults set
    try:
        # Create Translation.
        api_response = api_instance.create_blob_translation(did, wv, wvid, eid, bt_translate_format_params)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling BlobElementsApi->create_blob_translation: %s\n" % e)
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
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **download_file_workspace**
> file_type download_file_workspace(did, wid, eid)

Download File From Blob Element.

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
    api_instance = onshape_client.oas.BlobElementsApi(api_client)
    did = 'did_example' # str | 
    wid = 'wid_example' # str | 
    eid = 'eid_example' # str | 
    content_disposition = 'content_disposition_example' # str |  (optional)
if_none_match = 'if_none_match_example' # str |  (optional)
link_document_id = 'link_document_id_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        # Download File From Blob Element.
        api_response = api_instance.download_file_workspace(did, wid, eid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling BlobElementsApi->download_file_workspace: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Download File From Blob Element.
        api_response = api_instance.download_file_workspace(did, wid, eid, content_disposition=content_disposition, if_none_match=if_none_match, link_document_id=link_document_id)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling BlobElementsApi->download_file_workspace: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wid** | **str**|  |
 **eid** | **str**|  |
 **content_disposition** | **str**|  | [optional]
 **if_none_match** | **str**|  | [optional]
 **link_document_id** | **str**|  | [optional]

### Return type

**file_type**

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/octet-stream

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_units**
> bt_document_element_processing_info.BTDocumentElementProcessingInfo update_units(did, eid, wid, bt_update_mesh_units_params)

Update Mesh Units.

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
    api_instance = onshape_client.oas.BlobElementsApi(api_client)
    did = 'did_example' # str | 
    eid = 'eid_example' # str | 
    wid = 'wid_example' # str | 
    bt_update_mesh_units_params = onshape_client.oas.BTUpdateMeshUnitsParams() # bt_update_mesh_units_params.BTUpdateMeshUnitsParams | 
    
    # example passing only required values which don't have defaults set
    try:
        # Update Mesh Units.
        api_response = api_instance.update_units(did, eid, wid, bt_update_mesh_units_params)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling BlobElementsApi->update_units: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **eid** | **str**|  |
 **wid** | **str**|  |
 **bt_update_mesh_units_params** | [**bt_update_mesh_units_params.BTUpdateMeshUnitsParams**](BTUpdateMeshUnitsParams.md)|  |

### Return type

[**bt_document_element_processing_info.BTDocumentElementProcessingInfo**](BTDocumentElementProcessingInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8; qs=0.09
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/vnd.onshape.v2+json;charset=UTF-8;qs=0.2

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **upload_file_create_element**
> bt_document_element_processing_info.BTDocumentElementProcessingInfo upload_file_create_element(did, wid)

Upload File to New Blob Element.

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
    api_instance = onshape_client.oas.BlobElementsApi(api_client)
    did = 'did_example' # str | 
    wid = 'wid_example' # str | 
    content_disposition = onshape_client.oas.ContentDisposition() # content_disposition.ContentDisposition |  (optional)
entity = None # bool, date, datetime, dict, float, int, list, str |  (optional)
media_type = onshape_client.oas.BodyPartMediaType() # body_part_media_type.BodyPartMediaType |  (optional)
message_body_workers = None # bool, date, datetime, dict, float, int, list, str |  (optional)
parent = onshape_client.oas.MultiPart() # multi_part.MultiPart |  (optional)
providers = None # bool, date, datetime, dict, float, int, list, str |  (optional)
body_parts = onshape_client.oas.BodyPart() # [body_part.BodyPart] |  (optional)

    # example passing only required values which don't have defaults set
    try:
        # Upload File to New Blob Element.
        api_response = api_instance.upload_file_create_element(did, wid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling BlobElementsApi->upload_file_create_element: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Upload File to New Blob Element.
        api_response = api_instance.upload_file_create_element(did, wid, content_disposition=content_disposition, entity=entity, media_type=media_type, message_body_workers=message_body_workers, parent=parent, providers=providers, body_parts=body_parts)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling BlobElementsApi->upload_file_create_element: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wid** | **str**|  |
 **content_disposition** | [**content_disposition.ContentDisposition**](content_disposition.ContentDisposition.md)|  | [optional]
 **entity** | **bool, date, datetime, dict, float, int, list, str**|  | [optional]
 **media_type** | [**body_part_media_type.BodyPartMediaType**](body_part_media_type.BodyPartMediaType.md)|  | [optional]
 **message_body_workers** | **bool, date, datetime, dict, float, int, list, str**|  | [optional]
 **parent** | [**multi_part.MultiPart**](multi_part.MultiPart.md)|  | [optional]
 **providers** | **bool, date, datetime, dict, float, int, list, str**|  | [optional]
 **body_parts** | [**[body_part.BodyPart]**](body_part.BodyPart.md)|  | [optional]

### Return type

[**bt_document_element_processing_info.BTDocumentElementProcessingInfo**](BTDocumentElementProcessingInfo.md)

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

# **upload_file_update_element**
> bt_document_element_processing_info.BTDocumentElementProcessingInfo upload_file_update_element(did, eid, wid)

Update Blob Element.

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
    api_instance = onshape_client.oas.BlobElementsApi(api_client)
    did = 'did_example' # str | 
    eid = 'eid_example' # str | 
    wid = 'wid_example' # str | 
    parent_change_id = 'parent_change_id_example' # str |  (optional)
content_disposition = onshape_client.oas.ContentDisposition() # content_disposition.ContentDisposition |  (optional)
entity = None # bool, date, datetime, dict, float, int, list, str |  (optional)
media_type = onshape_client.oas.BodyPartMediaType() # body_part_media_type.BodyPartMediaType |  (optional)
message_body_workers = None # bool, date, datetime, dict, float, int, list, str |  (optional)
parent = onshape_client.oas.MultiPart() # multi_part.MultiPart |  (optional)
providers = None # bool, date, datetime, dict, float, int, list, str |  (optional)
body_parts = onshape_client.oas.BodyPart() # [body_part.BodyPart] |  (optional)

    # example passing only required values which don't have defaults set
    try:
        # Update Blob Element.
        api_response = api_instance.upload_file_update_element(did, eid, wid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling BlobElementsApi->upload_file_update_element: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Update Blob Element.
        api_response = api_instance.upload_file_update_element(did, eid, wid, parent_change_id=parent_change_id, content_disposition=content_disposition, entity=entity, media_type=media_type, message_body_workers=message_body_workers, parent=parent, providers=providers, body_parts=body_parts)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling BlobElementsApi->upload_file_update_element: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **eid** | **str**|  |
 **wid** | **str**|  |
 **parent_change_id** | **str**|  | [optional]
 **content_disposition** | [**content_disposition.ContentDisposition**](content_disposition.ContentDisposition.md)|  | [optional]
 **entity** | **bool, date, datetime, dict, float, int, list, str**|  | [optional]
 **media_type** | [**body_part_media_type.BodyPartMediaType**](body_part_media_type.BodyPartMediaType.md)|  | [optional]
 **message_body_workers** | **bool, date, datetime, dict, float, int, list, str**|  | [optional]
 **parent** | [**multi_part.MultiPart**](multi_part.MultiPart.md)|  | [optional]
 **providers** | **bool, date, datetime, dict, float, int, list, str**|  | [optional]
 **body_parts** | [**[body_part.BodyPart]**](body_part.BodyPart.md)|  | [optional]

### Return type

[**bt_document_element_processing_info.BTDocumentElementProcessingInfo**](BTDocumentElementProcessingInfo.md)

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

