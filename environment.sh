#!/usr/bin/env bash
# Entry point to onshape-clients. This script installs the onshape-clients cli, a python-based
# cli for generating, installing, testing, linting, etc... all the clients.
PYTHON_VERSION=`python -c 'import sys; version=sys.version_info[:2]; print("{0}.{1}".format(*version))'`
# Needs python 3.7+
REQUIRED_PYTHON_VERSION="3.7"
if [[ "$PYTHON_VERSION" < "$REQUIRED_PYTHON_VERSION" ]]; then
    curl https://pyenv.run | bash;
    eval "$(pyenv init -)";
    cd /opt/pyenv/plugins/python-build/../.. && git checkout master && git pull && cd -;
    pyenv install 3.8.2;
    pyenv global 3.8.2;
fi
source ./secrets.sh || echo "################ Not able to load secrets. Make sure to input credentials. ################"
source ./versions.sh
echo "################################################################################"
echo "Installing the onshape-clients command line interface, allowing you to easily
 install, test, lint and generate all the supported onshape-clients"
echo "################################################################################"
pip install ./cli
echo "#################################### SUCCESSFULLY INSTALLED onshape-clients ####################################"
onshape-clients --help