import webbrowser
from collections import OrderedDict
from datetime import datetime
import json
import pytest
from onshape_client.client import Client
from onshape_client.oas import BTAssemblyInstanceDefinitionParams, BTCopyDocumentParams
from onshape_client.oas.models.bt_document_params import BTDocumentParams
from onshape_client.onshape_url import ConfiguredOnshapeElement, OnshapeElement
from pathlib import Path

collect_ignore = ["setup.py"]

prod_element_bank = OrderedDict(
    configurable_cube="https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/c9b07497bec5975f317b0eb7/e/69c9eedda86512966b20bc90",
    three_axes_assembly="https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/3395c071ca9534c3b1151e4b/e/19fb95609c4cb02622ca9079"
)
stage_element_bank = OrderedDict(
    configurable_cube="https://staging.dev.onshape.com/documents/ffd7fa16077446a3dee5120b/v/fb4d34c4570a257439b4fd27/e/05c8a3ca269ebf676918ad3f"
)
demo_c = OrderedDict(
    configurable_cube="https://demo-c.dev.onshape.com/documents/5887e636419d22a788cb3dd1/w/f9d9ff9ac255733f190657a7/e/bc13e90647cc600404514d76"
)


@pytest.fixture(scope='module', params=['configurable_cube'])
def insertable(request, client):
    element_key = request.param
    host = client.configuration.host
    if host == "https://cad.onshape.com":
        element_bank = prod_element_bank
    elif host == "https://staging.dev.onshape.com/":
        element_bank = stage_element_bank
    elif host == "https://demo-c.dev.onshape.com/":
        element_bank = demo_c
    else:
        raise UserWarning("No element bank for this stack")
    return OnshapeElement(element_bank[element_key])


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
def new_document(client, name_factory):
    doc_params = BTDocumentParams(name=name_factory())
    doc = client.documents_api.create_document(doc_params)
    doc = OnshapeElement.create_from_ids(did=doc.id, wvm='w', wvmid=doc.default_workspace.id)
    webbrowser.open_new(doc.get_url())
    yield doc
    doc.delete()


@pytest.fixture
def assembly(client, new_document):
    return get_element_of_type(client, 'Assembly', new_document)


@pytest.fixture
def part_studio(client, new_document):
    return get_element_of_type(client, 'Part Studio', new_document)


def get_element_of_type(client, element_type, new_document):
    elements = client.documents_api.get_elements_in_document(new_document.did, new_document.wvm, new_document.wvmid)
    for element in elements:
        if element.type == element_type:
            element = OnshapeElement.create_from_oas_models(element, did=new_document.did, wvmid=new_document.wvmid,
                                                            wvm=new_document.wvm)
            webbrowser.open_new(element.get_url())
            return element


# Test for functions that should be able to handle every type of element
@pytest.fixture
def element(drawing):
    return drawing


@pytest.fixture
def drawing():
    return OnshapeElement(
        "https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/9e1317a768623dc4520c27e4/e/7fce3984957af2cfda8d56cb")


@pytest.fixture
def configurable_cube(client):
    return ConfiguredOnshapeElement(
        "https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/ca51b7554314d6aab254d2e6/e/69c9eedda86512966b20bc90")


@pytest.fixture
def cube(client):
    return ConfiguredOnshapeElement(
        "https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/ca51b7554314d6aab254d2e6/e/69c9eedda86512966b20bc90")


@pytest.fixture
def three_axes_assembly(client):
    host = client.configuration.host
    if host == "https://cad.onshape.com":
        return ConfiguredOnshapeElement(
            "https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/3395c071ca9534c3b1151e4b/e/19fb95609c4cb02622ca9079")
    elif host == "http://localhost.dev.onshape.com:8080":
        return ConfiguredOnshapeElement(
            "http://localhost.dev.onshape.com:8080/documents/4e0722c1fc54dc237ad8573f/v/4437ecd9877c3dcfae751529/e/f2f8ab0b14be9872d4e895c0")


@pytest.fixture
def configurable_cubes(client):
    versions = []
    versions.append(ConfiguredOnshapeElement(
        "https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/2c9608e8e443574edf757851/e/69c9eedda86512966b20bc90"))
    versions.append(ConfiguredOnshapeElement(
        "https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/e21a30638b85226b651e74f9/e/69c9eedda86512966b20bc90"))
    versions.append(ConfiguredOnshapeElement(
        "https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/ca51b7554314d6aab254d2e6/e/69c9eedda86512966b20bc90"))
    versions.append(ConfiguredOnshapeElement(
        "https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/aaa25d18038e06f0b2964e2d/e/69c9eedda86512966b20bc90"))
    return versions


@pytest.fixture
def configurable_cubes_assemblies(client):
    versions = []
    versions.append(ConfiguredOnshapeElement(
        "https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/369ac699891d9659ce2d42ba/e/32fbe5d87f9b2777a37ddee9"))
    versions.append(ConfiguredOnshapeElement(
        "https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/d44016efbdb31aae56a63ca2/e/32fbe5d87f9b2777a37ddee9"))
    versions.append(ConfiguredOnshapeElement(
        "https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/c6834b0f25c7d098d5053970/e/32fbe5d87f9b2777a37ddee9"))
    return versions


@pytest.fixture
def new_copied_document_factory(client, name_factory):
    created_docs = []
    def copy_workspace(copied_from):
        params = BTCopyDocumentParams(new_name=name_factory())
        doc = client.documents_api.copy_workspace(copied_from.did, copied_from.default_workspace, bt_copy_document_params=params, _preload_content=False)
        doc = json.loads(doc.data.decode('utf-8'))
        doc = OnshapeElement.create_from_ids(did=doc["newDocumentId"], wvm='w', wvmid=doc['newWorkspaceId'])
        return doc
    yield copy_workspace
    for d in created_docs:
        d.delete()


def ps_with_one_of_every_type(new_copied_document_factory):
    new_copied_document_factory()


@pytest.fixture
def name_factory():
    def name_factory():
        return f"Python Onshape Client Doc {datetime.now()}"

    return name_factory
