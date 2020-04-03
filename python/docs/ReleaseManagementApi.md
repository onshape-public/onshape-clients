# onshape_client.oas.ReleaseManagementApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create_obsoletion_package**](ReleaseManagementApi.md#create_obsoletion_package) | **POST** /api/releasepackages/obsoletion/{wfid} | 
[**create_release_package**](ReleaseManagementApi.md#create_release_package) | **POST** /api/releasepackages/release/{wfid} | 
[**get_company_release_workflow**](ReleaseManagementApi.md#get_company_release_workflow) | **GET** /api/releasepackages/companyreleaseworkflow | 
[**get_release_package**](ReleaseManagementApi.md#get_release_package) | **GET** /api/releasepackages/{rpid} | 
[**update_release_package**](ReleaseManagementApi.md#update_release_package) | **POST** /api/releasepackages/{rpid} | 


# **create_obsoletion_package**
> create_obsoletion_package(wfid)



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
    api_instance = onshape_client.oas.ReleaseManagementApi(api_client)
    wfid = 'wfid_example' # str | 
    revision_id = 'revision_id_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        api_instance.create_obsoletion_package(wfid)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ReleaseManagementApi->create_obsoletion_package: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_instance.create_obsoletion_package(wfid, revision_id=revision_id)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ReleaseManagementApi->create_obsoletion_package: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wfid** | **str**|  |
 **revision_id** | **str**|  | [optional]

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

# **create_release_package**
> create_release_package(wfid, bt_release_package_params)



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
    api_instance = onshape_client.oas.ReleaseManagementApi(api_client)
    wfid = 'wfid_example' # str | 
    bt_release_package_params = onshape_client.oas.BTReleasePackageParams() # bt_release_package_params.BTReleasePackageParams | 
    
    # example passing only required values which don't have defaults set
    try:
        api_instance.create_release_package(wfid, bt_release_package_params)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ReleaseManagementApi->create_release_package: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wfid** | **str**|  |
 **bt_release_package_params** | [**bt_release_package_params.BTReleasePackageParams**](BTReleasePackageParams.md)|  |

### Return type

void (empty response body)

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

# **get_company_release_workflow**
> bt_active_workflow_info.BTActiveWorkflowInfo get_company_release_workflow()



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
    api_instance = onshape_client.oas.ReleaseManagementApi(api_client)
    document_id = 'document_id_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.get_company_release_workflow(document_id=document_id)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ReleaseManagementApi->get_company_release_workflow: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **document_id** | **str**|  | [optional]

### Return type

[**bt_active_workflow_info.BTActiveWorkflowInfo**](BTActiveWorkflowInfo.md)

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

# **get_release_package**
> bt_release_package_info.BTReleasePackageInfo get_release_package(rpid)



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
    api_instance = onshape_client.oas.ReleaseManagementApi(api_client)
    rpid = 'rpid_example' # str | 
    detailed = False # bool |  (optional) if omitted the server will use the default value of False

    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.get_release_package(rpid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ReleaseManagementApi->get_release_package: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.get_release_package(rpid, detailed=detailed)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ReleaseManagementApi->get_release_package: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **rpid** | **str**|  |
 **detailed** | **bool**|  | [optional] if omitted the server will use the default value of False

### Return type

[**bt_release_package_info.BTReleasePackageInfo**](BTReleasePackageInfo.md)

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

# **update_release_package**
> bt_release_package_info.BTReleasePackageInfo update_release_package(rpid, bt_update_release_package_params)



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
    api_instance = onshape_client.oas.ReleaseManagementApi(api_client)
    rpid = 'rpid_example' # str | 
    bt_update_release_package_params = onshape_client.oas.BTUpdateReleasePackageParams() # bt_update_release_package_params.BTUpdateReleasePackageParams | 
    action = 'UPDATE' # str |  (optional) if omitted the server will use the default value of 'UPDATE'
wfaction = 'wfaction_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.update_release_package(rpid, bt_update_release_package_params)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ReleaseManagementApi->update_release_package: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.update_release_package(rpid, bt_update_release_package_params, action=action, wfaction=wfaction)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling ReleaseManagementApi->update_release_package: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **rpid** | **str**|  |
 **bt_update_release_package_params** | [**bt_update_release_package_params.BTUpdateReleasePackageParams**](BTUpdateReleasePackageParams.md)|  |
 **action** | **str**|  | [optional] if omitted the server will use the default value of 'UPDATE'
 **wfaction** | **str**|  | [optional]

### Return type

[**bt_release_package_info.BTReleasePackageInfo**](BTReleasePackageInfo.md)

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

