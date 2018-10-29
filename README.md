#onshape_client
This is the official Python SDK for the Onshape API. 

It is generated using Swagger Codegen from our OpenAPI API definition. For documentation of the API, [see here.](https://dev-portal.onshape.com/help).

##Quirks
By default, the Swagger codegen python client generator does not support some things, which makes it necessary for us to modify the resulting client using a short script. The script lives in the "script" key in Travis. All changes the script makes are documented here:

* Remove the group name from the operationID of each of the operations so that the resulting methods are simpler (Swagger Codegen uses the operationID to form the method names)
* Change wrong import statements such as `from onshape_client.models.documents_share_document_response200_entries1 import DocumentsShareDocumentResponse200Entries1` to `from onshape_client.models.documents_share_document_response200_entries_1 import DocumentsShareDocumentResponse200Entries1` to accomodate models that have multiple objects with the same name. 

The goal is that as the Swagger-codegen library improves, we can remove this script. Each corresponding "issue" with the library is filed in swagger with links to them below. When it is close, we can remove that functionality from the script. 
* [Using OperationId to name the methods](https://github.com/swagger-api/swagger-codegen/issues/8865)
* [Import error for models with multiple equivalently named objects.](https://github.com/swagger-api/swagger-codegen/issues/8866)
