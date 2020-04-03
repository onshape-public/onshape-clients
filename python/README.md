# onshape_client
A Python client for using the Onshape REST API. 

## Prerequisites
* Python 3
* pipenv

## Installation
* Pip (latest released version): `pip install onshape-clients`

## Running tests locally
* Install credentials with the stack name of `onshape_client_test`
* `git clone https://github.com/onshape-public/onshape-clients.git`
* `cd python`
* `pipenv install --dev`
* `pytest`

## Examples
The best place to see intended use and supported functionality is within [`onshape_clients/python/test`](/python/test). 
All the parameters declared in a given test function are brought in from [`onshape_clients/python/test/conftest.py`](/onshape_clients/python/test/conftest.py).
So, to create a simple script that replicates a test, just recursively include the code brought in from each "fixture".