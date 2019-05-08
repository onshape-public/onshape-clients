from onshape_client.client import Client
import json

class MetaDataBody(object):

    def __init__(self, onshape_element):
        self.body = {'items': []}
        self.onshape_element = onshape_element
        self.__element_property_map = None
        self.__part_property_map = None
        self.__part_index_to_part_id_map = None

    @property
    def element_property_map(self):
        if not self.__element_property_map:
            self.__element_property_map = self.get_element_property_name_to_property_id_map()
        return self.__element_property_map

    @property
    def part_index_to_pid_map(self):
        if not self.__part_index_to_part_id_map:
            self.__part_property_map, self.__part_index_to_part_id_map = self.get_part_property_name_to_property_id_map()
        return self.__part_index_to_part_id_map

    @property
    def part_property_map(self):
        if not self.__part_property_map:
            self.__part_property_map, self.__part_index_to_part_id_map = self.get_part_property_name_to_property_id_map()
        return self.__part_property_map

    def add_to_element_metadata(self, property_name, new_val, eid=None):
        """If needed, can specify other element metadata"""
        try:
            if not eid:
                eid = self.onshape_element.eid
            to_be_appended = {
                    "properties": [
                        {
                            "value": new_val,
                            "propertyId": self.element_property_map[eid][property_name]

                        }
                    ],
                    "href": self.make_element_href(eid)
                }
            self.body['items'].append(to_be_appended)
        except:
            pass

    def add_to_part_metadata(self, property_name, new_val, pid=None, p_index=0):
        """Select part either by pid OR by the part index."""
        try:
            if not pid:
                pid = self.part_index_to_pid_map[p_index]
            to_be_appended = {
                "properties": [
                    {
                        "value": new_val,
                        "propertyId": self.part_property_map[pid][property_name]

                    }
                ],
                "href": self.make_part_href(pid)
            }
            self.body['items'].append(to_be_appended)
        except:
            pass

    def get_element_property_name_to_property_id_map(self):
        """Get the element metadata for the workspace/version and build the map"""
        client = Client.get_client()
        property_map = {}
        response = client.metadata_api.get_wv_es_metadata(self.onshape_element.did, self.onshape_element.wvm, self.onshape_element.wvmid, _preload_content=False)
        data = json.loads(response.data)
        for element in data['items']:
            eid = element['elementId']
            property_map[eid] = {}
            props_to_be_added = property_map[eid]
            for property in element['properties']:
                props_to_be_added[property['name']] = property['propertyId']
        return property_map

    def get_part_property_name_to_property_id_map(self):
        """Get the part property map for the element in the particular version and build out the property map"""
        client = Client.get_client()
        property_map = {}
        part_index_to_part_id = []
        el = self.onshape_element
        response = client.metadata_api.get_wmve_ps_metadata(el.did, el.wvm, el.wvmid, el.eid, _preload_content=False)
        data = json.loads(response.data)
        for i, part in enumerate(data['items']):
            partId = part['partId']
            part_index_to_part_id.append(partId)
            property_map[partId] = {}
            props_to_be_added = property_map[partId]
            for property in part['properties']:
                props_to_be_added[property['name']] = property['propertyId']
        return property_map, part_index_to_part_id

    def make_element_href(self, eid):
        return Client.get_client().configuration.host + "/api/metadata/d/" + self.onshape_element.did + "/" + self.onshape_element.wvm + "/" + self.onshape_element.wvmid + "/e/" + eid

    def make_part_href(self, pid):
        return self.make_element_href(self.onshape_element.eid) + "/p/{}".format(pid)

    def send(self):
        """Update the element metadata as seen fit."""
        self.metadata = Client.get_client().metadata_api.update_wv_metadata(self.onshape_element.did, self.onshape_element.wvm,
                                                               self.onshape_element.wvmid, self.body)

if __name__ == "__main__":
    from onshape_client.onshape_url import OnshapeElement
    element = OnshapeElement(
        "http://localhost.dev.onshape.com:8080/documents/ee93985ceb928f7a7c79fed3/w/593971edd8336a08489ec7c0/e/c066cfbaf68e866b53cdb73f")
    metadata_class = MetaDataBody(element)
    metadata_class.add_to_part_metadata("JHD", "Part number", "my glorious part number")
    metadata_class.send()
