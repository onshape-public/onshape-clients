# onshape_client.oas.FeatureStudiosApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create_feature_studio**](FeatureStudiosApi.md#create_feature_studio) | **POST** /api/featurestudios/d/{did}/w/{wid} | Create Feature Studio
[**get_feature_studio_contents**](FeatureStudiosApi.md#get_feature_studio_contents) | **GET** /api/featurestudios/d/{did}/{wvm}/{wvmid}/e/{eid} | Get Feature Studio Contents.
[**get_feature_studio_specs**](FeatureStudiosApi.md#get_feature_studio_specs) | **GET** /api/featurestudios/d/{did}/{wvm}/{wvmid}/e/{eid}/featurespecs | Get Feature Studio Specs
[**update_feature_studio_contents**](FeatureStudiosApi.md#update_feature_studio_contents) | **POST** /api/featurestudios/d/{did}/{wvm}/{wvmid}/e/{eid} | Update Feature Studio contents


# **create_feature_studio**
> BTDocumentElementInfo create_feature_studio(did, wid, bt_model_element_params)

Create Feature Studio

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
api_instance = onshape_client.oas.FeatureStudiosApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wid = 'wid_example' # str | 
bt_model_element_params = onshape_client.oas.BTModelElementParams() # BTModelElementParams | 

try:
    # Create Feature Studio
    api_response = api_instance.create_feature_studio(did, wid, bt_model_element_params)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling FeatureStudiosApi->create_feature_studio: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wid** | **str**|  | 
 **bt_model_element_params** | [**BTModelElementParams**](BTModelElementParams.md)|  | 

### Return type

[**BTDocumentElementInfo**](BTDocumentElementInfo.md)

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

# **get_feature_studio_contents**
> BTFeatureStudioContents2239 get_feature_studio_contents(did, wvm, wvmid, eid)

Get Feature Studio Contents.

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
api_instance = onshape_client.oas.FeatureStudiosApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wvm = 'wvm_example' # str | 
wvmid = 'wvmid_example' # str | 
eid = 'eid_example' # str | 

try:
    # Get Feature Studio Contents.
    api_response = api_instance.get_feature_studio_contents(did, wvm, wvmid, eid)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling FeatureStudiosApi->get_feature_studio_contents: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wvm** | **str**|  | 
 **wvmid** | **str**|  | 
 **eid** | **str**|  | 

### Return type

[**BTFeatureStudioContents2239**](BTFeatureStudioContents2239.md)

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

# **get_feature_studio_specs**
> BTFeatureSpecsResponse664 get_feature_studio_specs(did, wvm, wvmid, eid)

Get Feature Studio Specs

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
api_instance = onshape_client.oas.FeatureStudiosApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wvm = 'wvm_example' # str | 
wvmid = 'wvmid_example' # str | 
eid = 'eid_example' # str | 

try:
    # Get Feature Studio Specs
    api_response = api_instance.get_feature_studio_specs(did, wvm, wvmid, eid)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling FeatureStudiosApi->get_feature_studio_specs: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wvm** | **str**|  | 
 **wvmid** | **str**|  | 
 **eid** | **str**|  | 

### Return type

[**BTFeatureSpecsResponse664**](BTFeatureSpecsResponse664.md)

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

# **update_feature_studio_contents**
> BTFeatureStudioContents2239 update_feature_studio_contents(did, wvm, wvmid, eid, body=body)

Update Feature Studio contents

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
api_instance = onshape_client.oas.FeatureStudiosApi(onshape_client.oas.ApiClient(configuration))
did = 'did_example' # str | 
wvm = 'wvm_example' # str | 
wvmid = 'wvmid_example' # str | 
eid = 'eid_example' # str | 
body = 'body_example' # str |  (optional)

try:
    # Update Feature Studio contents
    api_response = api_instance.update_feature_studio_contents(did, wvm, wvmid, eid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling FeatureStudiosApi->update_feature_studio_contents: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  | 
 **wvm** | **str**|  | 
 **wvmid** | **str**|  | 
 **eid** | **str**|  | 
 **body** | **str**|  | [optional] 

### Return type

[**BTFeatureStudioContents2239**](BTFeatureStudioContents2239.md)

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

