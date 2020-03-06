# Onshape Clients [![Build Status](https://travis-ci.org/onshape-public/onshape-clients.svg?branch=master)](https://travis-ci.org/onshape-public/onshape-clients)

**NOTE**
This repo is in beta status and is still under development. Please note that it can change in non-backwards-compatible 
ways while it has a major version number of 0. If you run into any issues, feel free to submit an issue under the 
'issues' tab on this repo.

This repo is responsible for generating and disseminating Onshape clients in multiple languages. These clients are for 
use by Onshape developer partners. To learn more, visit the [Onshape Developer Portal](https://dev-portal.onshape.com).

## Internal and External Clients
There are in general two versions of each client at any point in time - the internal facing client, that has full API 
access and should be used with employee email credentials, and the external client that is only for partner access, and 
only has access to the publicly documented, and publicly available APIs. From the code perspective, the only difference 
between the two are the OAS package that is generated for each. However, the internal client has many more tests than
external client, and handles setting up the necessary fixtures for a given test, internal or external.

## Client Versioning
The client is a first citizen in the Onshape ecosystem, and needs to be tested regularly. The eventual goal is to build 
the updated client with each API change, and rerun the tests. Ideally, failing tests at that point should break the
build. Additionally, there needs to be a Jenkins pipeline whereby the clients get built and sent off to their respective
package managers after each Onshape release.

## Example Applications

This repo also features example client applications for each of the client target languages.  To view these, go to the 
folder for your language of choice and select the 'example_programs' folder. Within, there will be several brief scripts
along with a README explaining how to setup and run the client. To view more examples, see the 'tests' folder.

## Development

### Install
The install steps are different for each client. Navigate to the root directory of the client, and follow the README
posted there.

### Commit
We use Commitizen and semantic-release to bump versions and publish all the packages to the various package distributors.

1. To get started, install our mono-repo dependencies with: `npm install --dev`
2. Make your changes
3. Commit changes with `git cz` instead of `git commit`. This should bring you through a step-by-step process for making
 your structured commit message. Once pushed, our CI will analyze the commit, and make and publish the necessary 
 releases. 
