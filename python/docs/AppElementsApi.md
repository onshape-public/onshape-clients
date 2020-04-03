# onshape_client.oas.AppElementsApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**commit_transaction**](AppElementsApi.md#commit_transaction) | **POST** /api/appelements/d/{did}/w/{wid}/e/{eid}/transactions/{tid} | Commit Transaction
[**create_element**](AppElementsApi.md#create_element) | **POST** /api/appelements/d/{did}/w/{wid} | Create Element.
[**create_reference**](AppElementsApi.md#create_reference) | **POST** /api/appelements/d/{did}/{wvm}/{wvmid}/e/{eid}/references | Create Reference
[**delete_app_element_content**](AppElementsApi.md#delete_app_element_content) | **DELETE** /api/appelements/d/{did}/{wvm}/{wvmid}/e/{eid}/content/subelements/{sid} | Delete a Sub-element
[**delete_reference**](AppElementsApi.md#delete_reference) | **DELETE** /api/appelements/d/{did}/{wvm}/{wvmid}/e/{eid}/references/{rid} | Delete Reference
[**get_app_element_history**](AppElementsApi.md#get_app_element_history) | **GET** /api/appelements/d/{did}/{wvm}/{wvmid}/e/{eid}/content/history | Get History
[**get_sub_element_content**](AppElementsApi.md#get_sub_element_content) | **GET** /api/appelements/d/{did}/{wvm}/{wvmid}/e/{eid}/content | Get Content
[**get_subelement_ids**](AppElementsApi.md#get_subelement_ids) | **GET** /api/appelements/d/{did}/{wvm}/{wvmid}/e/{eid}/content/ids | Get Sub-element IDs
[**resolve_reference**](AppElementsApi.md#resolve_reference) | **GET** /api/appelements/d/{did}/{wvm}/{wvmid}/e/{eid}/references/{rid} | Resolve Reference
[**resolve_references**](AppElementsApi.md#resolve_references) | **GET** /api/appelements/d/{did}/{wvm}/{wvmid}/e/{eid}/resolvereferences | Resolve references.
[**start_transaction**](AppElementsApi.md#start_transaction) | **POST** /api/appelements/d/{did}/w/{wid}/e/{eid}/transactions | Start Transaction
[**update_app_element**](AppElementsApi.md#update_app_element) | **POST** /api/appelements/d/{did}/{wvm}/{wvmid}/e/{eid}/content | Update Element
[**update_reference**](AppElementsApi.md#update_reference) | **POST** /api/appelements/d/{did}/{wvm}/{wvmid}/e/{eid}/references/{rid} | Update Reference


# **commit_transaction**
> bt_app_element_modify_info.BTAppElementModifyInfo commit_transaction(did, eid, wid, tid, bt_app_element_commit_transaction_params)

Commit Transaction

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
    api_instance = onshape_client.oas.AppElementsApi(api_client)
    did = 'did_example' # str | 
    eid = 'eid_example' # str | 
    wid = 'wid_example' # str | 
    tid = 'tid_example' # str | 
    bt_app_element_commit_transaction_params = onshape_client.oas.BTAppElementCommitTransactionParams() # bt_app_element_commit_transaction_params.BTAppElementCommitTransactionParams | 
    
    # example passing only required values which don't have defaults set
    try:
        # Commit Transaction
        api_response = api_instance.commit_transaction(did, eid, wid, tid, bt_app_element_commit_transaction_params)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling AppElementsApi->commit_transaction: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **eid** | **str**|  |
 **wid** | **str**|  |
 **tid** | **str**|  |
 **bt_app_element_commit_transaction_params** | [**bt_app_element_commit_transaction_params.BTAppElementCommitTransactionParams**](BTAppElementCommitTransactionParams.md)|  |

### Return type

[**bt_app_element_modify_info.BTAppElementModifyInfo**](BTAppElementModifyInfo.md)

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

# **create_element**
> bt_app_element_modify_info.BTAppElementModifyInfo create_element(did, wid, bt_app_element_params)

Create Element.

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
    api_instance = onshape_client.oas.AppElementsApi(api_client)
    did = 'did_example' # str | 
    wid = 'wid_example' # str | 
    bt_app_element_params = onshape_client.oas.BTAppElementParams() # bt_app_element_params.BTAppElementParams | 
    
    # example passing only required values which don't have defaults set
    try:
        # Create Element.
        api_response = api_instance.create_element(did, wid, bt_app_element_params)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling AppElementsApi->create_element: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wid** | **str**|  |
 **bt_app_element_params** | [**bt_app_element_params.BTAppElementParams**](BTAppElementParams.md)|  |

### Return type

[**bt_app_element_modify_info.BTAppElementModifyInfo**](BTAppElementModifyInfo.md)

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

# **create_reference**
> bt_app_element_reference_info.BTAppElementReferenceInfo create_reference(did, eid, wvm, wvmid, bt_app_element_reference_params)

Create Reference

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
    api_instance = onshape_client.oas.AppElementsApi(api_client)
    did = 'did_example' # str | 
    eid = 'eid_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    bt_app_element_reference_params = onshape_client.oas.BTAppElementReferenceParams() # bt_app_element_reference_params.BTAppElementReferenceParams | 
    
    # example passing only required values which don't have defaults set
    try:
        # Create Reference
        api_response = api_instance.create_reference(did, eid, wvm, wvmid, bt_app_element_reference_params)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling AppElementsApi->create_reference: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **eid** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **bt_app_element_reference_params** | [**bt_app_element_reference_params.BTAppElementReferenceParams**](BTAppElementReferenceParams.md)|  |

### Return type

[**bt_app_element_reference_info.BTAppElementReferenceInfo**](BTAppElementReferenceInfo.md)

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

# **delete_app_element_content**
> bt_app_element_modify_info.BTAppElementModifyInfo delete_app_element_content(did, eid, wvm, wvmid, sid)

Delete a Sub-element

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
    api_instance = onshape_client.oas.AppElementsApi(api_client)
    did = 'did_example' # str | 
    eid = 'eid_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    sid = 'sid_example' # str | 
    transaction_id = 'transaction_id_example' # str |  (optional)
parent_change_id = 'parent_change_id_example' # str |  (optional)
description = 'description_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        # Delete a Sub-element
        api_response = api_instance.delete_app_element_content(did, eid, wvm, wvmid, sid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling AppElementsApi->delete_app_element_content: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Delete a Sub-element
        api_response = api_instance.delete_app_element_content(did, eid, wvm, wvmid, sid, transaction_id=transaction_id, parent_change_id=parent_change_id, description=description)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling AppElementsApi->delete_app_element_content: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **eid** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **sid** | **str**|  |
 **transaction_id** | **str**|  | [optional]
 **parent_change_id** | **str**|  | [optional]
 **description** | **str**|  | [optional]

### Return type

[**bt_app_element_modify_info.BTAppElementModifyInfo**](BTAppElementModifyInfo.md)

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

# **delete_reference**
> bt_app_element_reference_info.BTAppElementReferenceInfo delete_reference(did, eid, wvm, wvmid, rid)

Delete Reference

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
    api_instance = onshape_client.oas.AppElementsApi(api_client)
    did = 'did_example' # str | 
    eid = 'eid_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    rid = 'rid_example' # str | 
    transaction_id = 'transaction_id_example' # str |  (optional)
parent_change_id = 'parent_change_id_example' # str |  (optional)
description = 'description_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        # Delete Reference
        api_response = api_instance.delete_reference(did, eid, wvm, wvmid, rid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling AppElementsApi->delete_reference: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Delete Reference
        api_response = api_instance.delete_reference(did, eid, wvm, wvmid, rid, transaction_id=transaction_id, parent_change_id=parent_change_id, description=description)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling AppElementsApi->delete_reference: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **eid** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **rid** | **str**|  |
 **transaction_id** | **str**|  | [optional]
 **parent_change_id** | **str**|  | [optional]
 **description** | **str**|  | [optional]

### Return type

[**bt_app_element_reference_info.BTAppElementReferenceInfo**](BTAppElementReferenceInfo.md)

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

# **get_app_element_history**
> bt_app_element_history_info.BTAppElementHistoryInfo get_app_element_history(did, eid, wvm, wvmid)

Get History

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
    api_instance = onshape_client.oas.AppElementsApi(api_client)
    did = 'did_example' # str | 
    eid = 'eid_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    
    # example passing only required values which don't have defaults set
    try:
        # Get History
        api_response = api_instance.get_app_element_history(did, eid, wvm, wvmid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling AppElementsApi->get_app_element_history: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **eid** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |

### Return type

[**bt_app_element_history_info.BTAppElementHistoryInfo**](BTAppElementHistoryInfo.md)

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

# **get_sub_element_content**
> bt_app_element_content_info.BTAppElementContentInfo get_sub_element_content(did, eid, wvm, wvmid)

Get Content

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
    api_instance = onshape_client.oas.AppElementsApi(api_client)
    did = 'did_example' # str | 
    eid = 'eid_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    transaction_id = 'transaction_id_example' # str |  (optional)
change_id = 'change_id_example' # str |  (optional)
base_change_id = 'base_change_id_example' # str |  (optional)
subelement_id = 'subelement_id_example' # str |  (optional)
link_document_id = 'link_document_id_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        # Get Content
        api_response = api_instance.get_sub_element_content(did, eid, wvm, wvmid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling AppElementsApi->get_sub_element_content: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Get Content
        api_response = api_instance.get_sub_element_content(did, eid, wvm, wvmid, transaction_id=transaction_id, change_id=change_id, base_change_id=base_change_id, subelement_id=subelement_id, link_document_id=link_document_id)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling AppElementsApi->get_sub_element_content: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **eid** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **transaction_id** | **str**|  | [optional]
 **change_id** | **str**|  | [optional]
 **base_change_id** | **str**|  | [optional]
 **subelement_id** | **str**|  | [optional]
 **link_document_id** | **str**|  | [optional]

### Return type

[**bt_app_element_content_info.BTAppElementContentInfo**](BTAppElementContentInfo.md)

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

# **get_subelement_ids**
> bt_app_element_modify_info.BTAppElementModifyInfo get_subelement_ids(did, eid, wvm, wvmid)

Get Sub-element IDs

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
    api_instance = onshape_client.oas.AppElementsApi(api_client)
    did = 'did_example' # str | 
    eid = 'eid_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    transaction_id = 'transaction_id_example' # str |  (optional)
change_id = 'change_id_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        # Get Sub-element IDs
        api_response = api_instance.get_subelement_ids(did, eid, wvm, wvmid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling AppElementsApi->get_subelement_ids: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Get Sub-element IDs
        api_response = api_instance.get_subelement_ids(did, eid, wvm, wvmid, transaction_id=transaction_id, change_id=change_id)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling AppElementsApi->get_subelement_ids: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **eid** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **transaction_id** | **str**|  | [optional]
 **change_id** | **str**|  | [optional]

### Return type

[**bt_app_element_modify_info.BTAppElementModifyInfo**](BTAppElementModifyInfo.md)

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

# **resolve_reference**
> bt_app_element_reference_resolve_info.BTAppElementReferenceResolveInfo resolve_reference(did, eid, wvm, wvmid, rid)

Resolve Reference

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
    api_instance = onshape_client.oas.AppElementsApi(api_client)
    did = 'did_example' # str | 
    eid = 'eid_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    rid = 'rid_example' # str | 
    transaction_id = 'transaction_id_example' # str |  (optional)
parent_change_id = 'parent_change_id_example' # str |  (optional)
include_internal = False # bool |  (optional) if omitted the server will use the default value of False
link_document_id = 'link_document_id_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        # Resolve Reference
        api_response = api_instance.resolve_reference(did, eid, wvm, wvmid, rid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling AppElementsApi->resolve_reference: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Resolve Reference
        api_response = api_instance.resolve_reference(did, eid, wvm, wvmid, rid, transaction_id=transaction_id, parent_change_id=parent_change_id, include_internal=include_internal, link_document_id=link_document_id)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling AppElementsApi->resolve_reference: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **eid** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **rid** | **str**|  |
 **transaction_id** | **str**|  | [optional]
 **parent_change_id** | **str**|  | [optional]
 **include_internal** | **bool**|  | [optional] if omitted the server will use the default value of False
 **link_document_id** | **str**|  | [optional]

### Return type

[**bt_app_element_reference_resolve_info.BTAppElementReferenceResolveInfo**](BTAppElementReferenceResolveInfo.md)

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

# **resolve_references**
> bt_app_element_references_resolve_info.BTAppElementReferencesResolveInfo resolve_references(did, eid, wvm, wvmid)

Resolve references.

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
    api_instance = onshape_client.oas.AppElementsApi(api_client)
    did = 'did_example' # str | 
    eid = 'eid_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    transaction_id = 'transaction_id_example' # str |  (optional)
parent_change_id = 'parent_change_id_example' # str |  (optional)
include_internal = False # bool |  (optional) if omitted the server will use the default value of False
link_document_id = 'link_document_id_example' # str |  (optional)
reference_ids = '' # str |  (optional) if omitted the server will use the default value of ''

    # example passing only required values which don't have defaults set
    try:
        # Resolve references.
        api_response = api_instance.resolve_references(did, eid, wvm, wvmid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling AppElementsApi->resolve_references: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Resolve references.
        api_response = api_instance.resolve_references(did, eid, wvm, wvmid, transaction_id=transaction_id, parent_change_id=parent_change_id, include_internal=include_internal, link_document_id=link_document_id, reference_ids=reference_ids)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling AppElementsApi->resolve_references: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **eid** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **transaction_id** | **str**|  | [optional]
 **parent_change_id** | **str**|  | [optional]
 **include_internal** | **bool**|  | [optional] if omitted the server will use the default value of False
 **link_document_id** | **str**|  | [optional]
 **reference_ids** | **str**|  | [optional] if omitted the server will use the default value of ''

### Return type

[**bt_app_element_references_resolve_info.BTAppElementReferencesResolveInfo**](BTAppElementReferencesResolveInfo.md)

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

# **start_transaction**
> bt_app_element_modify_info.BTAppElementModifyInfo start_transaction(did, eid, wid, bt_app_element_start_transaction_params)

Start Transaction

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
    api_instance = onshape_client.oas.AppElementsApi(api_client)
    did = 'did_example' # str | 
    eid = 'eid_example' # str | 
    wid = 'wid_example' # str | 
    bt_app_element_start_transaction_params = onshape_client.oas.BTAppElementStartTransactionParams() # bt_app_element_start_transaction_params.BTAppElementStartTransactionParams | 
    
    # example passing only required values which don't have defaults set
    try:
        # Start Transaction
        api_response = api_instance.start_transaction(did, eid, wid, bt_app_element_start_transaction_params)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling AppElementsApi->start_transaction: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **eid** | **str**|  |
 **wid** | **str**|  |
 **bt_app_element_start_transaction_params** | [**bt_app_element_start_transaction_params.BTAppElementStartTransactionParams**](BTAppElementStartTransactionParams.md)|  |

### Return type

[**bt_app_element_modify_info.BTAppElementModifyInfo**](BTAppElementModifyInfo.md)

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

# **update_app_element**
> bt_app_element_modify_info.BTAppElementModifyInfo update_app_element(did, eid, wvm, wvmid, bt_app_element_update_params)

Update Element

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
    api_instance = onshape_client.oas.AppElementsApi(api_client)
    did = 'did_example' # str | 
    eid = 'eid_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    bt_app_element_update_params = onshape_client.oas.BTAppElementUpdateParams() # bt_app_element_update_params.BTAppElementUpdateParams | 
    
    # example passing only required values which don't have defaults set
    try:
        # Update Element
        api_response = api_instance.update_app_element(did, eid, wvm, wvmid, bt_app_element_update_params)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling AppElementsApi->update_app_element: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **eid** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **bt_app_element_update_params** | [**bt_app_element_update_params.BTAppElementUpdateParams**](BTAppElementUpdateParams.md)|  |

### Return type

[**bt_app_element_modify_info.BTAppElementModifyInfo**](BTAppElementModifyInfo.md)

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

# **update_reference**
> bt_app_element_reference_info.BTAppElementReferenceInfo update_reference(did, eid, wvm, wvmid, rid, bt_app_element_reference_params)

Update Reference

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
    api_instance = onshape_client.oas.AppElementsApi(api_client)
    did = 'did_example' # str | 
    eid = 'eid_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    rid = 'rid_example' # str | 
    bt_app_element_reference_params = onshape_client.oas.BTAppElementReferenceParams() # bt_app_element_reference_params.BTAppElementReferenceParams | 
    
    # example passing only required values which don't have defaults set
    try:
        # Update Reference
        api_response = api_instance.update_reference(did, eid, wvm, wvmid, rid, bt_app_element_reference_params)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling AppElementsApi->update_reference: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **eid** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **rid** | **str**|  |
 **bt_app_element_reference_params** | [**bt_app_element_reference_params.BTAppElementReferenceParams**](BTAppElementReferenceParams.md)|  |

### Return type

[**bt_app_element_reference_info.BTAppElementReferenceInfo**](BTAppElementReferenceInfo.md)

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

