# Onshape Clients

This repo is responsible for generating and disseminating Onshape clients in multiple languages. These clients are for 
use by Onshape developer partners. To learn more, visit the [Onshape Developer Portal](https://dev-portal.onshape.com).

## Example Applications

This repo also features example client applications for each of the client target languages.  To view these, go to the 
folder for your language of choice and select the 'example_programs' folder. Within, there will be several brief scripts
along with a README explaining how to setup and run the client.

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