#!/usr/bin/env bash
CLIENT=$REPO_ONSHAPE_CLIENTS/python
cd $CLIENT
pipenv run python $CLIENT/setup.py sdist bdist_wheel  --dist-dir=$CLIENT/dist && \
pipenv run twine upload $CLIENT/dist/*
rm $CLIENT/dist/*
cd -