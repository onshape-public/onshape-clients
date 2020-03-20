#!/usr/bin/env bash
echo "Publishing the Python Onshape Client."
CLIENT=$REPO_ONSHAPE_CLIENTS/python
cd $CLIENT
pipenv run python $CLIENT/setup.py sdist bdist_wheel  --dist-dir=$CLIENT/dist && \
pipenv run twine upload $CLIENT/dist/*
echo "Uploaded the Python Onshape Client to pypi successfully."
rm $CLIENT/dist/*
cd -