#!/usr/bin/env bash
GLOBAL_VERSION=3.3.4

# Var
EXECUTABLE="./openapi-generator-cli.jar"
OAS_CONFIG="http://localhost.dev.onshape.com:8082/api/openapi"
GENERATE="java -jar $EXECUTABLE generate -i $OAS_CONFIG"

function downloadJarIfNeeded() {
    if [ ! -f "$EXECUTABLE" ]
    then
        wget http://central.maven.org/maven2/org/openapitools/openapi-generator-cli/$GLOBAL_VERSION/openapi-generator-cli-$GLOBAL_VERSION.jar -O openapi-generator-cli.jar
    fi
}
downloadJarIfNeeded
#$GENERATE -g dynamic-html -o dynamic-html
#$GENERATE -g html -o html
#$GENERATE -g html2 -o html2
#$GENERATE -g cwiki -o cwiki
$GENERATE -g python -c ./python/openapi_config.json -o python







