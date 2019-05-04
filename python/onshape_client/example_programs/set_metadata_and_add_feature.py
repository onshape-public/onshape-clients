from onshape_client.client import Client
from onshape_client.onshape_url import OnshapeElement

import json
from onshape_client.compatible_imports import HTTPServer, HTTPHandler, sendable
import os
import urllib
import webbrowser
from onshape_client.example_programs.set_metadata import MetaDataBody
from onshape_client.utility import write_to_file

client = Client()

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
        if "files" in data:
            print("Writing data to the disk")
            paths = self.write_files(data["files"])
        meta_data_to_be_set = MetaDataBody(OnshapeElement(data["element_href"]))
        for item in data["metadata"]:
            meta_data_to_be_set.add_to_element_metadata(item["property_name"], item["new_value"], item["element_id"])
        client.part_studios_api.add_feature1()
        meta_data_to_be_set.send()

    def write_files(self, data_urls):
        paths = []
        for data_url in data_urls:
            paths.append(write_to_file(data_url))
        return paths

class MyServer(HTTPServer, object):

    def server_activate(self):
        super(MyServer, self).server_activate()
        webbrowser.open("{}:{}".format(self.server_address[0], self.server_port))

server = MyServer(('localhost', 9000), myHandler)
server.serve_forever()




