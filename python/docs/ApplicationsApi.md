# onshape_client.oas.ApplicationsApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**delete_app_settings**](ApplicationsApi.md#delete_app_settings) | **DELETE** /api/applications/clients/{cid}/settings/users/{uid} | Delete Application Settings
[**get_user_app_settings**](ApplicationsApi.md#get_user_app_settings) | **GET** /api/applications/clients/{cid}/settings/users/{uid} | Get User Application Settings
[**update_app_settings**](ApplicationsApi.md#update_app_settings) | **POST** /api/applications/clients/{cid}/settings/users/{uid} | Update Application Settings


# **delete_app_settings**
> delete_app_settings(uid, cid)

Delete Application Settings

### Example

```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.ApplicationsApi(api_client)
    uid = 'uid_example' # str | 
    cid = 'cid_example' # str | 
    key = ['key_example'] # [str] |  (optional)

    # example passing only required values which don't have defaults set
    try:
        # Delete Application Settings
        api_instance.delete_app_settings(uid, cid)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ApplicationsApi->delete_app_settings: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Delete Application Settings
        api_instance.delete_app_settings(uid, cid, key=key)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ApplicationsApi->delete_app_settings: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uid** | **str**|  |
 **cid** | **str**|  |
 **key** | **[str]**|  | [optional]

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_user_app_settings**
> bt_user_app_settings_info.BTUserAppSettingsInfo get_user_app_settings(uid, cid)

Get User Application Settings

### Example

```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.ApplicationsApi(api_client)
    uid = 'uid_example' # str | 
    cid = 'cid_example' # str | 
    key = ['key_example'] # [str] |  (optional)

    # example passing only required values which don't have defaults set
    try:
        # Get User Application Settings
        api_response = api_instance.get_user_app_settings(uid, cid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ApplicationsApi->get_user_app_settings: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Get User Application Settings
        api_response = api_instance.get_user_app_settings(uid, cid, key=key)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ApplicationsApi->get_user_app_settings: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uid** | **str**|  |
 **cid** | **str**|  |
 **key** | **[str]**|  | [optional]

### Return type

[**bt_user_app_settings_info.BTUserAppSettingsInfo**](BTUserAppSettingsInfo.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_app_settings**
> update_app_settings(uid, cid, bt_user_app_settings_params)

Update Application Settings

### Example

```python
from __future__ import print_function
import time
import onshape_client.oas
from pprint import pprint

# Enter a context with an instance of the API client
with onshape_client.oas.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = onshape_client.oas.ApplicationsApi(api_client)
    uid = 'uid_example' # str | 
    cid = 'cid_example' # str | 
    bt_user_app_settings_params = onshape_client.oas.BTUserAppSettingsParams() # bt_user_app_settings_params.BTUserAppSettingsParams | 
    
    # example passing only required values which don't have defaults set
    try:
        # Update Application Settings
        api_instance.update_app_settings(uid, cid, bt_user_app_settings_params)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ApplicationsApi->update_app_settings: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uid** | **str**|  |
 **cid** | **str**|  |
 **bt_user_app_settings_params** | [**bt_user_app_settings_params.BTUserAppSettingsParams**](BTUserAppSettingsParams.md)|  |

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=UTF-8; qs=0.09
 - **Accept**: Not defined

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

