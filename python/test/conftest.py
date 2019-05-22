import pytest
from onshape_client.client import Client
from onshape_client.onshape_url import ConfiguredOnshapeElement

@pytest.fixture
def client():
    try:
        client = Client.get_client()
    except Exception as e:
        client = Client()
    return client

@pytest.fixture
def configurable_cube():
    return ConfiguredOnshapeElement("https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/ca51b7554314d6aab254d2e6/e/69c9eedda86512966b20bc90")

@pytest.fixture
def configurable_cubes():
    versions=[]
    versions.append(ConfiguredOnshapeElement("https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/2c9608e8e443574edf757851/e/69c9eedda86512966b20bc90"))
    versions.append(ConfiguredOnshapeElement("https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/e21a30638b85226b651e74f9/e/69c9eedda86512966b20bc90"))
    versions.append(ConfiguredOnshapeElement("https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/ca51b7554314d6aab254d2e6/e/69c9eedda86512966b20bc90"))
    versions.append(ConfiguredOnshapeElement("https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/aaa25d18038e06f0b2964e2d/e/69c9eedda86512966b20bc90"))
    return versions

@pytest.fixture
def configurable_cubes_assemblies():
    versions=[]
    versions.append(ConfiguredOnshapeElement("https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/369ac699891d9659ce2d42ba/e/32fbe5d87f9b2777a37ddee9"))
    versions.append(ConfiguredOnshapeElement("https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/d44016efbdb31aae56a63ca2/e/32fbe5d87f9b2777a37ddee9"))
    versions.append(ConfiguredOnshapeElement("https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/c6834b0f25c7d098d5053970/e/32fbe5d87f9b2777a37ddee9"))


    return versions