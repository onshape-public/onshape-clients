# onshape_client.DocumentsApi

All URIs are relative to *https://cad.onshape.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**copy_workspace**](DocumentsApi.md#copy_workspace) | **POST** /documents/{did}/workspaces/{wid}/copy | Copy Workspace
[**create_document**](DocumentsApi.md#create_document) | **POST** /documents | Create Document
[**create_version**](DocumentsApi.md#create_version) | **POST** /documents/d/{did}/versions | Create Version
[**create_workspace**](DocumentsApi.md#create_workspace) | **POST** /documents/d/{did}/workspaces | Create Workspace
[**delete_document**](DocumentsApi.md#delete_document) | **DELETE** /documents/{did} | Delete Document
[**delete_workspace**](DocumentsApi.md#delete_workspace) | **DELETE** /documents/d/{did}/workspaces/{wid} | Delete Workspace
[**download_external_data**](DocumentsApi.md#download_external_data) | **GET** /documents/d/{did}/externaldata/{fid} | Download External Data
[**export_element**](DocumentsApi.md#export_element) | **GET** /documents/d/{did}/{wv_char}/{wv}/e/{eid}/export | Export Element (307)
[**export_element_post_json**](DocumentsApi.md#export_element_post_json) | **POST** /documents/d/{did}/{wv_char}/{wv}/e/{eid}/export | Export Element (URI)
[**get_acl**](DocumentsApi.md#get_acl) | **GET** /documents/{did}/acl | Get Access Control List
[**get_current_microversion**](DocumentsApi.md#get_current_microversion) | **GET** /documents/d/{did}/{wv_char}/{wv}/currentmicroversion | Get Current Document Microversion
[**get_document**](DocumentsApi.md#get_document) | **GET** /documents/{did} | Get Document
[**get_document_permission_set**](DocumentsApi.md#get_document_permission_set) | **GET** /documents/{did}/permissionset | Get Document Permissions
[**get_documents**](DocumentsApi.md#get_documents) | **GET** /documents | Get Documents
[**get_element_list**](DocumentsApi.md#get_element_list) | **GET** /documents/d/{did}/{wvm_char}/{wvm}/elements | Element List
[**get_insertables**](DocumentsApi.md#get_insertables) | **GET** /documents/d/{did}/v/{vid}/insertables | Insertable List for Document Version.
[**get_version**](DocumentsApi.md#get_version) | **GET** /documents/d/{did}/versions/{vid} | Get Version
[**get_versions**](DocumentsApi.md#get_versions) | **GET** /documents/d/{did}/versions | Get Versions
[**get_workspaces**](DocumentsApi.md#get_workspaces) | **GET** /documents/d/{did}/workspaces | Get Workspaces
[**move_elements_to_document**](DocumentsApi.md#move_elements_to_document) | **POST** /documents/d/{did}/w/{wid}/moveelement | Move Elements
[**share_document**](DocumentsApi.md#share_document) | **POST** /documents/{did}/share | Share Document
[**un_share**](DocumentsApi.md#un_share) | **DELETE** /documents/{did}/share/{eid} | Unshare Document
[**update_document_attributes**](DocumentsApi.md#update_document_attributes) | **POST** /documents/{did} | Update Document Attributes.
[**update_external_references_to_latest_documents**](DocumentsApi.md#update_external_references_to_latest_documents) | **POST** /documents/d/{did}/w/{wid}/e/{eid}/latestdocumentreferences | Update External References to Latest


# **copy_workspace**
> DocumentsCopyWorkspaceResponse200 copy_workspace(did, wid, body=body)

Copy Workspace

Copy a workspace

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
api_instance = onshape_client.DocumentsApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
body = onshape_client.DocumentsCopyWorkspaceBody() # DocumentsCopyWorkspaceBody | The JSON request body. (optional)

try:
    # Copy Workspace
    api_response = api_instance.copy_workspace(did, wid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DocumentsApi->copy_workspace: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **body** | [**DocumentsCopyWorkspaceBody**](DocumentsCopyWorkspaceBody.md)| The JSON request body. | [optional] 

### Return type

[**DocumentsCopyWorkspaceResponse200**](DocumentsCopyWorkspaceResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_document**
> DocumentsCreateDocumentResponse200 create_document(body=body)

Create Document

Create document

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
api_instance = onshape_client.DocumentsApi(onshape_client.ApiClient(configuration))
body = onshape_client.DocumentsCreateDocumentBody() # DocumentsCreateDocumentBody | The JSON request body. (optional)

try:
    # Create Document
    api_response = api_instance.create_document(body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DocumentsApi->create_document: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**DocumentsCreateDocumentBody**](DocumentsCreateDocumentBody.md)| The JSON request body. | [optional] 

### Return type

[**DocumentsCreateDocumentResponse200**](DocumentsCreateDocumentResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_version**
> DocumentsCreateVersionResponse200 create_version(did, body=body)

Create Version

Create version at the current microversion of the specified workspace or a target microversion.                 Versions should be created only for tracking the state of a document that will need to be                 referenced by the user in the future. An application should not use versions as a convenience                 mechanism for an application to remember document states.

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
api_instance = onshape_client.DocumentsApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
body = onshape_client.DocumentsCreateVersionBody() # DocumentsCreateVersionBody | The JSON request body. (optional)

try:
    # Create Version
    api_response = api_instance.create_version(did, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DocumentsApi->create_version: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **body** | [**DocumentsCreateVersionBody**](DocumentsCreateVersionBody.md)| The JSON request body. | [optional] 

### Return type

[**DocumentsCreateVersionResponse200**](DocumentsCreateVersionResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_workspace**
> DocumentsCreateWorkspaceResponse200 create_workspace(did, body=body)

Create Workspace

Creates a new workspace. The starting point for the workspace can be specified using one of                 microversionId, workspaceId, versionId in that precedence order. A workspace also has a parent                 that may be specified or implied. If the starting point is taken from workspaceId or versionId,                 the parent version is implied to be the workspace parent or the version, respectively. If the                 starting point used is microversionId then the parent version is chosen based on workspaceId,                 versionId and default workspace, in that precedence order. If chosen based on a workspaceId, the                 version is the parent of the chosen workspace. If the effective version parentId is not a true                 parent of the starting microversion, an error is returned.

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
api_instance = onshape_client.DocumentsApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
body = onshape_client.DocumentsCreateWorkspaceBody() # DocumentsCreateWorkspaceBody | The JSON request body. (optional)

try:
    # Create Workspace
    api_response = api_instance.create_workspace(did, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DocumentsApi->create_workspace: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **body** | [**DocumentsCreateWorkspaceBody**](DocumentsCreateWorkspaceBody.md)| The JSON request body. | [optional] 

### Return type

[**DocumentsCreateWorkspaceResponse200**](DocumentsCreateWorkspaceResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_document**
> delete_document(did)

Delete Document

Delete a document

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
api_instance = onshape_client.DocumentsApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID

try:
    # Delete Document
    api_instance.delete_document(did)
except ApiException as e:
    print("Exception when calling DocumentsApi->delete_document: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_workspace**
> delete_workspace(did, wid)

Delete Workspace

Delete workspace

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
api_instance = onshape_client.DocumentsApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID

try:
    # Delete Workspace
    api_instance.delete_workspace(did, wid)
except ApiException as e:
    print("Exception when calling DocumentsApi->delete_workspace: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **download_external_data**
> file download_external_data(fid, did)

Download External Data

Download external data

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
api_instance = onshape_client.DocumentsApi(onshape_client.ApiClient(configuration))
fid = 'fid_example' # str | External data ID
did = 'did_example' # str | Document ID

try:
    # Download External Data
    api_response = api_instance.download_external_data(fid, did)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DocumentsApi->download_external_data: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **fid** | **str**| External data ID | 
 **did** | **str**| Document ID | 

### Return type

[**file**](file.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **export_element**
> file export_element(wv_char, format, scale, mode, did, wv, eid, store_in_document=store_in_document, link_document_workspace_id=link_document_workspace_id, part_ids=part_ids, microversion=microversion, grouping=grouping, zip_single_file_output=zip_single_file_output, units=units, angle_tolerance=angle_tolerance, chord_tolerance=chord_tolerance, max_facet_width=max_facet_width, min_facet_width=min_facet_width, version=version, link_document_id=link_document_id)

Export Element (307)

Export the given element in STL or Parasolid (PS) formats; returns a 307 redirect.

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
api_instance = onshape_client.DocumentsApi(onshape_client.ApiClient(configuration))
wv_char = 'wv_char_example' # str | One of w or v corresponding to whether a workspace or version was entered.
format = 'format_example' # str | Export format: STL, PS
scale = 8.14 # float | Scale for measurements (STL)
mode = 'mode_example' # str | Type of file: text, binary (STL)
did = 'did_example' # str | Document ID
wv = 'wv_example' # str | Workspace (w) or Version (v) ID
eid = 'eid_example' # str | Element ID
store_in_document = true # bool | whether the output should be stored as a new element (optional)
link_document_workspace_id = 'link_document_workspace_id_example' # str | The id of the workspace in which the result should be           stored if storeInDocument is true and linkDocumentId is set. (optional)
part_ids = 'part_ids_example' # str | Comma-separated list of part IDs to export (optional)
microversion = 'microversion_example' # str | Specified microversion for operation (optional)
grouping = true # bool | Whether parts should be exported as a group or individually in a           .zip file (STL) (optional)
zip_single_file_output = true # bool | Whether single file output should be returned as a           .zip file (STL, grouping==true) (optional)
units = 'units_example' # str | Name of base unit: meter, centimeter, millimeter, inch, foot, yard (STL) (optional)
angle_tolerance = 8.14 # float | Angle tolerance (must be < pi/2) (STL) (optional)
chord_tolerance = 8.14 # float | Chord tolerance (STL) (optional)
max_facet_width = 8.14 # float | Maximum facet width (STL) (optional)
min_facet_width = 8.14 # float | Minimum facet width (must be < maximumFacetWidth) (STL) (optional)
version = 8.14 # float | Parasolid version (PS) (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

try:
    # Export Element (307)
    api_response = api_instance.export_element(wv_char, format, scale, mode, did, wv, eid, store_in_document=store_in_document, link_document_workspace_id=link_document_workspace_id, part_ids=part_ids, microversion=microversion, grouping=grouping, zip_single_file_output=zip_single_file_output, units=units, angle_tolerance=angle_tolerance, chord_tolerance=chord_tolerance, max_facet_width=max_facet_width, min_facet_width=min_facet_width, version=version, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DocumentsApi->export_element: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wv_char** | **str**| One of w or v corresponding to whether a workspace or version was entered. | 
 **format** | **str**| Export format: STL, PS | 
 **scale** | **float**| Scale for measurements (STL) | 
 **mode** | **str**| Type of file: text, binary (STL) | 
 **did** | **str**| Document ID | 
 **wv** | **str**| Workspace (w) or Version (v) ID | 
 **eid** | **str**| Element ID | 
 **store_in_document** | **bool**| whether the output should be stored as a new element | [optional] 
 **link_document_workspace_id** | **str**| The id of the workspace in which the result should be           stored if storeInDocument is true and linkDocumentId is set. | [optional] 
 **part_ids** | **str**| Comma-separated list of part IDs to export | [optional] 
 **microversion** | **str**| Specified microversion for operation | [optional] 
 **grouping** | **bool**| Whether parts should be exported as a group or individually in a           .zip file (STL) | [optional] 
 **zip_single_file_output** | **bool**| Whether single file output should be returned as a           .zip file (STL, grouping&#x3D;&#x3D;true) | [optional] 
 **units** | **str**| Name of base unit: meter, centimeter, millimeter, inch, foot, yard (STL) | [optional] 
 **angle_tolerance** | **float**| Angle tolerance (must be &lt; pi/2) (STL) | [optional] 
 **chord_tolerance** | **float**| Chord tolerance (STL) | [optional] 
 **max_facet_width** | **float**| Maximum facet width (STL) | [optional] 
 **min_facet_width** | **float**| Minimum facet width (must be &lt; maximumFacetWidth) (STL) | [optional] 
 **version** | **float**| Parasolid version (PS) | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 

### Return type

[**file**](file.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **export_element_post_json**
> DocumentsExportElementPostJsonResponse200 export_element_post_json(wv_char, did, wv, eid, body=body, link_document_id=link_document_id)

Export Element (URI)

Export the given element in STL or Parasolid (PS) formats; returns an URI in the response body,                 client should GET this URI to initiate the export.

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
api_instance = onshape_client.DocumentsApi(onshape_client.ApiClient(configuration))
wv_char = 'wv_char_example' # str | One of w or v corresponding to whether a workspace or version was entered.
did = 'did_example' # str | Document ID
wv = 'wv_example' # str | Workspace (w) or Version (v) ID
eid = 'eid_example' # str | Element ID
body = onshape_client.DocumentsExportElementPostJsonBody() # DocumentsExportElementPostJsonBody | The JSON request body. (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

try:
    # Export Element (URI)
    api_response = api_instance.export_element_post_json(wv_char, did, wv, eid, body=body, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DocumentsApi->export_element_post_json: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wv_char** | **str**| One of w or v corresponding to whether a workspace or version was entered. | 
 **did** | **str**| Document ID | 
 **wv** | **str**| Workspace (w) or Version (v) ID | 
 **eid** | **str**| Element ID | 
 **body** | [**DocumentsExportElementPostJsonBody**](DocumentsExportElementPostJsonBody.md)| The JSON request body. | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 

### Return type

[**DocumentsExportElementPostJsonResponse200**](DocumentsExportElementPostJsonResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_acl**
> DocumentsGetAclResponse200 get_acl(did)

Get Access Control List

Get list of entities with access to a document and the permissions granted to them. The caller     must have read access for the document.

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
api_instance = onshape_client.DocumentsApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID

try:
    # Get Access Control List
    api_response = api_instance.get_acl(did)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DocumentsApi->get_acl: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 

### Return type

[**DocumentsGetAclResponse200**](DocumentsGetAclResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_current_microversion**
> DocumentsGetCurrentMicroversionResponse200 get_current_microversion(wv_char, did, wv)

Get Current Document Microversion

Get current microversion from a version or workspace

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
api_instance = onshape_client.DocumentsApi(onshape_client.ApiClient(configuration))
wv_char = 'wv_char_example' # str | One of w or v corresponding to whether a workspace or version was entered.
did = 'did_example' # str | Document ID
wv = 'wv_example' # str | Workspace (w) or Version (v) ID

try:
    # Get Current Document Microversion
    api_response = api_instance.get_current_microversion(wv_char, did, wv)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DocumentsApi->get_current_microversion: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wv_char** | **str**| One of w or v corresponding to whether a workspace or version was entered. | 
 **did** | **str**| Document ID | 
 **wv** | **str**| Workspace (w) or Version (v) ID | 

### Return type

[**DocumentsGetCurrentMicroversionResponse200**](DocumentsGetCurrentMicroversionResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_document**
> DocumentsGetDocumentResponse200 get_document(did)

Get Document

Get full details about a document

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
api_instance = onshape_client.DocumentsApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID

try:
    # Get Document
    api_response = api_instance.get_document(did)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DocumentsApi->get_document: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 

### Return type

[**DocumentsGetDocumentResponse200**](DocumentsGetDocumentResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_document_permission_set**
> get_document_permission_set(did)

Get Document Permissions

Get the permission set for a document

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
api_instance = onshape_client.DocumentsApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID

try:
    # Get Document Permissions
    api_instance.get_document_permission_set(did)
except ApiException as e:
    print("Exception when calling DocumentsApi->get_document_permission_set: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_documents**
> DocumentsGetDocumentsResponse200 get_documents(q=q, filter=filter, owner=owner, owner_type=owner_type, sort_column=sort_column, sort_order=sort_order, offset=offset, limit=limit)

Get Documents

Search for documents

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
api_instance = onshape_client.DocumentsApi(onshape_client.ApiClient(configuration))
q = 'q_example' # str | Search for documents that contain the given string in the name. Search is           not case-sensitive. (optional)
filter = 8.14 # float | Filter ID, which can be 0: my docs, 1: created, 2: shared, 3: trash,           4: public, 5: recent, 6: by owner, 7: by company, or 9: by team (optional)
owner = 'owner_example' # str | Document owner's ID if filter is 6 or 7. Team Id if filter is 9 (optional)
owner_type = 8.14 # float | Type of owner, which can be 0: user, 1: company, 2: onshape. If           owner is a teamId, leave this unspecified. (optional)
sort_column = 'sort_column_example' # str | Column by which to sort search results. Valid options           are name, modifiedAt, createdAt, email, modifiedBy, and promotedAt (optional)
sort_order = 'sort_order_example' # str | Sort order, which can be desc: descending, or asc: ascending (optional)
offset = 8.14 # float | Where to begin search results (optional)
limit = 8.14 # float | Number of results to return per page (max is 20) (optional)

try:
    # Get Documents
    api_response = api_instance.get_documents(q=q, filter=filter, owner=owner, owner_type=owner_type, sort_column=sort_column, sort_order=sort_order, offset=offset, limit=limit)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DocumentsApi->get_documents: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **q** | **str**| Search for documents that contain the given string in the name. Search is           not case-sensitive. | [optional] 
 **filter** | **float**| Filter ID, which can be 0: my docs, 1: created, 2: shared, 3: trash,           4: public, 5: recent, 6: by owner, 7: by company, or 9: by team | [optional] 
 **owner** | **str**| Document owner&#39;s ID if filter is 6 or 7. Team Id if filter is 9 | [optional] 
 **owner_type** | **float**| Type of owner, which can be 0: user, 1: company, 2: onshape. If           owner is a teamId, leave this unspecified. | [optional] 
 **sort_column** | **str**| Column by which to sort search results. Valid options           are name, modifiedAt, createdAt, email, modifiedBy, and promotedAt | [optional] 
 **sort_order** | **str**| Sort order, which can be desc: descending, or asc: ascending | [optional] 
 **offset** | **float**| Where to begin search results | [optional] 
 **limit** | **float**| Number of results to return per page (max is 20) | [optional] 

### Return type

[**DocumentsGetDocumentsResponse200**](DocumentsGetDocumentsResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_element_list**
> DocumentsGetElementListResponse200 get_element_list(wvm_char, did, wvm, element_type=element_type, element_id=element_id, with_thumbnails=with_thumbnails)

Element List

Get a list of elements in the workspace, version, or microversion of the document.

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
api_instance = onshape_client.DocumentsApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
element_type = 'element_type_example' # str | Return only elements of this elementType (optional)
element_id = 'element_id_example' # str | Return only element with this ID (optional)
with_thumbnails = true # bool | If true, include element thumbnail information (optional)

try:
    # Element List
    api_response = api_instance.get_element_list(wvm_char, did, wvm, element_type=element_type, element_id=element_id, with_thumbnails=with_thumbnails)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DocumentsApi->get_element_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **element_type** | **str**| Return only elements of this elementType | [optional] 
 **element_id** | **str**| Return only element with this ID | [optional] 
 **with_thumbnails** | **bool**| If true, include element thumbnail information | [optional] 

### Return type

[**DocumentsGetElementListResponse200**](DocumentsGetElementListResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_insertables**
> DocumentsGetInsertablesResponse200 get_insertables(did, vid, beta_capability_ids=beta_capability_ids, include_parts=include_parts, include_surfaces=include_surfaces, include_wires=include_wires, include_sketches=include_sketches, include_reference_features=include_reference_features, include_assemblies=include_assemblies, include_feature_studios=include_feature_studios, include_features=include_features, include_blobs=include_blobs, include_meshes=include_meshes, include_flattened_bodies=include_flattened_bodies, include_applications=include_applications, allowed_blob_mime_types=allowed_blob_mime_types, allowed_application_mime_types=allowed_application_mime_types, max_feature_script_version=max_feature_script_version)

Insertable List for Document Version.

Get a list of insertables in the version of the document.

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
api_instance = onshape_client.DocumentsApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
vid = 'vid_example' # str | Version ID
beta_capability_ids = 'beta_capability_ids_example' # str | Beta capablities of the document requesting insertables (optional)
include_parts = true # bool | Returns parts (optional)
include_surfaces = true # bool | Returns surfaces (optional)
include_wires = true # bool | Returns wires (optional)
include_sketches = true # bool | Returns sketches (optional)
include_reference_features = true # bool | Returns reference features (optional)
include_assemblies = true # bool | Returns assemblies (optional)
include_feature_studios = true # bool | Returns feature studios (optional)
include_features = true # bool | Returns features (optional)
include_blobs = true # bool | Returns blobs (optional)
include_meshes = true # bool | Returns meshes (optional)
include_flattened_bodies = true # bool | Returns flattened sheetmetal bodies (optional)
include_applications = true # bool | Return applications (optional)
allowed_blob_mime_types = 'allowed_blob_mime_types_example' # str | Comma separated list of blob mime types to include (optional)
allowed_application_mime_types = 'allowed_application_mime_types_example' # str | Comma separated list of application format ids to           include (optional)
max_feature_script_version = 8.14 # float | If specified and is greater than zero, insertables           that are created using feature script version less than or equal to maxFeatureScriptVersion will be           returned (optional)

try:
    # Insertable List for Document Version.
    api_response = api_instance.get_insertables(did, vid, beta_capability_ids=beta_capability_ids, include_parts=include_parts, include_surfaces=include_surfaces, include_wires=include_wires, include_sketches=include_sketches, include_reference_features=include_reference_features, include_assemblies=include_assemblies, include_feature_studios=include_feature_studios, include_features=include_features, include_blobs=include_blobs, include_meshes=include_meshes, include_flattened_bodies=include_flattened_bodies, include_applications=include_applications, allowed_blob_mime_types=allowed_blob_mime_types, allowed_application_mime_types=allowed_application_mime_types, max_feature_script_version=max_feature_script_version)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DocumentsApi->get_insertables: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **vid** | **str**| Version ID | 
 **beta_capability_ids** | **str**| Beta capablities of the document requesting insertables | [optional] 
 **include_parts** | **bool**| Returns parts | [optional] 
 **include_surfaces** | **bool**| Returns surfaces | [optional] 
 **include_wires** | **bool**| Returns wires | [optional] 
 **include_sketches** | **bool**| Returns sketches | [optional] 
 **include_reference_features** | **bool**| Returns reference features | [optional] 
 **include_assemblies** | **bool**| Returns assemblies | [optional] 
 **include_feature_studios** | **bool**| Returns feature studios | [optional] 
 **include_features** | **bool**| Returns features | [optional] 
 **include_blobs** | **bool**| Returns blobs | [optional] 
 **include_meshes** | **bool**| Returns meshes | [optional] 
 **include_flattened_bodies** | **bool**| Returns flattened sheetmetal bodies | [optional] 
 **include_applications** | **bool**| Return applications | [optional] 
 **allowed_blob_mime_types** | **str**| Comma separated list of blob mime types to include | [optional] 
 **allowed_application_mime_types** | **str**| Comma separated list of application format ids to           include | [optional] 
 **max_feature_script_version** | **float**| If specified and is greater than zero, insertables           that are created using feature script version less than or equal to maxFeatureScriptVersion will be           returned | [optional] 

### Return type

[**DocumentsGetInsertablesResponse200**](DocumentsGetInsertablesResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_version**
> DocumentsGetVersionResponse200 get_version(did, vid, link_document_id=link_document_id)

Get Version

Get information about a version

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
api_instance = onshape_client.DocumentsApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
vid = 'vid_example' # str | Version ID
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

try:
    # Get Version
    api_response = api_instance.get_version(did, vid, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DocumentsApi->get_version: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **vid** | **str**| Version ID | 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 

### Return type

[**DocumentsGetVersionResponse200**](DocumentsGetVersionResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_versions**
> DocumentsGetVersionsResponse200 get_versions(did, offset=offset, limit=limit)

Get Versions

Get the versions in a document

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
api_instance = onshape_client.DocumentsApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
offset = 8.14 # float | Where to begin search results (optional)
limit = 8.14 # float | Number of results to return per page. When specified, it cannot exceed           20. Default is unlimited (optional)

try:
    # Get Versions
    api_response = api_instance.get_versions(did, offset=offset, limit=limit)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DocumentsApi->get_versions: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **offset** | **float**| Where to begin search results | [optional] 
 **limit** | **float**| Number of results to return per page. When specified, it cannot exceed           20. Default is unlimited | [optional] 

### Return type

[**DocumentsGetVersionsResponse200**](DocumentsGetVersionsResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_workspaces**
> DocumentsGetWorkspacesResponse200 get_workspaces(did, noreadonly=noreadonly)

Get Workspaces

List workspaces in document

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
api_instance = onshape_client.DocumentsApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
noreadonly = 'noreadonly_example' # str | Do not return read-only workspaces (optional)

try:
    # Get Workspaces
    api_response = api_instance.get_workspaces(did, noreadonly=noreadonly)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DocumentsApi->get_workspaces: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **noreadonly** | **str**| Do not return read-only workspaces | [optional] 

### Return type

[**DocumentsGetWorkspacesResponse200**](DocumentsGetWorkspacesResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **move_elements_to_document**
> DocumentsMoveElementsToDocumentResponse200 move_elements_to_document(did, wid, body=body)

Move Elements

Move elements from a source document to a destination document

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
api_instance = onshape_client.DocumentsApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
body = onshape_client.DocumentsMoveElementsToDocumentBody() # DocumentsMoveElementsToDocumentBody | The JSON request body. (optional)

try:
    # Move Elements
    api_response = api_instance.move_elements_to_document(did, wid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DocumentsApi->move_elements_to_document: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **body** | [**DocumentsMoveElementsToDocumentBody**](DocumentsMoveElementsToDocumentBody.md)| The JSON request body. | [optional] 

### Return type

[**DocumentsMoveElementsToDocumentResponse200**](DocumentsMoveElementsToDocumentResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **share_document**
> DocumentsShareDocumentResponse200 share_document(did, body=body)

Share Document

Share document with one or more entities, which may be users, companies, teams or applications.

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
api_instance = onshape_client.DocumentsApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
body = onshape_client.DocumentsShareDocumentBody() # DocumentsShareDocumentBody | The JSON request body. (optional)

try:
    # Share Document
    api_response = api_instance.share_document(did, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DocumentsApi->share_document: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **body** | [**DocumentsShareDocumentBody**](DocumentsShareDocumentBody.md)| The JSON request body. | [optional] 

### Return type

[**DocumentsShareDocumentResponse200**](DocumentsShareDocumentResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **un_share**
> un_share(eid, did, entry_type=entry_type)

Unshare Document

Remove share permissions from document

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
api_instance = onshape_client.DocumentsApi(onshape_client.ApiClient(configuration))
eid = 'eid_example' # str | Entry ID of the share entry to be deleted
did = 'did_example' # str | Document ID
entry_type = 8.14 # float | The type of entity referenced by eid. Valid values are      0=User, 1=Company, 2=Team, 4=Application. (optional)

try:
    # Unshare Document
    api_instance.un_share(eid, did, entry_type=entry_type)
except ApiException as e:
    print("Exception when calling DocumentsApi->un_share: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eid** | **str**| Entry ID of the share entry to be deleted | 
 **did** | **str**| Document ID | 
 **entry_type** | **float**| The type of entity referenced by eid. Valid values are      0&#x3D;User, 1&#x3D;Company, 2&#x3D;Team, 4&#x3D;Application. | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_document_attributes**
> update_document_attributes(did, body=body)

Update Document Attributes.

Update document attributes name, description

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
api_instance = onshape_client.DocumentsApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
body = onshape_client.DocumentsUpdateDocumentAttributesBody() # DocumentsUpdateDocumentAttributesBody | The JSON request body. (optional)

try:
    # Update Document Attributes.
    api_instance.update_document_attributes(did, body=body)
except ApiException as e:
    print("Exception when calling DocumentsApi->update_document_attributes: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **body** | [**DocumentsUpdateDocumentAttributesBody**](DocumentsUpdateDocumentAttributesBody.md)| The JSON request body. | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_external_references_to_latest_documents**
> DocumentsUpdateExternalReferencesToLatestDocumentsResponse200 update_external_references_to_latest_documents(did, wid, eid, body=body)

Update External References to Latest

Update the external references to the latest documents if the referenced external elements have been parted out

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
api_instance = onshape_client.DocumentsApi(onshape_client.ApiClient(configuration))
did = 'did_example' # str | Document ID
wid = 'wid_example' # str | Workspace ID
eid = 'eid_example' # str | Element ID
body = onshape_client.DocumentsUpdateExternalReferencesToLatestDocumentsBody() # DocumentsUpdateExternalReferencesToLatestDocumentsBody | The JSON request body. (optional)

try:
    # Update External References to Latest
    api_response = api_instance.update_external_references_to_latest_documents(did, wid, eid, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DocumentsApi->update_external_references_to_latest_documents: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID | 
 **wid** | **str**| Workspace ID | 
 **eid** | **str**| Element ID | 
 **body** | [**DocumentsUpdateExternalReferencesToLatestDocumentsBody**](DocumentsUpdateExternalReferencesToLatestDocumentsBody.md)| The JSON request body. | [optional] 

### Return type

[**DocumentsUpdateExternalReferencesToLatestDocumentsResponse200**](DocumentsUpdateExternalReferencesToLatestDocumentsResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

