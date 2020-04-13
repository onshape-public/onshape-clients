onshape\_client
===============

A Python client for using the Onshape REST API.

Prerequisites
-------------

-  Python 3.7+

Installation
------------

-  pip (latest released version): ``pip install onshape-client``
-  `setup authentication </README.md#authentication>`__

Examples
--------

Quickstart examples showing the power of the API. For more examples,
refer to our tests.

>>> from onshape_client import OnshapeElement, Client
>>> client = Client()

Upload And Translate
~~~~~~~~~~~~~~~~~~~~
Synchronous uploads:

>>> from pathlib import Path
>>> new_doc = OnshapeElement.create("Engine")
>>> translated_geometry = Path().cwd() / "test" / "assets"/ "translated_geometry"
>>> imported_part_studio = new_doc.import_file(translated_geometry / "Cube.x_t", allow_faulty_parts=True)
>>> imported_part_studio.name
'Cube'

Batch parallel uploads:

>>> new_doc = OnshapeElement.create("Batch Uploads")
>>> files_to_upload = [translated_geometry / "Cube.x_t", translated_geometry / "Cube.step"]
>>> threads = [client.api_client.pool.apply_async(new_doc.import_file, [file]) for file in files_to_upload]
>>> sorted([t.get().name for t in threads])
['Cube', 'Cube (1)']


Data Inspection
~~~~~~~~~~~~~~~~
The Python client gives you programmatic access to document data.

>>> violin = OnshapeElement("https://cad.onshape.com/documents/c1aa5bba6a0139ebb12ce0bd/v/53133b26e489a6f6d3da0fba/e/221fb58cf7a7524ff4d663aa")
>>> print(f"To print this violin will take {violin.mass_properties.bodies['-all-'].volume[0]*1000000:4.2f} cm^3 of SLA solution.")
To print this violin will take 609.95 cm^3 of SLA solution.

| The best place to see intended use and supported functionality is within ```onshape_clients/python/test`` </python/test>`__.
| All the parameters declared in a given test function are brought in from ```onshape_clients/python/test/conftest.py`` </onshape_clients/python/test/conftest.py>`__.
| So, to create a simple script that replicates a test, just recursively include the code brought in from each "fixture".

Running tests locally
---------------------

-  Install credentials with the stack name of  ``onshape_client_test``
-  ``git clone https://github.com/onshape-public/onshape-clients.git``
-  ``cd python``
-  ``pipenv install --dev``
-  ``pytest``

