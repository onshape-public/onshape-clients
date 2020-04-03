# onshape_client.oas.ElementsApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**copy_element_from_source_document**](ElementsApi.md#copy_element_from_source_document) | **POST** /api/elements/copyelement/{did}/workspace/{wid} | Copy Element
[**decode_configuration**](ElementsApi.md#decode_configuration) | **GET** /api/elements/d/{did}/{wvm}/{wvmid}/e/{eid}/configurationencodings/{cid} | Decode Configuration String
[**delete_element**](ElementsApi.md#delete_element) | **DELETE** /api/elements/d/{did}/w/{wid}/e/{eid} | Delete Element
[**encode_configuration_map**](ElementsApi.md#encode_configuration_map) | **POST** /api/elements/d/{did}/e/{eid}/configurationencodings | Encode Configuration
[**get_configuration**](ElementsApi.md#get_configuration) | **GET** /api/elements/d/{did}/{wvm}/{wvmid}/e/{eid}/configuration | Get Configuration
[**get_element_translator_formats_by_version_or_workspace**](ElementsApi.md#get_element_translator_formats_by_version_or_workspace) | **GET** /api/elements/translatorFormats/{did}/{wv}/{wvid}/{eid} | Get Element Translator Formats
[**update_configuration**](ElementsApi.md#update_configuration) | **POST** /api/elements/d/{did}/{wvm}/{wvmid}/e/{eid}/configuration | Update Configuration
[**update_references**](ElementsApi.md#update_references) | **POST** /api/elements/d/{did}/w/{wid}/e/{eid}/updatereferences | Update or replace node references


# **copy_element_from_source_document**
> bt_document_element_info.BTDocumentElementInfo copy_element_from_source_document(did, wid, bt_copy_element_params)

Copy Element

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
    api_instance = onshape_client.oas.ElementsApi(api_client)
    did = 'did_example' # str | 
    wid = 'wid_example' # str | 
    bt_copy_element_params = onshape_client.oas.BTCopyElementParams() # bt_copy_element_params.BTCopyElementParams | 
    
    # example passing only required values which don't have defaults set
    try:
        # Copy Element
        api_response = api_instance.copy_element_from_source_document(did, wid, bt_copy_element_params)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ElementsApi->copy_element_from_source_document: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wid** | **str**|  |
 **bt_copy_element_params** | [**bt_copy_element_params.BTCopyElementParams**](BTCopyElementParams.md)|  |

### Return type

[**bt_document_element_info.BTDocumentElementInfo**](BTDocumentElementInfo.md)

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

# **decode_configuration**
> bt_configuration_info.BTConfigurationInfo decode_configuration(did, wvm, wvmid, eid, cid)

Decode Configuration String

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
    api_instance = onshape_client.oas.ElementsApi(api_client)
    did = 'did_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    eid = 'eid_example' # str | 
    cid = 'cid_example' # str | 
    link_document_id = 'link_document_id_example' # str |  (optional)
include_display = False # bool |  (optional) if omitted the server will use the default value of False
configuration_is_id = False # bool |  (optional) if omitted the server will use the default value of False

    # example passing only required values which don't have defaults set
    try:
        # Decode Configuration String
        api_response = api_instance.decode_configuration(did, wvm, wvmid, eid, cid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ElementsApi->decode_configuration: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Decode Configuration String
        api_response = api_instance.decode_configuration(did, wvm, wvmid, eid, cid, link_document_id=link_document_id, include_display=include_display, configuration_is_id=configuration_is_id)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ElementsApi->decode_configuration: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **eid** | **str**|  |
 **cid** | **str**|  |
 **link_document_id** | **str**|  | [optional]
 **include_display** | **bool**|  | [optional] if omitted the server will use the default value of False
 **configuration_is_id** | **bool**|  | [optional] if omitted the server will use the default value of False

### Return type

[**bt_configuration_info.BTConfigurationInfo**](BTConfigurationInfo.md)

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

# **delete_element**
> delete_element(did, wid, eid)

Delete Element

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
    api_instance = onshape_client.oas.ElementsApi(api_client)
    did = 'did_example' # str | 
    wid = 'wid_example' # str | 
    eid = 'eid_example' # str | 
    
    # example passing only required values which don't have defaults set
    try:
        # Delete Element
        api_instance.delete_element(did, wid, eid)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ElementsApi->delete_element: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wid** | **str**|  |
 **eid** | **str**|  |

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

# **encode_configuration_map**
> bt_encoded_configuration_info.BTEncodedConfigurationInfo encode_configuration_map(did, eid, bt_configuration_params)

Encode Configuration

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
    api_instance = onshape_client.oas.ElementsApi(api_client)
    did = 'did_example' # str | 
    eid = 'eid_example' # str | 
    bt_configuration_params = onshape_client.oas.BTConfigurationParams() # bt_configuration_params.BTConfigurationParams | 
    version_id = 'version_id_example' # str |  (optional)
link_document_id = 'link_document_id_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        # Encode Configuration
        api_response = api_instance.encode_configuration_map(did, eid, bt_configuration_params)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ElementsApi->encode_configuration_map: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Encode Configuration
        api_response = api_instance.encode_configuration_map(did, eid, bt_configuration_params, version_id=version_id, link_document_id=link_document_id)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ElementsApi->encode_configuration_map: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **eid** | **str**|  |
 **bt_configuration_params** | [**bt_configuration_params.BTConfigurationParams**](BTConfigurationParams.md)|  |
 **version_id** | **str**|  | [optional]
 **link_document_id** | **str**|  | [optional]

### Return type

[**bt_encoded_configuration_info.BTEncodedConfigurationInfo**](BTEncodedConfigurationInfo.md)

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

# **get_configuration**
> bt_configuration_info.BTConfigurationInfo get_configuration(did, wvm, wvmid, eid)

Get Configuration

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
    api_instance = onshape_client.oas.ElementsApi(api_client)
    did = 'did_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    eid = 'eid_example' # str | 
    
    # example passing only required values which don't have defaults set
    try:
        # Get Configuration
        api_response = api_instance.get_configuration(did, wvm, wvmid, eid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ElementsApi->get_configuration: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **eid** | **str**|  |

### Return type

[**bt_configuration_info.BTConfigurationInfo**](BTConfigurationInfo.md)

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

# **get_element_translator_formats_by_version_or_workspace**
> [bt_model_format_info.BTModelFormatInfo] get_element_translator_formats_by_version_or_workspace(did, wv, wvid, eid)

Get Element Translator Formats

### Example

```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.ElementsApi(api_client)
    did = 'did_example' # str | 
    wv = 'wv_example' # str | 
    wvid = 'wvid_example' # str | 
    eid = 'eid_example' # str | 
    check_content = True # bool |  (optional) if omitted the server will use the default value of True
configuration = '' # str |  (optional) if omitted the server will use the default value of ''

    # example passing only required values which don't have defaults set
    try:
        # Get Element Translator Formats
        api_response = api_instance.get_element_translator_formats_by_version_or_workspace(did, wv, wvid, eid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ElementsApi->get_element_translator_formats_by_version_or_workspace: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Get Element Translator Formats
        api_response = api_instance.get_element_translator_formats_by_version_or_workspace(did, wv, wvid, eid, check_content=check_content, configuration=configuration)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ElementsApi->get_element_translator_formats_by_version_or_workspace: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wv** | **str**|  |
 **wvid** | **str**|  |
 **eid** | **str**|  |
 **check_content** | **bool**|  | [optional] if omitted the server will use the default value of True
 **configuration** | **str**|  | [optional] if omitted the server will use the default value of ''

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

# **update_configuration**
> bt_configuration_info.BTConfigurationInfo update_configuration(did, wvm, wvmid, eid)

Update Configuration

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
    api_instance = onshape_client.oas.ElementsApi(api_client)
    did = 'did_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    eid = 'eid_example' # str | 
    body = 'body_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        # Update Configuration
        api_response = api_instance.update_configuration(did, wvm, wvmid, eid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ElementsApi->update_configuration: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Update Configuration
        api_response = api_instance.update_configuration(did, wvm, wvmid, eid, body=body)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ElementsApi->update_configuration: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **eid** | **str**|  |
 **body** | **str**|  | [optional]

### Return type

[**bt_configuration_info.BTConfigurationInfo**](BTConfigurationInfo.md)

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

# **update_references**
> update_references(did, wid, eid, bt_update_reference_params)

Update or replace node references

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
    api_instance = onshape_client.oas.ElementsApi(api_client)
    did = 'did_example' # str | 
    wid = 'wid_example' # str | 
    eid = 'eid_example' # str | 
    bt_update_reference_params = onshape_client.oas.BTUpdateReferenceParams() # bt_update_reference_params.BTUpdateReferenceParams | 
    
    # example passing only required values which don't have defaults set
    try:
        # Update or replace node references
        api_instance.update_references(did, wid, eid, bt_update_reference_params)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ElementsApi->update_references: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wid** | **str**|  |
 **eid** | **str**|  |
 **bt_update_reference_params** | [**bt_update_reference_params.BTUpdateReferenceParams**](BTUpdateReferenceParams.md)|  |

### Return type

void (empty response body)

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

