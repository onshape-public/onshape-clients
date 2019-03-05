#!/usr/bin/env bash


function test() {
    cd $1 && ./test.sh && cd ..
}
function deploy() {
    cd $1 && ./deploy.sh && cd ..
}
# Import secret vars:
source ./secrets.sh

#test python
deploy python