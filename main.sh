#!/usr/bin/env bash
function test() {
    cd $1 && ./test.sh && cd ..
}
function deploy() {
    cd $1 && ./deploy.sh && cd ..
}
function deploy_docs() {

}

#test python
deploy python