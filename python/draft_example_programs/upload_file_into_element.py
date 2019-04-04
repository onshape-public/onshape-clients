"""For uploading a file and creating the element in one go.
"""

from onshape_client.client import Client
from onshape_client.onshape_url import OnshapeElement
from onshape_client.models.bt_feature_script_eval_call import BTFeatureScriptEvalCall
from onshape_client.utility import parse_quantity
import json

onshape_element = OnshapeElement("https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/w/80887f5994121967bf4d59a6/e/32fbe5d87f9b2777a37ddee9")
client = Client()
client.blob_elements_api.upload_file_create_element(onshape_element.did, onshape_element.wvmid)