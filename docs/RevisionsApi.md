# onshape_client.RevisionsApi

All URIs are relative to *https://cad.onshape.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_revision_history_in_company**](RevisionsApi.md#get_revision_history_in_company) | **GET** /revisions/companies/{cid}/partnumber/{pnum} | 


# **get_revision_history_in_company**
> RevisionsGetRevisionHistoryInCompanyResponse200 get_revision_history_in_company(cid, pnum, element_type)



Get a list of all revisions for a part number in a company, ordered newest first. Returns empty                 list if no revisions are found, 404 if company isn't found.

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
api_instance = onshape_client.RevisionsApi(onshape_client.ApiClient(configuration))
cid = 'cid_example' # str | Company Id
pnum = 'pnum_example' # str | Part number
element_type = 8.14 # float | Type of element, which can be 0: Part Studio, 1: Assembly, 2:           Drawing. 4: Blob

try:
    # 
    api_response = api_instance.get_revision_history_in_company(cid, pnum, element_type)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling RevisionsApi->get_revision_history_in_company: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **cid** | **str**| Company Id | 
 **pnum** | **str**| Part number | 
 **element_type** | **float**| Type of element, which can be 0: Part Studio, 1: Assembly, 2:           Drawing. 4: Blob | 

### Return type

[**RevisionsGetRevisionHistoryInCompanyResponse200**](RevisionsGetRevisionHistoryInCompanyResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

