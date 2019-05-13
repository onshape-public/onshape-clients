from onshape_client.client import Client
from onshape_client.onshape_url import OnshapeElement

import json
from onshape_client.compatible_imports import HTTPServer, HTTPHandler, sendable
import os
import urllib
import webbrowser
from onshape_client.example_programs.set_metadata import MetaDataBody
from onshape_client.example_programs.import_file import import_file
from onshape_client.utility import write_to_file, get_field

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

        from onshape_client.models import BTDocumentParams
        bt_document_params = BTDocumentParams(name=data["doc_name"])
        new_doc_response = client.documents_api.create11(bt_document_params, _preload_content=False)
        did = get_field(new_doc_response, "id")
        wid = get_field(new_doc_response, "defaultWorkspace")["id"]
        # Use a fake eid because it isn't used later.
        eid = "00000000000000"
        self.onshape_element = OnshapeElement.create_from_ids(did, "w", wid, eid)

        if "import_items" in data:
            for import_item in data["import_items"]:
                self.import_item(import_item)

        self.send_response(200)
        self.send_header('Content-type', 'application/json')
        self.send_header('Access-Control-Allow-Origin', '*')
        self.end_headers()
        content = {"document_href": self.onshape_element.get_url(url_type="document")}
        self.wfile.write(sendable(json.dumps(content)))

    def import_item(self, import_item):
        did = self.onshape_element.did
        wid = self.onshape_element.wvmid
        path = write_to_file(import_item["file"])
        eid = import_file(path, did, wid)

        if "part_metadata" in import_item or "element_metadata" in import_item:
            meta_data_to_be_set = MetaDataBody(OnshapeElement.create_from_ids(did, "w", wid, eid))
            if "part_metadata" in import_item:
                part_metadata = import_item["part_metadata"]
                for k, v in part_metadata.items():
                    # For the fixed field items, set for the first part
                    if k != "additionalItems":
                        meta_data_to_be_set.add_to_part_metadata(k,
                                                                 v)
                    else:
                        for custom_metadata_item in v:
                                meta_data_to_be_set.add_to_part_metadata(custom_metadata_item["part_id"],
                                                                     custom_metadata_item["property_name"],
                                                                     custom_metadata_item["new_value"])
            if "element_metadata" in import_item:
                element_metadata = import_item["element_metadata"]
                for k, v in element_metadata.items():
                    if k != "additionalItems":
                        meta_data_to_be_set.add_to_element_metadata(k,v)
                    else:
                        for custom_metadata_item in v:
                            meta_data_to_be_set.add_to_element_metadata(custom_metadata_item["property_name"],
                                                                        custom_metadata_item["new_value"], eid=eid)
            meta_data_to_be_set.send()

        if "bounding_box" in import_item and import_item["bounding_box"]:
            feature_path = "bound_all_set_metadata.json"
            # feature_path = "bound_all_feature.json"
            # feature_path = "make_cube_feature.json"
            with open(os.path.dirname(__file__) + "/assets/" + feature_path, "r") as f:
                body = {"feature": json.loads(f.read())}
            client.part_studios_api.add_feature1(did, "w", wid, eid, body=body)


class MyServer(HTTPServer, object):

    def server_activate(self):
        super(MyServer, self).server_activate()
        webbrowser.open("{}:{}".format(self.server_address[0], self.server_port))


server = MyServer(('localhost', 9000), myHandler)
server.serve_forever()
