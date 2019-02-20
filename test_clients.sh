#!/usr/bin/env bash
function test() {
    cd $1 && ./test && cd ..
}

test python