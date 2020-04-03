# onshape_client.oas.RevisionsApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**enumerate_revisions**](RevisionsApi.md#enumerate_revisions) | **GET** /api/revisions/companies/{cid} | 
[**get_latest_in_document_or_company**](RevisionsApi.md#get_latest_in_document_or_company) | **GET** /api/revisions/{cd}/{cdid}/p/{pnum}/latest | 
[**get_revision_history_in_company**](RevisionsApi.md#get_revision_history_in_company) | **GET** /api/revisions/companies/{cid}/partnumber/{pnum} | 


# **enumerate_revisions**
> bt_list_response_bt_revision_info.BTListResponseBTRevisionInfo enumerate_revisions(cid)



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
    api_instance = onshape_client.oas.RevisionsApi(api_client)
    cid = 'cid_example' # str | 
    element_type = 56 # int |  (optional)
limit = 20 # int |  (optional) if omitted the server will use the default value of 20
offset = 0 # int |  (optional) if omitted the server will use the default value of 0
latest_only = False # bool |  (optional) if omitted the server will use the default value of False
after = 56 # int |  (optional)

    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.enumerate_revisions(cid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling RevisionsApi->enumerate_revisions: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.enumerate_revisions(cid, element_type=element_type, limit=limit, offset=offset, latest_only=latest_only, after=after)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling RevisionsApi->enumerate_revisions: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **cid** | **str**|  |
 **element_type** | **int**|  | [optional]
 **limit** | **int**|  | [optional] if omitted the server will use the default value of 20
 **offset** | **int**|  | [optional] if omitted the server will use the default value of 0
 **latest_only** | **bool**|  | [optional] if omitted the server will use the default value of False
 **after** | **int**|  | [optional]

### Return type

[**bt_list_response_bt_revision_info.BTListResponseBTRevisionInfo**](BTListResponseBTRevisionInfo.md)

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

# **get_latest_in_document_or_company**
> bt_revision_info.BTRevisionInfo get_latest_in_document_or_company(cd, cdid, pnum)



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
    api_instance = onshape_client.oas.RevisionsApi(api_client)
    cd = 'cd_example' # str | 
    cdid = 'cdid_example' # str | 
    pnum = 'pnum_example' # str | 
    et = 'et_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.get_latest_in_document_or_company(cd, cdid, pnum)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling RevisionsApi->get_latest_in_document_or_company: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.get_latest_in_document_or_company(cd, cdid, pnum, et=et)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling RevisionsApi->get_latest_in_document_or_company: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **cd** | **str**|  |
 **cdid** | **str**|  |
 **pnum** | **str**|  |
 **et** | **str**|  | [optional]

### Return type

[**bt_revision_info.BTRevisionInfo**](BTRevisionInfo.md)

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

# **get_revision_history_in_company**
> bt_list_response_bt_revision_info.BTListResponseBTRevisionInfo get_revision_history_in_company(cid, pnum)



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
    api_instance = onshape_client.oas.RevisionsApi(api_client)
    cid = 'cid_example' # str | 
    pnum = 'pnum_example' # str | 
    element_type = 'element_type_example' # str |  (optional)
fill_approvers = False # bool |  (optional) if omitted the server will use the default value of False
fill_export_permission = False # bool |  (optional) if omitted the server will use the default value of False

    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.get_revision_history_in_company(cid, pnum)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling RevisionsApi->get_revision_history_in_company: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.get_revision_history_in_company(cid, pnum, element_type=element_type, fill_approvers=fill_approvers, fill_export_permission=fill_export_permission)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling RevisionsApi->get_revision_history_in_company: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **cid** | **str**|  |
 **pnum** | **str**|  |
 **element_type** | **str**|  | [optional]
 **fill_approvers** | **bool**|  | [optional] if omitted the server will use the default value of False
 **fill_export_permission** | **bool**|  | [optional] if omitted the server will use the default value of False

### Return type

[**bt_list_response_bt_revision_info.BTListResponseBTRevisionInfo**](BTListResponseBTRevisionInfo.md)

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

