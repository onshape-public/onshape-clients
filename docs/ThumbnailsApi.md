# onshape_client.ThumbnailsApi

All URIs are relative to *https://cad.onshape.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**delete_application_thumbnails**](ThumbnailsApi.md#delete_application_thumbnails) | **DELETE** /thumbnails/d/{did}/{wv_char}/{wv}/e/{eid} | Delete Application Element Thumbnail
[**get_configured_element_thumbnail_with_size**](ThumbnailsApi.md#get_configured_element_thumbnail_with_size) | **GET** /thumbnails/d/{did}/w/{wid}/e/{eid}/c/{cid}/s/{sz} | Get Configured Element Thumbnail With Size
[**get_document_thumbnail**](ThumbnailsApi.md#get_document_thumbnail) | **GET** /thumbnails/d/{did}/w/{wid} | Get Document Thumbnail Info
[**get_document_thumbnail_with_size**](ThumbnailsApi.md#get_document_thumbnail_with_size) | **GET** /thumbnails/d/{did}/w/{wid}/s/{sz} | Get Thumbnail With Size
[**get_element_thumbnail**](ThumbnailsApi.md#get_element_thumbnail) | **GET** /thumbnails/d/{did}/{wv_char}/{wv}/e/{eid} | Get Element Thumbnail Info
[**get_element_thumbnail_with_size**](ThumbnailsApi.md#get_element_thumbnail_with_size) | **GET** /thumbnails/d/{did}/w/{wid}/e/{eid}/s/{sz} | Get Element Thumbnail With Size
[**get_thumbnail_for_document**](ThumbnailsApi.md#get_thumbnail_for_document) | **GET** /thumbnails/d/{did} | Get Default Workspace Thumbnail Info
[**get_thumbnail_for_document_and_version**](ThumbnailsApi.md#get_thumbnail_for_document_and_version) | **GET** /thumbnails/d/{did}/v/{vid} | Get Thumbnail Info For Document Version
[**set_application_element_thumbnail**](ThumbnailsApi.md#set_application_element_thumbnail) | **POST** /thumbnails/d/{did}/{wv_char}/{wv}/e/{eid} | Set Application Element Thumbnail


# **delete_application_thumbnails**
> delete_application_thumbnails(wv_char, did, wv, eid)

Delete Application Element Thumbnail

Delete element thumbnails for an application element

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
api_instance = onshape_client.ThumbnailsApi(onshape_client.ApiClient(configuration))
wv_char = 'wv_char_example' # str | One of w or v corresponding to whether a workspace or version was entered.
did = 'did_example' # str | Document ID
wv = 'wv_example' # str | Workspace (w) or Version (v) ID
eid = 'eid_example' # str | Element ID

try:
    # Delete Application Element Thumbnail
    api_instance.delete_application_thumbnails(wv_char, did, wv, eid)
except ApiException as e:
    print("Exception when calling ThumbnailsApi->delete_application_thumbnails: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wv_char** | **str**| One of w or v corresponding to whether a workspace or version was entered. | 
 **did** | **str**| Document ID | 
 **wv** | **str**| Workspace (w) or Version (v) ID | 
 **eid** | **str**| Element ID | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_configured_element_thumbnail_with_size**
> ThumbnailsGetConfiguredElementThumbnailWithSizeResponse200 get_configured_element_thumbnail_with_size(cid, sz, did, wid, eid, reject_empty)

Get Configured Element Thumbnail With Size

Return thumbnail for a configured element, with specified size in pixels

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
api_instance = onshape_client.ThumbnailsApi(onshape_client.ApiClient(configuration))
cid = 'cid_example' # str | The cache key for the requested configuration, as generated by                      BTMicroversionIdAndConfiguration.configurationToCacheKeyString
sz = 'sz_example' # str | Requested thumbnail size, such as 300x300
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
eid = 'eid_example' # str | Element ID
reject_empty = true # bool | If true, a 404 will be returned for thumbnails that are made for                       empty elements. Clients can use this parameter to skip the display of empty thumbnails and                       display a default icon instead. Defaults to false.

try:
    # Get Configured Element Thumbnail With Size
    api_response = api_instance.get_configured_element_thumbnail_with_size(cid, sz, did, wid, eid, reject_empty)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ThumbnailsApi->get_configured_element_thumbnail_with_size: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **cid** | **str**| The cache key for the requested configuration, as generated by                      BTMicroversionIdAndConfiguration.configurationToCacheKeyString | 
 **sz** | **str**| Requested thumbnail size, such as 300x300 | 
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **eid** | **str**| Element ID | 
 **reject_empty** | **bool**| If true, a 404 will be returned for thumbnails that are made for                       empty elements. Clients can use this parameter to skip the display of empty thumbnails and                       display a default icon instead. Defaults to false. | 

### Return type

[**ThumbnailsGetConfiguredElementThumbnailWithSizeResponse200**](ThumbnailsGetConfiguredElementThumbnailWithSizeResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_document_thumbnail**
> ThumbnailsGetDocumentThumbnailResponse200 get_document_thumbnail(did, wid)

Get Document Thumbnail Info

Get the thumbnail for a document in a specific workspace

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
api_instance = onshape_client.ThumbnailsApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID

try:
    # Get Document Thumbnail Info
    api_response = api_instance.get_document_thumbnail(did, wid)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ThumbnailsApi->get_document_thumbnail: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 

### Return type

[**ThumbnailsGetDocumentThumbnailResponse200**](ThumbnailsGetDocumentThumbnailResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_document_thumbnail_with_size**
> ThumbnailsGetDocumentThumbnailWithSizeResponse200 get_document_thumbnail_with_size(sz, did, wid)

Get Thumbnail With Size

Return thumbnail for document, with specified size in pixels

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
api_instance = onshape_client.ThumbnailsApi(onshape_client.ApiClient(configuration))
sz = 'sz_example' # str | Requested thumbnail size, such as 300x300
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID

try:
    # Get Thumbnail With Size
    api_response = api_instance.get_document_thumbnail_with_size(sz, did, wid)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ThumbnailsApi->get_document_thumbnail_with_size: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **sz** | **str**| Requested thumbnail size, such as 300x300 | 
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 

### Return type

[**ThumbnailsGetDocumentThumbnailWithSizeResponse200**](ThumbnailsGetDocumentThumbnailWithSizeResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_element_thumbnail**
> ThumbnailsGetElementThumbnailResponse200 get_element_thumbnail(wv_char, did, wv, eid)

Get Element Thumbnail Info

Return thumbnail info for an element tab

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
api_instance = onshape_client.ThumbnailsApi(onshape_client.ApiClient(configuration))
wv_char = 'wv_char_example' # str | One of w or v corresponding to whether a workspace or version was entered.
did = 'did_example' # str | Document ID
wv = 'wv_example' # str | Workspace (w) or Version (v) ID
eid = 'eid_example' # str | Element ID

try:
    # Get Element Thumbnail Info
    api_response = api_instance.get_element_thumbnail(wv_char, did, wv, eid)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ThumbnailsApi->get_element_thumbnail: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wv_char** | **str**| One of w or v corresponding to whether a workspace or version was entered. | 
 **did** | **str**| Document ID | 
 **wv** | **str**| Workspace (w) or Version (v) ID | 
 **eid** | **str**| Element ID | 

### Return type

[**ThumbnailsGetElementThumbnailResponse200**](ThumbnailsGetElementThumbnailResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_element_thumbnail_with_size**
> ThumbnailsGetElementThumbnailWithSizeResponse200 get_element_thumbnail_with_size(sz, did, wid, eid, reject_empty)

Get Element Thumbnail With Size

Return thumbnail for element, with specified size in pixels

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
api_instance = onshape_client.ThumbnailsApi(onshape_client.ApiClient(configuration))
sz = 'sz_example' # str | Requested thumbnail size, such as 300x300
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
eid = 'eid_example' # str | Element ID
reject_empty = true # bool | If true, a 404 will be returned for thumbnails that are made for                       empty elements. Clients can use this parameter to skip the display of empty thumbnails and                       display a default icon instead. Defaults to false.

try:
    # Get Element Thumbnail With Size
    api_response = api_instance.get_element_thumbnail_with_size(sz, did, wid, eid, reject_empty)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ThumbnailsApi->get_element_thumbnail_with_size: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **sz** | **str**| Requested thumbnail size, such as 300x300 | 
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **eid** | **str**| Element ID | 
 **reject_empty** | **bool**| If true, a 404 will be returned for thumbnails that are made for                       empty elements. Clients can use this parameter to skip the display of empty thumbnails and                       display a default icon instead. Defaults to false. | 

### Return type

[**ThumbnailsGetElementThumbnailWithSizeResponse200**](ThumbnailsGetElementThumbnailWithSizeResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_thumbnail_for_document**
> ThumbnailsGetThumbnailForDocumentResponse200 get_thumbnail_for_document(did)

Get Default Workspace Thumbnail Info

Get thumbnail info for document in default workspace

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
api_instance = onshape_client.ThumbnailsApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID

try:
    # Get Default Workspace Thumbnail Info
    api_response = api_instance.get_thumbnail_for_document(did)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ThumbnailsApi->get_thumbnail_for_document: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 

### Return type

[**ThumbnailsGetThumbnailForDocumentResponse200**](ThumbnailsGetThumbnailForDocumentResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_thumbnail_for_document_and_version**
> ThumbnailsGetThumbnailForDocumentAndVersionResponse200 get_thumbnail_for_document_and_version(did, vid, link_document_id=link_document_id)

Get Thumbnail Info For Document Version

Return thumbnail info for document at specified version

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
api_instance = onshape_client.ThumbnailsApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
vid = 'vid_example' # str | Version ID
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

try:
    # Get Thumbnail Info For Document Version
    api_response = api_instance.get_thumbnail_for_document_and_version(did, vid, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ThumbnailsApi->get_thumbnail_for_document_and_version: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **vid** | **str**| Version ID | 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 

### Return type

[**ThumbnailsGetThumbnailForDocumentAndVersionResponse200**](ThumbnailsGetThumbnailForDocumentAndVersionResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **set_application_element_thumbnail**
> set_application_element_thumbnail(wv_char, did, wv, eid, body=body, overwrite=overwrite)

Set Application Element Thumbnail

Set element thumbnails for an application element

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
api_instance = onshape_client.ThumbnailsApi(onshape_client.ApiClient(configuration))
wv_char = 'wv_char_example' # str | One of w or v corresponding to whether a workspace or version was entered.
did = 'did_example' # str | Document ID
wv = 'wv_example' # str | Workspace (w) or Version (v) ID
eid = 'eid_example' # str | Element ID
body = onshape_client.ThumbnailsSetApplicationElementThumbnailBody() # ThumbnailsSetApplicationElementThumbnailBody | The JSON request body. (optional)
overwrite = true # bool | Set to true when a different thumbnail needs to be made the primary thumbnail or secondary thumbnails need to be updated. This deletes all associated thumbnails and then sets the new thumbnails.                                                     Ensure that the primary and all non-primary thumbnails information are specified. (optional)

try:
    # Set Application Element Thumbnail
    api_instance.set_application_element_thumbnail(wv_char, did, wv, eid, body=body, overwrite=overwrite)
except ApiException as e:
    print("Exception when calling ThumbnailsApi->set_application_element_thumbnail: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wv_char** | **str**| One of w or v corresponding to whether a workspace or version was entered. | 
 **did** | **str**| Document ID | 
 **wv** | **str**| Workspace (w) or Version (v) ID | 
 **eid** | **str**| Element ID | 
 **body** | [**ThumbnailsSetApplicationElementThumbnailBody**](ThumbnailsSetApplicationElementThumbnailBody.md)| The JSON request body. | [optional] 
 **overwrite** | **bool**| Set to true when a different thumbnail needs to be made the primary thumbnail or secondary thumbnails need to be updated. This deletes all associated thumbnails and then sets the new thumbnails.                                                     Ensure that the primary and all non-primary thumbnails information are specified. | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

