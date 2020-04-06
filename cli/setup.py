# coding: utf-8

"""
    Onshape Clients CLI

    The CLI for managing the Onshape Clients.
"""

from setuptools import setup, find_packages  # noqa: H301
import os

NAME = "cli"

REQUIRES = ["click", "twine", "black", "python-dotenv"]

setup(
    name=NAME,
    version="0.0.0",
    description="Onshape Clients CLI",
    author_email="api-support@onshape.zendesk.com",
    url="",
    keywords=["CLI", "Onshape Clients CLI"],
    install_requires=REQUIRES,
    packages=find_packages(),
    include_package_data=True,
    long_description="""\
    The Onshape Clients CLI for managing client creation.  # noqa: E501
    """,
    summary="Onshape Clients CLI",
    entry_points={"console_scripts": ["onshape-clients=cli.cli:entry"],},
    python_requires=">3.6.3",
)
