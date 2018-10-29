# DrawingsCreateTranslationBody

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**color_method** | **str** | (PDF only) The color transformation that should be applied to the drawing on export. Supported options are: color, blackandwhite and grayscale | [optional] 
**text_as_geometry** | **bool** | Whether text should be exploded into polylines | [optional] 
**splines_as_polylines** | **bool** | Whether splines should be converted to polylines on the export | [optional] 
**version_string** | **str** | (DWG only) Version of output format to use (format-dependent). Currently supported formats are: 2013, 2010, 2007, 2004, 2000, R14, R13, R12 | [optional] 
**destination_name** | **str** | Name of the output file or new element. If the name does not include a file extension the extension will be derived from the formatName parameter | [optional] 
**format_name** | **str** | Name of format into which this element should be translated. | [optional] 
**current_sheet_only** | **bool** | (DWG only) Whether to only export the last active sheet or all sheets | [optional] 
**show_overidden_dimensions** | **bool** | (DWG only) Whether overridden dimensions should be underlined | [optional] 
**notify_user** | **bool** | Whether a user notification should be generated on completion | [optional] 
**store_in_document** | **bool** | controls whether the translation is stored as a new element or        whether the data is stored as external data (storeInDocument&#x3D;false). | [optional] 
**link_document_workspace_id** | **str** | If storeInDocument is true and linkDocumentId is specified, this        specifies a workspace to be used for result storage within the linkDocument. | [optional] 
**selectable_pdf_text** | **bool** | (PDF only) Controls if text on the drawing should be selectable on the output PDF. | [optional] 
**flatten** | **bool** | Whether to set z-height to zero and normals to positive | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


