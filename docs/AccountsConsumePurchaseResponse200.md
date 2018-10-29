# AccountsConsumePurchaseResponse200

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**plan_name** | **str** | Plan name | [optional] 
**canceled_at** | **str** | Purchase canceled at | [optional] 
**consumed_ids** | **list[str]** | Consumed Ids | [optional] 
**group** | **str** | Group | [optional] 
**user_ids** | **list[str]** | User Ids | [optional] 
**plan_id** | **str** | Plan id | [optional] 
**amount_cents** | **float** | Amount cents | [optional] 
**plan_type** | **float** | Plan type (0-RECURRING, 1-CONSUMABLE, 2-ONE_TIME) | [optional] 
**state** | **float** | Purchase state (1-DELETED, 2-CANCELED, 3-UNPAID, 4-PAST_DUE, 5-TRIALING,             6-ACTIVE, 7-CONSUMED) | [optional] 
**seats** | **float** | Number of seats | [optional] 
**subscription_end_at** | **str** | Subscription end at | [optional] 
**application_id** | **str** | Application Id | [optional] 
**id** | **str** | Purchase Id | [optional] 
**card** | [**AccountsConsumePurchaseResponse200Card**](AccountsConsumePurchaseResponse200Card.md) |  | [optional] 
**account_id** | **str** | Account id | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


