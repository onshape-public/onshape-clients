"""Given a model and a desired configuration, generate the link to get to the configuration.
"""

from onshape_client.onshape_url import ConfiguredOnshapeElement
from onshape_client.units import u


def test_create_configuration_link():
    # A configurable cube URL
    url = "https://cad.onshape.com/documents/cca81d10f239db0db9481e6f/v/aaa25d18038e06f0b2964e2d/e/69c9eedda86512966b20bc90"
    element = ConfiguredOnshapeElement(url)

    # Desired configuration to apply to the cube
    new_config_map = {
        "size": 10 * u.inch,
        "edge_configuration": "chamfered",
        "show_cube": True,
    }
    element.update_current_configuration(new_config_map)
    print(
        "Link to model with the desired configuration applied: "
        + element.get_url_with_configuration()
    )
