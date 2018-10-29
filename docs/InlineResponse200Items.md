# InlineResponse200Items

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **str** | Purchase Id | [optional] 
**user_ids** | **list[str]** | User Ids | [optional] 
**consumed_ids** | **list[str]** | Consumed Ids | [optional] 
**seats** | **float** | Number of seats | [optional] 
**account_id** | **str** | Account id | [optional] 
**plan_id** | **str** | Plan id | [optional] 
**plan_type** | **float** | Plan type (0-RECURRING, 1-CONSUMABLE, 2-ONE_TIME) | [optional] 
**plan_name** | **str** | Plan name | [optional] 
**group** | **str** | Group | [optional] 
**application_id** | **str** | Application Id | [optional] 
**state** | **float** | Purchase state (1-DELETED, 2-CANCELED, 3-UNPAID, 4-PAST_DUE,             5-TRIALING, 6-ACTIVE, 7-CONSUMED) | [optional] 
**canceled_at** | **str** | Purchase canceled at | [optional] 
**subscription_end_at** | **str** | Subscription end at | [optional] 
**amount_cents** | **float** | Amount cents | [optional] 
**card** | [**InlineResponse200Card**](InlineResponse200Card.md) |  | [optional] 
**subscribers** | [**list[InlineResponse200Subscribers]**](InlineResponse200Subscribers.md) | List of subscribers included in this individual purchase | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


