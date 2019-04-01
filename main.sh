#!/usr/bin/env bash
environment () {
	export ONSHAPE_CLIENTS_PATH=${ONSHAPE_CLIENTS_PATH:-$TRAVIS_BUILD_DIR};
	export ONSHAPE_CLIENTS_VERSION=0.0.16;
	git config credential.helper "/bin/bash $ONSHAPE_CLIENTS_PATH/credential-helper.sh";
}

function test() {
    cd $1 && ./test.sh && cd ..
}
function deploy() {
    cd $1 && ./deploy.sh && cd ..
}
function deploy_docs() {

}# Import secret vars:
source ./secrets.sh

#test python
deploy python