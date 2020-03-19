"""This includes all the test-wide fixtures. Element fixtures that return an OnshapeElement are prefixed with el_
"""

import json
from collections import OrderedDict
from datetime import datetime
from pathlib import Path

import pytest
from onshape_client.client import Client
from onshape_client.oas import BTCopyDocumentParams
from onshape_client.onshape_url import OnshapeElement
from ruamel.yaml import YAML

collect_ignore = ["setup.py"]


@pytest.fixture
def element_bank(client, assets):
    yaml = YAML()
    urls_by_stack = yaml.load((assets / "urls.yaml").open())
    try:
        return urls_by_stack[client.stack_key]
    except KeyError as e:
        raise KeyError(
            f"Cannot find element bank for stack {client.stack_key}. Please instantiate the bank manually by uploading "
            f"the needed docs to the stack and updating the url.yaml file."
        )


@pytest.fixture
def element(request, client, element_bank):
    """ Get a particular element from the bank by parametrizing the test with: `@pytest.mark.parametrize('assembly',
    ['three_axes'], indirect=True)`
    :param request:
    :param client:
    :return: OnshapeElement
    """
    element_key = request.param
    try:
        return OnshapeElement(element_bank[element_key])
    except KeyError as e:
        raise KeyError(f"Cannot find '{element_key}' in the element bank.")


@pytest.fixture(scope="session")
def client():
    """Client needed to make API calls."""
    try:
        client = Client.get_client()
    except Exception as e:
        client = Client(stack_key="onshape_client_test")
    return client


@pytest.fixture
def test_dir():
    return Path(__file__).parent / "test"


@pytest.fixture
def assets(test_dir):
    """Returns the general test assets folder."""
    return test_dir / "assets"


@pytest.fixture
def json_assets(assets):
    """Returns the JSON assets folder."""
    return assets / "json"


@pytest.fixture
def tmp_dir(test_dir):
    """Returns a temporary directory Path object."""
    tmp_dir = test_dir / "tmp"
    if not tmp_dir.is_dir():
        tmp_dir.mkdir()
    return tmp_dir


@pytest.fixture
def new_document(request, client, name_factory):
    """Returns a blank new document."""
    doc = OnshapeElement.create(name_factory())
    yield doc
    doc.delete()


@pytest.fixture
def part_studio(new_document):
    return new_document.part_studios[0]


@pytest.fixture
def new_copied_document_factory(client, name_factory):
    """Factory to copy elements that cleans up created elements when done."""
    created_docs = []

    def copy_workspace(copied_from):
        params = BTCopyDocumentParams(new_name=name_factory(), is_public=True)
        doc = client.documents_api.copy_workspace(
            copied_from.did,
            copied_from.default_workspace,
            bt_copy_document_params=params,
            _preload_content=False,
        )
        doc = json.loads(doc.data.decode("utf-8"))
        doc = OnshapeElement.create_from_ids(
            did=doc["newDocumentId"], wvm="w", wvmid=doc["newWorkspaceId"]
        )
        created_docs.append(doc)
        return doc

    yield copy_workspace
    for d in created_docs:
        d.delete()


@pytest.fixture
def name_factory():
    """Factory to generate a doc name."""

    def name_factory():
        return f"Python Onshape Client Doc {datetime.now()}"

    return name_factory
