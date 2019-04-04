'''
importstl
===

Demos importing an STL file
'''

from onshape_client.client import Client
client = Client()
did = 'd9a054d92ecb3751f5e53297'
wid = '7115c857459c5ce6baffba21'
r = client.translation_api.create_translation(did, wid, parent="everest.stl", _preload_content=False)
print(r)
