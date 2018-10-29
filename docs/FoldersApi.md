# onshape_client.FoldersApi

All URIs are relative to *https://cad.onshape.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_acl**](FoldersApi.md#get_acl) | **GET** /folders/{fid}/acl | Get Access Control List
[**share_folder**](FoldersApi.md#share_folder) | **POST** /folders/{fid}/share | Share Folder
[**un_share**](FoldersApi.md#un_share) | **DELETE** /folders/{fid}/share/{eid} | Unshare Folder


# **get_acl**
> FoldersGetAclResponse200 get_acl(fid)

Get Access Control List

Get list of entities with access to a folder and the permissions granted to them. The caller must                 have read access for the folder.

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
api_instance = onshape_client.FoldersApi(onshape_client.ApiClient(configuration))
fid = 'fid_example' # str | Folder ID

try:
    # Get Access Control List
    api_response = api_instance.get_acl(fid)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling FoldersApi->get_acl: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **fid** | **str**| Folder ID | 

### Return type

[**FoldersGetAclResponse200**](FoldersGetAclResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **share_folder**
> FoldersShareFolderResponse200 share_folder(fid, body=body)

Share Folder

Share folder with one or more entities, which may be users, companies, teams or applications.

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
api_instance = onshape_client.FoldersApi(onshape_client.ApiClient(configuration))
fid = 'fid_example' # str | Folder ID
body = onshape_client.FoldersShareFolderBody() # FoldersShareFolderBody | The JSON request body. (optional)

try:
    # Share Folder
    api_response = api_instance.share_folder(fid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling FoldersApi->share_folder: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **fid** | **str**| Folder ID | 
 **body** | [**FoldersShareFolderBody**](FoldersShareFolderBody.md)| The JSON request body. | [optional] 

### Return type

[**FoldersShareFolderResponse200**](FoldersShareFolderResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **un_share**
> un_share(eid, fid, entry_type=entry_type)

Unshare Folder

Remove share permissions from folder

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
api_instance = onshape_client.FoldersApi(onshape_client.ApiClient(configuration))
eid = 'eid_example' # str | Entry ID of the share entry to be deleted
fid = 'fid_example' # str | Folder ID
entry_type = 8.14 # float | The type of entity referenced by eid. Valid values are 0=User,           1=Company, 2=Team, 4=Application. (optional)

try:
    # Unshare Folder
    api_instance.un_share(eid, fid, entry_type=entry_type)
except ApiException as e:
    print("Exception when calling FoldersApi->un_share: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eid** | **str**| Entry ID of the share entry to be deleted | 
 **fid** | **str**| Folder ID | 
 **entry_type** | **float**| The type of entity referenced by eid. Valid values are 0&#x3D;User,           1&#x3D;Company, 2&#x3D;Team, 4&#x3D;Application. | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

