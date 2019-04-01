Making a Current Configuration URL
===================================

For when you need to generate a URL that points to a particular version. For example, say you have an Onshape Element
here, where did, wvm, wvmid and eid are specified:

>>> from onshape_client.onshape_url import OnshapeElement
>>> from onshape_client.units import u
>>> url = "https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/aaa25d18038e06f0b2964e2d/e/69c9eedda86512966b20bc90"
>>> element = OnshapeElement(url)

Link version: `<https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/aaa25d18038e06f0b2964e2d/e/69c9eedda86512966b20bc90/>`_

To display the configured link, we pass in the values we want to configure:

>>> new_config_map = {'size': 10 * u.inch, 'edge_configuration': 'chamfered', 'show_cube': False}

Now to get the link:

>>> element.get_url_with_configuration(new_config_map)
'https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/aaa25d18038e06f0b2964e2d/e/69c9eedda86512966b20bc90?configuration=List_UKkGODiz574chc%3Dchamfered%3Bshow_cube%3DFalse%3Bsize%3D10+inch'

Link to the configured element (notice the configuration parameter at the end): `<https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/aaa25d18038e06f0b2964e2d/e/69c9eedda86512966b20bc90?configuration=List_UKkGODiz574chc%3Dchamfered%3Bshow_cube%3DFalse%3Bsize%3D10+inch>`_
