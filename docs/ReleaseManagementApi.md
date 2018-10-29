# onshape_client.ReleaseManagementApi

All URIs are relative to *https://cad.onshape.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create_obsoletion_package**](ReleaseManagementApi.md#create_obsoletion_package) | **POST** /releasepackages/obsoletion/{wfid} | Create obsoletion package
[**create_release_package**](ReleaseManagementApi.md#create_release_package) | **POST** /releasepackages/release/{wfid} | Create release package
[**get_company_release_workflow**](ReleaseManagementApi.md#get_company_release_workflow) | **GET** /releasepackages/companyreleaseworkflow | release workflow details
[**get_release_package**](ReleaseManagementApi.md#get_release_package) | **GET** /releasepackages/{rpid} | Get Release Package by id
[**update_release_package**](ReleaseManagementApi.md#update_release_package) | **POST** /releasepackages/{rpid} | Update Release Package


# **create_obsoletion_package**
> ReleaseManagementCreateObsoletionPackageResponse200 create_obsoletion_package(wfid, revision_id)

Create obsoletion package

Create an obsoletion package to make an existing revision obsolete. Once a release package has                 been successfully created use the updateReleasePackage to transition it to desired state

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
api_instance = onshape_client.ReleaseManagementApi(onshape_client.ApiClient(configuration))
wfid = 'wfid_example' # str | ID of obsoletion workflow as returned by getCompanyReleaseWorkflow
revision_id = 'revision_id_example' # str | ID of revision to be obsoleted as returned by           getRevisionHistoryInCompany

try:
    # Create obsoletion package
    api_response = api_instance.create_obsoletion_package(wfid, revision_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ReleaseManagementApi->create_obsoletion_package: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wfid** | **str**| ID of obsoletion workflow as returned by getCompanyReleaseWorkflow | 
 **revision_id** | **str**| ID of revision to be obsoleted as returned by           getRevisionHistoryInCompany | 

### Return type

[**ReleaseManagementCreateObsoletionPackageResponse200**](ReleaseManagementCreateObsoletionPackageResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_release_package**
> ReleaseManagementCreateReleasePackageResponse200 create_release_package(wfid, body=body)

Create release package

Create a new release package to release one or more items. All revisionable items must be from                 the same document. Once a release package has been successfully created use the                 updateReleasePackage to update all desired item/package properties and transition it to desired                 state.

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
api_instance = onshape_client.ReleaseManagementApi(onshape_client.ApiClient(configuration))
wfid = 'wfid_example' # str | ID of release workflow as returned by getCompanyReleaseWorkflow
body = onshape_client.ReleaseManagementCreateReleasePackageBody() # ReleaseManagementCreateReleasePackageBody | The JSON request body. (optional)

try:
    # Create release package
    api_response = api_instance.create_release_package(wfid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ReleaseManagementApi->create_release_package: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wfid** | **str**| ID of release workflow as returned by getCompanyReleaseWorkflow | 
 **body** | [**ReleaseManagementCreateReleasePackageBody**](ReleaseManagementCreateReleasePackageBody.md)| The JSON request body. | [optional] 

### Return type

[**ReleaseManagementCreateReleasePackageResponse200**](ReleaseManagementCreateReleasePackageResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_company_release_workflow**
> ReleaseManagementGetCompanyReleaseWorkflowResponse200 get_company_release_workflow(document_id)

release workflow details

Information about the release/obsoletion workflow in use by a company owned document

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
api_instance = onshape_client.ReleaseManagementApi(onshape_client.ApiClient(configuration))
document_id = 'document_id_example' # str | Document ID that is owned by company for which workflow is requested.

try:
    # release workflow details
    api_response = api_instance.get_company_release_workflow(document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ReleaseManagementApi->get_company_release_workflow: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **document_id** | **str**| Document ID that is owned by company for which workflow is requested. | 

### Return type

[**ReleaseManagementGetCompanyReleaseWorkflowResponse200**](ReleaseManagementGetCompanyReleaseWorkflowResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_release_package**
> ReleaseManagementGetReleasePackageResponse200 get_release_package(rpid, detailed=detailed)

Get Release Package by id

Returns detailed information about a release package with specified id

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
api_instance = onshape_client.ReleaseManagementApi(onshape_client.ApiClient(configuration))
rpid = 'rpid_example' # str | ID of package to get detailed information for
detailed = true # bool | Whether to return detailed property information about all           items. (optional)

try:
    # Get Release Package by id
    api_response = api_instance.get_release_package(rpid, detailed=detailed)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ReleaseManagementApi->get_release_package: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **rpid** | **str**| ID of package to get detailed information for | 
 **detailed** | **bool**| Whether to return detailed property information about all           items. | [optional] 

### Return type

[**ReleaseManagementGetReleasePackageResponse200**](ReleaseManagementGetReleasePackageResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_release_package**
> update_release_package(rpid, wfaction, body=body)

Update Release Package

Update the release/obsoletion package properties and/or item properties and transition it to                 desired state

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
api_instance = onshape_client.ReleaseManagementApi(onshape_client.ApiClient(configuration))
rpid = 'rpid_example' # str | ID of package to transition
wfaction = 'wfaction_example' # str | Workflow action to perform on the package. Allowed values are SUBMIT,           CREATE_AND_RELEASE, RELEASE, REJECT, OBSOLETE, DISCARD or CREATE_AND_OBSOLETE. DISCARD can only be           performed by the creator of the package and is the only transition that can be performed even if items           have errors. CREATE_AND_RELEASE and CREATE_AND_OBSOLETE can only be performed by creator if the Release           management settings for the company allow release without approvers. If Release management settings           restrict the approver list to a subset of company users, Only those users can perform transitions.
body = onshape_client.ReleaseManagementUpdateReleasePackageBody() # ReleaseManagementUpdateReleasePackageBody | The JSON request body. (optional)

try:
    # Update Release Package
    api_instance.update_release_package(rpid, wfaction, body=body)
except ApiException as e:
    print("Exception when calling ReleaseManagementApi->update_release_package: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **rpid** | **str**| ID of package to transition | 
 **wfaction** | **str**| Workflow action to perform on the package. Allowed values are SUBMIT,           CREATE_AND_RELEASE, RELEASE, REJECT, OBSOLETE, DISCARD or CREATE_AND_OBSOLETE. DISCARD can only be           performed by the creator of the package and is the only transition that can be performed even if items           have errors. CREATE_AND_RELEASE and CREATE_AND_OBSOLETE can only be performed by creator if the Release           management settings for the company allow release without approvers. If Release management settings           restrict the approver list to a subset of company users, Only those users can perform transitions. | 
 **body** | [**ReleaseManagementUpdateReleasePackageBody**](ReleaseManagementUpdateReleasePackageBody.md)| The JSON request body. | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

