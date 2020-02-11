# customer.Customer

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**account_balance** | **int** |  | [optional] 
**business_vat_id** | **str** |  | [optional] 
**cards** | [**customer_card_collection.CustomerCardCollection**](CustomerCardCollection.md) |  | [optional] 
**created** | **int** |  | [optional] 
**currency** | **str** |  | [optional] 
**default_card** | **str** |  | [optional] 
**default_source** | **str** |  | [optional] 
**default_source_object** | [**external_account.ExternalAccount**](ExternalAccount.md) |  | [optional] 
**deleted** | **bool** |  | [optional] 
**delinquent** | **bool** |  | [optional] 
**description** | **str** |  | [optional] 
**discount** | [**discount.Discount**](Discount.md) |  | [optional] 
**email** | **str** |  | [optional] 
**id** | **str** |  | [optional] 
**livemode** | **bool** |  | [optional] 
**metadata** | **{str: (str,)}** |  | [optional] 
**next_recurring_charge** | [**next_recurring_charge.NextRecurringCharge**](NextRecurringCharge.md) |  | [optional] 
**object** | **str** |  | [optional] 
**shipping** | [**shipping_details.ShippingDetails**](ShippingDetails.md) |  | [optional] 
**sources** | [**external_account_collection.ExternalAccountCollection**](ExternalAccountCollection.md) |  | [optional] 
**subscription** | [**subscription.Subscription**](Subscription.md) |  | [optional] 
**subscriptions** | [**customer_subscription_collection.CustomerSubscriptionCollection**](CustomerSubscriptionCollection.md) |  | [optional] 
**trial_end** | **int** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


