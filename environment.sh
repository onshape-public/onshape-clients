#!/usr/bin/env bash
# Entry point to onshape-clients. This script installs the onshape-clients cli, a python-based
# cli for generating, installing, testing, linting, etc... all the clients.

source ./secrets.sh || echo "################ Not able to load secrets. Make sure to input credentials. ################"
source ./versions.sh
echo "################################################################################"
echo "Installing the onshape-clients command line interface, allowing you to easily
 install, test, lint and generate all the supported onshape-clients"
echo "################################################################################"
pip install ./cli
echo "#################################### SUCCESSFULLY INSTALLED onshape-clients ####################################"
onshape-clients --help