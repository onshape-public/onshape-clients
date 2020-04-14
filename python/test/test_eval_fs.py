import pytest
from onshape_client import OnshapeElement, Client
import pint
from onshape_client.oas import BTFeatureScriptEvalCall2377

ureg = pint.UnitRegistry()


@pytest.mark.parametrize("element", ["ps_configurable_cube"], indirect=True)
def test_get_surface_area(element: OnshapeElement, client: Client):
    # Script that calculates surface area of everything in the current context that isn't a sketch entity or a
    # construction object.
    script = """
    function (context is Context, queries is map)
    {
        println(evArea(context, {
                "entities" : qConstructionFilter(qSketchFilter(qEverything(EntityType.FACE), SketchObject.NO), ConstructionObject.NO)
        }));
    }
    """
    result = client.part_studios_api.eval_feature_script(
        **element._get_DWMVE(),
        bt_feature_script_eval_call_2377=BTFeatureScriptEvalCall2377(script=script),
    )
    assert ureg.parse_expression(result.console).units == ureg.meter ** 2
