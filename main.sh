#!/usr/bin/env bash
function test() {
    cd $1 && ./test.sh && cd ..
}
function deploy() {
    cd $1 && ./deploy.sh && cd ..
}
function deploy_docs() {
	cd $1 && ./docs.sh && cd ..
}

function test_deploy_all_for_one_client() {
	test $1
	deploy $1
	deploy_docs $1
}

function test_deploy_all_for_all_clients() {
	test_deploy_all_for_one_client python
}

function load_environment(){
	source ./environment.sh
}

test_deploy_all_for_all_clients