# BlobElementsUploadFileCreateElementBody

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**create_drawing_if_possible** | **bool** | If true and the uploaded file is a DXF or a DWG,           automatically create a Drawing element along with the Blob element. Otherwise, just create the Blob           element. | [optional] 
**location_element_id** | **str** | Id of an element to place the new element near. | [optional] 
**import_in_background** | **bool** | If storeInDocument is true and formatName is ONSHAPE and        the source is a Parasolid file, this specifies the preference as to whether the import should be completed        prior to the completion of the request (importInBackground&#x3D;false) or whether it should be performed        asynchronously (importInBackground&#x3D;true). Historically, this parameter was implicitly set to false, but large        imports can take long enough that the request could result in a timeout. Applications are encouraged to set        this parameter to true for reliable operation. | [optional] 
**location_position** | **float** | An indicator for the relative placement of the new element.    If locationElementId is specified, a negative number indicates insertion prior to the element and a non-negative    number indicates insertion following the element. If no elementId is specified, a negative value indicates    insertion at the end of the group or element list and a non-negative number indicates insertion at the start    of the group or elmenet list. | [optional] 
**file_content_length** | **float** | The length of the file being uploaded, in bytes. If not present,    Onshape may restrict the upload size under some operating conditions, as the file contents may need to be    buffered in memory. If specified, it should be the actual length of the data being uploaded. | [optional] 
**encoded_filename** | **str** | Filename override interpreted as a URL-encoded string. If specified,    this overrides the filename from a Content-Disposition in the file field. | [optional] 
**flatten_assemblies** | **bool** | If true, remove assembly structure and create only a        Part Studio | [optional] 
**y_axis_is_up** | **bool** | If true, treat the model&#39;s Y axis as the vertical axis.  Otherwise,        Z is treated as the vertical axis. | [optional] 
**translate** | **bool** | Whether the uploaded file should be translated to Onshape format,    if possible | [optional] 
**allow_faulty_parts** | **bool** | If not specified or if specified as false, bodies to be imported        are examined for validity and any found to be faulty are removed from the import. If all bodies are found to        be faulty, the import fails. If the value is specified as true, we attempt to import the bodies that appear to        have faults. | [optional] 
**location_group_id** | **str** | For internal use. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


