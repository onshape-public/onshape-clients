# onshape_client.MetadataApi

All URIs are relative to *https://cad.onshape.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_metadata**](MetadataApi.md#get_metadata) | **GET** /metadata/d/{did}/{wv_char}/{wv} | Get Workspace / Version Metadata
[**get_metadata_property**](MetadataApi.md#get_metadata_property) | **GET** /metadataschema/property/{pid} | Get metadata property
[**get_metadata_schema**](MetadataApi.md#get_metadata_schema) | **GET** /metadataschema | Get metadata schema by owner
[**get_metadata_schema_by_id**](MetadataApi.md#get_metadata_schema_by_id) | **GET** /metadataschema/{sid} | Get metadata schema by ID
[**get_metadata_schema_properties**](MetadataApi.md#get_metadata_schema_properties) | **GET** /metadataschema/properties | Get metadata properties
[**get_part_list_metadata**](MetadataApi.md#get_part_list_metadata) | **GET** /metadata/d/{did}/{wvm_char}/{wvm}/e/{eid}/p | Get Parts Metadata
[**get_part_metadata**](MetadataApi.md#get_part_metadata) | **GET** /metadata/d/{did}/{wvm_char}/{wvm}/e/{eid}/p/{pid} | Get Part Metadata
[**get_standard_content_metadata**](MetadataApi.md#get_standard_content_metadata) | **GET** /metadata/standardcontent/d/{did}/v/{vid}/e/{eid}/{cu_char}/{oid}/p/{pid} | Get Standard Content Part Metadata
[**update_metadata**](MetadataApi.md#update_metadata) | **POST** /metadata/d/{did}/{wv_char}/{wv} | Update Metadata
[**update_standard_content_metadata**](MetadataApi.md#update_standard_content_metadata) | **POST** /metadata/standardcontent/d/{did}/v/{vid}/e/{eid}/{cu_char}/{oid}/p/{pid} | Update Standard Content Part Metadata


# **get_metadata**
> MetadataGetMetadataResponse200 get_metadata(wv_char, did, wv, depth=depth, detail_level=detail_level, no_null=no_null, thumbnail=thumbnail, e_offset=e_offset, e_limit=e_limit, link_document_id=link_document_id, configuration=configuration, infer_metadata_owner=infer_metadata_owner)

Get Workspace / Version Metadata

Get workspace / version metadata

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
api_instance = onshape_client.MetadataApi(onshape_client.ApiClient(configuration))
wv_char = 'wv_char_example' # str | One of w or v corresponding to whether a workspace or version was entered.
did = 'did_example' # str | Document ID
wv = 'wv_example' # str | Workspace (w) or Version (v) ID
depth = 8.14 # float | Number of levels of hierarchy to populate in metadata REST API response, 1 - simple fields of top level object, 2 - collection and object fields in the top level object, etc. (optional)
detail_level = 8.14 # float | Filter out metadata properties by detail level, 1 - fewer fields, ..., 5 - all fields. (optional)
no_null = true # bool | Filter out empty metadata properties if True. (optional)
thumbnail = true # bool | Thumbnails information will be returned if true (optional)
e_offset = 8.14 # float | Element page offset (optional)
e_limit = 8.14 # float | Element page size, number of the items returned will not exceed this value (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)
configuration = 'configuration_example' # str | Configuration string (optional)
infer_metadata_owner = true # bool | If the URL references a Standard Content part,       specifying a value of true causes the API to use the owner of the referencing linkDocument as the       metadata scope and the href of the returned part is modified to reflect this metadata scope. If not       explictly set or if set to false, the part metadata returned is the metadata defined internal to the       Standard Content document. (optional)

try:
    # Get Workspace / Version Metadata
    api_response = api_instance.get_metadata(wv_char, did, wv, depth=depth, detail_level=detail_level, no_null=no_null, thumbnail=thumbnail, e_offset=e_offset, e_limit=e_limit, link_document_id=link_document_id, configuration=configuration, infer_metadata_owner=infer_metadata_owner)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling MetadataApi->get_metadata: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wv_char** | **str**| One of w or v corresponding to whether a workspace or version was entered. | 
 **did** | **str**| Document ID | 
 **wv** | **str**| Workspace (w) or Version (v) ID | 
 **depth** | **float**| Number of levels of hierarchy to populate in metadata REST API response, 1 - simple fields of top level object, 2 - collection and object fields in the top level object, etc. | [optional] 
 **detail_level** | **float**| Filter out metadata properties by detail level, 1 - fewer fields, ..., 5 - all fields. | [optional] 
 **no_null** | **bool**| Filter out empty metadata properties if True. | [optional] 
 **thumbnail** | **bool**| Thumbnails information will be returned if true | [optional] 
 **e_offset** | **float**| Element page offset | [optional] 
 **e_limit** | **float**| Element page size, number of the items returned will not exceed this value | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 
 **configuration** | **str**| Configuration string | [optional] 
 **infer_metadata_owner** | **bool**| If the URL references a Standard Content part,       specifying a value of true causes the API to use the owner of the referencing linkDocument as the       metadata scope and the href of the returned part is modified to reflect this metadata scope. If not       explictly set or if set to false, the part metadata returned is the metadata defined internal to the       Standard Content document. | [optional] 

### Return type

[**MetadataGetMetadataResponse200**](MetadataGetMetadataResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_metadata_property**
> MetadataGetMetadataPropertyResponse200 get_metadata_property(pid, schema_id, document_id=document_id)

Get metadata property

Get metadata property

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
api_instance = onshape_client.MetadataApi(onshape_client.ApiClient(configuration))
pid = 'pid_example' # str | Property ID
schema_id = 'schema_id_example' # str | Metadata schema ID
document_id = 'document_id_example' # str | ID of the document the schema is associated with. (optional)

try:
    # Get metadata property
    api_response = api_instance.get_metadata_property(pid, schema_id, document_id=document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling MetadataApi->get_metadata_property: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pid** | **str**| Property ID | 
 **schema_id** | **str**| Metadata schema ID | 
 **document_id** | **str**| ID of the document the schema is associated with. | [optional] 

### Return type

[**MetadataGetMetadataPropertyResponse200**](MetadataGetMetadataPropertyResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_metadata_schema**
> MetadataGetMetadataSchemaResponse200 get_metadata_schema(owner_id, object_type, owner_type=owner_type, document_id=document_id)

Get metadata schema by owner

Get metadata schema, or Onshape schema if user/company has no schema for the given object type

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
api_instance = onshape_client.MetadataApi(onshape_client.ApiClient(configuration))
owner_id = 'owner_id_example' # str | Schema owner ID
object_type = 8.14 # float | Metadata object type, which can be: 0:GLOBAL, 1:DOCUMENT, 2:PART,           3:ASSEMBLY, 4:DRAWING, 5:PART_STUDIO, 6: BLOB_ELEMENT, 7:APP_ELEMENT, 8:VERSION, 9:WORKSPACE
owner_type = 8.14 # float | Schema owner type, which can be: 0: user, 1: company (default: 1) (optional)
document_id = 'document_id_example' # str | ID of the document the schema is associated with. (optional)

try:
    # Get metadata schema by owner
    api_response = api_instance.get_metadata_schema(owner_id, object_type, owner_type=owner_type, document_id=document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling MetadataApi->get_metadata_schema: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **owner_id** | **str**| Schema owner ID | 
 **object_type** | **float**| Metadata object type, which can be: 0:GLOBAL, 1:DOCUMENT, 2:PART,           3:ASSEMBLY, 4:DRAWING, 5:PART_STUDIO, 6: BLOB_ELEMENT, 7:APP_ELEMENT, 8:VERSION, 9:WORKSPACE | 
 **owner_type** | **float**| Schema owner type, which can be: 0: user, 1: company (default: 1) | [optional] 
 **document_id** | **str**| ID of the document the schema is associated with. | [optional] 

### Return type

[**MetadataGetMetadataSchemaResponse200**](MetadataGetMetadataSchemaResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_metadata_schema_by_id**
> MetadataGetMetadataSchemaByIDResponse200 get_metadata_schema_by_id(sid, document_id=document_id)

Get metadata schema by ID

Get metadata schema by ID

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
api_instance = onshape_client.MetadataApi(onshape_client.ApiClient(configuration))
sid = 'sid_example' # str | Metadata schema ID
document_id = 'document_id_example' # str | ID of the document the schema is associated with. (optional)

try:
    # Get metadata schema by ID
    api_response = api_instance.get_metadata_schema_by_id(sid, document_id=document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling MetadataApi->get_metadata_schema_by_id: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **sid** | **str**| Metadata schema ID | 
 **document_id** | **str**| ID of the document the schema is associated with. | [optional] 

### Return type

[**MetadataGetMetadataSchemaByIDResponse200**](MetadataGetMetadataSchemaByIDResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_metadata_schema_properties**
> MetadataGetMetadataSchemaPropertiesResponse200 get_metadata_schema_properties(schema_id=schema_id, owner_id=owner_id, owner_type=owner_type, object_type=object_type, strict=strict, active_only=active_only, document_id=document_id, offset=offset, limit=limit)

Get metadata properties

Get metadata properties

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
api_instance = onshape_client.MetadataApi(onshape_client.ApiClient(configuration))
schema_id = 'schema_id_example' # str | Metadata schema ID. Must be specified if ownerId is blank. (optional)
owner_id = 'owner_id_example' # str | Schema owner ID. Must be specified if schemaId is blank. (optional)
owner_type = 8.14 # float | Schema owner type, which can be: 0: user, 1: company (default: 1).           Should only be specified if ownerId is specified. (optional)
object_type = 8.14 # float | Metadata object type. Should only be specified if ownerId is           specified. If schemaId is specified, this parameter is ignored. If null, properties for all types will           be returned. If specified, must be one of the following: 0:GLOBAL, 1:DOCUMENT, 2:PART, 3:ASSEMBLY,           4:DRAWING, 5:PART_STUDIO, 6: BLOB_ELEMENT, 7:APP_ELEMENT, 8:VERSION, 9:WORKSPACE If false, properties           will be returned with full detail, including property configs. (optional)
strict = true # bool | If true, only properties for this particular schema or ownerId           will be returned. If false, all inherited properties will be returned. (optional)
active_only = true # bool | If true, only active properties for this particular schema or           ownerId will be returned. If false, all properties will be returned. (optional)
document_id = 'document_id_example' # str | ID of the document the schema is associated with. (optional)
offset = 8.14 # float | Where to begin search results (optional)
limit = 8.14 # float | Number of results to return per page (max is 20) (optional)

try:
    # Get metadata properties
    api_response = api_instance.get_metadata_schema_properties(schema_id=schema_id, owner_id=owner_id, owner_type=owner_type, object_type=object_type, strict=strict, active_only=active_only, document_id=document_id, offset=offset, limit=limit)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling MetadataApi->get_metadata_schema_properties: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **schema_id** | **str**| Metadata schema ID. Must be specified if ownerId is blank. | [optional] 
 **owner_id** | **str**| Schema owner ID. Must be specified if schemaId is blank. | [optional] 
 **owner_type** | **float**| Schema owner type, which can be: 0: user, 1: company (default: 1).           Should only be specified if ownerId is specified. | [optional] 
 **object_type** | **float**| Metadata object type. Should only be specified if ownerId is           specified. If schemaId is specified, this parameter is ignored. If null, properties for all types will           be returned. If specified, must be one of the following: 0:GLOBAL, 1:DOCUMENT, 2:PART, 3:ASSEMBLY,           4:DRAWING, 5:PART_STUDIO, 6: BLOB_ELEMENT, 7:APP_ELEMENT, 8:VERSION, 9:WORKSPACE If false, properties           will be returned with full detail, including property configs. | [optional] 
 **strict** | **bool**| If true, only properties for this particular schema or ownerId           will be returned. If false, all inherited properties will be returned. | [optional] 
 **active_only** | **bool**| If true, only active properties for this particular schema or           ownerId will be returned. If false, all properties will be returned. | [optional] 
 **document_id** | **str**| ID of the document the schema is associated with. | [optional] 
 **offset** | **float**| Where to begin search results | [optional] 
 **limit** | **float**| Number of results to return per page (max is 20) | [optional] 

### Return type

[**MetadataGetMetadataSchemaPropertiesResponse200**](MetadataGetMetadataSchemaPropertiesResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_part_list_metadata**
> MetadataGetPartListMetadataResponse200 get_part_list_metadata(wvm_char, did, wvm, eid, depth=depth, detail_level=detail_level, no_null=no_null, thumbnail=thumbnail, link_document_id=link_document_id)

Get Parts Metadata

Get metadata of parts of an element in a workspace / version / microversion

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
api_instance = onshape_client.MetadataApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID
depth = 8.14 # float | Number of levels of hierarchy to populate in metadata REST API response, 1 - simple fields of top level object, 2 - collection and object fields in the top level object, etc. (optional)
detail_level = 8.14 # float | Filter out metadata properties by detail level, 1 - fewer fields, ..., 5 - all fields. (optional)
no_null = true # bool | Filter out empty metadata properties if True. (optional)
thumbnail = true # bool | Thumbnails information will be returned if true (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

try:
    # Get Parts Metadata
    api_response = api_instance.get_part_list_metadata(wvm_char, did, wvm, eid, depth=depth, detail_level=detail_level, no_null=no_null, thumbnail=thumbnail, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling MetadataApi->get_part_list_metadata: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 
 **depth** | **float**| Number of levels of hierarchy to populate in metadata REST API response, 1 - simple fields of top level object, 2 - collection and object fields in the top level object, etc. | [optional] 
 **detail_level** | **float**| Filter out metadata properties by detail level, 1 - fewer fields, ..., 5 - all fields. | [optional] 
 **no_null** | **bool**| Filter out empty metadata properties if True. | [optional] 
 **thumbnail** | **bool**| Thumbnails information will be returned if true | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 

### Return type

[**MetadataGetPartListMetadataResponse200**](MetadataGetPartListMetadataResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_part_metadata**
> MetadataGetPartMetadataResponse200 get_part_metadata(wvm_char, pid, did, wvm, eid, depth=depth, detail_level=detail_level, no_null=no_null, thumbnail=thumbnail, link_document_id=link_document_id)

Get Part Metadata

Get metadata of a part in an element in a workspace / version / microversion

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
api_instance = onshape_client.MetadataApi(onshape_client.ApiClient(configuration))
wvm_char = 'wvm_char_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
pid = 'pid_example' # str | Part ID
did = 'did_example' # str | Document ID
wvm = 'wvm_example' # str | Workspace (w), Version (v) or Microversion (m) ID
eid = 'eid_example' # str | Element ID
depth = 8.14 # float | Number of levels of hierarchy to populate in metadata REST API response, 1 - simple fields of top level object, 2 - collection and object fields in the top level object, etc. (optional)
detail_level = 8.14 # float | Filter out metadata properties by detail level, 1 - fewer fields, ..., 5 - all fields. (optional)
no_null = true # bool | Filter out empty metadata properties if True. (optional)
thumbnail = true # bool | Thumbnails information will be returned if true (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

try:
    # Get Part Metadata
    api_response = api_instance.get_part_metadata(wvm_char, pid, did, wvm, eid, depth=depth, detail_level=detail_level, no_null=no_null, thumbnail=thumbnail, link_document_id=link_document_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling MetadataApi->get_part_metadata: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wvm_char** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. | 
 **pid** | **str**| Part ID | 
 **did** | **str**| Document ID | 
 **wvm** | **str**| Workspace (w), Version (v) or Microversion (m) ID | 
 **eid** | **str**| Element ID | 
 **depth** | **float**| Number of levels of hierarchy to populate in metadata REST API response, 1 - simple fields of top level object, 2 - collection and object fields in the top level object, etc. | [optional] 
 **detail_level** | **float**| Filter out metadata properties by detail level, 1 - fewer fields, ..., 5 - all fields. | [optional] 
 **no_null** | **bool**| Filter out empty metadata properties if True. | [optional] 
 **thumbnail** | **bool**| Thumbnails information will be returned if true | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 

### Return type

[**MetadataGetPartMetadataResponse200**](MetadataGetPartMetadataResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_standard_content_metadata**
> MetadataGetStandardContentMetadataResponse200 get_standard_content_metadata(cu_char, pid, did, vid, eid, oid, depth=depth, detail_level=detail_level, no_null=no_null, thumbnail=thumbnail, link_document_id=link_document_id, configuration=configuration)

Get Standard Content Part Metadata

Get metadata of a standard content part in a version

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
api_instance = onshape_client.MetadataApi(onshape_client.ApiClient(configuration))
cu_char = 'cu_char_example' # str | One of c or u corresponding to whether a company or user was entered.
pid = 'pid_example' # str | Part ID
did = 'did_example' # str | Document ID
vid = 'vid_example' # str | Version ID
eid = 'eid_example' # str | Element ID
oid = 'oid_example' # str | Company (c) or User (u) ID of metadata owner
depth = 8.14 # float | Number of levels of hierarchy to populate in metadata REST API response, 1 - simple fields of top level object, 2 - collection and object fields in the top level object, etc. (optional)
detail_level = 8.14 # float | Filter out metadata properties by detail level, 1 - fewer fields, ..., 5 - all fields. (optional)
no_null = true # bool | Filter out empty metadata properties if True. (optional)
thumbnail = true # bool | Thumbnails information will be returned if true (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)
configuration = 'configuration_example' # str | Configuration string (optional)

try:
    # Get Standard Content Part Metadata
    api_response = api_instance.get_standard_content_metadata(cu_char, pid, did, vid, eid, oid, depth=depth, detail_level=detail_level, no_null=no_null, thumbnail=thumbnail, link_document_id=link_document_id, configuration=configuration)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling MetadataApi->get_standard_content_metadata: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **cu_char** | **str**| One of c or u corresponding to whether a company or user was entered. | 
 **pid** | **str**| Part ID | 
 **did** | **str**| Document ID | 
 **vid** | **str**| Version ID | 
 **eid** | **str**| Element ID | 
 **oid** | **str**| Company (c) or User (u) ID of metadata owner | 
 **depth** | **float**| Number of levels of hierarchy to populate in metadata REST API response, 1 - simple fields of top level object, 2 - collection and object fields in the top level object, etc. | [optional] 
 **detail_level** | **float**| Filter out metadata properties by detail level, 1 - fewer fields, ..., 5 - all fields. | [optional] 
 **no_null** | **bool**| Filter out empty metadata properties if True. | [optional] 
 **thumbnail** | **bool**| Thumbnails information will be returned if true | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 
 **configuration** | **str**| Configuration string | [optional] 

### Return type

[**MetadataGetStandardContentMetadataResponse200**](MetadataGetStandardContentMetadataResponse200.md)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_metadata**
> update_metadata(wv_char, did, wv, body=body)

Update Metadata

Update metadata. Updates of parts in configurable Par Studios require configuration information     be included within the items.*.href fields for a specific part. The response format varies depending     on whether there are multiple items to update.

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
api_instance = onshape_client.MetadataApi(onshape_client.ApiClient(configuration))
wv_char = 'wv_char_example' # str | One of w or v corresponding to whether a workspace or version was entered.
did = 'did_example' # str | Document ID
wv = 'wv_example' # str | Workspace (w) or Version (v) ID
body = onshape_client.MetadataUpdateMetadataBody() # MetadataUpdateMetadataBody | The JSON request body. (optional)

try:
    # Update Metadata
    api_instance.update_metadata(wv_char, did, wv, body=body)
except ApiException as e:
    print("Exception when calling MetadataApi->update_metadata: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wv_char** | **str**| One of w or v corresponding to whether a workspace or version was entered. | 
 **did** | **str**| Document ID | 
 **wv** | **str**| Workspace (w) or Version (v) ID | 
 **body** | [**MetadataUpdateMetadataBody**](MetadataUpdateMetadataBody.md)| The JSON request body. | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_standard_content_metadata**
> update_standard_content_metadata(cu_char, pid, did, vid, eid, oid, body=body, link_document_id=link_document_id)

Update Standard Content Part Metadata

Update metadata of a standard content part in a version for a specific user or company.     Configuration information must be included within the items.*.href fields. The response format varies depending     on whether there are multiple items to update.

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
api_instance = onshape_client.MetadataApi(onshape_client.ApiClient(configuration))
cu_char = 'cu_char_example' # str | One of c or u corresponding to whether a company or user was entered.
pid = 'pid_example' # str | Part ID
did = 'did_example' # str | Document ID
vid = 'vid_example' # str | Version ID
eid = 'eid_example' # str | Element ID
oid = 'oid_example' # str | Company (c) or User (u) ID of metadata owner
body = onshape_client.MetadataUpdateStandardContentMetadataBody() # MetadataUpdateStandardContentMetadataBody | The JSON request body. (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

try:
    # Update Standard Content Part Metadata
    api_instance.update_standard_content_metadata(cu_char, pid, did, vid, eid, oid, body=body, link_document_id=link_document_id)
except ApiException as e:
    print("Exception when calling MetadataApi->update_standard_content_metadata: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **cu_char** | **str**| One of c or u corresponding to whether a company or user was entered. | 
 **pid** | **str**| Part ID | 
 **did** | **str**| Document ID | 
 **vid** | **str**| Version ID | 
 **eid** | **str**| Element ID | 
 **oid** | **str**| Company (c) or User (u) ID of metadata owner | 
 **body** | [**MetadataUpdateStandardContentMetadataBody**](MetadataUpdateStandardContentMetadataBody.md)| The JSON request body. | [optional] 
 **link_document_id** | **str**| Id of document that links to the document being accessed.     This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2), [apiAccessKey](../README.md#apiAccessKey), [apiSecretKey](../README.md#apiSecretKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

