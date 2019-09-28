#!/usr/bin/env bash
function publish() {
    export ONSHAPE_CLIENT_VERSION=$1;
    $REPO_ONSHAPE_CLIENTS/python/deploy.sh
}

export -f publish