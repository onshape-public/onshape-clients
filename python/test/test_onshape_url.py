from __future__ import print_function
import pint
from onshape_client.units import u

ureg = pint.UnitRegistry()

def test_configuration_update(configurable_cubes):

    assert configurable_cubes[2]._get_default_configuration_map() == {'size': 1.0 * u.inch, 'Configuration': 'Default'}
    configurable_cubes[2].update_current_configuration({"size": 20*ureg.m})
    assert configurable_cubes[2].get_url_with_configuration() == 'https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/ca51b7554314d6aab254d2e6/e/69c9eedda86512966b20bc90?configuration=List_UKkGODiz574chc%3DDefault%3Bsize%3D20+meter'
    configurable_cubes[2].update_current_configuration({'size': 40 * u.inch, 'Configuration': 'chamfered'})
    assert configurable_cubes[2].get_url_with_configuration() == 'https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/ca51b7554314d6aab254d2e6/e/69c9eedda86512966b20bc90?configuration=List_UKkGODiz574chc%3Dchamfered%3Bsize%3D40+inch'
    configurable_cubes[3].update_current_configuration({'size': 10 * u.inch, 'edge_configuration': 'chamfered', 'show_cube': False})
    assert configurable_cubes[3].get_url_with_configuration() == 'https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/aaa25d18038e06f0b2964e2d/e/69c9eedda86512966b20bc90?configuration=List_UKkGODiz574chc%3Dchamfered%3Bshow_cube%3DFalse%3Bsize%3D10+inch'