# BlobElementsCreateTranslationBody

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**import_in_background** | **bool** | If storeInDocument is true and formatName is ONSHAPE and        the source is a Parasolid file, this specifies the preference as to whether the import should be completed        prior to the completion of the request (importInBackground&#x3D;false) or whether it should be performed        asynchronously (importInBackground&#x3D;true). Historically, this parameter was implicitly set to false, but large        imports can take long enough that the request could result in a timeout. Applications are encouraged to set        this parameter to true for reliable operation. | [optional] 
**version_string** | **str** | Version of output format to use (format-dependent) | [optional] 
**format_name** | **str** | Name of format into which this element should be translated. ONSHAPE        indicates that the model file should be translated into a Part Studio or Assembly. | [optional] 
**flatten_assemblies** | **bool** | If true, remove assembly structure and create only a        Part Studio | [optional] 
**y_axis_is_up** | **bool** | If true, treat the model&#39;s Y axis as the vertical axis.  Otherwise,        Z is treated as the vertical axis. | [optional] 
**notify_user** | **bool** | Whether a user notification should be generated on completion | [optional] 
**store_in_document** | **bool** | controls whether the translation is stored as a new element or        whether the data is stored as external data (storeInDocument&#x3D;false). | [optional] 
**allow_faulty_parts** | **bool** | If not specified or if specified as false, bodies to be imported        are examined for validity and any found to be faulty are removed from the import. If all bodies are found to        be faulty, the import fails. If the value is specified as true, we attempt to import the bodies that appear to        have faults. | [optional] 
**link_document_workspace_id** | **str** | If storeInDocument is true and linkDocumentId is specified, this        specifies a workspace to be used for result storage within the linkDocument. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


