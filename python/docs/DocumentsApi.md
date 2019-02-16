# onshape_client.DocumentsApi

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_documents**](DocumentsApi.md#get_documents) | **GET** /api/documents | Get Documents


# **get_documents**
> BTGlobalTreeNodeListResponse get_documents(q=q, filter=filter, owner=owner, owner_type=owner_type, sort_column=sort_column, sort_order=sort_order, offset=offset, limit=limit, label=label, project=project, parent_id=parent_id)

Get Documents

### Example

* OAuth Authentication (OAuth2): 
```python
from __future__ import print_function
import time
import onshape_client
from onshape_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = onshape_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'

# create an instance of the API class
api_instance = onshape_client.DocumentsApi(onshape_client.ApiClient(configuration))
q = 'q_example' # str |  (optional)
filter = 56 # int |  (optional)
owner = 'owner_example' # str |  (optional)
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
 **q** | **str**|  | [optional] 
 **filter** | **int**|  | [optional] 
 **owner** | **str**|  | [optional] 
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

