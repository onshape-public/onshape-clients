#!/usr/bin/env bash
pipenv install --dev
export PIPENV_SKIP_LOCK=True
pipenv run pytest