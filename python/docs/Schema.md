# schema.Schema

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**title** | **str** |  | [optional] 
**multiple_of** | **float** |  | [optional] 
**maximum** | **float** |  | [optional] 
**exclusive_maximum** | **bool** |  | [optional] 
**minimum** | **float** |  | [optional] 
**exclusive_minimum** | **bool** |  | [optional] 
**max_length** | **int** |  | [optional] 
**min_length** | **int** |  | [optional] 
**pattern** | **str** |  | [optional] 
**max_items** | **int** |  | [optional] 
**min_items** | **int** |  | [optional] 
**unique_items** | **bool** |  | [optional] 
**max_properties** | **int** |  | [optional] 
**min_properties** | **int** |  | [optional] 
**required** | **[str]** |  | [optional] 
**type** | **str** |  | [optional] 
**_not** | [**Schema**](Schema.md) |  | [optional] 
**properties** | [**{str: (Schema,)}**](Schema.md) |  | [optional] 
**default** | **bool, date, datetime, dict, float, int, list, str** |  | [optional] 
**description** | **str** |  | [optional] 
**format** | **str** |  | [optional] 
**getref** | **str** |  | [optional] 
**nullable** | **bool** |  | [optional] 
**read_only** | **bool** |  | [optional] 
**write_only** | **bool** |  | [optional] 
**external_docs** | [**external_documentation.ExternalDocumentation**](ExternalDocumentation.md) |  | [optional] 
**deprecated** | **bool** |  | [optional] 
**xml** | [**xml.XML**](XML.md) |  | [optional] 
**extensions** | **{str: (bool, date, datetime, dict, float, int, list, str,)}** |  | [optional] 
**discriminator** | [**discriminator.Discriminator**](Discriminator.md) |  | [optional] 
**enum** | **[bool, date, datetime, dict, float, int, list, str]** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


