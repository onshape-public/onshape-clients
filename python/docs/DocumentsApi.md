# onshape_client.oas.DocumentsApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**copy_workspace**](DocumentsApi.md#copy_workspace) | **POST** /api/documents/{did}/workspaces/{wid}/copy | 
[**create_document**](DocumentsApi.md#create_document) | **POST** /api/documents | Create document.
[**create_version**](DocumentsApi.md#create_version) | **POST** /api/documents/d/{did}/versions | 
[**create_workspace**](DocumentsApi.md#create_workspace) | **POST** /api/documents/d/{did}/workspaces | 
[**delete7**](DocumentsApi.md#delete7) | **DELETE** /api/documents/{did} | 
[**delete_workspace**](DocumentsApi.md#delete_workspace) | **DELETE** /api/documents/d/{did}/workspaces/{wid} | 
[**download_external_data**](DocumentsApi.md#download_external_data) | **GET** /api/documents/d/{did}/externaldata/{fid} | Download External Data
[**export2_json**](DocumentsApi.md#export2_json) | **POST** /api/documents/d/{did}/{wv}/{wvid}/e/{eid}/export | 
[**get_acl**](DocumentsApi.md#get_acl) | **GET** /api/documents/{did}/acl | 
[**get_current_microversion**](DocumentsApi.md#get_current_microversion) | **GET** /api/documents/d/{did}/{wv}/{wvid}/currentmicroversion | Get Current Document Microversion
[**get_document**](DocumentsApi.md#get_document) | **GET** /api/documents/{did} | Get Document
[**get_document_permission_set**](DocumentsApi.md#get_document_permission_set) | **GET** /api/documents/{did}/permissionset | 
[**get_documents**](DocumentsApi.md#get_documents) | **GET** /api/documents | Get Documents
[**get_elements2**](DocumentsApi.md#get_elements2) | **GET** /api/documents/d/{did}/{wvm}/{wvmid}/elements | Get a list of elements in the workspace, version, or microversion of the document.
[**get_insertables**](DocumentsApi.md#get_insertables) | **GET** /api/documents/d/{did}/{wvm}/{wvmid}/insertables | 
[**get_version**](DocumentsApi.md#get_version) | **GET** /api/documents/d/{did}/versions/{vid} | Get Version
[**get_versions1**](DocumentsApi.md#get_versions1) | **GET** /api/documents/d/{did}/versions | Get Versions
[**get_workspaces1**](DocumentsApi.md#get_workspaces1) | **GET** /api/documents/d/{did}/workspaces | Get Workspaces
[**merge_into_workspace**](DocumentsApi.md#merge_into_workspace) | **POST** /api/documents/{did}/workspaces/{wid}/merge | Merge into workspace
[**restore_rendition**](DocumentsApi.md#restore_rendition) | **POST** /api/documents/{did}/workspaces/{wid}/restore/{mvid} | 
[**sync_application_elements**](DocumentsApi.md#sync_application_elements) | **POST** /api/documents/d/{did}/w/{wid}/syncApplicationElements | 
[**update_external_references_to_latest_documents**](DocumentsApi.md#update_external_references_to_latest_documents) | **POST** /api/documents/d/{did}/w/{wid}/e/{eid}/latestdocumentreferences | 


# **copy_workspace**
> copy_workspace(did, wid, bt_copy_document_params=bt_copy_document_params)



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
api_instance = onshape_client.oas.DocumentsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wid = 'wid_example' # str | 
bt_copy_document_params = onshape_client.oas.BTCopyDocumentParams() # BTCopyDocumentParams |  (optional)

try:
    api_instance.copy_workspace(did, wid, bt_copy_document_params=bt_copy_document_params)
except ApiException as e:
    print("Exception when calling DocumentsApi->copy_workspace: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wid** | **str**|  | 
 **bt_copy_document_params** | [**BTCopyDocumentParams**](BTCopyDocumentParams.md)|  | [optional] 

### Return type

void (empty response body)

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

# **create_document**
> BTDocumentInfo create_document(bt_document_params)

Create document.

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
api_instance = onshape_client.oas.DocumentsApi(onshape_client.oas.ApiClient(configuration))
bt_document_params = onshape_client.oas.BTDocumentParams() # BTDocumentParams | 

try:
    # Create document.
    api_response = api_instance.create_document(bt_document_params)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DocumentsApi->create_document: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **bt_document_params** | [**BTDocumentParams**](BTDocumentParams.md)|  | 

### Return type

[**BTDocumentInfo**](BTDocumentInfo.md)

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

# **create_version**
> create_version(did, bt_version_or_workspace_params)



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
api_instance = onshape_client.oas.DocumentsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
bt_version_or_workspace_params = onshape_client.oas.BTVersionOrWorkspaceParams() # BTVersionOrWorkspaceParams | 

try:
    api_instance.create_version(did, bt_version_or_workspace_params)
except ApiException as e:
    print("Exception when calling DocumentsApi->create_version: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **bt_version_or_workspace_params** | [**BTVersionOrWorkspaceParams**](BTVersionOrWorkspaceParams.md)|  | 

### Return type

void (empty response body)

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

# **create_workspace**
> create_workspace(did, bt_version_or_workspace_params=bt_version_or_workspace_params)



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
api_instance = onshape_client.oas.DocumentsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
bt_version_or_workspace_params = onshape_client.oas.BTVersionOrWorkspaceParams() # BTVersionOrWorkspaceParams |  (optional)

try:
    api_instance.create_workspace(did, bt_version_or_workspace_params=bt_version_or_workspace_params)
except ApiException as e:
    print("Exception when calling DocumentsApi->create_workspace: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **bt_version_or_workspace_params** | [**BTVersionOrWorkspaceParams**](BTVersionOrWorkspaceParams.md)|  | [optional] 

### Return type

void (empty response body)

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

# **delete7**
> delete7(did, forever=forever)



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
api_instance = onshape_client.oas.DocumentsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
forever = False # bool |  (optional) (default to False)

try:
    api_instance.delete7(did, forever=forever)
except ApiException as e:
    print("Exception when calling DocumentsApi->delete7: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **forever** | **bool**|  | [optional] [default to False]

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_workspace**
> delete_workspace(did, wid)



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
api_instance = onshape_client.oas.DocumentsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wid = 'wid_example' # str | 

try:
    api_instance.delete_workspace(did, wid)
except ApiException as e:
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
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **download_external_data**
> file download_external_data(did, fid, if_none_match=if_none_match)

Download External Data

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
api_instance = onshape_client.oas.DocumentsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
fid = 'fid_example' # str | 
if_none_match = 'if_none_match_example' # str |  (optional)

try:
    # Download External Data
    api_response = api_instance.download_external_data(did, fid, if_none_match=if_none_match)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DocumentsApi->download_external_data: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **fid** | **str**|  | 
 **if_none_match** | **str**|  | [optional] 

### Return type

**file**

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09, application/vnd.onshape.v1+octet-stream;charset=UTF-8;qs=0.1, application/octet-stream

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **export2_json**
> export2_json(did, wv, wvid, eid, bt_export_model_params=bt_export_model_params)



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
api_instance = onshape_client.oas.DocumentsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wv = 'wv_example' # str | 
wvid = 'wvid_example' # str | 
eid = 'eid_example' # str | 
bt_export_model_params = onshape_client.oas.BTExportModelParams() # BTExportModelParams |  (optional)

try:
    api_instance.export2_json(did, wv, wvid, eid, bt_export_model_params=bt_export_model_params)
except ApiException as e:
    print("Exception when calling DocumentsApi->export2_json: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wv** | **str**|  | 
 **wvid** | **str**|  | 
 **eid** | **str**|  | 
 **bt_export_model_params** | [**BTExportModelParams**](BTExportModelParams.md)|  | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8; qs=0.09
 - **Accept**: application/vnd.onshape.v1+octet-stream;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_acl**
> get_acl(did)



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
api_instance = onshape_client.oas.DocumentsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 

try:
    api_instance.get_acl(did)
except ApiException as e:
    print("Exception when calling DocumentsApi->get_acl: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_current_microversion**
> BTMicroversionInfo get_current_microversion(did, wv, wvid)

Get Current Document Microversion

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
api_instance = onshape_client.oas.DocumentsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wv = 'wv_example' # str | 
wvid = 'wvid_example' # str | 

try:
    # Get Current Document Microversion
    api_response = api_instance.get_current_microversion(did, wv, wvid)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DocumentsApi->get_current_microversion: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wv** | **str**|  | 
 **wvid** | **str**|  | 

### Return type

[**BTMicroversionInfo**](BTMicroversionInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_document**
> BTDocumentInfo get_document(did)

Get Document

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
api_instance = onshape_client.oas.DocumentsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 

try:
    # Get Document
    api_response = api_instance.get_document(did)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DocumentsApi->get_document: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 

### Return type

[**BTDocumentInfo**](BTDocumentInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_document_permission_set**
> get_document_permission_set(did)



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
api_instance = onshape_client.oas.DocumentsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 

try:
    api_instance.get_document_permission_set(did)
except ApiException as e:
    print("Exception when calling DocumentsApi->get_document_permission_set: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_documents**
> BTGlobalTreeNodeListResponse get_documents(q=q, filter=filter, owner=owner, owner_type=owner_type, sort_column=sort_column, sort_order=sort_order, offset=offset, limit=limit, label=label, project=project, parent_id=parent_id)

Get Documents

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
api_instance = onshape_client.oas.DocumentsApi(onshape_client.oas.ApiClient(configuration))
q = '' # str |  (optional) (default to '')
filter = 56 # int |  (optional)
owner = '' # str |  (optional) (default to '')
owner_type = 1 # int |  (optional) (default to 1)
sort_column = 'createdAt' # str |  (optional) (default to 'createdAt')
sort_order = 'desc' # str |  (optional) (default to 'desc')
offset = 0 # int |  (optional) (default to 0)
limit = 20 # int |  (optional) (default to 20)
label = 'label_example' # str |  (optional)
project = 'project_example' # str |  (optional)
parent_id = 'parent_id_example' # str |  (optional)

try:
    # Get Documents
    api_response = api_instance.get_documents(q=q, filter=filter, owner=owner, owner_type=owner_type, sort_column=sort_column, sort_order=sort_order, offset=offset, limit=limit, label=label, project=project, parent_id=parent_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DocumentsApi->get_documents: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **q** | **str**|  | [optional] [default to &#39;&#39;]
 **filter** | **int**|  | [optional] 
 **owner** | **str**|  | [optional] [default to &#39;&#39;]
 **owner_type** | **int**|  | [optional] [default to 1]
 **sort_column** | **str**|  | [optional] [default to &#39;createdAt&#39;]
 **sort_order** | **str**|  | [optional] [default to &#39;desc&#39;]
 **offset** | **int**|  | [optional] [default to 0]
 **limit** | **int**|  | [optional] [default to 20]
 **label** | **str**|  | [optional] 
 **project** | **str**|  | [optional] 
 **parent_id** | **str**|  | [optional] 

### Return type

[**BTGlobalTreeNodeListResponse**](BTGlobalTreeNodeListResponse.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_elements2**
> list[BTDocumentElementInfo] get_elements2(did, wvm, wvmid, element_type=element_type, element_id=element_id, with_thumbnails=with_thumbnails, link_document_id=link_document_id)

Get a list of elements in the workspace, version, or microversion of the document.

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
api_instance = onshape_client.oas.DocumentsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wvm = 'wvm_example' # str | 
wvmid = 'wvmid_example' # str | 
element_type = '' # str |  (optional) (default to '')
element_id = '' # str |  (optional) (default to '')
with_thumbnails = False # bool |  (optional) (default to False)
link_document_id = 'link_document_id_example' # str |  (optional)

try:
    # Get a list of elements in the workspace, version, or microversion of the document.
    api_response = api_instance.get_elements2(did, wvm, wvmid, element_type=element_type, element_id=element_id, with_thumbnails=with_thumbnails, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DocumentsApi->get_elements2: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wvm** | **str**|  | 
 **wvmid** | **str**|  | 
 **element_type** | **str**|  | [optional] [default to &#39;&#39;]
 **element_id** | **str**|  | [optional] [default to &#39;&#39;]
 **with_thumbnails** | **bool**|  | [optional] [default to False]
 **link_document_id** | **str**|  | [optional] 

### Return type

[**list[BTDocumentElementInfo]**](BTDocumentElementInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_insertables**
> get_insertables(did, wvm, wvmid, beta_capability_ids=beta_capability_ids, include_parts=include_parts, include_surfaces=include_surfaces, include_wires=include_wires, include_sketches=include_sketches, include_reference_features=include_reference_features, include_assemblies=include_assemblies, include_features=include_features, include_feature_studios=include_feature_studios, include_part_studios=include_part_studios, include_blobs=include_blobs, include_meshes=include_meshes, include_flattened_bodies=include_flattened_bodies, allowed_blob_mime_types=allowed_blob_mime_types, max_feature_script_version=max_feature_script_version, include_applications=include_applications, allowed_application_mime_types=allowed_application_mime_types)



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
api_instance = onshape_client.oas.DocumentsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wvm = 'wvm_example' # str | 
wvmid = 'wvmid_example' # str | 
beta_capability_ids = ['beta_capability_ids_example'] # list[str] |  (optional)
include_parts = False # bool |  (optional) (default to False)
include_surfaces = False # bool |  (optional) (default to False)
include_wires = False # bool |  (optional) (default to False)
include_sketches = False # bool |  (optional) (default to False)
include_reference_features = False # bool |  (optional) (default to False)
include_assemblies = False # bool |  (optional) (default to False)
include_features = False # bool |  (optional) (default to False)
include_feature_studios = False # bool |  (optional) (default to False)
include_part_studios = False # bool |  (optional) (default to False)
include_blobs = False # bool |  (optional) (default to False)
include_meshes = False # bool |  (optional) (default to False)
include_flattened_bodies = False # bool |  (optional) (default to False)
allowed_blob_mime_types = '' # str |  (optional) (default to '')
max_feature_script_version = 0 # int |  (optional) (default to 0)
include_applications = False # bool |  (optional) (default to False)
allowed_application_mime_types = '' # str |  (optional) (default to '')

try:
    api_instance.get_insertables(did, wvm, wvmid, beta_capability_ids=beta_capability_ids, include_parts=include_parts, include_surfaces=include_surfaces, include_wires=include_wires, include_sketches=include_sketches, include_reference_features=include_reference_features, include_assemblies=include_assemblies, include_features=include_features, include_feature_studios=include_feature_studios, include_part_studios=include_part_studios, include_blobs=include_blobs, include_meshes=include_meshes, include_flattened_bodies=include_flattened_bodies, allowed_blob_mime_types=allowed_blob_mime_types, max_feature_script_version=max_feature_script_version, include_applications=include_applications, allowed_application_mime_types=allowed_application_mime_types)
except ApiException as e:
    print("Exception when calling DocumentsApi->get_insertables: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wvm** | **str**|  | 
 **wvmid** | **str**|  | 
 **beta_capability_ids** | [**list[str]**](str.md)|  | [optional] 
 **include_parts** | **bool**|  | [optional] [default to False]
 **include_surfaces** | **bool**|  | [optional] [default to False]
 **include_wires** | **bool**|  | [optional] [default to False]
 **include_sketches** | **bool**|  | [optional] [default to False]
 **include_reference_features** | **bool**|  | [optional] [default to False]
 **include_assemblies** | **bool**|  | [optional] [default to False]
 **include_features** | **bool**|  | [optional] [default to False]
 **include_feature_studios** | **bool**|  | [optional] [default to False]
 **include_part_studios** | **bool**|  | [optional] [default to False]
 **include_blobs** | **bool**|  | [optional] [default to False]
 **include_meshes** | **bool**|  | [optional] [default to False]
 **include_flattened_bodies** | **bool**|  | [optional] [default to False]
 **allowed_blob_mime_types** | **str**|  | [optional] [default to &#39;&#39;]
 **max_feature_script_version** | **int**|  | [optional] [default to 0]
 **include_applications** | **bool**|  | [optional] [default to False]
 **allowed_application_mime_types** | **str**|  | [optional] [default to &#39;&#39;]

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_version**
> BTVersionInfo get_version(did, vid, parents=parents, link_document_id=link_document_id)

Get Version

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
api_instance = onshape_client.oas.DocumentsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
vid = 'vid_example' # str | 
parents = False # bool |  (optional) (default to False)
link_document_id = 'link_document_id_example' # str |  (optional)

try:
    # Get Version
    api_response = api_instance.get_version(did, vid, parents=parents, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DocumentsApi->get_version: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **vid** | **str**|  | 
 **parents** | **bool**|  | [optional] [default to False]
 **link_document_id** | **str**|  | [optional] 

### Return type

[**BTVersionInfo**](BTVersionInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_versions1**
> list[BTVersionInfo] get_versions1(did, offset=offset, limit=limit)

Get Versions

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
api_instance = onshape_client.oas.DocumentsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
offset = 0 # int |  (optional) (default to 0)
limit = 0 # int |  (optional) (default to 0)

try:
    # Get Versions
    api_response = api_instance.get_versions1(did, offset=offset, limit=limit)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DocumentsApi->get_versions1: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **offset** | **int**|  | [optional] [default to 0]
 **limit** | **int**|  | [optional] [default to 0]

### Return type

[**list[BTVersionInfo]**](BTVersionInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_workspaces1**
> list[BTWorkspaceInfo] get_workspaces1(did)

Get Workspaces

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
api_instance = onshape_client.oas.DocumentsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 

try:
    # Get Workspaces
    api_response = api_instance.get_workspaces1(did)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DocumentsApi->get_workspaces1: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 

### Return type

[**list[BTWorkspaceInfo]**](BTWorkspaceInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **merge_into_workspace**
> BTDocumentMergeInfo merge_into_workspace(did, wid, bt_version_or_workspace_info)

Merge into workspace

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
api_instance = onshape_client.oas.DocumentsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wid = 'wid_example' # str | 
bt_version_or_workspace_info = onshape_client.oas.BTVersionOrWorkspaceInfo() # BTVersionOrWorkspaceInfo | 

try:
    # Merge into workspace
    api_response = api_instance.merge_into_workspace(did, wid, bt_version_or_workspace_info)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DocumentsApi->merge_into_workspace: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wid** | **str**|  | 
 **bt_version_or_workspace_info** | [**BTVersionOrWorkspaceInfo**](BTVersionOrWorkspaceInfo.md)|  | 

### Return type

[**BTDocumentMergeInfo**](BTDocumentMergeInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8; qs=0.09
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **restore_rendition**
> restore_rendition(did, wid, mvid)



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
api_instance = onshape_client.oas.DocumentsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wid = 'wid_example' # str | 
mvid = 'mvid_example' # str | 

try:
    api_instance.restore_rendition(did, wid, mvid)
except ApiException as e:
    print("Exception when calling DocumentsApi->restore_rendition: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wid** | **str**|  | 
 **mvid** | **str**|  | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **sync_application_elements**
> sync_application_elements(did, wid, application_element_ids, description=description)



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
api_instance = onshape_client.oas.DocumentsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wid = 'wid_example' # str | 
application_element_ids = ['application_element_ids_example'] # list[str] | 
description = 'description_example' # str |  (optional)

try:
    api_instance.sync_application_elements(did, wid, application_element_ids, description=description)
except ApiException as e:
    print("Exception when calling DocumentsApi->sync_application_elements: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wid** | **str**|  | 
 **application_element_ids** | [**list[str]**](str.md)|  | 
 **description** | **str**|  | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_external_references_to_latest_documents**
> update_external_references_to_latest_documents(did, wid, eid, bt_link_to_latest_document_params=bt_link_to_latest_document_params)



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
api_instance = onshape_client.oas.DocumentsApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wid = 'wid_example' # str | 
eid = 'eid_example' # str | 
bt_link_to_latest_document_params = onshape_client.oas.BTLinkToLatestDocumentParams() # BTLinkToLatestDocumentParams |  (optional)

try:
    api_instance.update_external_references_to_latest_documents(did, wid, eid, bt_link_to_latest_document_params=bt_link_to_latest_document_params)
except ApiException as e:
    print("Exception when calling DocumentsApi->update_external_references_to_latest_documents: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wid** | **str**|  | 
 **eid** | **str**|  | 
 **bt_link_to_latest_document_params** | [**BTLinkToLatestDocumentParams**](BTLinkToLatestDocumentParams.md)|  | [optional] 

### Return type

void (empty response body)

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

