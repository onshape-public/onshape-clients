# onshape_client.ElementsApi

All URIs are relative to *https://cad.onshape.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**decode_configuration_string**](ElementsApi.md#decode_configuration_string) | **GET** /elements/d/{did}/{wvm_char}/{wvm}/e/{eid}/configurationencodings/{cid} | Decode Configuration String
[**delete_element**](ElementsApi.md#delete_element) | **DELETE** /elements/d/{did}/w/{wid}/e/{eid} | Delete Element
[**encode_configuration**](ElementsApi.md#encode_configuration) | **POST** /elements/d/{did}/e/{eid}/configurationencodings | Encode Configuration
[**get_element_metadata**](ElementsApi.md#get_element_metadata) | **GET** /elements/d/{did}/{wv_char}/{wv}/e/{eid}/metadata | Get Metadata
[**update_element_metadata**](ElementsApi.md#update_element_metadata) | **POST** /elements/d/{did}/{wv_char}/{wv}/e/{eid}/metadata | Update Element Metadata


# **decode_configuration_string**
> ElementsDecodeConfigurationStringResponse200 decode_configuration_string(wvm_char, cid, did, wvm, eid, include_display=include_display, configuration_is_id=configuration_is_id, link_document_id=link_document_id)

Decode Configuration String

Converts a configuration string or configuration id into parameter map form.

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
api_instance = onshape_client.ElementsApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
cid = 'cid_example' # str | configuration string or configuration id to decode (must be url-encoded).
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID
include_display = true # bool | If true, additional data is returned for user-viewable           information (optional)
configuration_is_id = true # bool | If true, the cid parameter should be interpreted as           a configurationId rather than an encoded configuration, in which case the wvmid must be a version or           microversion and the configurationId must be obtained from that version or microversion. (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

try:
    # Decode Configuration String
    api_response = api_instance.decode_configuration_string(wvm_char, cid, did, wvm, eid, include_display=include_display, configuration_is_id=configuration_is_id, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ElementsApi->decode_configuration_string: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **cid** | **str**| configuration string or configuration id to decode (must be url-encoded). | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 
 **include_display** | **bool**| If true, additional data is returned for user-viewable           information | [optional] 
 **configuration_is_id** | **bool**| If true, the cid parameter should be interpreted as           a configurationId rather than an encoded configuration, in which case the wvmid must be a version or           microversion and the configurationId must be obtained from that version or microversion. | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 

### Return type

[**ElementsDecodeConfigurationStringResponse200**](ElementsDecodeConfigurationStringResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_element**
> delete_element(did, wid, eid)

Delete Element

Delete an element from a document. It is an error to try to delete the last element in the            document.

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
api_instance = onshape_client.ElementsApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
eid = 'eid_example' # str | Element ID

try:
    # Delete Element
    api_instance.delete_element(did, wid, eid)
except ApiException as e:
    print("Exception when calling ElementsApi->delete_element: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **eid** | **str**| Element ID | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **encode_configuration**
> ElementsEncodeConfigurationResponse200 encode_configuration(did, eid, body=body, version_id=version_id, link_document_id=link_document_id)

Encode Configuration

Encodes a configuration into a string for use in API calls to the target element

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
api_instance = onshape_client.ElementsApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
eid = 'eid_example' # str | Element ID
body = onshape_client.ElementsEncodeConfigurationBody() # ElementsEncodeConfigurationBody | The JSON request body. (optional)
version_id = 'version_id_example' # str | The version of the referenced document. Meaningful only if specified           together with the linkDocumentId query parameter. (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

try:
    # Encode Configuration
    api_response = api_instance.encode_configuration(did, eid, body=body, version_id=version_id, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ElementsApi->encode_configuration: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **eid** | **str**| Element ID | 
 **body** | [**ElementsEncodeConfigurationBody**](ElementsEncodeConfigurationBody.md)| The JSON request body. | [optional] 
 **version_id** | **str**| The version of the referenced document. Meaningful only if specified           together with the linkDocumentId query parameter. | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 

### Return type

[**ElementsEncodeConfigurationResponse200**](ElementsEncodeConfigurationResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_element_metadata**
> ElementsGetElementMetadataResponse200 get_element_metadata(wv_char, did, wv, eid, link_document_id=link_document_id)

Get Metadata

Get an element's metadata

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
api_instance = onshape_client.ElementsApi(onshape_client.ApiClient(configuration))
wv_char = 'wv_char_example' # str | One of w or v corresponding to whether a workspace or version was entered.
did = 'did_example' # str | Document ID
wv = 'wv_example' # str | Workspace (w) or Version (v) ID
eid = 'eid_example' # str | Element ID
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

try:
    # Get Metadata
    api_response = api_instance.get_element_metadata(wv_char, did, wv, eid, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ElementsApi->get_element_metadata: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wv_char** | **str**| One of w or v corresponding to whether a workspace or version was entered. | 
 **did** | **str**| Document ID | 
 **wv** | **str**| Workspace (w) or Version (v) ID | 
 **eid** | **str**| Element ID | 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 

### Return type

[**ElementsGetElementMetadataResponse200**](ElementsGetElementMetadataResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_element_metadata**
> ElementsUpdateElementMetadataResponse200 update_element_metadata(wv_char, did, wv, eid, body=body)

Update Element Metadata

Update element metadata

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
api_instance = onshape_client.ElementsApi(onshape_client.ApiClient(configuration))
wv_char = 'wv_char_example' # str | One of w or v corresponding to whether a workspace or version was entered.
did = 'did_example' # str | Document ID
wv = 'wv_example' # str | Workspace (w) or Version (v) ID
eid = 'eid_example' # str | Element ID
body = onshape_client.ElementsUpdateElementMetadataBody() # ElementsUpdateElementMetadataBody | The JSON request body. (optional)

try:
    # Update Element Metadata
    api_response = api_instance.update_element_metadata(wv_char, did, wv, eid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ElementsApi->update_element_metadata: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wv_char** | **str**| One of w or v corresponding to whether a workspace or version was entered. | 
 **did** | **str**| Document ID | 
 **wv** | **str**| Workspace (w) or Version (v) ID | 
 **eid** | **str**| Element ID | 
 **body** | [**ElementsUpdateElementMetadataBody**](ElementsUpdateElementMetadataBody.md)| The JSON request body. | [optional] 

### Return type

[**ElementsUpdateElementMetadataResponse200**](ElementsUpdateElementMetadataResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

