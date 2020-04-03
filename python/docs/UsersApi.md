# onshape_client.oas.UsersApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_user_settings**](UsersApi.md#get_user_settings) | **GET** /api/users/{uid}/settings | 
[**get_user_settings_current_logged_in_user**](UsersApi.md#get_user_settings_current_logged_in_user) | **GET** /api/users/settings | 
[**session_info**](UsersApi.md#session_info) | **GET** /api/users/sessioninfo | 


# **get_user_settings**
> bt_user_settings_info.BTUserSettingsInfo get_user_settings(uid)



### Example

```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.UsersApi(api_client)
    uid = 'uid_example' # str | 
    includematerials = True # bool |  (optional) if omitted the server will use the default value of True

    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.get_user_settings(uid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling UsersApi->get_user_settings: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.get_user_settings(uid, includematerials=includematerials)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling UsersApi->get_user_settings: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uid** | **str**|  |
 **includematerials** | **bool**|  | [optional] if omitted the server will use the default value of True

### Return type

[**bt_user_settings_info.BTUserSettingsInfo**](BTUserSettingsInfo.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_user_settings_current_logged_in_user**
> bt_user_settings_info.BTUserSettingsInfo get_user_settings_current_logged_in_user()



### Example

```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.UsersApi(api_client)
    includematerials = True # bool |  (optional) if omitted the server will use the default value of True

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.get_user_settings_current_logged_in_user(includematerials=includematerials)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling UsersApi->get_user_settings_current_logged_in_user: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **includematerials** | **bool**|  | [optional] if omitted the server will use the default value of True

### Return type

[**bt_user_settings_info.BTUserSettingsInfo**](BTUserSettingsInfo.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **session_info**
> bt_user_o_auth2_summary_info.BTUserOAuth2SummaryInfo session_info()



### Example

```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.UsersApi(api_client)
    
    # example, this endpoint has no required or optional parameters
    try:
        api_response = api_instance.session_info()
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling UsersApi->session_info: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**bt_user_o_auth2_summary_info.BTUserOAuth2SummaryInfo**](BTUserOAuth2SummaryInfo.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

