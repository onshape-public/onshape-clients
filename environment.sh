#!/usr/bin/env bash
source ./secrets.sh
export ONSHAPE_CLIENTS_PATH=${ONSHAPE_CLIENTS_PATH:-$TRAVIS_BUILD_DIR};
export ONSHAPE_CLIENTS_VERSION=0.0.16;
git config credential.helper "/bin/bash $ONSHAPE_CLIENTS_PATH/credential-helper.sh";