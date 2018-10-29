# ReleaseManagementGetReleasePackageResponse200

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**company_id** | **str** | Company ID to which the release package belongs. | [optional] 
**items** | [**list[ReleaseManagementCreateReleasePackageResponse200Items]**](ReleaseManagementCreateReleasePackageResponse200Items.md) | Full item list in the package determined by the input items | [optional] 
**workflow** | [**ReleaseManagementGetReleasePackageResponse200Workflow**](ReleaseManagementGetReleasePackageResponse200Workflow.md) |  | [optional] 
**is_frozen** | **bool** | Whether the release package has reached its terminal tranistion. Frozen             packages cannot be modified. | [optional] 
**properties** | [**list[ReleaseManagementCreateReleasePackageResponse200Properties1]**](ReleaseManagementCreateReleasePackageResponse200Properties1.md) | Array of properties for the package | [optional] 
**version_id** | **str** | Primary Version ID of items in the release package | [optional] 
**workspace_id** | **str** | Primary Workspace ID of items in the release package | [optional] 
**id** | **str** | ID of the release package. | [optional] 
**document_id** | **str** | Primary Document ID of items in the release package | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


