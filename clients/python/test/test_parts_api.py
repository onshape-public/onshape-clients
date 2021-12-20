from onshape_client import Client, OnshapeElement
from onshape_client.oas import (
    BTWorkspacePartParams,
    BTPartAppearanceParams,
    BTColorParams,
    BTMaterialParams,
    BTMaterialPropertyParams,
)
import pytest


@pytest.mark.parametrize("element", ["ps_configurable_cube"], indirect=True)
def test_change_metadata(
    client: Client, new_copied_document_factory, element: OnshapeElement
):
    element = new_copied_document_factory(element).elements(
        filter_name="Configurable Cube"
    )[0]
    client.parts_api.update_part_metadata(
        **element._get_DWMVE(),
        partid="JHD",
        bt_workspace_part_params=BTWorkspacePartParams(
            appearance=BTPartAppearanceParams(
                color=BTColorParams(blue=0, red=255, green=0), opacity=32
            ),
            description="new description",
            part_number="new Part Number!",
            revision="r1",
            material=BTMaterialParams(
                displayName="ABS",
                id="ABS",
                properties=[
                    BTMaterialPropertyParams(
                        displayName="Density",
                        name="DENS",
                        type="REAL",
                        value="3000",
                        units="kg/m^3",
                        category="Physical",
                        description="Density",
                    )
                ],
            ),
        )
    )
    assert element.mass_properties.bodies["-all-"].mass[0] > 0.04
