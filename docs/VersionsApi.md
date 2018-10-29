# onshape_client.VersionsApi

All URIs are relative to *https://cad.onshape.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**test_version2**](VersionsApi.md#test_version2) | **GET** /versions/test | Test Version 2


# **test_version2**
> VersionsTestVersion2Response200 test_version2()

Test Version 2

Returns an API version 2 structure; this is the default

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
api_instance = onshape_client.VersionsApi(onshape_client.ApiClient(configuration))

try:
    # Test Version 2
    api_response = api_instance.test_version2()
    pprint(api_response)
except ApiException as e:
    print("Exception when calling VersionsApi->test_version2: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**VersionsTestVersion2Response200**](VersionsTestVersion2Response200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

