import json
from datetime import datetime

import pytest
from onshape_client.assembly import AssemblyDefinition
from onshape_client.client import Client
from onshape_client.oas.models.bt_assembly_instance_definition_params import BTAssemblyInstanceDefinitionParams
from onshape_client.oas.models.bt_assembly_transformed_instances_definition_params import \
    BTAssemblyTransformedInstancesDefinitionParams
from onshape_client.oas.models.bt_version_or_workspace_params import BTVersionOrWorkspaceParams
from onshape_client.oas.models.transform_group import TransformGroup
from onshape_client.onshape_url import OnshapeElement
from onshape_client.utility import get_field


@pytest.mark.parametrize('element', ['asm_three_axes'], indirect=True)
def test_assembly_definition(client, element):
    """Simple api call without serialization."""
    res = client.assemblies_api.get_assembly_definition(element.did, 'v', element.wvmid, element.eid,
                                                        include_mate_features=True,
                                                        include_mate_connectors=True, _preload_content=False)
    parts = get_field(res, "parts")
    assert parts[0]["mateConnectors"]


@pytest.mark.parametrize('element', ['asm_three_axes'], indirect=True)
def test_roundtrip_instance_insert(client, element, new_document):
    """Attempt to create an assembly from a 'prototype' by using the assembly definition to insert the various
    parts/assemblies/definitions. This is also useful for performance testing. Currently only works for flat assemblies.
    :param client: client to make the API calls.
    :param element: an assembly to duplicate into a new document.
    """
    definition = client.assemblies_api.get_assembly_definition(element.did, element.wvm, element.wvmid, element.eid,
                                                              include_mate_features=True, include_mate_connectors=True,
                                                              _preload_content=False)
    definition = json.loads(definition.data.decode('UTF-8'))
    from_assembly_definition = AssemblyDefinition(definition, origin_element=element)
    to_assembly = new_document.assemblies[0]
    instances_at_start = definition['rootAssembly']['instances']
    client.assemblies_api.insert_transformed_instances(to_assembly.did, to_assembly.eid, to_assembly.wvmid,
                                                              BTAssemblyTransformedInstancesDefinitionParams(
                                                                  transform_groups=from_assembly_definition.get_as_transform_groups()),
                                                              _preload_content=False)
    new_definition = client.assemblies_api.get_assembly_definition(to_assembly.did, to_assembly.wvm, to_assembly.wvmid, to_assembly.eid, _preload_content=False)
    new_definition = AssemblyDefinition(json.loads(new_definition.data))

    assert from_assembly_definition.is_structurally_equal_assembly(new_definition)


def test_create_instance(client, insertable, new_copied_document_factory):
    doc = new_copied_document_factory(insertable)
    assembly = doc.new_assembly()
    insertable = doc.elements(filter_name="Cylinder")[0]
    response = client.assemblies_api.create_instance(assembly.did, assembly.wvmid, assembly.eid,
                                                     bt_assembly_instance_definition_params=insertable.s_assembly_insert_message(),
                                                     _preload_content=False)
    assert response.status == 200


def test_sub_sub_sub_assembly_instance_insert(client, three_axes_assembly):
    """Ensures inner assemblies are inserted as expected by inserting sub-assembly at +1 m in X, then inserting that
    assembly at +1 in X, and sees if we ended up back at the origin."""
    origin = OnshapeElement(
        "https://cad.onshape.com/documents/ba13458e7ebfd1755645d5d1/w/031ba2bcb4b13b77bc5c43f7/e/af7fd0b2eac7ad63477370be")
    assembly_pushed_x = OnshapeElement(
        "https://cad.onshape.com/documents/ba13458e7ebfd1755645d5d1/w/031ba2bcb4b13b77bc5c43f7/e/b340f69741da2eaba07ddc1f")
    assembly_pulled_x = OnshapeElement(
        "https://cad.onshape.com/documents/ba13458e7ebfd1755645d5d1/w/031ba2bcb4b13b77bc5c43f7/e/6c9bb5a752c0b5b66610b918")

    origin_transform = [1., 0., 0., 0.,
                        0., 1., 0., 0.,
                        0., 0., 1., 0.,
                        0., 0., 0., 1.]

    push_x_transform = [1., 0., 0., 1.,
                        0., 1., 0., 0.,
                        0., 0., 1., 0.,
                        0., 0., 0., 1.]

    pull_x_transform = [1., 0., 0., -1.,
                        0., 1., 0., 0.,
                        0., 0., 1., 0.,
                        0., 0., 0., 1.]

    three_axes_instance = BTAssemblyInstanceDefinitionParams(document_id=three_axes_assembly.did,
                                                             version_id=three_axes_assembly.wvmid,
                                                             element_id=three_axes_assembly.eid, is_assembly=True)

    client.assemblies_api.insert_transformed_instances(origin.did, origin.eid, origin.wvmid,
                                                       BTAssemblyTransformedInstancesDefinitionParams(
                                                           transform_groups=[TransformGroup(transform=origin_transform,
                                                                                            instances=[
                                                                                                three_axes_instance])]))

    origin_version = make_version("orogin", origin.did)

    origin_instance = BTAssemblyInstanceDefinitionParams(document_id=origin.did,
                                                         version_id=origin_version,
                                                         element_id=origin.eid, is_assembly=True)

    client.assemblies_api.insert_transformed_instances(assembly_pushed_x.did, assembly_pushed_x.eid,
                                                       assembly_pushed_x.wvmid,
                                                       BTAssemblyTransformedInstancesDefinitionParams(
                                                           transform_groups=[TransformGroup(transform=push_x_transform,
                                                                                            instances=[
                                                                                                origin_instance])]))

    pushed_x_version = make_version("pushed_x", origin.did)

    assembly_pushed_x_instance = BTAssemblyInstanceDefinitionParams(document_id=assembly_pushed_x.did,
                                                                    version_id=pushed_x_version,
                                                                    element_id=assembly_pushed_x.eid, is_assembly=True)

    client.assemblies_api.insert_transformed_instances(assembly_pulled_x.did, assembly_pulled_x.eid,
                                                       assembly_pulled_x.wvmid,
                                                       BTAssemblyTransformedInstancesDefinitionParams(
                                                           transform_groups=[TransformGroup(transform=pull_x_transform,
                                                                                            instances=[
                                                                                                assembly_pushed_x_instance])]))

    result = client.assemblies_api.get_assembly_definition(assembly_pulled_x.did, assembly_pulled_x.wvm,
                                                           assembly_pulled_x.wvmid, assembly_pulled_x.eid,
                                                           _preload_content=False)
    result = json.loads(result.data.decode("UTF-8"))
    final_transform = [t['transform'] for t in result['rootAssembly']['occurrences'] if len(t['path']) == 4][0]
    assert final_transform == origin_transform


