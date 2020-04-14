import pytest
from onshape_client import OnshapeElement, Client
import pint
from onshape_client.oas import BTFeatureScriptEvalCall2377
import json

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


@pytest.mark.parametrize("element", ["ps_configurable_cube"], indirect=True)
def test_get_edges_and_faces_stats(element: OnshapeElement, client: Client):
    script = """
    function (context is Context, queries is map)
    {
        
        const defaultGeometry = qUnion([qCreatedBy(makeId("Origin")), qCreatedBy(makeId("Top")), qCreatedBy(makeId("Right")), qCreatedBy(makeId("Front"))]);
        const userEntities = qSubtraction(qEverything(), defaultGeometry);
    
        // Get geometry of all entities:
        var stats = {};
        stats["edges"] = size(evaluateQuery(context, qEntityFilter(userEntities, EntityType.EDGE)));
        stats["faces"] = size(evaluateQuery(context, qEntityFilter(userEntities, EntityType.FACE)));
        
        var recursiveBox = new box({});
        recursiveBox[].printMapAsJSONHelper = function (mapToPrint is map, tabs is string)
        {
            var count = 1;
            for (var entry in mapToPrint)
            {
                println(tabs ~ "\\"" ~ entry.key ~ "\\":");
                const additionalTab = tabs ~ "\\t";
                if (entry.value is map)
                {
                    println(tabs ~"{");
                    recursiveBox[].printMapAsJSONHelper(entry.value, additionalTab); 
                    print(tabs ~ "}");
                }
                else if (entry.value is string)
                {
                    print(additionalTab ~ "\\"" ~ entry.value ~ "\\"");
                }
                else if (entry.value is number)
                {
                    print(additionalTab ~ entry.value);
                }
                else if (entry.value is array)
                {
                    print(additionalTab ~ entry.value);
                }
                else if (entry.value is boolean)
                {
                    print(additionalTab ~ entry.value);
                }
                else
                {
                    print(additionalTab ~ "UNSUPPORTED " ~ entry.value);   
                }
                if (count < size(mapToPrint))
                {
                    println(",");
                } 
                else
                {
                    println("");
                }
                count = count + 1;
            }
        };
    
        const printMapAsJSON = function(mapToPrint is map)
        {
            println("{");
            recursiveBox[].printMapAsJSONHelper(mapToPrint, "\\t");
            println("}");
        };
        printMapAsJSON(stats);
    }"""
    result = client.part_studios_api.eval_feature_script(
        **element._get_DWMVE(),
        bt_feature_script_eval_call_2377=BTFeatureScriptEvalCall2377(script=script),
    )
    result = json.loads(result.console)
    assert result["edges"] > 0
    assert result["faces"] > 0
