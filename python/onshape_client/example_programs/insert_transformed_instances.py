"""INSERT TRANSFORMED INSTANCES INTO AN ASSEMBLY
"""

from onshape_client.client import Client
from onshape_client.onshape_url import OnshapeElement
from onshape_client.oas import models
import time
import json
import os.path

client = Client()

# Turn the URL into an "OnshapeElement"
url = "https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/aaa25d18038e06f0b2964e2d/e/69c9eedda86512966b20bc90"
cube = OnshapeElement(url, client=client)

create_doc_params = models.bt_document_params.BTDocumentParams(name="Insert Transformed Instances Sample")
create_doc_response = client.documents_api.create11(create_doc_params)
documents_reponse = client.documents_api.get_documents()
assembly_document = documents_reponse