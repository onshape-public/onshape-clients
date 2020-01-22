# customer.Customer

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **str** |  | [optional] 
**object** | **str** |  | [optional] 
**account_balance** | **int** |  | [optional] 
**business_vat_id** | **str** |  | [optional] 
**created** | **int** |  | [optional] 
**currency** | **str** |  | [optional] 
**default_source** | **str** |  | [optional] 
**deleted** | **bool** |  | [optional] 
**delinquent** | **bool** |  | [optional] 
**description** | **str** |  | [optional] 
**discount** | [**discount.Discount**](Discount.md) |  | [optional] 
**email** | **str** |  | [optional] 
**livemode** | **bool** |  | [optional] 
**metadata** | **{str: (str,)}** |  | [optional] 
**shipping** | [**shipping_details.ShippingDetails**](ShippingDetails.md) |  | [optional] 
**sources** | [**external_account_collection.ExternalAccountCollection**](ExternalAccountCollection.md) |  | [optional] 
**subscriptions** | [**customer_subscription_collection.CustomerSubscriptionCollection**](CustomerSubscriptionCollection.md) |  | [optional] 
**cards** | [**customer_card_collection.CustomerCardCollection**](CustomerCardCollection.md) |  | [optional] 
**default_card** | **str** |  | [optional] 
**next_recurring_charge** | [**next_recurring_charge.NextRecurringCharge**](NextRecurringCharge.md) |  | [optional] 
**subscription** | [**subscription.Subscription**](Subscription.md) |  | [optional] 
**trial_end** | **int** |  | [optional] 
**default_source_object** | [**external_account.ExternalAccount**](ExternalAccount.md) |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


