# onshape_client.BlobElementsApi

All URIs are relative to *https://cad.onshape.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create_translation**](BlobElementsApi.md#create_translation) | **POST** /blobelements/d/{did}/{wv_char}/{wv}/e/{eid}/translations | Create Translation
[**download_file_from_element**](BlobElementsApi.md#download_file_from_element) | **GET** /blobelements/d/{did}/{wvm_char}/{wvm}/e/{eid} | Download File From Blob Element
[**get_translation_formats**](BlobElementsApi.md#get_translation_formats) | **GET** /blobelements/d/{did}/w/{wid}/e/{eid}/translationformats | Get Translation Formats
[**upload_file_create_element**](BlobElementsApi.md#upload_file_create_element) | **POST** /blobelements/d/{did}/w/{wid} | Upload File to New Blob Element
[**upload_file_update_element**](BlobElementsApi.md#upload_file_update_element) | **POST** /blobelements/d/{did}/w/{wid}/e/{eid} | Update Blob Element


# **create_translation**
> BlobElementsCreateTranslationResponse200 create_translation(wv_char, did, wv, eid, body=body)

Create Translation

Create an element translation.  The translation may be incomplete at the time that the call        completes.  If the requestState is ACTIVE, the translation can be polled until the state becomes either        DONE or FAILED.  Alternatively, a webhook callback can be registered for notification of translation        completion. (Requires Write scope if storeInDocument is true)

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
api_instance = onshape_client.BlobElementsApi(onshape_client.ApiClient(configuration))
wv_char = 'wv_char_example' # str | One of w or v corresponding to whether a workspace or version was entered.
did = 'did_example' # str | Document ID
wv = 'wv_example' # str | Workspace (w) or Version (v) ID
eid = 'eid_example' # str | Element ID
body = onshape_client.BlobElementsCreateTranslationBody() # BlobElementsCreateTranslationBody | The JSON request body. (optional)

try:
    # Create Translation
    api_response = api_instance.create_translation(wv_char, did, wv, eid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling BlobElementsApi->create_translation: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wv_char** | **str**| One of w or v corresponding to whether a workspace or version was entered. | 
 **did** | **str**| Document ID | 
 **wv** | **str**| Workspace (w) or Version (v) ID | 
 **eid** | **str**| Element ID | 
 **body** | [**BlobElementsCreateTranslationBody**](BlobElementsCreateTranslationBody.md)| The JSON request body. | [optional] 

### Return type

[**BlobElementsCreateTranslationResponse200**](BlobElementsCreateTranslationResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **download_file_from_element**
> file download_file_from_element(wvm_char, did, wvm, eid, content_disposition=content_disposition, link_document_id=link_document_id)

Download File From Blob Element

Download a file from a blob element

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
api_instance = onshape_client.BlobElementsApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID
content_disposition = 'content_disposition_example' # str | If \"attachment\", includes a Content-Disposition return header with the filename (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

try:
    # Download File From Blob Element
    api_response = api_instance.download_file_from_element(wvm_char, did, wvm, eid, content_disposition=content_disposition, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling BlobElementsApi->download_file_from_element: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 
 **content_disposition** | **str**| If \&quot;attachment\&quot;, includes a Content-Disposition return header with the filename | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 

### Return type

[**file**](file.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_translation_formats**
> BlobElementsGetTranslationFormatsResponse200 get_translation_formats(did, wid, eid)

Get Translation Formats

Returns a list of the available formats to which this Blob element can be translated. If the                 contained data does not have a recognized input translation format it will not be translatable to                 any other format.

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
api_instance = onshape_client.BlobElementsApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
eid = 'eid_example' # str | Element ID

try:
    # Get Translation Formats
    api_response = api_instance.get_translation_formats(did, wid, eid)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling BlobElementsApi->get_translation_formats: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **eid** | **str**| Element ID | 

### Return type

[**BlobElementsGetTranslationFormatsResponse200**](BlobElementsGetTranslationFormatsResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **upload_file_create_element**
> BlobElementsUploadFileCreateElementResponse200 upload_file_create_element(file, translate, flatten_assemblies, y_axis_is_up, did, wid, create_drawing_if_possible=create_drawing_if_possible, encoded_filename=encoded_filename, file_content_length=file_content_length, import_in_background=import_in_background, allow_faulty_parts=allow_faulty_parts, location_group_id=location_group_id, location_element_id=location_element_id, location_position=location_position)

Upload File to New Blob Element

Create a blob element from an uploaded file. The request body must have a Content-Type of                 multipart/form-data. Request Body parameters are multipart fields.

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
api_instance = onshape_client.BlobElementsApi(onshape_client.ApiClient(configuration))
file = '/path/to/file.txt' # file | File data to upload. This field should normally have a Content-Disposition header    field with a \"filename\" attribute, naming the uploaded file.
translate = true # bool | Whether the uploaded file should be translated to Onshape format,    if possible
flatten_assemblies = true # bool | If true, remove assembly structure and create only a        Part Studio
y_axis_is_up = true # bool | If true, treat the model's Y axis as the vertical axis.  Otherwise,        Z is treated as the vertical axis.
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
create_drawing_if_possible = true # bool | If true and the uploaded file is a DXF or a DWG,           automatically create a Drawing element along with the Blob element. Otherwise, just create the Blob           element. (optional)
encoded_filename = 'encoded_filename_example' # str | Filename override interpreted as a URL-encoded string. If specified,    this overrides the filename from a Content-Disposition in the file field. (optional)
file_content_length = 8.14 # float | The length of the file being uploaded, in bytes. If not present,    Onshape may restrict the upload size under some operating conditions, as the file contents may need to be    buffered in memory. If specified, it should be the actual length of the data being uploaded. (optional)
import_in_background = true # bool | If storeInDocument is true and formatName is ONSHAPE and        the source is a Parasolid file, this specifies the preference as to whether the import should be completed        prior to the completion of the request (importInBackground=false) or whether it should be performed        asynchronously (importInBackground=true). Historically, this parameter was implicitly set to false, but large        imports can take long enough that the request could result in a timeout. Applications are encouraged to set        this parameter to true for reliable operation. (optional)
allow_faulty_parts = true # bool | If not specified or if specified as false, bodies to be imported        are examined for validity and any found to be faulty are removed from the import. If all bodies are found to        be faulty, the import fails. If the value is specified as true, we attempt to import the bodies that appear to        have faults. (optional)
location_group_id = 'location_group_id_example' # str | For internal use. (optional)
location_element_id = 'location_element_id_example' # str | Id of an element to place the new element near. (optional)
location_position = 8.14 # float | An indicator for the relative placement of the new element.    If locationElementId is specified, a negative number indicates insertion prior to the element and a non-negative    number indicates insertion following the element. If no elementId is specified, a negative value indicates    insertion at the end of the group or element list and a non-negative number indicates insertion at the start    of the group or elmenet list. (optional)

try:
    # Upload File to New Blob Element
    api_response = api_instance.upload_file_create_element(file, translate, flatten_assemblies, y_axis_is_up, did, wid, create_drawing_if_possible=create_drawing_if_possible, encoded_filename=encoded_filename, file_content_length=file_content_length, import_in_background=import_in_background, allow_faulty_parts=allow_faulty_parts, location_group_id=location_group_id, location_element_id=location_element_id, location_position=location_position)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling BlobElementsApi->upload_file_create_element: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **file** | **file**| File data to upload. This field should normally have a Content-Disposition header    field with a \&quot;filename\&quot; attribute, naming the uploaded file. | 
 **translate** | **bool**| Whether the uploaded file should be translated to Onshape format,    if possible | 
 **flatten_assemblies** | **bool**| If true, remove assembly structure and create only a        Part Studio | 
 **y_axis_is_up** | **bool**| If true, treat the model&#39;s Y axis as the vertical axis.  Otherwise,        Z is treated as the vertical axis. | 
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **create_drawing_if_possible** | **bool**| If true and the uploaded file is a DXF or a DWG,           automatically create a Drawing element along with the Blob element. Otherwise, just create the Blob           element. | [optional] 
 **encoded_filename** | **str**| Filename override interpreted as a URL-encoded string. If specified,    this overrides the filename from a Content-Disposition in the file field. | [optional] 
 **file_content_length** | **float**| The length of the file being uploaded, in bytes. If not present,    Onshape may restrict the upload size under some operating conditions, as the file contents may need to be    buffered in memory. If specified, it should be the actual length of the data being uploaded. | [optional] 
 **import_in_background** | **bool**| If storeInDocument is true and formatName is ONSHAPE and        the source is a Parasolid file, this specifies the preference as to whether the import should be completed        prior to the completion of the request (importInBackground&#x3D;false) or whether it should be performed        asynchronously (importInBackground&#x3D;true). Historically, this parameter was implicitly set to false, but large        imports can take long enough that the request could result in a timeout. Applications are encouraged to set        this parameter to true for reliable operation. | [optional] 
 **allow_faulty_parts** | **bool**| If not specified or if specified as false, bodies to be imported        are examined for validity and any found to be faulty are removed from the import. If all bodies are found to        be faulty, the import fails. If the value is specified as true, we attempt to import the bodies that appear to        have faults. | [optional] 
 **location_group_id** | **str**| For internal use. | [optional] 
 **location_element_id** | **str**| Id of an element to place the new element near. | [optional] 
 **location_position** | **float**| An indicator for the relative placement of the new element.    If locationElementId is specified, a negative number indicates insertion prior to the element and a non-negative    number indicates insertion following the element. If no elementId is specified, a negative value indicates    insertion at the end of the group or element list and a non-negative number indicates insertion at the start    of the group or elmenet list. | [optional] 

### Return type

[**BlobElementsUploadFileCreateElementResponse200**](BlobElementsUploadFileCreateElementResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **upload_file_update_element**
> BlobElementsUploadFileUpdateElementResponse200 upload_file_update_element(file, translate, flatten_assemblies, y_axis_is_up, did, wid, eid, encoded_filename=encoded_filename, file_content_length=file_content_length, import_in_background=import_in_background, allow_faulty_parts=allow_faulty_parts)

Update Blob Element

Update a blob element by uploading a file. The request body must have a Content-Type of                 multipart/form-data. Request Body parameters are multipart fields.

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
api_instance = onshape_client.BlobElementsApi(onshape_client.ApiClient(configuration))
file = '/path/to/file.txt' # file | File data to upload. This field should normally have a Content-Disposition header    field with a \"filename\" attribute, naming the uploaded file.
translate = true # bool | Whether the uploaded file should be translated to Onshape format,    if possible
flatten_assemblies = true # bool | If true, remove assembly structure and create only a        Part Studio
y_axis_is_up = true # bool | If true, treat the model's Y axis as the vertical axis.  Otherwise,        Z is treated as the vertical axis.
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
eid = 'eid_example' # str | Element ID
encoded_filename = 'encoded_filename_example' # str | Filename override interpreted as a URL-encoded string. If specified,    this overrides the filename from a Content-Disposition in the file field. (optional)
file_content_length = 8.14 # float | The length of the file being uploaded, in bytes. If not present,    Onshape may restrict the upload size under some operating conditions, as the file contents may need to be    buffered in memory. If specified, it should be the actual length of the data being uploaded. (optional)
import_in_background = true # bool | If storeInDocument is true and formatName is ONSHAPE and        the source is a Parasolid file, this specifies the preference as to whether the import should be completed        prior to the completion of the request (importInBackground=false) or whether it should be performed        asynchronously (importInBackground=true). Historically, this parameter was implicitly set to false, but large        imports can take long enough that the request could result in a timeout. Applications are encouraged to set        this parameter to true for reliable operation. (optional)
allow_faulty_parts = true # bool | If not specified or if specified as false, bodies to be imported        are examined for validity and any found to be faulty are removed from the import. If all bodies are found to        be faulty, the import fails. If the value is specified as true, we attempt to import the bodies that appear to        have faults. (optional)

try:
    # Update Blob Element
    api_response = api_instance.upload_file_update_element(file, translate, flatten_assemblies, y_axis_is_up, did, wid, eid, encoded_filename=encoded_filename, file_content_length=file_content_length, import_in_background=import_in_background, allow_faulty_parts=allow_faulty_parts)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling BlobElementsApi->upload_file_update_element: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **file** | **file**| File data to upload. This field should normally have a Content-Disposition header    field with a \&quot;filename\&quot; attribute, naming the uploaded file. | 
 **translate** | **bool**| Whether the uploaded file should be translated to Onshape format,    if possible | 
 **flatten_assemblies** | **bool**| If true, remove assembly structure and create only a        Part Studio | 
 **y_axis_is_up** | **bool**| If true, treat the model&#39;s Y axis as the vertical axis.  Otherwise,        Z is treated as the vertical axis. | 
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **eid** | **str**| Element ID | 
 **encoded_filename** | **str**| Filename override interpreted as a URL-encoded string. If specified,    this overrides the filename from a Content-Disposition in the file field. | [optional] 
 **file_content_length** | **float**| The length of the file being uploaded, in bytes. If not present,    Onshape may restrict the upload size under some operating conditions, as the file contents may need to be    buffered in memory. If specified, it should be the actual length of the data being uploaded. | [optional] 
 **import_in_background** | **bool**| If storeInDocument is true and formatName is ONSHAPE and        the source is a Parasolid file, this specifies the preference as to whether the import should be completed        prior to the completion of the request (importInBackground&#x3D;false) or whether it should be performed        asynchronously (importInBackground&#x3D;true). Historically, this parameter was implicitly set to false, but large        imports can take long enough that the request could result in a timeout. Applications are encouraged to set        this parameter to true for reliable operation. | [optional] 
 **allow_faulty_parts** | **bool**| If not specified or if specified as false, bodies to be imported        are examined for validity and any found to be faulty are removed from the import. If all bodies are found to        be faulty, the import fails. If the value is specified as true, we attempt to import the bodies that appear to        have faults. | [optional] 

### Return type

[**BlobElementsUploadFileUpdateElementResponse200**](BlobElementsUploadFileUpdateElementResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

