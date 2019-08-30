#!/usr/bin/env bash
GLOBAL_VERSION=4.1.1

# Var
EXECUTABLE="./openapi-generator-cli.jar"
OAS_CONFIG_API_PATH="http://localhost.dev.onshape.com:8080/api/openapi"
OAS_CONFIG_LOCAL_PATH="./openapi.json"
GENERATE="java -jar $EXECUTABLE generate -i $OAS_CONFIG_LOCAL_PATH"

function downloadJarIfNeeded() {
    if [ ! -f "$EXECUTABLE" ]
    then
        wget http://central.maven.org/maven2/org/openapitools/openapi-generator-cli/$GLOBAL_VERSION/openapi-generator-cli-$GLOBAL_VERSION.jar -O openapi-generator-cli.jar
    fi
}
function downloadFile(){
	curl $OAS_CONFIG_API_PATH > $OAS_CONFIG_LOCAL_PATH
}
downloadJarIfNeeded
downloadFile
#$GENERATE -g dynamic-html -o dynamic-html
#$GENERATE -g html -o html
#$GENERATE -g html2 -o html2
#$GENERATE -g cwiki -o cwiki
$GENERATE -g python -c ./python/openapi_config.json -o python/onshape_client







