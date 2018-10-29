# InlineResponse20072BodiesKey

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**has_mass** | **bool** | Whether part has mass, or, if massAsGroup&#x3D;true, whether any             part has mass | 
**mass_missing_count** | **float** | Number of parts without mass | 
**mass** | **list[float]** | Mass in kilograms, along with minimum and maximum | 
**volume** | **list[float]** | Volume in cubic meters, along with minimum and maximum | 
**periphery** | **list[float]** | Periphery in metric units which depend on context, along             with minimum and maximum; for a solid part, the periphery is the surface area in square meters; for a             surface, the periphery is the perimeter in meters | 
**centroid** | **list[float]** | Coordinates of the centroid (center of mass) in metric             units (3 numbers), along with minimum (3 numbers) and maximum (3 numbers) | 
**inertia** | **list[float]** | Moment of inertia tensor about the centroid in metric units             with respect to the coordinate axes (9 numbers), along with minimum (9 numbers) and maximum (9             numbers) | 
**principal_inertia** | **list[float]** | Moment of inertia around the principal axes in             metric units (3 numbers) | 
**principal_axes** | [**list[InlineResponse20072BodiesKeyPrincipalAxes]**](InlineResponse20072BodiesKeyPrincipalAxes.md) | Principal axes as unit vectors | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


