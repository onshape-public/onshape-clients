from onshape_client.oas.models.bt_assembly_instance_definition_params import BTAssemblyInstanceDefinitionParams
from onshape_client.oas.models.bt_assembly_transformed_instances_definition_params import \
    BTAssemblyTransformedInstancesDefinitionParams
from onshape_client.oas.models.transform_group import TransformGroup
from onshape_client.onshape_url import OnshapeElement
from onshape_client.utility import get_field


def test_assembly_definition(client, configurable_cubes_assemblies):
    cube = configurable_cubes_assemblies[2]
    did = cube.did
    vid = cube.wvmid
    eid = cube.eid
    assert ç
    # issue #4
    res = client.assemblies_api.get_assembly_definition(did, 'v', vid, eid, include_mate_features=True,
                                                        include_mate_connectors=True, _preload_content=False)
    parts = get_field(res, "parts")
    assert parts[0]["mateConnectors"]


# Attempt to create an assembly from a 'prototype' by using the assembly definition to insert the various parts/assemblies/definitions.
def test_roundtrip_instance_insert(client, three_axes_assembly):
    assembly = OnshapeElement(
        "https://cad.onshape.com/documents/ba13458e7ebfd1755645d5d1/w/031ba2bcb4b13b77bc5c43f7/e/af7fd0b2eac7ad63477370be")
    transforms = []
    # diagonal_translation
    transforms.append([1, 0, 0, 1,
                       0, 1, 0, 1,
                       0, 0, 1, 1,
                       1, 1, 1, 1])
    # x_and_45_rotation
    transforms.append([1, 0, 0, 1,
                       0, 1, 0, 0,
                       0, 0, 1, 0,
                       1, 1, 1, 1])
    # origin
    transforms.append([1, 0, 0, 0,
                       0, 1, 0, 0,
                       0, 0, 1, 0,
                       1, 1, 1, 1])
    for x_translation in range(0, 10):
        transforms.append([1, 0, 0, x_translation,
                                        0, 1, 0, 1,
                                        0, 0, 1, 1,
                                        1, 1, 1, 1])

    cube_instance = BTAssemblyInstanceDefinitionParams(document_id=three_axes_assembly.did,
                                                       version_id=three_axes_assembly.wvmid,
                                                       element_id=three_axes_assembly.eid, is_assembly=True)
    transform_groups=[]
    for transform in transforms:
        transform_groups.append(TransformGroup(transform=transform, instances=[cube_instance]))

    client.assemblies_api.insert_transformed_instances(assembly.did, assembly.eid, assembly.wvmid,
                                                       BTAssemblyTransformedInstancesDefinitionParams(
                                                           transform_groups=transform_groups))
    res = client.assemblies_api.get_assembly_definition(assembly.did, assembly.wvm, assembly.wvmid, assembly.eid,
                                                        include_mate_features=True, include_mate_connectors=True,
                                                        _preload_content=False)

    assert True
