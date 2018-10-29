# onshape_client.AppElementsApi

All URIs are relative to *https://cad.onshape.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**commit_transaction**](AppElementsApi.md#commit_transaction) | **POST** /appelements/d/{did}/w/{wid}/e/{eid}/transactions/{tid} | Commit Transaction
[**create_element**](AppElementsApi.md#create_element) | **POST** /appelements/d/{did}/w/{wid} | Create Element
[**create_reference**](AppElementsApi.md#create_reference) | **POST** /appelements/d/{did}/w/{wid}/e/{eid}/references | Create Reference
[**delete_content**](AppElementsApi.md#delete_content) | **DELETE** /appelements/d/{did}/{wvm_char}/{wvm}/e/{eid}/content/subelements/{sid} | Delete a Sub-element
[**delete_reference**](AppElementsApi.md#delete_reference) | **DELETE** /appelements/d/{did}/w/{wid}/e/{eid}/references/{rid} | Delete Reference
[**get_history_by_workspace**](AppElementsApi.md#get_history_by_workspace) | **GET** /appelements/d/{did}/{wvm_char}/{wvm}/e/{eid}/content/history | Get History
[**get_sub_element_content**](AppElementsApi.md#get_sub_element_content) | **GET** /appelements/d/{did}/{wvm_char}/{wvm}/e/{eid}/content | Get Content
[**get_sub_element_ids**](AppElementsApi.md#get_sub_element_ids) | **GET** /appelements/d/{did}/{wvm_char}/{wvm}/e/{eid}/content/ids/ | Get Sub-element IDs
[**resolve_reference**](AppElementsApi.md#resolve_reference) | **GET** /appelements/d/{did}/{wvm_char}/{wvm}/e/{eid}/references/{rid} | Resolve Reference
[**start_transaction**](AppElementsApi.md#start_transaction) | **POST** /appelements/d/{did}/w/{wid}/e/{eid}/transactions/ | Start Transaction
[**update_element**](AppElementsApi.md#update_element) | **POST** /appelements/d/{did}/w/{wid}/e/{eid}/content | Update Element
[**update_reference**](AppElementsApi.md#update_reference) | **POST** /appelements/d/{did}/w/{wid}/e/{eid}/references/{rid} | Update Reference


# **commit_transaction**
> AppElementsCommitTransactionResponse200 commit_transaction(tid, did, wid, eid, body=body)

Commit Transaction

Commits a transaction (merges a microbranch)

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
api_instance = onshape_client.AppElementsApi(onshape_client.ApiClient(configuration))
tid = 'tid_example' # str | Id of the transaction to commit
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
eid = 'eid_example' # str | Element ID
body = onshape_client.AppElementsCommitTransactionBody() # AppElementsCommitTransactionBody | The JSON request body. (optional)

try:
    # Commit Transaction
    api_response = api_instance.commit_transaction(tid, did, wid, eid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AppElementsApi->commit_transaction: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **tid** | **str**| Id of the transaction to commit | 
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **eid** | **str**| Element ID | 
 **body** | [**AppElementsCommitTransactionBody**](AppElementsCommitTransactionBody.md)| The JSON request body. | [optional] 

### Return type

[**AppElementsCommitTransactionResponse200**](AppElementsCommitTransactionResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_element**
> AppElementsCreateElementResponse200 create_element(did, wid, body=body)

Create Element

Create an app element

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
api_instance = onshape_client.AppElementsApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
body = onshape_client.AppElementsCreateElementBody() # AppElementsCreateElementBody | The JSON request body. (optional)

try:
    # Create Element
    api_response = api_instance.create_element(did, wid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AppElementsApi->create_element: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **body** | [**AppElementsCreateElementBody**](AppElementsCreateElementBody.md)| The JSON request body. | [optional] 

### Return type

[**AppElementsCreateElementResponse200**](AppElementsCreateElementResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_reference**
> AppElementsCreateReferenceResponse200 create_reference(did, wid, eid, body=body)

Create Reference

Create an app element reference

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
api_instance = onshape_client.AppElementsApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
eid = 'eid_example' # str | Element ID
body = onshape_client.AppElementsCreateReferenceBody() # AppElementsCreateReferenceBody | The JSON request body. (optional)

try:
    # Create Reference
    api_response = api_instance.create_reference(did, wid, eid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AppElementsApi->create_reference: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **eid** | **str**| Element ID | 
 **body** | [**AppElementsCreateReferenceBody**](AppElementsCreateReferenceBody.md)| The JSON request body. | [optional] 

### Return type

[**AppElementsCreateReferenceResponse200**](AppElementsCreateReferenceResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_content**
> AppElementsDeleteContentResponse200 delete_content(wvm_char, sid, did, wvm, eid, parent_change_id=parent_change_id, transaction_id=transaction_id, description=description)

Delete a Sub-element

Deletes a sub-element of an application element

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
api_instance = onshape_client.AppElementsApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
sid = 'sid_example' # str | The id of the subelement to be deleted. URL-encode if needed
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID
parent_change_id = 'parent_change_id_example' # str | Id of the last change made by this application to this element (optional)
transaction_id = 'transaction_id_example' # str | Id of the transaction to commit (optional)
description = 'description_example' # str | Description of the deletion operation for history (optional)

try:
    # Delete a Sub-element
    api_response = api_instance.delete_content(wvm_char, sid, did, wvm, eid, parent_change_id=parent_change_id, transaction_id=transaction_id, description=description)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AppElementsApi->delete_content: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **sid** | **str**| The id of the subelement to be deleted. URL-encode if needed | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 
 **parent_change_id** | **str**| Id of the last change made by this application to this element | [optional] 
 **transaction_id** | **str**| Id of the transaction to commit | [optional] 
 **description** | **str**| Description of the deletion operation for history | [optional] 

### Return type

[**AppElementsDeleteContentResponse200**](AppElementsDeleteContentResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_reference**
> AppElementsDeleteReferenceResponse200 delete_reference(rid, did, wid, eid, parent_change_id=parent_change_id, transaction_id=transaction_id, description=description)

Delete Reference

Delete an app element reference

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
api_instance = onshape_client.AppElementsApi(onshape_client.ApiClient(configuration))
rid = 'rid_example' # str | The id of the reference to be deleted
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
eid = 'eid_example' # str | Element ID
parent_change_id = 'parent_change_id_example' # str | Id of the last change made by this application to this element (optional)
transaction_id = 'transaction_id_example' # str | Id of the transaction to commit (optional)
description = 'description_example' # str | Description of the deletion operation for history (optional)

try:
    # Delete Reference
    api_response = api_instance.delete_reference(rid, did, wid, eid, parent_change_id=parent_change_id, transaction_id=transaction_id, description=description)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AppElementsApi->delete_reference: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **rid** | **str**| The id of the reference to be deleted | 
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **eid** | **str**| Element ID | 
 **parent_change_id** | **str**| Id of the last change made by this application to this element | [optional] 
 **transaction_id** | **str**| Id of the transaction to commit | [optional] 
 **description** | **str**| Description of the deletion operation for history | [optional] 

### Return type

[**AppElementsDeleteReferenceResponse200**](AppElementsDeleteReferenceResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_history_by_workspace**
> AppElementsGetHistoryByWorkspaceResponse200 get_history_by_workspace(wvm_char, did, wvm, eid)

Get History

Get change history

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
api_instance = onshape_client.AppElementsApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID

try:
    # Get History
    api_response = api_instance.get_history_by_workspace(wvm_char, did, wvm, eid)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AppElementsApi->get_history_by_workspace: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 

### Return type

[**AppElementsGetHistoryByWorkspaceResponse200**](AppElementsGetHistoryByWorkspaceResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_sub_element_content**
> AppElementsGetSubElementContentResponse200 get_sub_element_content(wvm_char, did, wvm, eid, transaction_id=transaction_id, change_id=change_id, base_change_id=base_change_id, subelement_id=subelement_id, link_document_id=link_document_id)

Get Content

Get content of sub-elements in a workspace

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
api_instance = onshape_client.AppElementsApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID
transaction_id = 'transaction_id_example' # str | Id of the transaction in which the ids should be retrieved.   Valid only when used with a workspaceId (optional)
change_id = 'change_id_example' # str | Id of the change at which the ids should be retrieved.  If not   specified, defaults to the latest change in the workspace, version or microversion.  May be specified only   when used with a workspaceId (optional)
base_change_id = 'base_change_id_example' # str | Id of a change made prior to the specified or implied changeId.   If specified, only changes made after the base changeId are returned. (optional)
subelement_id = 'subelement_id_example' # str | Id of a sub-element to use as a restriction for returned data (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

try:
    # Get Content
    api_response = api_instance.get_sub_element_content(wvm_char, did, wvm, eid, transaction_id=transaction_id, change_id=change_id, base_change_id=base_change_id, subelement_id=subelement_id, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AppElementsApi->get_sub_element_content: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 
 **transaction_id** | **str**| Id of the transaction in which the ids should be retrieved.   Valid only when used with a workspaceId | [optional] 
 **change_id** | **str**| Id of the change at which the ids should be retrieved.  If not   specified, defaults to the latest change in the workspace, version or microversion.  May be specified only   when used with a workspaceId | [optional] 
 **base_change_id** | **str**| Id of a change made prior to the specified or implied changeId.   If specified, only changes made after the base changeId are returned. | [optional] 
 **subelement_id** | **str**| Id of a sub-element to use as a restriction for returned data | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 

### Return type

[**AppElementsGetSubElementContentResponse200**](AppElementsGetSubElementContentResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_sub_element_ids**
> AppElementsGetSubElementIdsResponse200 get_sub_element_ids(wvm_char, did, wvm, eid, transaction_id=transaction_id, change_id=change_id)

Get Sub-element IDs

Gets a list of all sub-element IDs of a workspace/microversion/version

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
api_instance = onshape_client.AppElementsApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID
transaction_id = 'transaction_id_example' # str | Id of the transaction in which the ids should be retrieved   Valid only when used with a workspaceId (optional)
change_id = 'change_id_example' # str | Id of the change at which the ids should be retrieved   Valid only when used with a workspaceId (optional)

try:
    # Get Sub-element IDs
    api_response = api_instance.get_sub_element_ids(wvm_char, did, wvm, eid, transaction_id=transaction_id, change_id=change_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AppElementsApi->get_sub_element_ids: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 
 **transaction_id** | **str**| Id of the transaction in which the ids should be retrieved   Valid only when used with a workspaceId | [optional] 
 **change_id** | **str**| Id of the change at which the ids should be retrieved   Valid only when used with a workspaceId | [optional] 

### Return type

[**AppElementsGetSubElementIdsResponse200**](AppElementsGetSubElementIdsResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **resolve_reference**
> AppElementsResolveReferenceResponse200 resolve_reference(wvm_char, rid, did, wvm, eid, transaction_id=transaction_id, parent_change_id=parent_change_id, link_document_id=link_document_id)

Resolve Reference

Resolve an app element reference

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
api_instance = onshape_client.AppElementsApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
rid = 'rid_example' # str | The id of the reference to read
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID
transaction_id = 'transaction_id_example' # str | Id of the transaction in which the reference should be retrieved           Valid only when used with a workspaceId (optional)
parent_change_id = 'parent_change_id_example' # str | Id of the change at which the reference should be retrieved           Valid only when used with a workspaceId (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

try:
    # Resolve Reference
    api_response = api_instance.resolve_reference(wvm_char, rid, did, wvm, eid, transaction_id=transaction_id, parent_change_id=parent_change_id, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AppElementsApi->resolve_reference: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **rid** | **str**| The id of the reference to read | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 
 **transaction_id** | **str**| Id of the transaction in which the reference should be retrieved           Valid only when used with a workspaceId | [optional] 
 **parent_change_id** | **str**| Id of the change at which the reference should be retrieved           Valid only when used with a workspaceId | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 

### Return type

[**AppElementsResolveReferenceResponse200**](AppElementsResolveReferenceResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **start_transaction**
> AppElementsStartTransactionResponse200 start_transaction(did, wid, eid, body=body)

Start Transaction

Start a transaction (creates a microbranch)

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
api_instance = onshape_client.AppElementsApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
eid = 'eid_example' # str | Element ID
body = onshape_client.AppElementsStartTransactionBody() # AppElementsStartTransactionBody | The JSON request body. (optional)

try:
    # Start Transaction
    api_response = api_instance.start_transaction(did, wid, eid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AppElementsApi->start_transaction: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **eid** | **str**| Element ID | 
 **body** | [**AppElementsStartTransactionBody**](AppElementsStartTransactionBody.md)| The JSON request body. | [optional] 

### Return type

[**AppElementsStartTransactionResponse200**](AppElementsStartTransactionResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_element**
> AppElementsUpdateElementResponse200 update_element(did, wid, eid, body=body)

Update Element

Update an app element

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
api_instance = onshape_client.AppElementsApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
eid = 'eid_example' # str | Element ID
body = onshape_client.AppElementsUpdateElementBody() # AppElementsUpdateElementBody | The JSON request body. (optional)

try:
    # Update Element
    api_response = api_instance.update_element(did, wid, eid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AppElementsApi->update_element: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **eid** | **str**| Element ID | 
 **body** | [**AppElementsUpdateElementBody**](AppElementsUpdateElementBody.md)| The JSON request body. | [optional] 

### Return type

[**AppElementsUpdateElementResponse200**](AppElementsUpdateElementResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_reference**
> AppElementsUpdateReferenceResponse200 update_reference(rid, did, wid, eid, body=body)

Update Reference

Update an app element reference

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
api_instance = onshape_client.AppElementsApi(onshape_client.ApiClient(configuration))
rid = 'rid_example' # str | The id of a reference to update
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
eid = 'eid_example' # str | Element ID
body = onshape_client.AppElementsUpdateReferenceBody() # AppElementsUpdateReferenceBody | The JSON request body. (optional)

try:
    # Update Reference
    api_response = api_instance.update_reference(rid, did, wid, eid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AppElementsApi->update_reference: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **rid** | **str**| The id of a reference to update | 
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **eid** | **str**| Element ID | 
 **body** | [**AppElementsUpdateReferenceBody**](AppElementsUpdateReferenceBody.md)| The JSON request body. | [optional] 

### Return type

[**AppElementsUpdateReferenceResponse200**](AppElementsUpdateReferenceResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

