# onshape_client.FeatureStudiosApi

All URIs are relative to *https://cad.onshape.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create_feature_studio**](FeatureStudiosApi.md#create_feature_studio) | **POST** /featurestudios/d/{did}/w/{wid} | Create Feature Studio
[**get_feature_studio_contents**](FeatureStudiosApi.md#get_feature_studio_contents) | **GET** /featurestudios/d/{did}/{wvm_char}/{wvm}/e/{eid} | Get Feature Studio Contents
[**get_feature_studio_specs**](FeatureStudiosApi.md#get_feature_studio_specs) | **GET** /featurestudios/d/{did}/{wvm_char}/{wvm}/e/{eid}/featurespecs | Get Feature Studio Specs
[**update_feature_studio_contents**](FeatureStudiosApi.md#update_feature_studio_contents) | **POST** /featurestudios/d/{did}/w/{wid}/e/{eid} | Update Feature Studio contents


# **create_feature_studio**
> FeatureStudiosCreateFeatureStudioResponse200 create_feature_studio(did, wid, body=body)

Create Feature Studio

Create an new feature studio tab in the document.

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
api_instance = onshape_client.FeatureStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
body = onshape_client.FeatureStudiosCreateFeatureStudioBody() # FeatureStudiosCreateFeatureStudioBody | The JSON request body. (optional)

try:
    # Create Feature Studio
    api_response = api_instance.create_feature_studio(did, wid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling FeatureStudiosApi->create_feature_studio: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **body** | [**FeatureStudiosCreateFeatureStudioBody**](FeatureStudiosCreateFeatureStudioBody.md)| The JSON request body. | [optional] 

### Return type

[**FeatureStudiosCreateFeatureStudioResponse200**](FeatureStudiosCreateFeatureStudioResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_feature_studio_contents**
> FeatureStudiosGetFeatureStudioContentsResponse200 get_feature_studio_contents(wvm_char, did, wvm, eid)

Get Feature Studio Contents

Get the text inside a Feature Studio tab

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
api_instance = onshape_client.FeatureStudiosApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID

try:
    # Get Feature Studio Contents
    api_response = api_instance.get_feature_studio_contents(wvm_char, did, wvm, eid)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling FeatureStudiosApi->get_feature_studio_contents: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 

### Return type

[**FeatureStudiosGetFeatureStudioContentsResponse200**](FeatureStudiosGetFeatureStudioContentsResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_feature_studio_specs**
> FeatureStudiosGetFeatureStudioSpecsResponse200 get_feature_studio_specs(wvm_char, did, wvm, eid)

Get Feature Studio Specs

Get the feature specs for a Feature Studio tab

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
api_instance = onshape_client.FeatureStudiosApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID

try:
    # Get Feature Studio Specs
    api_response = api_instance.get_feature_studio_specs(wvm_char, did, wvm, eid)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling FeatureStudiosApi->get_feature_studio_specs: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 

### Return type

[**FeatureStudiosGetFeatureStudioSpecsResponse200**](FeatureStudiosGetFeatureStudioSpecsResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_feature_studio_contents**
> FeatureStudiosUpdateFeatureStudioContentsResponse200 update_feature_studio_contents(did, wid, eid, body=body)

Update Feature Studio contents

Update Feature Studio contents to be new text

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
api_instance = onshape_client.FeatureStudiosApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
eid = 'eid_example' # str | Element ID
body = onshape_client.FeatureStudiosUpdateFeatureStudioContentsBody() # FeatureStudiosUpdateFeatureStudioContentsBody | The JSON request body. (optional)

try:
    # Update Feature Studio contents
    api_response = api_instance.update_feature_studio_contents(did, wid, eid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling FeatureStudiosApi->update_feature_studio_contents: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **eid** | **str**| Element ID | 
 **body** | [**FeatureStudiosUpdateFeatureStudioContentsBody**](FeatureStudiosUpdateFeatureStudioContentsBody.md)| The JSON request body. | [optional] 

### Return type

[**FeatureStudiosUpdateFeatureStudioContentsResponse200**](FeatureStudiosUpdateFeatureStudioContentsResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

