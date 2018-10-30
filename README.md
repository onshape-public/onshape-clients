# onshape_client

This is the official Python SDK for the Onshape API. 

It is generated using Swagger Codegen from our OpenAPI API definition. For documentation of the API, [see here.](https://dev-portal.onshape.com/help).

## Installation

This package can be installed from pip:
`pip install onshape`

## Quick example

To get data about all of your documents, for example, replace the strings with '<>' with your relevant credentials created [here](https://dev-portal.onshape.com/keys) and run the following: 

```python
import onshape_client
from pprint import pprint

# Initialize the configuration with your credentials
configuration = onshape_client.Configuration()
configuration.api_key['ACCESS_KEY'] = '<YOUR_API_ACCESS_KEY>'
configuration.api_key['SECRET_KEY'] = '<YOUR_API_SECRET_KEY>'

# Initialize the documents API with the configuration
doc_instance = onshape_client.DocumentsApi(onshape_client.ApiClient(configuration=configuration))

# Call and print the results of the get Documents endpoint synchronously
api_response = doc_instance.get_documents()
pprint(api_response)

# Call and print the results of the get Documents endpoint asynchronously
api_response = doc_instance.get_documents()
pprint(api_response)

```


## Developer setup

To setup for development, clone the source code, setup a vitrual environment with pipenv and install the requirements:
```bash
git clone https://github.com/onshape-public/python-client
cd python-client
pipenv install --dev
```

## Tests

To run tests, you need to configure your test suite to do these things:
* point to a copy of this document
* point to a particular stack (staging/demo-c/production)
* include the appropriate credentials for the user that will run the tests. 

These options are stipulated in file expected to be located at .onshape_client_config.yaml at the root of the repo. A stub file that can be filled in with your document id, etc., is located at .onshape_client_config.example.yaml. Change the settings as necessary and you should then be able to run all the tests with:

`pytest`.

To quickly specify another stack than the default, include the `stack` flag like so: `pytest --stack dev`

## Quirks

By default, the Swagger codegen python client generator does not support some things, which makes it necessary for us to modify the resulting client using a short script. The script lives in the "script" key in Travis. All changes the script makes are documented here:

* Remove the group name from the operationID of each of the operations so that the resulting methods are simpler (Swagger Codegen uses the operationID to form the method names)
* Change wrong import statements such as `from onshape_client.models.documents_share_document_response200_entries1 import DocumentsShareDocumentResponse200Entries1` to `from onshape_client.models.documents_share_document_response200_entries_1 import DocumentsShareDocumentResponse200Entries1` to accomodate models that have multiple objects with the same name. 

The goal is that as the Swagger-codegen library improves, we can remove this script. Each corresponding "issue" with the library is filed in swagger with links to them below. When it is close, we can remove that functionality from the script. 
* [Using OperationId to name the methods](https://github.com/swagger-api/swagger-codegen/issues/8865)
* [Import error for models with multiple equivalently named objects.](https://github.com/swagger-api/swagger-codegen/issues/8866)

