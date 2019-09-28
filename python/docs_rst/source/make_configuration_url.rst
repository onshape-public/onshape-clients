Making a Current Configuration URL
===================================

For when you need to generate a URL that points to a particular version. For example, say you have an Onshape Element
here, where did, wvm, wvmid and eid are specified:

>>> from onshape_client.onshape_url import ConfiguredOnshapeElement
>>> from onshape_client.units import u
>>> from onshape_client.client import Client
>>> Client()
<onshape_client.client.Client object at ...>
>>> url = "https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/aaa25d18038e06f0b2964e2d/e/69c9eedda86512966b20bc90"
>>> element = ConfiguredOnshapeElement(url)

To display the configured link, we pass in the values we want to configure, using pint to represent quantities:

>>> new_config_map = {'size': 10 * u.inch, 'edge_configuration': 'chamfered', 'show_cube': False}

Now to get the link:

>>> element.update_current_configuration(new_config_map)
>>> configured_url = element.get_url_with_configuration()
>>> print(configured_url)
https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/aaa25d18038e06f0b2964e2d/e/69c9eedda86512966b20bc90?configuration=List_UKkGODiz574chc%3Dchamfered%3Bshow_cube%3DFalse%3Bsize%3D10%2Binch

Link to the configured element (notice the configuration parameter at the end) ^

**Note:**

If you got an error at this point, most likely it is because you need to initialize the client instance with your
keys. You can do so by adding a special credentials file to your home directory or by specifying them within the code:

>>> Client(configuration={"access_key": "MY_ONSHAPE_API_ACCESS_KEY", "secret_key": "MY_ONSHAPE_API_SECRET_KEY"})
<onshape_client.client.Client object at ...>

Or specify with a folder in another location with:

>>> Client(keys_file="~/.onshape_client_config.yaml")
<onshape_client.client.Client object at ...>
