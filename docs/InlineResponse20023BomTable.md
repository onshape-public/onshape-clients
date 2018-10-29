# InlineResponse20023BomTable

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**format_version** | **str** | The version of the Onshape BOM JSON Standard that this             response complies with | [optional] 
**id** | **str** | The id of the BOM | [optional] 
**name** | **str** | The name of the BOM | [optional] 
**description** | **str** | The description of the BOM. Currently empty. | [optional] 
**part_number** | **str** | The partNumber of the BOM. Currently empty. | [optional] 
**created_at** | **str** | The UTC date and time the BOM data was exported. | [optional] 
**bom_source** | [**InlineResponse20023BomTableBomSource**](InlineResponse20023BomTableBomSource.md) |  | [optional] 
**headers** | [**list[InlineResponse20023BomTableHeaders]**](InlineResponse20023BomTableHeaders.md) | BOM table column headers | [optional] 
**items** | [**list[InlineResponse20023BomTableItems]**](InlineResponse20023BomTableItems.md) | The non-header rows of the BOM table. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


