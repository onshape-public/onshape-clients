from onshape_client.onshape_url import ConfiguredOnshapeElement
from onshape_client.client import Client

url = "https://cad.onshape.com/documents/35d50220cc32c1d746f6da49/w/dab43002ae070e551794be67/e/b859b39b360eba3ab94b0ca5"

cube = ConfiguredOnshapeElement(url, client=Client.get_client())