# WebhooksCreateWebhookBody

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**url** | **str** | URL to which to send notifications | [optional] 
**filter** | **str** | Context for webhook, in one of two forms:  \&quot;{$DocumentId} &#x3D; &#39;[did]&#39; &amp;&amp; {$WorkspaceId} &#x3D; &#39;[wid]&#39; &amp;&amp; {$ElementId} &#x3D; &#39;[eid]&#39;\&quot;  or \&quot;{$UserId} &#x3D; &#39;[uid]&#39; &amp;&amp; {$ClientId} &#x3D; &#39;cid&#39;\&quot;  [did] is a document ID, etc., but the components in brackets and the quotes must remain exactly as written, in the same order | [optional] 
**data** | **str** | Data to encapsulate in webhook | [optional] 
**events** | **list[str]** | Array of event names for which to register webhook | [optional] 
**options** | **object** | Options object, with one optional field: collapseEvents, which is set to true/false and says whether similar events should be collapsed into one notification | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


