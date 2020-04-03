# onshape_client.oas.BlobElementsApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create_blob_translation**](BlobElementsApi.md#create_blob_translation) | **POST** /api/blobelements/d/{did}/{wv}/{wvid}/e/{eid}/translations | Create Translation.
[**download_file_workspace**](BlobElementsApi.md#download_file_workspace) | **GET** /api/blobelements/d/{did}/w/{wid}/e/{eid} | Download File From Blob Element.
[**update_units**](BlobElementsApi.md#update_units) | **POST** /api/blobelements/d/{did}/w/{wid}/e/{eid}/units | Update Mesh Units.
[**upload_file_create_element**](BlobElementsApi.md#upload_file_create_element) | **POST** /api/blobelements/d/{did}/w/{wid} | Upload file to new element.
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
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

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
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **upload_file_create_element**
> bt_document_element_processing_info.BTDocumentElementProcessingInfo upload_file_create_element(did, wid)

Upload file to new element.

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
        # Upload file to new element.
        api_response = api_instance.upload_file_create_element(did, wid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling BlobElementsApi->upload_file_create_element: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Upload file to new element.
        api_response = api_instance.upload_file_create_element(did, wid, allow_faulty_parts=allow_faulty_parts, create_composite=create_composite, create_drawing_if_possible=create_drawing_if_possible, encoded_filename=encoded_filename, extract_assembly_hierarchy=extract_assembly_hierarchy, file=file, file_body_with_details=file_body_with_details, file_content_length=file_content_length, file_detail=file_detail, flatten_assemblies=flatten_assemblies, format_name=format_name, isy_axis_is_up=isy_axis_is_up, join_adjacent_surfaces=join_adjacent_surfaces, location_element_id=location_element_id, location_group_id=location_group_id, location_position=location_position, notify_user=notify_user, owner_id=owner_id, owner_type=owner_type, parent_id=parent_id, project_id=project_id, public=public, split_assemblies_into_multiple_documents=split_assemblies_into_multiple_documents, store_in_document=store_in_document, translate=translate, unit=unit, upload_id=upload_id, version_string=version_string)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling BlobElementsApi->upload_file_create_element: %s\n" % e)
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

[**bt_document_element_processing_info.BTDocumentElementProcessingInfo**](BTDocumentElementProcessingInfo.md)

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
        api_response = api_instance.upload_file_update_element(did, eid, wid, parent_change_id=parent_change_id)
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

### Return type

[**bt_document_element_processing_info.BTDocumentElementProcessingInfo**](BTDocumentElementProcessingInfo.md)

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

