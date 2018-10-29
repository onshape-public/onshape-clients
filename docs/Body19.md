# Body19

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**format** | **str** | Export format: STL, PS | [optional] 
**store_in_document** | **bool** | whether the output should be stored as a new element | [optional] 
**link_document_workspace_id** | **str** | The id of the workspace in which the result should be stored           if storeInDocument is true and linkDocumentId is set. | [optional] 
**part_ids** | **str** | Comma-separated list of part IDs to export | [optional] 
**microversion** | **str** | Specified microversion for operation | [optional] 
**grouping** | **bool** | Whether parts should be exported as a group or individually in a .zip           file (STL) | [optional] 
**zip_single_file_output** | **bool** | Whether single file output should be returned as a .zip           file (STL, grouping&#x3D;&#x3D;true) | [optional] 
**scale** | **float** | Scale for measurements (STL) | [optional] 
**units** | **str** | Name of base unit: meter, centimeter, millimeter, inch, foot, yard (STL) | [optional] 
**angle_tolerance** | **float** | Angle tolerance (must be &lt; pi/2) (STL) | [optional] 
**chord_tolerance** | **float** | Chord tolerance (STL) | [optional] 
**max_facet_width** | **float** | Maximum facet width (STL) | [optional] 
**min_facet_width** | **float** | Minimum facet width (must be &lt; maximumFacetWidth) (STL) | [optional] 
**mode** | **str** | Type of file: text, binary (STL) | [optional] 
**version** | **float** | Parasolid version (PS) | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


