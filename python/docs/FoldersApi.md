# onshape_client.oas.FoldersApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_folder_acl**](FoldersApi.md#get_folder_acl) | **GET** /api/folders/{fid}/acl | Get Access Control List
[**share**](FoldersApi.md#share) | **POST** /api/folders/{fid}/share | Share Folder
[**un_share**](FoldersApi.md#un_share) | **DELETE** /api/folders/{fid}/share/{eid} | Unshare Folder


# **get_folder_acl**
> bt_acl_info.BTAclInfo get_folder_acl(fid)

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
    api_instance = onshape_client.oas.FoldersApi(api_client)
    fid = 'fid_example' # str | 
    
    # example passing only required values which don't have defaults set
    try:
        # Get Access Control List
        api_response = api_instance.get_folder_acl(fid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling FoldersApi->get_folder_acl: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **fid** | **str**|  |

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

# **share**
> bt_acl_info.BTAclInfo share(fid, bt_share_params)

Share Folder

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
    api_instance = onshape_client.oas.FoldersApi(api_client)
    fid = 'fid_example' # str | 
    bt_share_params = onshape_client.oas.BTShareParams() # bt_share_params.BTShareParams | 
    
    # example passing only required values which don't have defaults set
    try:
        # Share Folder
        api_response = api_instance.share(fid, bt_share_params)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling FoldersApi->share: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **fid** | **str**|  |
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

# **un_share**
> un_share(fid, eid)

Unshare Folder

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
    api_instance = onshape_client.oas.FoldersApi(api_client)
    fid = 'fid_example' # str | 
    eid = 'eid_example' # str | 
    entry_type = 0 # int |  (optional) if omitted the server will use the default value of 0

    # example passing only required values which don't have defaults set
    try:
        # Unshare Folder
        api_instance.un_share(fid, eid)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling FoldersApi->un_share: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Unshare Folder
        api_instance.un_share(fid, eid, entry_type=entry_type)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling FoldersApi->un_share: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **fid** | **str**|  |
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

