from urllib.parse import urlparse
from onshape_client.client import Client
import json

class OnshapeElement(object):
    """ Turn a standard Onshape URL into an OnshapeElement object. Ensure that the URL is correctly formatted, and
    create the useful fields."""
    def __init__(self, url, client=None):
        self.original_url = url
        parsed_vals = urlparse(url)
        self.base_url = parsed_vals.scheme + "://" + parsed_vals.netloc
        path_list = parsed_vals.path.split('/')
        self.did = path_list[2]
        self.wvmid = path_list[4]
        self.wvm = path_list[3]
        if len(path_list) > 7 :
            self.eid = path_list[8]
            self.optional_microversion = path_list[6]
        else:
            self.eid = path_list[6]
            # This is the microversion retrieved from get_microversion_path() and represents a part that is pointing towards
            # both a version/workspace and a microversion.
            self.optional_microversion = None
        self.client = client



    def get_microversion_url(self, client=None):
        """Determine the microversion from the current version/workspace and return the path to that microversion. This
        will call the API to get the current microversion if the microversion is not already specified."""
        if not client and not self.client:
            client = Client()
        elif self.client:
            client = self.client
        if self.optional_microversion:
            return self.get_url()
        else:
            res = client.documents_api.get_current_microversion(self.did,
                                                          self.wvm,
                                                          self.wvmid,
                                                          _preload_content=False)
            microversion = json.loads(res.data.decode("UTF-8"))["microversion"]
            self.optional_microversion = microversion
            return self.get_url()

    def get_url(self):
        optional_microversion_add_in = ""
        if self.optional_microversion:
            optional_microversion_add_in = "/m/" + self.optional_microversion
        return self.base_url + "/documents/" + self.did + "/" + self.wvm + "/" + self.wvmid + optional_microversion_add_in + "/e/" + self.eid
