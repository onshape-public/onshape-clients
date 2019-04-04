'''
exportstl
===

Demos 307 redirects with the Onshape API
'''

from onshape_client.client import Client

#local document
did = 'd9a054d92ecb3751f5e53297'
wid = '7115c857459c5ce6baffba21'
eid = 'ca3c2926e07a5f1ac1f720d1'

# doc_instance = onshape_client.DocumentsApi(onshape_client.ApiClient(configuration=configuration))
# docs = doc_instance.get_documents(q="test")
# print(docs)

client = Client()

# get the STL export
stl = client.part_studios_api.export_stl1(did, 'w', wid, eid, _preload_content=False)
print(stl.data)
