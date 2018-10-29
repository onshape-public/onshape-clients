# InlineResponse20088BodiesKey

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**has_mass** | **bool** | Whether part has mass | [optional] 
**mass_missing_count** | **float** | Number of parts without mass | [optional] 
**mass** | **list[float]** | Mass in kilograms, along with minimum and maximum | [optional] 
**volume** | **list[float]** | Volume in cubic meters, along with minimum and maximum | [optional] 
**periphery** | **list[float]** | Periphery in metric units which depend on context, along             with minimum and maximum; for a solid part, the periphery is the surface area in square meters; for a             surface, the periphery is the perimeter in meters | [optional] 
**centroid** | **list[float]** | Coordinates of the centroid (center of mass) in metric             units (3 numbers), along with minimum (3 numbers) and maximum (3 numbers) | [optional] 
**inertia** | **list[float]** | Moment of inertia tensor about the centroid in metric units             with respect to the coordinate axes (9 numbers), along with minimum (9 numbers) and maximum (9             numbers) | [optional] 
**principal_inertia** | **list[float]** | Moment of inertia around the principal axes in             metric units (3 numbers) | [optional] 
**principal_axes** | [**list[InlineResponse20071BodiesKeyPrincipalAxes]**](InlineResponse20071BodiesKeyPrincipalAxes.md) | Principal axes as unit vectors | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


