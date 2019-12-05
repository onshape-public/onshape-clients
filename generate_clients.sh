#!/usr/bin/env bash
GLOBAL_VERSION=4.2.0

# Var
EXECUTABLE="./openapi-generator-cli.jar"
function buildExperimentalJar() {
    git clone https://github.com/OpenAPITools/openapi-generator.git
    cd openapi-generator
    git fetch origin pull/4446/head:polymorphic_python
    git checkout polymorphic_python
    mvn clean install -DskipTests
    mv modules/openapi-generator-cli/target/openapi-generator-cli.jar ../openapi-generator-cli.jar
    cd ..
}
OAS_CONFIG_API_PATH="http://localhost.dev.onshape.com:8083/api/openapi"
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
#buildExperimentalJar
downloadFile
#$GENERATE -g dynamic-html -o dynamic-html
#$GENERATE -g html -o html
#$GENERATE -g html2 -o html2
#$GENERATE -g cwiki -o cwiki
$GENERATE -g python -c ./python/openapi_config.json -o python







