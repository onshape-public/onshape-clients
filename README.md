# Onshape Clients [![Build Status](https://travis-ci.org/onshape-public/onshape-clients.svg?branch=master)](https://travis-ci.org/onshape-public/onshape-clients) [![PyPI version](https://badge.fury.io/py/onshape-client.svg)](https://badge.fury.io/py/onshape-client)

**NOTE**
This repo is in beta status and is still under development. Please note that it can change in non-backwards-compatible 
ways while it has a major version number of 0. If you run into any issues, feel free to submit an issue under the 
'issues' tab on this repo.

This repo is responsible for generating and disseminating Onshape clients in multiple languages. These clients are for 
use by Onshape developer partners. To learn more, visit the [Onshape Developer Portal](https://dev-portal.onshape.com).

### Authentication
All clients use the same authentication, read by default from `~/.onshape_client_config.yaml`. To add your credentials,
copy [`.onshape_client_config.yaml`](/.onshape_client_config.yaml) to your home directory, and fill in, at the very least,
you own api key credentials from the [Onshape Developer Portal](https://dev-portal.onshape.com).

### Install
The install steps are different for each client. Navigate to the root directory of the client, and follow the README
posted there. Most likely, you'll want to download the client from a specific distribution channel. For instance, if 
using Python, you should get it from pypa.

### Commit
We use Commitizen and semantic-release to bump versions and publish all the packages to the various package distributors.

1. To get started, install our mono-repo dependencies with: `npm install --dev`
2. Make your changes
3. Commit changes with `git cz` instead of `git commit`. This should bring you through a step-by-step process for making
 your structured commit message. Once pushed, our CI will analyze the commit, and make and publish the necessary 
 releases according to semantic-release principles.
