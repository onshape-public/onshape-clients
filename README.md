# Onshape Clients [![Build Status](https://travis-ci.org/onshape-public/onshape-clients.svg?branch=master)](https://travis-ci.org/onshape-public/onshape-clients) [![PyPI version](https://badge.fury.io/py/onshape-client.svg)](https://badge.fury.io/py/onshape-client)

**NOTE**
This repo is in beta status and is still under development. If you run into any issues, feel free to submit an issue 
[here](https://github.com/onshape-public/onshape-clients/issues) tab on this repo.

Onshape Clients is responsible for generating, customizing and disseminating Onshape clients in multiple languages. These clients are for use by Onshape developer partners. To learn more, visit the [Onshape Developer Portal](https://dev-portal.onshape.com).

### Command Line Interface
The Command Line Interface (CLI) constructs and runs all the commands necessary to generate, build and deploy the client packages. The complexity of managing all the perturbations of the OpenApi generator invocations was becoming increasingly difficult, Onshape developed this CLI to simplify the user interface. Here is the self-generated documentation for the interface.

### Commit
We use Commitizen and semantic-release to bump versions and publish all the packages to the various package distributors.

1. To get started, install our mono-repo dependencies with: `npm install --dev`
2. Make your changes
3. Commit changes with `git cz` instead of `git commit`. This should bring you through a step-by-step process for making
 your structured commit message. Once pushed, our CI will analyze the commit, and make and publish the necessary 
 releases according to semantic-release principles.

### Architecture
This repo uses the [OpenApiTools Generator](https://github.com/OpenAPITools/openapi-generator) to generate the clients. However, each client had to be altered to varying degrees from the default output for various reasons - sometimes in order to work with the Onshape authorization system or to incorporate new data models, or something else. For this reason, we've customized each client in several ways - all that are designed to be compatible with new versions of the generator. Below are the ways in which we customize the generated code:

#### Templates
Within `/templates` are subfolders for each client package that has customised template logic. The templates in this file will override the default templates during code generation. For instance, the `/templates/python/python_doc_auth_partial.mustache` is a customized example of the Onshape Python client authorization description that describes using the API keys instead of username/password for basic authentication.

#### Clients
Additional files can be included within particular client packages by adding them here. This is mostly useful for convenience classes and tests because that code doesn't need to have direct integration with the package itself - it can simply use the generated code as needed.

