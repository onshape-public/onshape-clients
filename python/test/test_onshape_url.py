from __future__ import print_function

import json

import pint
import pytest
from onshape_client.assembly import AssemblyDefinition
from onshape_client.onshape_url import OnshapeElement, ConfiguredOnshapeElement
from onshape_client.units import u

ureg = pint.UnitRegistry()


def test_creation_from_urls():
    assert (
        OnshapeElement(
            "https://cad.onshape.com/documents/c8f8013d34183b1de74fa930/w/574b77701d8b74987c273500/e/455ef770951fe37de0b8ff08?configuration=List_TOpkWtvolR0KY4%3Dewf"
        ).configuration
        == "List_TOpkWtvolR0KY4=ewf"
    )


def test_assembly_structural_equivalence(json_assets):
    asm1 = AssemblyDefinition(
        json.load((json_assets / "assembly_definition_three_axes").open())
    )
    asm2 = AssemblyDefinition(
        json.load((json_assets / "assembly_definition_three_axes_copied").open())
    )
    assert asm1.is_structurally_equal_assembly(asm2)


@pytest.mark.parametrize("element", ["ps_configurable_cube"], indirect=True)
def test_configuration_update(element):
    element = ConfiguredOnshapeElement(element.get_url())
    assert element._get_default_configuration_map() == {
        "size": 500 * u.inch,
        "edge_configuration": "Default",
        "show_cube": True,
    }
    element.update_current_configuration({"size": 20 * ureg.m})
    assert (
        element.get_url_with_configuration()
        == "https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/6ccf88eb92d55be180c06cf9/e/69c9eedda86512966b20bc90?configuration=edge_configuration%3DDefault%3Bshow_cube%3DTrue%3Bsize%3D20%2Bmeter"
    )
    element.update_current_configuration(
        {"size": 40 * u.inch, "edge_configuration": "chamfered"}
    )
    assert (
        element.get_url_with_configuration()
        == "https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/6ccf88eb92d55be180c06cf9/e/69c9eedda86512966b20bc90?configuration=edge_configuration%3Dchamfered%3Bshow_cube%3DTrue%3Bsize%3D40%2Binch"
    )
    element.update_current_configuration(
        {"size": 10 * u.inch, "edge_configuration": "chamfered", "show_cube": False}
    )
    assert (
        element.get_url_with_configuration()
        == "https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/6ccf88eb92d55be180c06cf9/e/69c9eedda86512966b20bc90?configuration=edge_configuration%3Dchamfered%3Bshow_cube%3DFalse%3Bsize%3D10%2Binch"
    )
