from __future__ import print_function
import pint
from onshape_client.units import u
from onshape_client.onshape_url import OnshapeElement
from onshape_client.assembly import AssemblyDefinition
import json

ureg = pint.UnitRegistry()

def test_creation_from_urls():
    assert OnshapeElement("https://cad.onshape.com/documents/c8f8013d34183b1de74fa930/w/574b77701d8b74987c273500/e/455ef770951fe37de0b8ff08?configuration=List_TOpkWtvolR0KY4%3Dewf").configuration == "List_TOpkWtvolR0KY4=ewf"

def test_assembly_structural_equivalence(json_assets):
    asm1 =AssemblyDefinition(json.load((json_assets / 'assembly_definition_three_axes').open()))
    asm2 = AssemblyDefinition(json.load((json_assets / 'assembly_definition_three_axes_copied').open()))
    assert asm1.is_structurally_equal_assembly(asm2)

def test_configuration_update(configurable_cubes):
    assert configurable_cubes[2]._get_default_configuration_map() == {'size': 1.0 * u.inch, 'Configuration': 'Default'}
    configurable_cubes[2].update_current_configuration({"size": 20*ureg.m})
    assert configurable_cubes[2].get_url_with_configuration() == 'https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/ca51b7554314d6aab254d2e6/e/69c9eedda86512966b20bc90?configuration=List_UKkGODiz574chc%3DDefault%3Bsize%3D20%2Bmeter'
    configurable_cubes[2].update_current_configuration({'size': 40 * u.inch, 'Configuration': 'chamfered'})
    assert configurable_cubes[2].get_url_with_configuration() == 'https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/ca51b7554314d6aab254d2e6/e/69c9eedda86512966b20bc90?configuration=List_UKkGODiz574chc%3Dchamfered%3Bsize%3D40%2Binch'
    configurable_cubes[3].update_current_configuration({'size': 10 * u.inch, 'edge_configuration': 'chamfered', 'show_cube': False})
    assert configurable_cubes[3].get_url_with_configuration() == 'https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/aaa25d18038e06f0b2964e2d/e/69c9eedda86512966b20bc90?configuration=List_UKkGODiz574chc%3Dchamfered%3Bshow_cube%3DFalse%3Bsize%3D10%2Binch'