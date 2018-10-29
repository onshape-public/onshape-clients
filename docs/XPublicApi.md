# swagger_client.XPublicApi

All URIs are relative to *https://cad.onshape.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_documents_documents**](XPublicApi.md#get_documents_documents) | **GET** /documents | Get Documents


# **get_documents_documents**
> GetDocumentsDocuments get_documents_documents(q=q, filter=filter, owner=owner, owner_type=owner_type, sort_column=sort_column, sort_order=sort_order, offset=offset, limit=limit)

Get Documents

Search for documents

### Example
```python
from __future__ import print_function
import time
import swagger_client
from swagger_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: OAuth2
configuration = swagger_client.Configuration()
configuration.access_token = 'YOUR_ACCESS_TOKEN'
# Configure API key authorization: apiAccessKey
configuration = swagger_client.Configuration()
configuration.api_key['ACCESS_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['ACCESS_KEY'] = 'Bearer'
# Configure API key authorization: apiSecretKey
configuration = swagger_client.Configuration()
configuration.api_key['SECRET_KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['SECRET_KEY'] = 'Bearer'

# create an instance of the API class
api_instance = swagger_client.XPublicApi(swagger_client.ApiClient(configuration))
q = 'q_example' # str | Search for documents that contain the given string in the name. Search is           not case-sensitive. (optional)
filter = 8.14 # float | Filter ID, which can be 0: my docs, 1: created, 2: shared, 3: trash,           4: public, 5: recent, 6: by owner, 7: by company, or 9: by team (optional)
owner = 'owner_example' # str | Document owner's ID if filter is 6 or 7. Team Id if filter is 9 (optional)
owner_type = 8.14 # float | Type of owner, which can be 0: user, 1: company, 2: onshape. If           owner is a teamId, leave this unspecified. (optional)
sort_column = 'sort_column_example' # str | Column by which to sort search results. Valid options           are name, modifiedAt, createdAt, email, modifiedBy, and promotedAt (optional)
sort_order = 'sort_order_example' # str | Sort order, which can be desc: descending, or asc: ascending (optional)
offset = 8.14 # float | Where to begin search results (optional)
limit = 8.14 # float | Number of results to return per page (max is 20) (optional)

try:
    # Get Documents
    api_response = api_instance.get_documents_documents(q=q, filter=filter, owner=owner, owner_type=owner_type, sort_column=sort_column, sort_order=sort_order, offset=offset, limit=limit)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling XPublicApi->get_documents_documents: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **q** | **str**| Search for documents that contain the given string in the name. Search is           not case-sensitive. | [optional] 
 **filter** | **float**| Filter ID, which can be 0: my docs, 1: created, 2: shared, 3: trash,           4: public, 5: recent, 6: by owner, 7: by company, or 9: by team | [optional] 
 **owner** | **str**| Document owner&#39;s ID if filter is 6 or 7. Team Id if filter is 9 | [optional] 
 **owner_type** | **float**| Type of owner, which can be 0: user, 1: company, 2: onshape. If           owner is a teamId, leave this unspecified. | [optional] 
 **sort_column** | **str**| Column by which to sort search results. Valid options           are name, modifiedAt, createdAt, email, modifiedBy, and promotedAt | [optional] 
 **sort_order** | **str**| Sort order, which can be desc: descending, or asc: ascending | [optional] 
 **offset** | **float**| Where to begin search results | [optional] 
 **limit** | **float**| Number of results to return per page (max is 20) | [optional] 

### Return type

[**GetDocumentsDocuments**](GetDocumentsDocuments.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

