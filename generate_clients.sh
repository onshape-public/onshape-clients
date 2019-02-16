#!/usr/bin/env bash
GLOBAL_VERSION=3.3.4

executable="./openapi-generator-cli.jar"

if [ ! -f "$executable" ]
then
    wget http://central.maven.org/maven2/org/openapitools/openapi-generator-cli/$GLOBAL_VERSION/openapi-generator-cli-$GLOBAL_VERSION.jar -O openapi-generator-cli.jar
fi

java -jar $executable generate -i http://localhost.dev.onshape.com:8080/api/openapi -g python -c ./python/openapi_config.json -o python
java -jar $executable generate -i http://localhost.dev.onshape.com:8080/api/openapi -g typescript-node -o typescript-node


#if [ ! -f openapi-generator ]; then
#
##    git clone https://github.com/openapitools/openapi-generator
#
#    npm install -g openapi-generator
#    executable="./modules/openapi-generator-cli/target/openapi-generator-cli.jar"
#fi
#


#PYTHON CONFIG OPTIONS
#	packageName
#	    python package name (convention: snake_case). (Default: openapi_client)
#
#	projectName
#	    python project name in setup.py (e.g. petstore-api).
#
#	packageVersion
#	    python package version. (Default: 1.0.0)
#
#	packageUrl
#	    python package URL.
#
#	sortParamsByRequiredFlag
#	    Sort method arguments to place required parameters before optional parameters. (Default: true)
#
#	hideGenerationTimestamp
#	    Hides the generation timestamp when files are generated. (Default: true)
#
#	generateSourceCodeOnly
#	    Specifies that only a library source code is to be generated. (Default: false)
#
#	library
#	    library template (sub-template) to use: asyncio, tornado, urllib3 (Default: urllib3)