# onshape_client.oas.FoldersApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_acl1**](FoldersApi.md#get_acl1) | **GET** /api/folders/{fid}/acl | Get Access Control List
[**share1**](FoldersApi.md#share1) | **POST** /api/folders/{fid}/share | Share Folder
[**un_share1**](FoldersApi.md#un_share1) | **DELETE** /api/folders/{fid}/share/{eid} | Unshare Folder


# **get_acl1**
> BTAclInfo get_acl1(fid)

Get Access Control List

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
api_instance = onshape_client.oas.FoldersApi(onshape_client.oas.ApiClient(configuration))
fid = 'fid_example' # str | 

try:
    # Get Access Control List
    api_response = api_instance.get_acl1(fid)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling FoldersApi->get_acl1: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **fid** | **str**|  | 

### Return type

[**BTAclInfo**](BTAclInfo.md)

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

# **share1**
> BTAclInfo share1(fid, bt_share_params)

Share Folder

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
api_instance = onshape_client.oas.FoldersApi(onshape_client.oas.ApiClient(configuration))
fid = 'fid_example' # str | 
bt_share_params = onshape_client.oas.BTShareParams() # BTShareParams | 

try:
    # Share Folder
    api_response = api_instance.share1(fid, bt_share_params)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling FoldersApi->share1: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **fid** | **str**|  | 
 **bt_share_params** | [**BTShareParams**](BTShareParams.md)|  | 

### Return type

[**BTAclInfo**](BTAclInfo.md)

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

# **un_share1**
> un_share1(fid, eid, entry_type=entry_type)

Unshare Folder

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
api_instance = onshape_client.oas.FoldersApi(onshape_client.oas.ApiClient(configuration))
fid = 'fid_example' # str | 
eid = 'eid_example' # str | 
entry_type = 0 # int |  (optional) (default to 0)

try:
    # Unshare Folder
    api_instance.un_share1(fid, eid, entry_type=entry_type)
except ApiException as e:
    print("Exception when calling FoldersApi->un_share1: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **fid** | **str**|  | 
 **eid** | **str**|  | 
 **entry_type** | **int**|  | [optional] [default to 0]

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

