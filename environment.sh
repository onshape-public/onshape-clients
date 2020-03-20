#!/usr/bin/env bash

# Setup secrets and all the scripts necessary to push this repo and the various distributions out.
export REPO_ONSHAPE_CLIENTS=$(pwd)
source ./secrets.sh

function set_version() {
    export ONSHAPE_CLIENT_VERSION=$1;
    python build_tools/scripts.py
}

function publish() {
    echo "Publishing version ${ONSHAPE_CLIENT_VERSION} of the onshape clients."
    $REPO_ONSHAPE_CLIENTS/python/publish.sh
}

export -f publish