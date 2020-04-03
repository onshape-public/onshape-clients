# coding: utf-8

"""
    Onshape REST API

    The Onshape REST API consumed by all clients.  # noqa: E501

    OpenAPI spec version: 1.96
    Contact: api-support@onshape.zendesk.com
    Generated by: https://openapi-generator.tech
"""

from setuptools import setup, find_packages  # noqa: H301
import os

NAME = "onshape_client"
# To install the library, run the following
#
# python setup.py install
#
# prerequisite: setuptools
# http://pypi.python.org/pypi/setuptools

REQUIRES = [
    "certifi>=2017.4.17",
    "python-dateutil>=2.1",
    "six>=1.10",
    "urllib3>=1.23",
    "nulltype",
    "requests_oauthlib",
    "ruamel.yaml",
    "pint",
]

setup(
    name=NAME,
    version="0.0.0",
    description="Onshape REST API",
    author_email="api-support@onshape.zendesk.com",
    url="",
    keywords=["OpenAPI", "OpenAPI-Generator", "Onshape REST API"],
    install_requires=REQUIRES,
    packages=find_packages(),
    include_package_data=True,
    long_description="""\
    The Onshape REST API consumed by all clients.  # noqa: E501
    """,
    python_requires=">3.6.3",
)
