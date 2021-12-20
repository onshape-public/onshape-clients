import pytest
from onshape_client import Client
from onshape_client.oas.models.bt_app_element_reference_params import BTAppElementReferenceParams

"""Change the configuration of a drawing. Use this method with caution, since it tweaks the drawing's internals to get
the desired result, and thus could stop working without notice if drawings change this aspect of implementation. This
flow doesn't have any gaurantee of working in the future.
"""
@pytest.mark.parametrize("element", ["ps_configurable_cube"], indirect=True)
def test_change_drawing_configuration(client: Client, element, new_copied_document_factory):

    # Create a new cube document with drawing to tweak.
    new_target_configuration = "edge_configuration=Default;show_cube=true;size=15+in"
    new_cube_doc = new_copied_document_factory(element)
    cube_ps = new_cube_doc.part_studios[0]
    cube_drawing = new_cube_doc.drawings[0]
    references = client.app_elements_api.resolve_references(**cube_drawing._get_DWMVE())

    # Update the references in the drawing.
    for reference in references.resolved_references:
        # Only update the reference if it is pointing at our configurable drawing. More checks should be done here
        # against the workspace/microversion to ensure the configuration applies.
        if reference.target_element_id == cube_ps.eid:
            client.app_elements_api.update_reference(**cube_drawing._get_DWMVE(), rid=reference.reference_id,
                                                     bt_app_element_reference_params=BTAppElementReferenceParams(
                                                         target_configuration=new_target_configuration))
