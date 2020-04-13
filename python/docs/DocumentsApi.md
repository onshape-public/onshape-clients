# onshape_client.oas.DocumentsApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**copy_workspace**](DocumentsApi.md#copy_workspace) | **POST** /api/documents/{did}/workspaces/{wid}/copy | Copy Workspace
[**create_document**](DocumentsApi.md#create_document) | **POST** /api/documents | Create document.
[**create_version**](DocumentsApi.md#create_version) | **POST** /api/documents/d/{did}/versions | Create Version.
[**create_workspace**](DocumentsApi.md#create_workspace) | **POST** /api/documents/d/{did}/workspaces | Create Workspace
[**delete_document**](DocumentsApi.md#delete_document) | **DELETE** /api/documents/{did} | Delete Document
[**delete_workspace**](DocumentsApi.md#delete_workspace) | **DELETE** /api/documents/d/{did}/workspaces/{wid} | Delete Workspace
[**download_external_data**](DocumentsApi.md#download_external_data) | **GET** /api/documents/d/{did}/externaldata/{fid} | Download External Data
[**export2_json**](DocumentsApi.md#export2_json) | **POST** /api/documents/d/{did}/{wv}/{wvid}/e/{eid}/export | 
[**get_current_microversion**](DocumentsApi.md#get_current_microversion) | **GET** /api/documents/d/{did}/{wv}/{wvid}/currentmicroversion | Get Current Document Microversion
[**get_document**](DocumentsApi.md#get_document) | **GET** /api/documents/{did} | Get Document
[**get_document_acl**](DocumentsApi.md#get_document_acl) | **GET** /api/documents/{did}/acl | Get Access Control List
[**get_document_permission_set**](DocumentsApi.md#get_document_permission_set) | **GET** /api/documents/{did}/permissionset | Get Document Permissions
[**get_document_versions**](DocumentsApi.md#get_document_versions) | **GET** /api/documents/d/{did}/versions | Get Versions
[**get_document_workspaces**](DocumentsApi.md#get_document_workspaces) | **GET** /api/documents/d/{did}/workspaces | Get Workspaces
[**get_documents**](DocumentsApi.md#get_documents) | **GET** /api/documents | Get Documents
[**get_elements_in_document**](DocumentsApi.md#get_elements_in_document) | **GET** /api/documents/d/{did}/{wvm}/{wvmid}/elements | Get a list of elements in the workspace, version, or microversion of the document.
[**get_insertables**](DocumentsApi.md#get_insertables) | **GET** /api/documents/d/{did}/{wvm}/{wvmid}/insertables | Insertable List for Document Version.
[**get_version**](DocumentsApi.md#get_version) | **GET** /api/documents/d/{did}/versions/{vid} | Get Version
[**merge_into_workspace**](DocumentsApi.md#merge_into_workspace) | **POST** /api/documents/{did}/workspaces/{wid}/merge | Merge into workspace
[**move_elements_to_document**](DocumentsApi.md#move_elements_to_document) | **POST** /api/documents/d/{did}/w/{wid}/moveelement | Move Elements
[**restore_from_history**](DocumentsApi.md#restore_from_history) | **POST** /api/documents/{did}/w/{wid}/restore/{vm}/{vmid} | Restore version or microversion to workspace.
[**search**](DocumentsApi.md#search) | **POST** /api/documents/search | 
[**share_document**](DocumentsApi.md#share_document) | **POST** /api/documents/{did}/share | Share Document
[**sync_application_elements**](DocumentsApi.md#sync_application_elements) | **POST** /api/documents/d/{did}/w/{wid}/syncApplicationElements | Sync Application Elements
[**un_share_document**](DocumentsApi.md#un_share_document) | **DELETE** /api/documents/{did}/share/{eid} | Unshare Document
[**update_document_attributes**](DocumentsApi.md#update_document_attributes) | **POST** /api/documents/{did} | Update Document Attributes.
[**update_external_references_to_latest_documents**](DocumentsApi.md#update_external_references_to_latest_documents) | **POST** /api/documents/d/{did}/w/{wid}/e/{eid}/latestdocumentreferences | Update External References to Latest


# **copy_workspace**
> bt_copy_document_info.BTCopyDocumentInfo copy_workspace(did, wid)

Copy Workspace

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
    api_instance = onshape_client.oas.DocumentsApi(api_client)
    did = 'did_example' # str | 
    wid = 'wid_example' # str | 
    bt_copy_document_params = onshape_client.oas.BTCopyDocumentParams() # bt_copy_document_params.BTCopyDocumentParams |  (optional)

    # example passing only required values which don't have defaults set
    try:
        # Copy Workspace
        api_response = api_instance.copy_workspace(did, wid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->copy_workspace: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Copy Workspace
        api_response = api_instance.copy_workspace(did, wid, bt_copy_document_params=bt_copy_document_params)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->copy_workspace: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wid** | **str**|  |
 **bt_copy_document_params** | [**bt_copy_document_params.BTCopyDocumentParams**](BTCopyDocumentParams.md)|  | [optional]

### Return type

[**bt_copy_document_info.BTCopyDocumentInfo**](BTCopyDocumentInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8; qs=0.09
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_document**
> bt_document_info.BTDocumentInfo create_document(bt_document_params)

Create document.

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
    api_instance = onshape_client.oas.DocumentsApi(api_client)
    bt_document_params = onshape_client.oas.BTDocumentParams() # bt_document_params.BTDocumentParams | 
    
    # example passing only required values which don't have defaults set
    try:
        # Create document.
        api_response = api_instance.create_document(bt_document_params)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->create_document: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **bt_document_params** | [**bt_document_params.BTDocumentParams**](BTDocumentParams.md)|  |

### Return type

[**bt_document_info.BTDocumentInfo**](BTDocumentInfo.md)

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

# **create_version**
> bt_version_info.BTVersionInfo create_version(did, bt_version_or_workspace_params)

Create Version.

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
    api_instance = onshape_client.oas.DocumentsApi(api_client)
    did = 'did_example' # str | 
    bt_version_or_workspace_params = onshape_client.oas.BTVersionOrWorkspaceParams() # bt_version_or_workspace_params.BTVersionOrWorkspaceParams | 
    
    # example passing only required values which don't have defaults set
    try:
        # Create Version.
        api_response = api_instance.create_version(did, bt_version_or_workspace_params)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->create_version: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **bt_version_or_workspace_params** | [**bt_version_or_workspace_params.BTVersionOrWorkspaceParams**](BTVersionOrWorkspaceParams.md)|  |

### Return type

[**bt_version_info.BTVersionInfo**](BTVersionInfo.md)

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

# **create_workspace**
> bt_workspace_info.BTWorkspaceInfo create_workspace(did)

Create Workspace

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
    api_instance = onshape_client.oas.DocumentsApi(api_client)
    did = 'did_example' # str | 
    bt_version_or_workspace_params = onshape_client.oas.BTVersionOrWorkspaceParams() # bt_version_or_workspace_params.BTVersionOrWorkspaceParams |  (optional)

    # example passing only required values which don't have defaults set
    try:
        # Create Workspace
        api_response = api_instance.create_workspace(did)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->create_workspace: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Create Workspace
        api_response = api_instance.create_workspace(did, bt_version_or_workspace_params=bt_version_or_workspace_params)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->create_workspace: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **bt_version_or_workspace_params** | [**bt_version_or_workspace_params.BTVersionOrWorkspaceParams**](BTVersionOrWorkspaceParams.md)|  | [optional]

### Return type

[**bt_workspace_info.BTWorkspaceInfo**](BTWorkspaceInfo.md)

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

# **delete_document**
> delete_document(did)

Delete Document

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
    api_instance = onshape_client.oas.DocumentsApi(api_client)
    did = 'did_example' # str | 
    forever = False # bool |  (optional) if omitted the server will use the default value of False

    # example passing only required values which don't have defaults set
    try:
        # Delete Document
        api_instance.delete_document(did)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->delete_document: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Delete Document
        api_instance.delete_document(did, forever=forever)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->delete_document: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **forever** | **bool**|  | [optional] if omitted the server will use the default value of False

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

# **delete_workspace**
> delete_workspace(did, wid)

Delete Workspace

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
    api_instance = onshape_client.oas.DocumentsApi(api_client)
    did = 'did_example' # str | 
    wid = 'wid_example' # str | 
    
    # example passing only required values which don't have defaults set
    try:
        # Delete Workspace
        api_instance.delete_workspace(did, wid)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->delete_workspace: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wid** | **str**|  |

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

# **download_external_data**
> file_type download_external_data(did, fid)

Download External Data

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
    api_instance = onshape_client.oas.DocumentsApi(api_client)
    did = 'did_example' # str | 
    fid = 'fid_example' # str | 
    if_none_match = 'if_none_match_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        # Download External Data
        api_response = api_instance.download_external_data(did, fid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->download_external_data: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Download External Data
        api_response = api_instance.download_external_data(did, fid, if_none_match=if_none_match)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->download_external_data: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **fid** | **str**|  |
 **if_none_match** | **str**|  | [optional]

### Return type

**file_type**

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+octet-stream;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **export2_json**
> export2_json(did, wv, wvid, eid)



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
    api_instance = onshape_client.oas.DocumentsApi(api_client)
    did = 'did_example' # str | 
    wv = 'wv_example' # str | 
    wvid = 'wvid_example' # str | 
    eid = 'eid_example' # str | 
    bt_export_model_params = onshape_client.oas.BTExportModelParams() # bt_export_model_params.BTExportModelParams |  (optional)

    # example passing only required values which don't have defaults set
    try:
        api_instance.export2_json(did, wv, wvid, eid)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->export2_json: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_instance.export2_json(did, wv, wvid, eid, bt_export_model_params=bt_export_model_params)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->export2_json: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wv** | **str**|  |
 **wvid** | **str**|  |
 **eid** | **str**|  |
 **bt_export_model_params** | [**bt_export_model_params.BTExportModelParams**](BTExportModelParams.md)|  | [optional]

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8; qs=0.09
 - **Accept**: application/vnd.onshape.v1+octet-stream;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_current_microversion**
> bt_microversion_info.BTMicroversionInfo get_current_microversion(did, wv, wvid)

Get Current Document Microversion

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
    api_instance = onshape_client.oas.DocumentsApi(api_client)
    did = 'did_example' # str | 
    wv = 'wv_example' # str | 
    wvid = 'wvid_example' # str | 
    
    # example passing only required values which don't have defaults set
    try:
        # Get Current Document Microversion
        api_response = api_instance.get_current_microversion(did, wv, wvid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->get_current_microversion: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wv** | **str**|  |
 **wvid** | **str**|  |

### Return type

[**bt_microversion_info.BTMicroversionInfo**](BTMicroversionInfo.md)

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

# **get_document**
> bt_document_info.BTDocumentInfo get_document(did)

Get Document

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
    api_instance = onshape_client.oas.DocumentsApi(api_client)
    did = 'did_example' # str | 
    
    # example passing only required values which don't have defaults set
    try:
        # Get Document
        api_response = api_instance.get_document(did)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->get_document: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |

### Return type

[**bt_document_info.BTDocumentInfo**](BTDocumentInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_document_acl**
> bt_acl_info.BTAclInfo get_document_acl(did)

Get Access Control List

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
    api_instance = onshape_client.oas.DocumentsApi(api_client)
    did = 'did_example' # str | 
    
    # example passing only required values which don't have defaults set
    try:
        # Get Access Control List
        api_response = api_instance.get_document_acl(did)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->get_document_acl: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |

### Return type

[**bt_acl_info.BTAclInfo**](BTAclInfo.md)

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

# **get_document_permission_set**
> [str] get_document_permission_set(did)

Get Document Permissions

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
    api_instance = onshape_client.oas.DocumentsApi(api_client)
    did = 'did_example' # str | 
    
    # example passing only required values which don't have defaults set
    try:
        # Get Document Permissions
        api_response = api_instance.get_document_permission_set(did)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->get_document_permission_set: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |

### Return type

**[str]**

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_document_versions**
> [bt_version_info.BTVersionInfo] get_document_versions(did)

Get Versions

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
    api_instance = onshape_client.oas.DocumentsApi(api_client)
    did = 'did_example' # str | 
    offset = 0 # int |  (optional) if omitted the server will use the default value of 0
limit = 0 # int |  (optional) if omitted the server will use the default value of 0

    # example passing only required values which don't have defaults set
    try:
        # Get Versions
        api_response = api_instance.get_document_versions(did)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->get_document_versions: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Get Versions
        api_response = api_instance.get_document_versions(did, offset=offset, limit=limit)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->get_document_versions: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **offset** | **int**|  | [optional] if omitted the server will use the default value of 0
 **limit** | **int**|  | [optional] if omitted the server will use the default value of 0

### Return type

[**[bt_version_info.BTVersionInfo]**](BTVersionInfo.md)

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

# **get_document_workspaces**
> [bt_workspace_info.BTWorkspaceInfo] get_document_workspaces(did)

Get Workspaces

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
    api_instance = onshape_client.oas.DocumentsApi(api_client)
    did = 'did_example' # str | 
    
    # example passing only required values which don't have defaults set
    try:
        # Get Workspaces
        api_response = api_instance.get_document_workspaces(did)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->get_document_workspaces: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |

### Return type

[**[bt_workspace_info.BTWorkspaceInfo]**](BTWorkspaceInfo.md)

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

# **get_documents**
> bt_global_tree_node_list_response.BTGlobalTreeNodeListResponse get_documents()

Get Documents

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
    api_instance = onshape_client.oas.DocumentsApi(api_client)
    q = '' # str |  (optional) if omitted the server will use the default value of ''
filter = 56 # int |  (optional)
owner = '' # str |  (optional) if omitted the server will use the default value of ''
owner_type = 1 # int |  (optional) if omitted the server will use the default value of 1
sort_column = 'createdAt' # str |  (optional) if omitted the server will use the default value of 'createdAt'
sort_order = 'desc' # str |  (optional) if omitted the server will use the default value of 'desc'
offset = 0 # int |  (optional) if omitted the server will use the default value of 0
limit = 20 # int |  (optional) if omitted the server will use the default value of 20
label = 'label_example' # str |  (optional)
project = 'project_example' # str |  (optional)
parent_id = 'parent_id_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Get Documents
        api_response = api_instance.get_documents(q=q, filter=filter, owner=owner, owner_type=owner_type, sort_column=sort_column, sort_order=sort_order, offset=offset, limit=limit, label=label, project=project, parent_id=parent_id)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->get_documents: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **q** | **str**|  | [optional] if omitted the server will use the default value of ''
 **filter** | **int**|  | [optional]
 **owner** | **str**|  | [optional] if omitted the server will use the default value of ''
 **owner_type** | **int**|  | [optional] if omitted the server will use the default value of 1
 **sort_column** | **str**|  | [optional] if omitted the server will use the default value of 'createdAt'
 **sort_order** | **str**|  | [optional] if omitted the server will use the default value of 'desc'
 **offset** | **int**|  | [optional] if omitted the server will use the default value of 0
 **limit** | **int**|  | [optional] if omitted the server will use the default value of 20
 **label** | **str**|  | [optional]
 **project** | **str**|  | [optional]
 **parent_id** | **str**|  | [optional]

### Return type

[**bt_global_tree_node_list_response.BTGlobalTreeNodeListResponse**](BTGlobalTreeNodeListResponse.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_elements_in_document**
> [bt_document_element_info.BTDocumentElementInfo] get_elements_in_document(did, wvm, wvmid)

Get a list of elements in the workspace, version, or microversion of the document.

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
    api_instance = onshape_client.oas.DocumentsApi(api_client)
    did = 'did_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    element_type = '' # str |  (optional) if omitted the server will use the default value of ''
element_id = '' # str |  (optional) if omitted the server will use the default value of ''
with_thumbnails = False # bool |  (optional) if omitted the server will use the default value of False
link_document_id = 'link_document_id_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        # Get a list of elements in the workspace, version, or microversion of the document.
        api_response = api_instance.get_elements_in_document(did, wvm, wvmid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->get_elements_in_document: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Get a list of elements in the workspace, version, or microversion of the document.
        api_response = api_instance.get_elements_in_document(did, wvm, wvmid, element_type=element_type, element_id=element_id, with_thumbnails=with_thumbnails, link_document_id=link_document_id)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->get_elements_in_document: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **element_type** | **str**|  | [optional] if omitted the server will use the default value of ''
 **element_id** | **str**|  | [optional] if omitted the server will use the default value of ''
 **with_thumbnails** | **bool**|  | [optional] if omitted the server will use the default value of False
 **link_document_id** | **str**|  | [optional]

### Return type

[**[bt_document_element_info.BTDocumentElementInfo]**](BTDocumentElementInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_insertables**
> bt_insertables_list_response.BTInsertablesListResponse get_insertables(did, wvm, wvmid)

Insertable List for Document Version.

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
    api_instance = onshape_client.oas.DocumentsApi(api_client)
    did = 'did_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    beta_capability_ids = ['beta_capability_ids_example'] # [str] |  (optional)
include_parts = False # bool |  (optional) if omitted the server will use the default value of False
include_surfaces = False # bool |  (optional) if omitted the server will use the default value of False
include_wires = False # bool |  (optional) if omitted the server will use the default value of False
include_sketches = False # bool |  (optional) if omitted the server will use the default value of False
include_reference_features = False # bool |  (optional) if omitted the server will use the default value of False
include_assemblies = False # bool |  (optional) if omitted the server will use the default value of False
include_features = False # bool |  (optional) if omitted the server will use the default value of False
include_feature_studios = False # bool |  (optional) if omitted the server will use the default value of False
include_part_studios = False # bool |  (optional) if omitted the server will use the default value of False
include_blobs = False # bool |  (optional) if omitted the server will use the default value of False
include_meshes = False # bool |  (optional) if omitted the server will use the default value of False
include_flattened_bodies = False # bool |  (optional) if omitted the server will use the default value of False
allowed_blob_mime_types = '' # str |  (optional) if omitted the server will use the default value of ''
max_feature_script_version = 0 # int |  (optional) if omitted the server will use the default value of 0
include_applications = False # bool |  (optional) if omitted the server will use the default value of False
allowed_application_mime_types = '' # str |  (optional) if omitted the server will use the default value of ''
include_composite_parts = False # bool |  (optional) if omitted the server will use the default value of False
include_fs_tables = False # bool |  (optional) if omitted the server will use the default value of False

    # example passing only required values which don't have defaults set
    try:
        # Insertable List for Document Version.
        api_response = api_instance.get_insertables(did, wvm, wvmid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->get_insertables: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Insertable List for Document Version.
        api_response = api_instance.get_insertables(did, wvm, wvmid, beta_capability_ids=beta_capability_ids, include_parts=include_parts, include_surfaces=include_surfaces, include_wires=include_wires, include_sketches=include_sketches, include_reference_features=include_reference_features, include_assemblies=include_assemblies, include_features=include_features, include_feature_studios=include_feature_studios, include_part_studios=include_part_studios, include_blobs=include_blobs, include_meshes=include_meshes, include_flattened_bodies=include_flattened_bodies, allowed_blob_mime_types=allowed_blob_mime_types, max_feature_script_version=max_feature_script_version, include_applications=include_applications, allowed_application_mime_types=allowed_application_mime_types, include_composite_parts=include_composite_parts, include_fs_tables=include_fs_tables)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->get_insertables: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **beta_capability_ids** | **[str]**|  | [optional]
 **include_parts** | **bool**|  | [optional] if omitted the server will use the default value of False
 **include_surfaces** | **bool**|  | [optional] if omitted the server will use the default value of False
 **include_wires** | **bool**|  | [optional] if omitted the server will use the default value of False
 **include_sketches** | **bool**|  | [optional] if omitted the server will use the default value of False
 **include_reference_features** | **bool**|  | [optional] if omitted the server will use the default value of False
 **include_assemblies** | **bool**|  | [optional] if omitted the server will use the default value of False
 **include_features** | **bool**|  | [optional] if omitted the server will use the default value of False
 **include_feature_studios** | **bool**|  | [optional] if omitted the server will use the default value of False
 **include_part_studios** | **bool**|  | [optional] if omitted the server will use the default value of False
 **include_blobs** | **bool**|  | [optional] if omitted the server will use the default value of False
 **include_meshes** | **bool**|  | [optional] if omitted the server will use the default value of False
 **include_flattened_bodies** | **bool**|  | [optional] if omitted the server will use the default value of False
 **allowed_blob_mime_types** | **str**|  | [optional] if omitted the server will use the default value of ''
 **max_feature_script_version** | **int**|  | [optional] if omitted the server will use the default value of 0
 **include_applications** | **bool**|  | [optional] if omitted the server will use the default value of False
 **allowed_application_mime_types** | **str**|  | [optional] if omitted the server will use the default value of ''
 **include_composite_parts** | **bool**|  | [optional] if omitted the server will use the default value of False
 **include_fs_tables** | **bool**|  | [optional] if omitted the server will use the default value of False

### Return type

[**bt_insertables_list_response.BTInsertablesListResponse**](BTInsertablesListResponse.md)

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

# **get_version**
> bt_version_info.BTVersionInfo get_version(did, vid)

Get Version

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
    api_instance = onshape_client.oas.DocumentsApi(api_client)
    did = 'did_example' # str | 
    vid = 'vid_example' # str | 
    parents = False # bool |  (optional) if omitted the server will use the default value of False
link_document_id = 'link_document_id_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        # Get Version
        api_response = api_instance.get_version(did, vid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->get_version: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Get Version
        api_response = api_instance.get_version(did, vid, parents=parents, link_document_id=link_document_id)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->get_version: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **vid** | **str**|  |
 **parents** | **bool**|  | [optional] if omitted the server will use the default value of False
 **link_document_id** | **str**|  | [optional]

### Return type

[**bt_version_info.BTVersionInfo**](BTVersionInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **merge_into_workspace**
> bt_document_merge_info.BTDocumentMergeInfo merge_into_workspace(did, wid, bt_version_or_workspace_info)

Merge into workspace

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
    api_instance = onshape_client.oas.DocumentsApi(api_client)
    did = 'did_example' # str | 
    wid = 'wid_example' # str | 
    bt_version_or_workspace_info = onshape_client.oas.BTVersionOrWorkspaceInfo() # bt_version_or_workspace_info.BTVersionOrWorkspaceInfo | 
    
    # example passing only required values which don't have defaults set
    try:
        # Merge into workspace
        api_response = api_instance.merge_into_workspace(did, wid, bt_version_or_workspace_info)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->merge_into_workspace: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wid** | **str**|  |
 **bt_version_or_workspace_info** | [**bt_version_or_workspace_info.BTVersionOrWorkspaceInfo**](BTVersionOrWorkspaceInfo.md)|  |

### Return type

[**bt_document_merge_info.BTDocumentMergeInfo**](BTDocumentMergeInfo.md)

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

# **move_elements_to_document**
> bt_move_element_info.BTMoveElementInfo move_elements_to_document(did, wid, bt_move_element_params)

Move Elements

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
    api_instance = onshape_client.oas.DocumentsApi(api_client)
    did = 'did_example' # str | 
    wid = 'wid_example' # str | 
    bt_move_element_params = onshape_client.oas.BTMoveElementParams() # bt_move_element_params.BTMoveElementParams | 
    
    # example passing only required values which don't have defaults set
    try:
        # Move Elements
        api_response = api_instance.move_elements_to_document(did, wid, bt_move_element_params)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->move_elements_to_document: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wid** | **str**|  |
 **bt_move_element_params** | [**bt_move_element_params.BTMoveElementParams**](BTMoveElementParams.md)|  |

### Return type

[**bt_move_element_info.BTMoveElementInfo**](BTMoveElementInfo.md)

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

# **restore_from_history**
> restore_from_history(did, wid, vm, vmid)

Restore version or microversion to workspace.

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
    api_instance = onshape_client.oas.DocumentsApi(api_client)
    did = 'did_example' # str | 
    wid = 'wid_example' # str | 
    vm = 'vm_example' # str | 
    vmid = 'vmid_example' # str | 
    
    # example passing only required values which don't have defaults set
    try:
        # Restore version or microversion to workspace.
        api_instance.restore_from_history(did, wid, vm, vmid)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->restore_from_history: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wid** | **str**|  |
 **vm** | **str**|  |
 **vmid** | **str**|  |

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

# **search**
> search(bt_document_search_params)



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
    api_instance = onshape_client.oas.DocumentsApi(api_client)
    bt_document_search_params = onshape_client.oas.BTDocumentSearchParams() # bt_document_search_params.BTDocumentSearchParams | 
    
    # example passing only required values which don't have defaults set
    try:
        api_instance.search(bt_document_search_params)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->search: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **bt_document_search_params** | [**bt_document_search_params.BTDocumentSearchParams**](BTDocumentSearchParams.md)|  |

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

# **share_document**
> bt_acl_info.BTAclInfo share_document(did, bt_share_params)

Share Document

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
    api_instance = onshape_client.oas.DocumentsApi(api_client)
    did = 'did_example' # str | 
    bt_share_params = onshape_client.oas.BTShareParams() # bt_share_params.BTShareParams | 
    
    # example passing only required values which don't have defaults set
    try:
        # Share Document
        api_response = api_instance.share_document(did, bt_share_params)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->share_document: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **bt_share_params** | [**bt_share_params.BTShareParams**](BTShareParams.md)|  |

### Return type

[**bt_acl_info.BTAclInfo**](BTAclInfo.md)

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

# **sync_application_elements**
> sync_application_elements(did, wid, application_element_ids)

Sync Application Elements

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
    api_instance = onshape_client.oas.DocumentsApi(api_client)
    did = 'did_example' # str | 
    wid = 'wid_example' # str | 
    application_element_ids = ['application_element_ids_example'] # [str] | 
    description = 'description_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        # Sync Application Elements
        api_instance.sync_application_elements(did, wid, application_element_ids)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->sync_application_elements: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Sync Application Elements
        api_instance.sync_application_elements(did, wid, application_element_ids, description=description)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->sync_application_elements: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wid** | **str**|  |
 **application_element_ids** | **[str]**|  |
 **description** | **str**|  | [optional]

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

# **un_share_document**
> un_share_document(did, eid)

Unshare Document

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
    api_instance = onshape_client.oas.DocumentsApi(api_client)
    did = 'did_example' # str | 
    eid = 'eid_example' # str | 
    entry_type = 0 # int |  (optional) if omitted the server will use the default value of 0

    # example passing only required values which don't have defaults set
    try:
        # Unshare Document
        api_instance.un_share_document(did, eid)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->un_share_document: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Unshare Document
        api_instance.un_share_document(did, eid, entry_type=entry_type)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->un_share_document: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **eid** | **str**|  |
 **entry_type** | **int**|  | [optional] if omitted the server will use the default value of 0

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

# **update_document_attributes**
> update_document_attributes(did, bt_document_params)

Update Document Attributes.

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
    api_instance = onshape_client.oas.DocumentsApi(api_client)
    did = 'did_example' # str | 
    bt_document_params = onshape_client.oas.BTDocumentParams() # bt_document_params.BTDocumentParams | 
    
    # example passing only required values which don't have defaults set
    try:
        # Update Document Attributes.
        api_instance.update_document_attributes(did, bt_document_params)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->update_document_attributes: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **bt_document_params** | [**bt_document_params.BTDocumentParams**](BTDocumentParams.md)|  |

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

# **update_external_references_to_latest_documents**
> bt_link_to_latest_document_info.BTLinkToLatestDocumentInfo update_external_references_to_latest_documents(did, wid, eid)

Update External References to Latest

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
    api_instance = onshape_client.oas.DocumentsApi(api_client)
    did = 'did_example' # str | 
    wid = 'wid_example' # str | 
    eid = 'eid_example' # str | 
    bt_link_to_latest_document_params = onshape_client.oas.BTLinkToLatestDocumentParams() # bt_link_to_latest_document_params.BTLinkToLatestDocumentParams |  (optional)

    # example passing only required values which don't have defaults set
    try:
        # Update External References to Latest
        api_response = api_instance.update_external_references_to_latest_documents(did, wid, eid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->update_external_references_to_latest_documents: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Update External References to Latest
        api_response = api_instance.update_external_references_to_latest_documents(did, wid, eid, bt_link_to_latest_document_params=bt_link_to_latest_document_params)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling DocumentsApi->update_external_references_to_latest_documents: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wid** | **str**|  |
 **eid** | **str**|  |
 **bt_link_to_latest_document_params** | [**bt_link_to_latest_document_params.BTLinkToLatestDocumentParams**](BTLinkToLatestDocumentParams.md)|  | [optional]

### Return type

[**bt_link_to_latest_document_info.BTLinkToLatestDocumentInfo**](BTLinkToLatestDocumentInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8; qs=0.09
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

