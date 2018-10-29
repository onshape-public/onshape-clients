# onshape_client.UsersApi

All URIs are relative to *https://cad.onshape.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_session_info**](UsersApi.md#get_session_info) | **GET** /users/sessioninfo | Get Session Info
[**get_user_settings**](UsersApi.md#get_user_settings) | **GET** /users/{uid}/settings | Get User Settings
[**get_user_settings_current_logged_in_user**](UsersApi.md#get_user_settings_current_logged_in_user) | **GET** /users/settings | Get User Settings


# **get_session_info**
> UsersGetSessionInfoResponse200 get_session_info()

Get Session Info

Check if current user is logged in; information returned depends on OAuth2ReadPII scope.

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
api_instance = onshape_client.UsersApi(onshape_client.ApiClient(configuration))

try:
    # Get Session Info
    api_response = api_instance.get_session_info()
    pprint(api_response)
except ApiException as e:
    print("Exception when calling UsersApi->get_session_info: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**UsersGetSessionInfoResponse200**](UsersGetSessionInfoResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_user_settings**
> UsersGetUserSettingsResponse200 get_user_settings(uid)

Get User Settings

Get user settings. These are the default units that are used when the user creates a new document. Mouse button settings are contained in reverseScrollWheelZoomDirection and viewManipulationMouseKeyMapping. For each action in viewManipulationMouseKeyMapping, an array of modifier key/mouse button press combos is provided that performs that action.  Possible modifier keys include SHIFT and CTRL, and possible mouse buttons include MMB (middle), RMB (right), and SCROLLWHEEL.  The scroll wheel is used in zoom operations, where scrolling forward causes the view to zoom in unless reverseScrollWheelZoomDirection is set to true.

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
api_instance = onshape_client.UsersApi(onshape_client.ApiClient(configuration))
uid = 'uid_example' # str | The user id

try:
    # Get User Settings
    api_response = api_instance.get_user_settings(uid)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling UsersApi->get_user_settings: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uid** | **str**| The user id | 

### Return type

[**UsersGetUserSettingsResponse200**](UsersGetUserSettingsResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_user_settings_current_logged_in_user**
> UsersGetUserSettingsCurrentLoggedInUserResponse200 get_user_settings_current_logged_in_user()

Get User Settings

Get user settings for the currently logged in user if there is one. Else return the default                 settings. Mouse button settings are contained in reverseScrollWheelZoomDirection and                 viewManipulationMouseKeyMapping. For each action in viewManipulationMouseKeyMapping, an array of                 modifier key/mouse button press combos is provided that performs that action. Possible modifier                 keys include SHIFT and CTRL, and possible mouse buttons include MMB (middle), RMB (right), and                 SCROLLWHEEL. The scroll wheel is used in zoom operations, where scrolling forward causes the view                 to zoom in unless reverseScrollWheelZoomDirection is set to true.

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
api_instance = onshape_client.UsersApi(onshape_client.ApiClient(configuration))

try:
    # Get User Settings
    api_response = api_instance.get_user_settings_current_logged_in_user()
    pprint(api_response)
except ApiException as e:
    print("Exception when calling UsersApi->get_user_settings_current_logged_in_user: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**UsersGetUserSettingsCurrentLoggedInUserResponse200**](UsersGetUserSettingsCurrentLoggedInUserResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

