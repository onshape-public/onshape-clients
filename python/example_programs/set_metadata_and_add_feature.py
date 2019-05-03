from onshape_client.client import Client
from onshape_client.onshape_url import OnshapeElement
import json
from onshape_client.compatible_imports import HTTPServer, HTTPHandler, sendable
import os
import urllib

client = Client()

#  Make it easier to handle getting the various ids
element = OnshapeElement("https://cad.onshape.com/documents/9ccada9888fce6fdc8dc3196/v/0948df59adafce7d3aaba70d/e/c813a3caccc88b64f8cc80d0")

class MetaDataBody(object):

    def __init__(self, onshape_element):
        self.body = {'items': []}
        self.onshape_element = onshape_element
        self._build_element_property_name_to_property_id_map()


    def add_to_body(self, eid, property_name, new_val):
        to_be_appended = {
                "properties": [
                    {
                        "value": new_val,
                        "propertyId": self.property_map[eid][property_name]

                    }
                ],
                "href": self.make_element_href(eid)
            }
        self.body['items'].append(to_be_appended)

    def _build_element_property_name_to_property_id_map(self):
        self.property_map = {}
        response = client.metadata_api.get_wv_es_metadata(self.onshape_element.did, self.onshape_element.wvm, self.onshape_element.wvmid, _preload_content=False)
        data = json.loads(response.data)
        for element in data['items']:
            eid = element['elementId']
            self.property_map[eid] = {}
            props_to_be_added = self.property_map[eid]
            for property in element['properties']:
                props_to_be_added[property['name']] = property['propertyId']

    def make_element_href(self, eid):
        return client.configuration.host + "/api/metadata/d/" + self.onshape_element.did + "/" + self.onshape_element.wvm + "/" + self.onshape_element.wvmid + "/e/" + eid

    def send(self):
        client.metadata_api.update_wv_metadata(self.onshape_element.did, self.onshape_element.wvm, self.onshape_element.wvmid, self.body)



class myHandler(HTTPHandler):
    def do_GET(self):

        try:
            # Say we are at an https port so that OAuth package doesn't complain. This isn't a security concern because
            # it is just so that the authorization code is correctly parsed.
            self.send_response(200)
            self.send_header('Content-type', 'text/html')
            self.end_headers()
            content = open(os.path.dirname(__file__) + "/assets/form.html", 'r').read()
            self.wfile.write(sendable(content))
        except BaseException as e:
            self.send_response(500)
            self.send_header('Content-type', 'text/html')
            self.end_headers()
            content = '''
                        <html><head><title>Error!</title></head>
                        <body><p>Something happened and here is what we know: {}</p>
                        <p>You may close this tab.</p>
                        </body></html>
                        '''.format(e)
            self.wfile.write(sendable(content))

    def do_POST(self):
        content_length = int(self.headers['Content-Length'])
        body = self.rfile.read(content_length)
        unquoted_s = urllib.unquote(body)
        data = json.loads(unquoted_s)
        print(data)
        meta_data_to_be_set = MetaDataBody(OnshapeElement(data["title"]))
        for item in data["metadata"]:
            meta_data_to_be_set.add_to_body(item["element_id"], item["property_name"], item["new_value"])
        meta_data_to_be_set.send()

server = HTTPServer(('localhost', 9000), myHandler)
server.serve_forever()




