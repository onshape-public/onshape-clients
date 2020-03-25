# \TeamsApi

All URIs are relative to *https://cad.onshape.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**Find**](TeamsApi.md#Find) | **Get** /api/teams | 
[**GetTeam**](TeamsApi.md#GetTeam) | **Get** /api/teams/{tid} | 



## Find

> BtGlobalTreeNodeListResponseBtTeamInfo Find(ctx, optional)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
 **optional** | ***FindOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a FindOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **prefix** | **optional.String**|  | [default to ]
 **uid** | **optional.String**|  | 
 **companyId** | **optional.String**|  | 
 **includeCompanyOwnedTeams** | **optional.Bool**|  | [default to true]

### Return type

[**BtGlobalTreeNodeListResponseBtTeamInfo**](BTGlobalTreeNodeListResponseBTTeamInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetTeam

> BtTeamInfo GetTeam(ctx, tid)



### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**tid** | **string**|  | 

### Return type

[**BtTeamInfo**](BTTeamInfo.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/vnd.onshape.v1+json;charset=UTF-8;qs=0.1, application/json;charset=UTF-8; qs=0.09

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