# Insert the selected instance into the target assembly at the same location.
def test_insert_from_instance(client):
    # floor
    from_assembly = OnshapeElement(
        "http://localhost.dev.onshape.com:8080/documents/75f45a9b3e48e7335682f57a/w/46ce7fc4d804a43a65fae4ac/e/e018bade9e96cea90fc755f7")

    # main
    # from_assembly = OnshapeElement(
    #     "http://localhost.dev.onshape.com:8080/documents/c17a57568b32f2a66c7e3661/w/1895b7a888605ef4de49dbd5/e/b4893a9916c4746a96cab71d")

    to_assembly = OnshapeElement(
        "http://localhost.dev.onshape.com:8080/documents/75f45a9b3e48e7335682f57a/w/46ce7fc4d804a43a65fae4ac/e/90c6409c819c71599f5d0d1f")

    # floor joist assembly
    target_occurrence_paths = [["MdRaEWCCWlTEhwFmZ", "MwLihqHyBufVP9NnM"], ["MdRaEWCCWlTEhwFmZ", "MVrnH7eLKnfEXlJ8U"]]

    # floor joists
    # target_occurrence_paths = [["MdRaEWCCWlTEhwFmZ", "MVrnH7eLKnfEXlJ8U", "MEhnoiXVVC1cwIndk"],
    #                            ["MdRaEWCCWlTEhwFmZ", "MwLihqHyBufVP9NnM", "MEhnoiXVVC1cwIndk"]]

    # # main
    # target_occurrence_paths = [[ "MwLihqHyBufVP9NnM" ], ["MVrnH7eLKnfEXlJ8U"]]

    result = client.assemblies_api.get_assembly_definition(from_assembly.did, from_assembly.wvm,
                                                           from_assembly.wvmid, from_assembly.eid,
                                                           _preload_content=False)
    from_assembly_definition = AssemblyDefinition(json.loads(result.data.decode("UTF-8")))
    target_instances = [from_assembly_definition.get_instance(occ_path) for occ_path in target_occurrence_paths]

    client.assemblies_api.insert_transformed_instances(to_assembly.did, to_assembly.eid, to_assembly.wvmid,
                                                       BTAssemblyTransformedInstancesDefinitionParams(
                                                           transform_groups=[
                                                               from_assembly_definition.make_transform_group(occ_path)
                                                               for occ_path in target_occurrence_paths]))
    to_assembly_definition_result = client.assemblies_api.get_assembly_definition(to_assembly.did, to_assembly.wvm,
                                                                                  to_assembly.wvmid, to_assembly.eid,
                                                                                  _preload_content=False)
    to_assembly_definition = AssemblyDefinition(json.loads(to_assembly_definition_result.data.decode("UTF-8")))

    for i, occ_path in enumerate(target_occurrence_paths):
        assert to_assembly_definition.get_occurrence_transforms(
            to_assembly_definition.find_occurrence_paths(target_instances[i])[
                0]) == from_assembly_definition.get_occurrence_transforms(occ_path)


def make_version(name, did):
    return json.loads(Client.get_client().documents_api.create_version(did,
                                                                       bt_version_or_workspace_params=BTVersionOrWorkspaceParams(
                                                                           name=name + "-" + str(datetime.now()),
                                                                           document_id=did),
                                                                       _preload_content=False).data.decode("UTF-8"))[
        'id']
