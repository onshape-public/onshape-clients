#!/usr/bin/env bash
function publish() {
    export NEXT_RELEASE=$1;
    $REPO_ONSHAPE_CLIENTS/python/deploy.sh
}

export -f publish