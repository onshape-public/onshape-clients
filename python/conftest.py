import pytest
from onshape_client.client import Client
from onshape_client.onshape_url import ConfiguredOnshapeElement, OnshapeElement
from onshape_client.oas.models.bt_document_params import BTDocumentParams
from datetime import datetime
import webbrowser

collect_ignore = ["setup.py"]


@pytest.fixture
def client():
    try:
        client = Client.get_client()
    except Exception as e:
        client = Client(stack_key='local')
    return client


@pytest.fixture
def new_document(client):
    name=f"Python Onshape Client Doc {datetime.now()}"
    doc_params=BTDocumentParams(name=name, owner_id="556f3109e4b00b3fee9a3f4a", owner_type=1)
    doc = client.documents_api.create_document(doc_params)
    yield doc
    client.documents_api.delete7(doc.id)

@pytest.fixture
def assembly(client, new_document):
    elements = client.documents_api.get_elements1(new_document.id, 'w', new_document.default_workspace.id)
    for element in elements:
        if element.type == 'Assembly':
            element = OnshapeElement.create_from_oas_models(element, did=new_document.id, wvmid=new_document.default_workspace.id,
                                                  wvm='w')
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
    return ConfiguredOnshapeElement("https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/ca51b7554314d6aab254d2e6/e/69c9eedda86512966b20bc90")

@pytest.fixture
def cube(client):
    return ConfiguredOnshapeElement("https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/ca51b7554314d6aab254d2e6/e/69c9eedda86512966b20bc90")

@pytest.fixture
def three_axes_assembly(client):
    host = client.configuration.host
    if host == "https://cad.onshape.com":
        return ConfiguredOnshapeElement("https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/3395c071ca9534c3b1151e4b/e/19fb95609c4cb02622ca9079")
    elif host == "http://localhost.dev.onshape.com:8080":
        return ConfiguredOnshapeElement(
            "http://localhost.dev.onshape.com:8080/documents/4e0722c1fc54dc237ad8573f/v/4437ecd9877c3dcfae751529/e/f2f8ab0b14be9872d4e895c0")

@pytest.fixture
def configurable_cubes(client):
    versions=[]
    versions.append(ConfiguredOnshapeElement("https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/2c9608e8e443574edf757851/e/69c9eedda86512966b20bc90"))
    versions.append(ConfiguredOnshapeElement("https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/e21a30638b85226b651e74f9/e/69c9eedda86512966b20bc90"))
    versions.append(ConfiguredOnshapeElement("https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/ca51b7554314d6aab254d2e6/e/69c9eedda86512966b20bc90"))
    versions.append(ConfiguredOnshapeElement("https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/aaa25d18038e06f0b2964e2d/e/69c9eedda86512966b20bc90"))
    return versions


@pytest.fixture
def configurable_cubes_assemblies(client):
    versions=[]
    versions.append(ConfiguredOnshapeElement("https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/369ac699891d9659ce2d42ba/e/32fbe5d87f9b2777a37ddee9"))
    versions.append(ConfiguredOnshapeElement("https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/d44016efbdb31aae56a63ca2/e/32fbe5d87f9b2777a37ddee9"))
    versions.append(ConfiguredOnshapeElement("https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/c6834b0f25c7d098d5053970/e/32fbe5d87f9b2777a37ddee9"))
    return versions