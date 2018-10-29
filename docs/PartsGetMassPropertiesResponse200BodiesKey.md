# PartsGetMassPropertiesResponse200BodiesKey

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**mass_missing_count** | **float** | Number of parts without mass | [optional] 
**volume** | **list[float]** | Volume in cubic meters, along with minimum and maximum | [optional] 
**centroid** | **list[float]** | Coordinates of the centroid (center of mass) in metric             units (3 numbers), along with minimum (3 numbers) and maximum (3 numbers) | [optional] 
**periphery** | **list[float]** | Periphery in metric units which depend on context, along             with minimum and maximum; for a solid part, the periphery is the surface area in square meters; for a             surface, the periphery is the perimeter in meters | [optional] 
**principal_inertia** | **list[float]** | Moment of inertia around the principal axes in             metric units (3 numbers) | [optional] 
**mass** | **list[float]** | Mass in kilograms, along with minimum and maximum | [optional] 
**principal_axes** | [**list[PartsGetMassPropertiesResponse200BodiesKeyPrincipalAxes]**](PartsGetMassPropertiesResponse200BodiesKeyPrincipalAxes.md) | Principal axes as unit vectors | [optional] 
**inertia** | **list[float]** | Moment of inertia tensor about the centroid in metric units             with respect to the coordinate axes (9 numbers), along with minimum (9 numbers) and maximum (9             numbers) | [optional] 
**has_mass** | **bool** | Whether part has mass | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


