# onshape_client.ApplicationsApi

All URIs are relative to *https://cad.onshape.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**delete_app_settings**](ApplicationsApi.md#delete_app_settings) | **DELETE** /applications/clients/{cid}/settings/users/{uid} | Delete Application Settings
[**get_user_app_settings**](ApplicationsApi.md#get_user_app_settings) | **GET** /applications/clients/{cid}/settings/users/{uid} | Get User Application Settings
[**update_app_settings**](ApplicationsApi.md#update_app_settings) | **POST** /applications/clients/{cid}/settings/users/{uid} | Update Application Settings


# **delete_app_settings**
> delete_app_settings(cid, uid, key)

Delete Application Settings

Delete a user's application settings.                 This API may only be used with an OAuth token and only by the current user or admin.

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
api_instance = onshape_client.ApplicationsApi(onshape_client.ApiClient(configuration))
cid = 'cid_example' # str | Client ID
uid = 'uid_example' # str | User ID
key = 'key_example' # str | Repeatable key for deletion.  If no keys are specified, all keys are deleted.

try:
    # Delete Application Settings
    api_instance.delete_app_settings(cid, uid, key)
except ApiException as e:
    print("Exception when calling ApplicationsApi->delete_app_settings: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **cid** | **str**| Client ID | 
 **uid** | **str**| User ID | 
 **key** | **str**| Repeatable key for deletion.  If no keys are specified, all keys are deleted. | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_user_app_settings**
> ApplicationsGetUserAppSettingsResponse200 get_user_app_settings(cid, uid)

Get User Application Settings

Get user preference settings for application.                 This API may only be used with an OAuth token and only by the current user or admin.

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
api_instance = onshape_client.ApplicationsApi(onshape_client.ApiClient(configuration))
cid = 'cid_example' # str | Client ID
uid = 'uid_example' # str | User ID

try:
    # Get User Application Settings
    api_response = api_instance.get_user_app_settings(cid, uid)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ApplicationsApi->get_user_app_settings: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **cid** | **str**| Client ID | 
 **uid** | **str**| User ID | 

### Return type

[**ApplicationsGetUserAppSettingsResponse200**](ApplicationsGetUserAppSettingsResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_app_settings**
> update_app_settings(cid, uid)

Update Application Settings

Update a user's application settings.                 This API may only be used with an OAuth token and only by the current user or admin.

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
api_instance = onshape_client.ApplicationsApi(onshape_client.ApiClient(configuration))
cid = 'cid_example' # str | Client ID
uid = 'uid_example' # str | User ID

try:
    # Update Application Settings
    api_instance.update_app_settings(cid, uid)
except ApiException as e:
    print("Exception when calling ApplicationsApi->update_app_settings: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **cid** | **str**| Client ID | 
 **uid** | **str**| User ID | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

