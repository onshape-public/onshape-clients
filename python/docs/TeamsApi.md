# onshape_client.oas.TeamsApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**find**](TeamsApi.md#find) | **GET** /api/teams | 
[**get_team**](TeamsApi.md#get_team) | **GET** /api/teams/{tid} | 


# **find**
> bt_global_tree_node_list_response_bt_team_info.BTGlobalTreeNodeListResponseBTTeamInfo find()



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
    api_instance = onshape_client.oas.TeamsApi(api_client)
    prefix = '' # str |  (optional) if omitted the server will use the default value of ''
uid = 'uid_example' # str |  (optional)
company_id = 'company_id_example' # str |  (optional)
include_company_owned_teams = True # bool |  (optional) if omitted the server will use the default value of True

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.find(prefix=prefix, uid=uid, company_id=company_id, include_company_owned_teams=include_company_owned_teams)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling TeamsApi->find: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **prefix** | **str**|  | [optional] if omitted the server will use the default value of ''
 **uid** | **str**|  | [optional]
 **company_id** | **str**|  | [optional]
 **include_company_owned_teams** | **bool**|  | [optional] if omitted the server will use the default value of True

### Return type

[**bt_global_tree_node_list_response_bt_team_info.BTGlobalTreeNodeListResponseBTTeamInfo**](BTGlobalTreeNodeListResponseBTTeamInfo.md)

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

# **get_team**
> bt_team_info.BTTeamInfo get_team(tid)



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
    api_instance = onshape_client.oas.TeamsApi(api_client)
    tid = 'tid_example' # str | 
    
    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.get_team(tid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling TeamsApi->get_team: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **tid** | **str**|  |

### Return type

[**bt_team_info.BTTeamInfo**](BTTeamInfo.md)

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

