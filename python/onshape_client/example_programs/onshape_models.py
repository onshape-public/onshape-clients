from onshape_client.onshape_url import OnshapeElement
from onshape_client.client import Client

url = "https://cad.onshape.com/documents/3ac368c2bc297e604b79f7c6/w/4fec713562e076f7d6543d91/e/dec6c527c53c6c06f37e0118"
cube = OnshapeElement(url, client=Client.get_client())