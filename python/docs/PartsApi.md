# onshape_client.oas.PartsApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**export_ps**](PartsApi.md#export_ps) | **GET** /api/parts/d/{did}/{wvm}/{wvmid}/e/{eid}/partid/{partid}/parasolid | Export Part to Parasolid.
[**get_bend_table**](PartsApi.md#get_bend_table) | **GET** /api/parts/d/{did}/{wvm}/{wvmid}/e/{eid}/partid/{partid}/sheetmetal/bendtable | Get Sheet Metal Bend Table.
[**get_body_details**](PartsApi.md#get_body_details) | **GET** /api/parts/d/{did}/{wvm}/{wvmid}/e/{eid}/partid/{partid}/bodydetails | 
[**get_bounding_boxes**](PartsApi.md#get_bounding_boxes) | **GET** /api/parts/d/{did}/{wvm}/{wvmid}/e/{eid}/partid/{partid}/boundingboxes | 
[**get_edges**](PartsApi.md#get_edges) | **GET** /api/parts/d/{did}/{wvm}/{wvmid}/e/{eid}/partid/{partid}/tessellatededges | Tessellated Edges
[**get_faces1**](PartsApi.md#get_faces1) | **GET** /api/parts/d/{did}/{wvm}/{wvmid}/e/{eid}/partid/{partid}/tessellatedfaces | Get Tessellated Faces
[**get_mass_properties**](PartsApi.md#get_mass_properties) | **GET** /api/parts/d/{did}/{wvm}/{wvmid}/e/{eid}/partid/{partid}/massproperties | 
[**get_part_metadata**](PartsApi.md#get_part_metadata) | **GET** /api/parts/d/{did}/{wvm}/{wvmid}/e/{eid}/partid/{partid}/metadata | 
[**get_parts_wmv**](PartsApi.md#get_parts_wmv) | **GET** /api/parts/d/{did}/{wvm}/{wvmid} | Get list of parts
[**get_parts_wmve**](PartsApi.md#get_parts_wmve) | **GET** /api/parts/d/{did}/{wvm}/{wvmid}/e/{eid} | Get parts from an element.
[**get_shaded_views1**](PartsApi.md#get_shaded_views1) | **GET** /api/parts/d/{did}/{wvm}/{wvmid}/e/{eid}/partid/{partid}/shadedviews | 
[**get_standard_content_part_metadata**](PartsApi.md#get_standard_content_part_metadata) | **GET** /api/parts/standardcontent/d/{did}/v/{vid}/e/{eid}/{otype}/{oid}/partid/{partid}/metadata | 
[**update_part_metadata**](PartsApi.md#update_part_metadata) | **POST** /api/parts/d/{did}/{wvm}/{wvmid}/e/{eid}/partid/{partid}/metadata | 
[**update_standard_content_part_metadata**](PartsApi.md#update_standard_content_part_metadata) | **POST** /api/parts/standardcontent/d/{did}/v/{vid}/e/{eid}/{otype}/{oid}/partid/{partid}/metadata | 


# **export_ps**
> file_type export_ps(did, wvm, wvmid, eid, partid)

Export Part to Parasolid.

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
    api_instance = onshape_client.oas.PartsApi(api_client)
    did = 'did_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    eid = 'eid_example' # str | 
    partid = 'partid_example' # str | 
    version = '0' # str |  (optional) if omitted the server will use the default value of '0'
configuration = 'configuration_example' # str |  (optional)
link_document_id = 'link_document_id_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        # Export Part to Parasolid.
        api_response = api_instance.export_ps(did, wvm, wvmid, eid, partid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartsApi->export_ps: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Export Part to Parasolid.
        api_response = api_instance.export_ps(did, wvm, wvmid, eid, partid, version=version, configuration=configuration, link_document_id=link_document_id)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartsApi->export_ps: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **eid** | **str**|  |
 **partid** | **str**|  |
 **version** | **str**|  | [optional] if omitted the server will use the default value of '0'
 **configuration** | **str**|  | [optional]
 **link_document_id** | **str**|  | [optional]

### Return type

**file_type**

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/vnd.onshape.v1+octet-stream;charset=UTF-8;qs=0.1

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success! |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_bend_table**
> bt_table_response1546.BTTableResponse1546 get_bend_table(did, wvm, wvmid, eid, partid)

Get Sheet Metal Bend Table.

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
    api_instance = onshape_client.oas.PartsApi(api_client)
    did = 'did_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    eid = 'eid_example' # str | 
    partid = 'partid_example' # str | 
    link_document_id = 'link_document_id_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        # Get Sheet Metal Bend Table.
        api_response = api_instance.get_bend_table(did, wvm, wvmid, eid, partid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartsApi->get_bend_table: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Get Sheet Metal Bend Table.
        api_response = api_instance.get_bend_table(did, wvm, wvmid, eid, partid, link_document_id=link_document_id)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartsApi->get_bend_table: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **eid** | **str**|  |
 **partid** | **str**|  |
 **link_document_id** | **str**|  | [optional]

### Return type

[**bt_table_response1546.BTTableResponse1546**](BTTableResponse1546.md)

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

# **get_body_details**
> bt_export_model_bodies_response734.BTExportModelBodiesResponse734 get_body_details(did, wvm, wvmid, eid, partid)



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
    api_instance = onshape_client.oas.PartsApi(api_client)
    did = 'did_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    eid = 'eid_example' # str | 
    partid = 'partid_example' # str | 
    configuration = 'configuration_example' # str |  (optional)
link_document_id = 'link_document_id_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.get_body_details(did, wvm, wvmid, eid, partid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartsApi->get_body_details: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.get_body_details(did, wvm, wvmid, eid, partid, configuration=configuration, link_document_id=link_document_id)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartsApi->get_body_details: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **eid** | **str**|  |
 **partid** | **str**|  |
 **configuration** | **str**|  | [optional]
 **link_document_id** | **str**|  | [optional]

### Return type

[**bt_export_model_bodies_response734.BTExportModelBodiesResponse734**](BTExportModelBodiesResponse734.md)

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

# **get_bounding_boxes**
> bt_bounding_box_info.BTBoundingBoxInfo get_bounding_boxes(did, wvm, wvmid, eid, partid)



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
    api_instance = onshape_client.oas.PartsApi(api_client)
    did = 'did_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    eid = 'eid_example' # str | 
    partid = 'partid_example' # str | 
    include_hidden = False # bool |  (optional) if omitted the server will use the default value of False
configuration = 'configuration_example' # str |  (optional)
link_document_id = 'link_document_id_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.get_bounding_boxes(did, wvm, wvmid, eid, partid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartsApi->get_bounding_boxes: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.get_bounding_boxes(did, wvm, wvmid, eid, partid, include_hidden=include_hidden, configuration=configuration, link_document_id=link_document_id)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartsApi->get_bounding_boxes: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **eid** | **str**|  |
 **partid** | **str**|  |
 **include_hidden** | **bool**|  | [optional] if omitted the server will use the default value of False
 **configuration** | **str**|  | [optional]
 **link_document_id** | **str**|  | [optional]

### Return type

[**bt_bounding_box_info.BTBoundingBoxInfo**](BTBoundingBoxInfo.md)

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

# **get_edges**
> bt_export_tessellated_edges_response327.BTExportTessellatedEdgesResponse327 get_edges(did, wvm, wvmid, eid, partid)

Tessellated Edges

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
    api_instance = onshape_client.oas.PartsApi(api_client)
    did = 'did_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    eid = 'eid_example' # str | 
    partid = 'partid_example' # str | 
    angle_tolerance = 3.4 # float |  (optional)
chord_tolerance = 3.4 # float |  (optional)
edge_id = ['edge_id_example'] # [str] |  (optional)
configuration = 'configuration_example' # str |  (optional)
link_document_id = 'link_document_id_example' # str |  (optional)
body = 'body_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        # Tessellated Edges
        api_response = api_instance.get_edges(did, wvm, wvmid, eid, partid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartsApi->get_edges: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Tessellated Edges
        api_response = api_instance.get_edges(did, wvm, wvmid, eid, partid, angle_tolerance=angle_tolerance, chord_tolerance=chord_tolerance, edge_id=edge_id, configuration=configuration, link_document_id=link_document_id, body=body)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartsApi->get_edges: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **eid** | **str**|  |
 **partid** | **str**|  |
 **angle_tolerance** | **float**|  | [optional]
 **chord_tolerance** | **float**|  | [optional]
 **edge_id** | **[str]**|  | [optional]
 **configuration** | **str**|  | [optional]
 **link_document_id** | **str**|  | [optional]
 **body** | **str**|  | [optional]

### Return type

[**bt_export_tessellated_edges_response327.BTExportTessellatedEdgesResponse327**](BTExportTessellatedEdgesResponse327.md)

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

# **get_faces1**
> bt_export_tessellated_faces_response898.BTExportTessellatedFacesResponse898 get_faces1(did, wvm, wvmid, eid, partid)

Get Tessellated Faces

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
    api_instance = onshape_client.oas.PartsApi(api_client)
    did = 'did_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    eid = 'eid_example' # str | 
    partid = 'partid_example' # str | 
    angle_tolerance = 3.4 # float |  (optional)
chord_tolerance = 3.4 # float |  (optional)
max_facet_width = 3.4 # float |  (optional)
output_vertex_normals = False # bool |  (optional) if omitted the server will use the default value of False
output_facet_normals = True # bool |  (optional) if omitted the server will use the default value of True
output_texture_coordinates = False # bool |  (optional) if omitted the server will use the default value of False
output_face_appearances = False # bool |  (optional) if omitted the server will use the default value of False
output_index_table = False # bool |  (optional) if omitted the server will use the default value of False
face_id = ['face_id_example'] # [str] |  (optional)
configuration = 'configuration_example' # str |  (optional)
output_error_faces = False # bool |  (optional) if omitted the server will use the default value of False
link_document_id = 'link_document_id_example' # str |  (optional)
body = 'body_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        # Get Tessellated Faces
        api_response = api_instance.get_faces1(did, wvm, wvmid, eid, partid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartsApi->get_faces1: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Get Tessellated Faces
        api_response = api_instance.get_faces1(did, wvm, wvmid, eid, partid, angle_tolerance=angle_tolerance, chord_tolerance=chord_tolerance, max_facet_width=max_facet_width, output_vertex_normals=output_vertex_normals, output_facet_normals=output_facet_normals, output_texture_coordinates=output_texture_coordinates, output_face_appearances=output_face_appearances, output_index_table=output_index_table, face_id=face_id, configuration=configuration, output_error_faces=output_error_faces, link_document_id=link_document_id, body=body)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartsApi->get_faces1: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **eid** | **str**|  |
 **partid** | **str**|  |
 **angle_tolerance** | **float**|  | [optional]
 **chord_tolerance** | **float**|  | [optional]
 **max_facet_width** | **float**|  | [optional]
 **output_vertex_normals** | **bool**|  | [optional] if omitted the server will use the default value of False
 **output_facet_normals** | **bool**|  | [optional] if omitted the server will use the default value of True
 **output_texture_coordinates** | **bool**|  | [optional] if omitted the server will use the default value of False
 **output_face_appearances** | **bool**|  | [optional] if omitted the server will use the default value of False
 **output_index_table** | **bool**|  | [optional] if omitted the server will use the default value of False
 **face_id** | **[str]**|  | [optional]
 **configuration** | **str**|  | [optional]
 **output_error_faces** | **bool**|  | [optional] if omitted the server will use the default value of False
 **link_document_id** | **str**|  | [optional]
 **body** | **str**|  | [optional]

### Return type

[**bt_export_tessellated_faces_response898.BTExportTessellatedFacesResponse898**](BTExportTessellatedFacesResponse898.md)

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

# **get_mass_properties**
> bt_mass_properties_bulk_info.BTMassPropertiesBulkInfo get_mass_properties(did, wvm, wvmid, eid, partid)



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
    api_instance = onshape_client.oas.PartsApi(api_client)
    did = 'did_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    eid = 'eid_example' # str | 
    partid = 'partid_example' # str | 
    infer_metadata_owner = True # bool |  (optional) if omitted the server will use the default value of True
link_document_id = 'link_document_id_example' # str |  (optional)
configuration = 'configuration_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.get_mass_properties(did, wvm, wvmid, eid, partid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartsApi->get_mass_properties: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.get_mass_properties(did, wvm, wvmid, eid, partid, infer_metadata_owner=infer_metadata_owner, link_document_id=link_document_id, configuration=configuration)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartsApi->get_mass_properties: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **eid** | **str**|  |
 **partid** | **str**|  |
 **infer_metadata_owner** | **bool**|  | [optional] if omitted the server will use the default value of True
 **link_document_id** | **str**|  | [optional]
 **configuration** | **str**|  | [optional]

### Return type

[**bt_mass_properties_bulk_info.BTMassPropertiesBulkInfo**](BTMassPropertiesBulkInfo.md)

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

# **get_part_metadata**
> bt_part_metadata_info.BTPartMetadataInfo get_part_metadata(did, wvm, wvmid, eid, partid)



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
    api_instance = onshape_client.oas.PartsApi(api_client)
    did = 'did_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    eid = 'eid_example' # str | 
    partid = 'partid_example' # str | 
    infer_metadata_owner = False # bool |  (optional) if omitted the server will use the default value of False
include_property_defaults = False # bool |  (optional) if omitted the server will use the default value of False
friendly_user_ids = False # bool |  (optional) if omitted the server will use the default value of False
configuration = 'configuration_example' # str |  (optional)
link_document_id = 'link_document_id_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.get_part_metadata(did, wvm, wvmid, eid, partid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartsApi->get_part_metadata: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.get_part_metadata(did, wvm, wvmid, eid, partid, infer_metadata_owner=infer_metadata_owner, include_property_defaults=include_property_defaults, friendly_user_ids=friendly_user_ids, configuration=configuration, link_document_id=link_document_id)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartsApi->get_part_metadata: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **eid** | **str**|  |
 **partid** | **str**|  |
 **infer_metadata_owner** | **bool**|  | [optional] if omitted the server will use the default value of False
 **include_property_defaults** | **bool**|  | [optional] if omitted the server will use the default value of False
 **friendly_user_ids** | **bool**|  | [optional] if omitted the server will use the default value of False
 **configuration** | **str**|  | [optional]
 **link_document_id** | **str**|  | [optional]

### Return type

[**bt_part_metadata_info.BTPartMetadataInfo**](BTPartMetadataInfo.md)

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

# **get_parts_wmv**
> [bt_part_metadata_info.BTPartMetadataInfo] get_parts_wmv(did, wvm, wvmid)

Get list of parts

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
    api_instance = onshape_client.oas.PartsApi(api_client)
    did = 'did_example' # str | Document ID.
    wvm = 'wvm_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
    wvmid = 'wvmid_example' # str | Workspace (w), Version (v) or Microversion (m) ID.
    element_id = 'element_id_example' # str | Element ID (optional)
with_thumbnails = False # bool | Whether or not to include thumbnails (not supported for microversion) (optional) if omitted the server will use the default value of False
include_property_defaults = False # bool | If true, include metadata schema property defaults in response (optional) if omitted the server will use the default value of False
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)
configuration = 'configuration_example' # str | Configuration string. (optional)

    # example passing only required values which don't have defaults set
    try:
        # Get list of parts
        api_response = api_instance.get_parts_wmv(did, wvm, wvmid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartsApi->get_parts_wmv: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Get list of parts
        api_response = api_instance.get_parts_wmv(did, wvm, wvmid, element_id=element_id, with_thumbnails=with_thumbnails, include_property_defaults=include_property_defaults, link_document_id=link_document_id, configuration=configuration)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartsApi->get_parts_wmv: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. |
 **wvm** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. |
 **wvmid** | **str**| Workspace (w), Version (v) or Microversion (m) ID. |
 **element_id** | **str**| Element ID | [optional]
 **with_thumbnails** | **bool**| Whether or not to include thumbnails (not supported for microversion) | [optional] if omitted the server will use the default value of False
 **include_property_defaults** | **bool**| If true, include metadata schema property defaults in response | [optional] if omitted the server will use the default value of False
 **link_document_id** | **str**| Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional]
 **configuration** | **str**| Configuration string. | [optional]

### Return type

[**[bt_part_metadata_info.BTPartMetadataInfo]**](BTPartMetadataInfo.md)

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

# **get_parts_wmve**
> [bt_part_metadata_info.BTPartMetadataInfo] get_parts_wmve(did, wvm, wvmid, eid)

Get parts from an element.

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
    api_instance = onshape_client.oas.PartsApi(api_client)
    did = 'did_example' # str | Document ID.
    wvm = 'wvm_example' # str | One of w or v or m corresponding to whether a workspace or version or microversion was entered.
    wvmid = 'wvmid_example' # str | Workspace (w), Version (v) or Microversion (m) ID.
    eid = 'eid_example' # str | Element ID.
    with_thumbnails = False # bool | Whether or not to include thumbnails (not supported for microversion) (optional) if omitted the server will use the default value of False
include_property_defaults = False # bool | If true, include metadata schema property defaults in response (optional) if omitted the server will use the default value of False
configuration = 'configuration_example' # str | Configuration string. (optional)
link_document_id = 'link_document_id_example' # str | Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. (optional)

    # example passing only required values which don't have defaults set
    try:
        # Get parts from an element.
        api_response = api_instance.get_parts_wmve(did, wvm, wvmid, eid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartsApi->get_parts_wmve: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Get parts from an element.
        api_response = api_instance.get_parts_wmve(did, wvm, wvmid, eid, with_thumbnails=with_thumbnails, include_property_defaults=include_property_defaults, configuration=configuration, link_document_id=link_document_id)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartsApi->get_parts_wmve: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**| Document ID. |
 **wvm** | **str**| One of w or v or m corresponding to whether a workspace or version or microversion was entered. |
 **wvmid** | **str**| Workspace (w), Version (v) or Microversion (m) ID. |
 **eid** | **str**| Element ID. |
 **with_thumbnails** | **bool**| Whether or not to include thumbnails (not supported for microversion) | [optional] if omitted the server will use the default value of False
 **include_property_defaults** | **bool**| If true, include metadata schema property defaults in response | [optional] if omitted the server will use the default value of False
 **configuration** | **str**| Configuration string. | [optional]
 **link_document_id** | **str**| Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter. | [optional]

### Return type

[**[bt_part_metadata_info.BTPartMetadataInfo]**](BTPartMetadataInfo.md)

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

# **get_shaded_views1**
> bt_shaded_views_info.BTShadedViewsInfo get_shaded_views1(did, wvm, wvmid, eid, partid)



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
    api_instance = onshape_client.oas.PartsApi(api_client)
    did = 'did_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    eid = 'eid_example' # str | 
    partid = 'partid_example' # str | 
    view_matrix = 'front' # str |  (optional) if omitted the server will use the default value of 'front'
output_height = 500 # int |  (optional) if omitted the server will use the default value of 500
output_width = 500 # int |  (optional) if omitted the server will use the default value of 500
pixel_size = 0.003 # float |  (optional) if omitted the server will use the default value of 0.003
edges = 'show' # str |  (optional) if omitted the server will use the default value of 'show'
use_anti_aliasing = False # bool |  (optional) if omitted the server will use the default value of False
configuration = 'configuration_example' # str |  (optional)
link_document_id = 'link_document_id_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.get_shaded_views1(did, wvm, wvmid, eid, partid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartsApi->get_shaded_views1: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.get_shaded_views1(did, wvm, wvmid, eid, partid, view_matrix=view_matrix, output_height=output_height, output_width=output_width, pixel_size=pixel_size, edges=edges, use_anti_aliasing=use_anti_aliasing, configuration=configuration, link_document_id=link_document_id)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartsApi->get_shaded_views1: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **eid** | **str**|  |
 **partid** | **str**|  |
 **view_matrix** | **str**|  | [optional] if omitted the server will use the default value of 'front'
 **output_height** | **int**|  | [optional] if omitted the server will use the default value of 500
 **output_width** | **int**|  | [optional] if omitted the server will use the default value of 500
 **pixel_size** | **float**|  | [optional] if omitted the server will use the default value of 0.003
 **edges** | **str**|  | [optional] if omitted the server will use the default value of 'show'
 **use_anti_aliasing** | **bool**|  | [optional] if omitted the server will use the default value of False
 **configuration** | **str**|  | [optional]
 **link_document_id** | **str**|  | [optional]

### Return type

[**bt_shaded_views_info.BTShadedViewsInfo**](BTShadedViewsInfo.md)

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

# **get_standard_content_part_metadata**
> bt_part_metadata_info.BTPartMetadataInfo get_standard_content_part_metadata(did, vid, eid, otype, oid, partid)



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
    api_instance = onshape_client.oas.PartsApi(api_client)
    did = 'did_example' # str | 
    vid = 'vid_example' # str | 
    eid = 'eid_example' # str | 
    otype = 'otype_example' # str | 
    oid = 'oid_example' # str | 
    partid = 'partid_example' # str | 
    include_property_defaults = False # bool |  (optional) if omitted the server will use the default value of False
configuration = 'configuration_example' # str |  (optional)
link_document_id = 'link_document_id_example' # str |  (optional)

    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.get_standard_content_part_metadata(did, vid, eid, otype, oid, partid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartsApi->get_standard_content_part_metadata: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.get_standard_content_part_metadata(did, vid, eid, otype, oid, partid, include_property_defaults=include_property_defaults, configuration=configuration, link_document_id=link_document_id)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartsApi->get_standard_content_part_metadata: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **vid** | **str**|  |
 **eid** | **str**|  |
 **otype** | **str**|  |
 **oid** | **str**|  |
 **partid** | **str**|  |
 **include_property_defaults** | **bool**|  | [optional] if omitted the server will use the default value of False
 **configuration** | **str**|  | [optional]
 **link_document_id** | **str**|  | [optional]

### Return type

[**bt_part_metadata_info.BTPartMetadataInfo**](BTPartMetadataInfo.md)

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

# **update_part_metadata**
> bt_part_metadata_info.BTPartMetadataInfo update_part_metadata(did, wvm, wvmid, eid, partid)



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
    api_instance = onshape_client.oas.PartsApi(api_client)
    did = 'did_example' # str | 
    wvm = 'wvm_example' # str | 
    wvmid = 'wvmid_example' # str | 
    eid = 'eid_example' # str | 
    partid = 'partid_example' # str | 
    bt_workspace_part_params = onshape_client.oas.BTWorkspacePartParams() # bt_workspace_part_params.BTWorkspacePartParams |  (optional)

    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.update_part_metadata(did, wvm, wvmid, eid, partid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartsApi->update_part_metadata: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.update_part_metadata(did, wvm, wvmid, eid, partid, bt_workspace_part_params=bt_workspace_part_params)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartsApi->update_part_metadata: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **wvm** | **str**|  |
 **wvmid** | **str**|  |
 **eid** | **str**|  |
 **partid** | **str**|  |
 **bt_workspace_part_params** | [**bt_workspace_part_params.BTWorkspacePartParams**](BTWorkspacePartParams.md)|  | [optional]

### Return type

[**bt_part_metadata_info.BTPartMetadataInfo**](BTPartMetadataInfo.md)

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

# **update_standard_content_part_metadata**
> bt_part_metadata_info.BTPartMetadataInfo update_standard_content_part_metadata(did, vid, eid, otype, oid, partid)



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
    api_instance = onshape_client.oas.PartsApi(api_client)
    did = 'did_example' # str | 
    vid = 'vid_example' # str | 
    eid = 'eid_example' # str | 
    otype = 'otype_example' # str | 
    oid = 'oid_example' # str | 
    partid = 'partid_example' # str | 
    link_document_id = 'link_document_id_example' # str |  (optional)
include_property_defaults = False # bool |  (optional) if omitted the server will use the default value of False
bt_workspace_part_params = onshape_client.oas.BTWorkspacePartParams() # bt_workspace_part_params.BTWorkspacePartParams |  (optional)

    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.update_standard_content_part_metadata(did, vid, eid, otype, oid, partid)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartsApi->update_standard_content_part_metadata: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_response = api_instance.update_standard_content_part_metadata(did, vid, eid, otype, oid, partid, link_document_id=link_document_id, include_property_defaults=include_property_defaults, bt_workspace_part_params=bt_workspace_part_params)
        pprint(api_response)
    except onshape_client.oas.ApiException as e:
        print("Exception when calling PartsApi->update_standard_content_part_metadata: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **did** | **str**|  |
 **vid** | **str**|  |
 **eid** | **str**|  |
 **otype** | **str**|  |
 **oid** | **str**|  |
 **partid** | **str**|  |
 **link_document_id** | **str**|  | [optional]
 **include_property_defaults** | **bool**|  | [optional] if omitted the server will use the default value of False
 **bt_workspace_part_params** | [**bt_workspace_part_params.BTWorkspacePartParams**](BTWorkspacePartParams.md)|  | [optional]

### Return type

[**bt_part_metadata_info.BTPartMetadataInfo**](BTPartMetadataInfo.md)

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

