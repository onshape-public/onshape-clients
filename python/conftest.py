"""This includes all the test-wide fixtures. Element fixtures that return an OnshapeElement are prefixed with el_
"""

import json
import webbrowser
from collections import OrderedDict
from datetime import datetime
from pathlib import Path

import pytest
from onshape_client.client import Client
from onshape_client.oas import BTCopyDocumentParams
from onshape_client.oas.models.bt_document_params import BTDocumentParams
from onshape_client.onshape_url import ConfiguredOnshapeElement, OnshapeElement

collect_ignore = ["setup.py"]

prod_element_bank = OrderedDict(
    asm_three_axes=OnshapeElement(
        "https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/3395c071ca9534c3b1151e4b/e/19fb95609c4cb02622ca9079"),
    ps_configurable_cube=OnshapeElement(
        "https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/c9b07497bec5975f317b0eb7/e/69c9eedda86512966b20bc90"),
)


@pytest.fixture
def element(request, client):
    """ Get a particular assembly from the bank by parametrizing the test with: `@pytest.mark.parametrize('assembly', ['three_axes'], indirect=True)`
    :param request:
    :param client:
    :return: OnshapeElement
    """
    element_key = request.param
    return prod_element_bank[element_key]


@pytest.fixture(scope='session')
def client():
    try:
        client = Client.get_client()
    except Exception as e:
        client = Client(stack_key='onshape_client_test')
    return client


@pytest.fixture
def assets():
    return Path(__file__).parent / 'test' / 'assets'

@pytest.fixture
def json_assets(assets):
    return assets / 'json'


@pytest.fixture
def tmp_dir():
    tmp = Path(__file__).parent / 'test' / 'tmp'
    return Path(__file__).parent / 'test' / 'tmp'


@pytest.fixture
def new_document(client, name_factory):
    doc_params = BTDocumentParams(name=name_factory())
    doc = client.documents_api.create_document(doc_params)
    doc = OnshapeElement.create_from_ids(did=doc.id, wvm='w', wvmid=doc.default_workspace.id)
    webbrowser.open_new(doc.get_url())
    yield doc
    doc.delete()


@pytest.fixture
def new_copied_document_factory(client, name_factory):
    created_docs = []

    def copy_workspace(copied_from):
        params = BTCopyDocumentParams(new_name=name_factory())
        doc = client.documents_api.copy_workspace(copied_from.did, copied_from.default_workspace,
                                                  bt_copy_document_params=params, _preload_content=False)
        doc = json.loads(doc.data.decode('utf-8'))
        doc = OnshapeElement.create_from_ids(did=doc["newDocumentId"], wvm='w', wvmid=doc['newWorkspaceId'])
        return doc

    yield copy_workspace
    for d in created_docs:
        d.delete()


@pytest.fixture
def name_factory():
    def name_factory():
        return f"Python Onshape Client Doc {datetime.now()}"

    return name_factory
