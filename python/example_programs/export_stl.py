'''
Export an STL
==============

Demos 307 redirects with the Onshape API
'''

from onshape_client.client import Client
from onshape_client.onshape_url import OnshapeElement

client = Client()

# Turn the URL into an "OnshapeElement"
url = "https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/aaa25d18038e06f0b2964e2d/e/69c9eedda86512966b20bc90"
cube = OnshapeElement(url, client=client)

# get the STL export
stl = client.part_studios_api.export_stl1(cube.did, cube.wvm, cube.wvmid, cube.eid, _preload_content=False)

print("Resulting STL data: \n" + stl.data)
"""
Resulting STL data: 
solid Onshape
  facet normal 0 0 -1
    outer loop
      vertex -0.5 0.503781 0
      vertex 0.5 0.503781 0
      vertex -0.5 -0.496219 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 0.5 0.503781 0
      vertex 0.5 -0.496219 0
      vertex -0.5 -0.496219 0
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 0.5 0.503781 1
      vertex -0.5 0.503781 1
      vertex 0.5 -0.496219 1
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -0.5 0.503781 1
      vertex -0.5 -0.496219 1
      vertex 0.5 -0.496219 1
    endloop
  endfacet
  facet normal -1 0 0
    outer loop
      vertex -0.5 -0.496219 1
      vertex -0.5 0.503781 1
      vertex -0.5 -0.496219 0
    endloop
  endfacet
  facet normal -1 0 0
    outer loop
      vertex -0.5 0.503781 1
      vertex -0.5 0.503781 0
      vertex -0.5 -0.496219 0
    endloop
  endfacet
  facet normal 0 1 0
    outer loop
      vertex -0.5 0.503781 1
      vertex 0.5 0.503781 1
      vertex -0.5 0.503781 0
    endloop
  endfacet
  facet normal 0 1 0
    outer loop
      vertex 0.5 0.503781 1
      vertex 0.5 0.503781 0
      vertex -0.5 0.503781 0
    endloop
  endfacet
  facet normal 0 -1 0
    outer loop
      vertex 0.5 -0.496219 1
      vertex -0.5 -0.496219 1
      vertex 0.5 -0.496219 0
    endloop
  endfacet
  facet normal 0 -1 0
    outer loop
      vertex -0.5 -0.496219 1
      vertex -0.5 -0.496219 0
      vertex 0.5 -0.496219 0
    endloop
  endfacet
  facet normal 1 0 0
    outer loop
      vertex 0.5 0.503781 1
      vertex 0.5 -0.496219 1
      vertex 0.5 0.503781 0
    endloop
  endfacet
  facet normal 1 0 0
    outer loop
      vertex 0.5 -0.496219 1
      vertex 0.5 -0.496219 0
      vertex 0.5 0.503781 0
    endloop
  endfacet
endsolid Onshape
"""