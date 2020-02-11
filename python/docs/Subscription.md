# subscription.Subscription

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**application_fee_percent** | **float** |  | [optional] 
**billing** | **str** |  | [optional] 
**cancel_at_period_end** | **bool** |  | [optional] 
**canceled_at** | **int** |  | [optional] 
**created** | **int** |  | [optional] 
**current_period_end** | **int** |  | [optional] 
**current_period_start** | **int** |  | [optional] 
**customer** | **str** |  | [optional] 
**customer_object** | [**customer.Customer**](Customer.md) |  | [optional] 
**days_until_due** | **int** |  | [optional] 
**discount** | [**discount.Discount**](Discount.md) |  | [optional] 
**ended_at** | **int** |  | [optional] 
**id** | **str** |  | [optional] 
**metadata** | **{str: (str,)}** |  | [optional] 
**object** | **str** |  | [optional] 
**plan** | [**plan.Plan**](Plan.md) |  | [optional] 
**quantity** | **int** |  | [optional] 
**start** | **int** |  | [optional] 
**status** | **str** |  | [optional] 
**subscription_items** | [**subscription_item_collection.SubscriptionItemCollection**](SubscriptionItemCollection.md) |  | [optional] 
**tax_percent** | **float** |  | [optional] 
**trial_end** | **int** |  | [optional] 
**trial_start** | **int** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


