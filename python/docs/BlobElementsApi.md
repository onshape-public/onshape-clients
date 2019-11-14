# onshape_client.oas.BlobElementsApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**download_file_workspace**](BlobElementsApi.md#download_file_workspace) | **GET** /api/blobelements/d/{did}/w/{wid}/e/{eid} | Download File From Blob Element.
[**upload_file_create_element**](BlobElementsApi.md#upload_file_create_element) | **POST** /api/blobelements/d/{did}/w/{wid} | 


# **download_file_workspace**
> BTForeignItemInfo download_file_workspace(did, wid, eid, content_disposition=content_disposition, if_none_match=if_none_match, link_document_id=link_document_id)

Download File From Blob Element.

### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from onshape_client.oas.rest import ApiException
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = onshape_client.oas.BlobElementsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wid = 'wid_example' # str | 
eid = 'eid_example' # str | 
content_disposition = 'content_disposition_example' # str |  (optional)
if_none_match = 'if_none_match_example' # str |  (optional)
link_document_id = 'link_document_id_example' # str |  (optional)

try:
    # Download File From Blob Element.
    api_response = api_instance.download_file_workspace(did, wid, eid, content_disposition=content_disposition, if_none_match=if_none_match, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
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

[**BTForeignItemInfo**](BTForeignItemInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+octet-stream;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09, application/octet-stream

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **upload_file_create_element**
> upload_file_create_element(did, wid, content_disposition=content_disposition, entity=entity, media_type=media_type, message_body_workers=message_body_workers, parent=parent, providers=providers, body_parts=body_parts)



### Example

* OAuth Authentication (OAuth2):
```python
from __future__ import print_function
import time
import onshape_client.oas
from onshape_client.oas.rest import ApiException
from pprint import pprint
configuration = onshape_client.oas.Configuration()
# Configure OAuth2 access token for authorization: OAuth2
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# Defining host is optional and default to https://cad.onshape.com
configuration.host = "https://cad.onshape.com"
# Create an instance of the API class
api_instance = onshape_client.oas.BlobElementsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wid = 'wid_example' # str | 
content_disposition = onshape_client.oas.ContentDisposition() # ContentDisposition |  (optional)
entity = None # object |  (optional)
media_type = onshape_client.oas.BodyPartMediaType() # BodyPartMediaType |  (optional)
message_body_workers = None # object |  (optional)
parent = onshape_client.oas.MultiPart() # MultiPart |  (optional)
providers = None # object |  (optional)
body_parts = onshape_client.oas.BodyPart() # list[BodyPart] |  (optional)

try:
    api_instance.upload_file_create_element(did, wid, content_disposition=content_disposition, entity=entity, media_type=media_type, message_body_workers=message_body_workers, parent=parent, providers=providers, body_parts=body_parts)
except ApiException as e:
    print("Exception when calling BlobElementsApi->upload_file_create_element: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wid** | **str**|  | 
 **content_disposition** | [**ContentDisposition**](ContentDisposition.md)|  | [optional] 
 **entity** | [**object**](object.md)|  | [optional] 
 **media_type** | [**BodyPartMediaType**](BodyPartMediaType.md)|  | [optional] 
 **message_body_workers** | [**object**](object.md)|  | [optional] 
 **parent** | [**MultiPart**](MultiPart.md)|  | [optional] 
 **providers** | [**object**](object.md)|  | [optional] 
 **body_parts** | [**list[BodyPart]**](BodyPart.md)|  | [optional] 

### Return type

void (empty response body)

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

