# ReleaseManagementCreateReleasePackageResponse200

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**company_id** | **str** | Company ID to which the release package belongs. | [optional] 
**items** | [**list[ReleaseManagementCreateReleasePackageResponse200Items]**](ReleaseManagementCreateReleasePackageResponse200Items.md) | Full item list in the package determined by the input items | [optional] 
**workflow** | [**ReleaseManagementCreateObsoletionPackageResponse200Workflow**](ReleaseManagementCreateObsoletionPackageResponse200Workflow.md) |  | [optional] 
**id** | **str** | ID of the release package. | [optional] 
**version_id** | **str** | Primary Version ID of items in the release package if releasing from             a version | [optional] 
**workspace_id** | **str** | Primary Workspace ID of items in the release package if releasing             from a workspace | [optional] 
**properties** | [**list[ReleaseManagementCreateReleasePackageResponse200Properties1]**](ReleaseManagementCreateReleasePackageResponse200Properties1.md) | Array of properties for the package | [optional] 
**document_id** | **str** | Primary Document ID of items in the release package | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


