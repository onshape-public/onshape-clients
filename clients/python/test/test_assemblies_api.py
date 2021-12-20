import json
import time
from datetime import datetime

import pytest
from onshape_client.assembly import AssemblyDefinition
from onshape_client.client import Client
from onshape_client.oas.models.bt_assembly_instance_definition_params import (
    BTAssemblyInstanceDefinitionParams,
)
from onshape_client.oas.models.bt_assembly_transformed_instances_definition_params import (
    BTAssemblyTransformedInstancesDefinitionParams,
)
from onshape_client.oas.models.bt_version_or_workspace_params import (
    BTVersionOrWorkspaceParams,
)
from onshape_client.oas.models.transform_group import TransformGroup
from onshape_client.onshape_url import OnshapeElement
from onshape_client.utility import get_field


@pytest.mark.parametrize("element", ["asm_three_axes"], indirect=True)
def test_assembly_definition(client, element):
    """Simple api call without serialization."""
    res = client.assemblies_api.get_assembly_definition(
        element.did,
        "v",
        element.wvmid,
        element.eid,
        include_mate_features=True,
        include_mate_connectors=True,
        _preload_content=False,
    )
    parts = get_field(res, "parts")
    assert parts[0]["mateConnectors"]


@pytest.mark.parametrize("element", ["asm_three_axes"], indirect=True)
def test_roundtrip_instance_insert(client, element, new_document):
    """Attempt to create an assembly from a 'prototype' by using the assembly definition to insert the various
    parts/assemblies/definitions. This is also useful for performance testing. Currently only works for flat assemblies.
    :param client: client to make the API calls.
    :param element: an assembly to duplicate into a new document.
    """
    definition = client.assemblies_api.get_assembly_definition(
        element.did,
        element.wvm,
        element.wvmid,
        element.eid,
        include_mate_features=True,
        include_mate_connectors=True,
        _preload_content=False,
    )
    definition = json.loads(definition.data.decode("UTF-8"))
    from_assembly_definition = AssemblyDefinition(definition, origin_element=element)
    to_assembly = new_document.assemblies[0]
    client.assemblies_api.insert_transformed_instances(
        to_assembly.did,
        to_assembly.eid,
        to_assembly.wvmid,
        BTAssemblyTransformedInstancesDefinitionParams(
            transform_groups=from_assembly_definition.get_as_transform_groups()
        ),
        _preload_content=False,
    )
    new_definition = client.assemblies_api.get_assembly_definition(
        to_assembly.did,
        to_assembly.wvm,
        to_assembly.wvmid,
        to_assembly.eid,
        _preload_content=False,
    )
    new_definition = AssemblyDefinition(json.loads(new_definition.data))

    assert from_assembly_definition.is_structurally_equal_assembly(new_definition)


@pytest.mark.parametrize("element", ["ps_configurable_cube"], indirect=True)
def test_create_instance(client, element, new_copied_document_factory):
    doc = new_copied_document_factory(element)
    assembly = doc.new_assembly()
    insertable = doc.elements(filter_name="Cylinder")[0]
    response = client.assemblies_api.create_instance(
        assembly.did,
        assembly.wvmid,
        assembly.eid,
        bt_assembly_instance_definition_params=insertable.s_assembly_insert_message(),
        _preload_content=False,
    )
    assert response.status == 200


@pytest.mark.parametrize("element", ["asm_three_axes"], indirect=True)
@pytest.mark.skip("Not a highly critical test - and currently broken.")
def test_sub_sub_sub_assembly_instance_insert(client, element):
    """Ensures inner assemblies are inserted as expected by inserting sub-assembly at +1 m in X, then inserting that
    assembly at +1 in X, and sees if we ended up back at the origin."""

    def make_version(name, did):
        return json.loads(
            Client.get_client()
            .documents_api.create_version(
                did,
                bt_version_or_workspace_params=BTVersionOrWorkspaceParams(
                    name=name + "-" + str(datetime.now()), document_id=did
                ),
                _preload_content=False,
            )
            .data
        )["id"]

    origin = OnshapeElement(
        "https://cad.onshape.com/documents/ba13458e7ebfd1755645d5d1/w/031ba2bcb4b13b77bc5c43f7/e/af7fd0b2eac7ad63477370be"
    )
    assembly_pushed_x = OnshapeElement(
        "https://cad.onshape.com/documents/ba13458e7ebfd1755645d5d1/w/031ba2bcb4b13b77bc5c43f7/e/b340f69741da2eaba07ddc1f"
    )
    assembly_pulled_x = OnshapeElement(
        "https://cad.onshape.com/documents/ba13458e7ebfd1755645d5d1/w/031ba2bcb4b13b77bc5c43f7/e/6c9bb5a752c0b5b66610b918"
    )

    origin_transform = [
        1.0,
        0.0,
        0.0,
        0.0,
        0.0,
        1.0,
        0.0,
        0.0,
        0.0,
        0.0,
        1.0,
        0.0,
        0.0,
        0.0,
        0.0,
        1.0,
    ]

    push_x_transform = [
        1.0,
        0.0,
        0.0,
        1.0,
        0.0,
        1.0,
        0.0,
        0.0,
        0.0,
        0.0,
        1.0,
        0.0,
        0.0,
        0.0,
        0.0,
        1.0,
    ]

    pull_x_transform = [
        1.0,
        0.0,
        0.0,
        -1.0,
        0.0,
        1.0,
        0.0,
        0.0,
        0.0,
        0.0,
        1.0,
        0.0,
        0.0,
        0.0,
        0.0,
        1.0,
    ]

    three_axes_instance = BTAssemblyInstanceDefinitionParams(
        document_id=element.did,
        version_id=element.wvmid,
        element_id=element.eid,
        is_assembly=True,
    )

    client.assemblies_api.insert_transformed_instances(
        origin.did,
        origin.eid,
        origin.wvmid,
        BTAssemblyTransformedInstancesDefinitionParams(
            transform_groups=[
                TransformGroup(
                    transform=origin_transform, instances=[three_axes_instance]
                )
            ]
        ),
    )

    origin_version = make_version("orogin", origin.did)

    origin_instance = BTAssemblyInstanceDefinitionParams(
        document_id=origin.did,
        version_id=origin_version,
        element_id=origin.eid,
        is_assembly=True,
    )

    client.assemblies_api.insert_transformed_instances(
        assembly_pushed_x.did,
        assembly_pushed_x.eid,
        assembly_pushed_x.wvmid,
        BTAssemblyTransformedInstancesDefinitionParams(
            transform_groups=[
                TransformGroup(transform=push_x_transform, instances=[origin_instance])
            ]
        ),
    )

    pushed_x_version = make_version("pushed_x", origin.did)

    assembly_pushed_x_instance = BTAssemblyInstanceDefinitionParams(
        document_id=assembly_pushed_x.did,
        version_id=pushed_x_version,
        element_id=assembly_pushed_x.eid,
        is_assembly=True,
    )

    client.assemblies_api.insert_transformed_instances(
        assembly_pulled_x.did,
        assembly_pulled_x.eid,
        assembly_pulled_x.wvmid,
        BTAssemblyTransformedInstancesDefinitionParams(
            transform_groups=[
                TransformGroup(
                    transform=pull_x_transform, instances=[assembly_pushed_x_instance]
                )
            ]
        ),
    )

    result = client.assemblies_api.get_assembly_definition(
        assembly_pulled_x.did,
        assembly_pulled_x.wvm,
        assembly_pulled_x.wvmid,
        assembly_pulled_x.eid,
        _preload_content=False,
    )
    result = json.loads(result.data.decode("UTF-8"))
    final_transform = [
        t["transform"]
        for t in result["rootAssembly"]["occurrences"]
        if len(t["path"]) == 4
    ][0]
    assert final_transform == origin_transform


def test_assembly_definition_performance(client):
    n_calls = 10
    calls = []
    cube_asm = OnshapeElement(
        "https://cad.onshape.com/documents/ee5f3dea1b2b6196cba97e4a/v/6935ab731cfe24915c2b4ac8/e/2e54df6ea6c0657369a57131"
    )
    for i in range(n_calls):
        start_time = time.time()
        client.assemblies_api.get_assembly_definition(
            cube_asm.did,
            cube_asm.wvm,
            cube_asm.wvmid,
            cube_asm.eid,
            _preload_content=False,
        )
        calls.append(time.time() - start_time)
    assert sum(calls) / len(calls) < 1.5


@pytest.mark.skip("Not yet implemented")
def test_stl_performance(client):
    cube_asm = OnshapeElement(
        "https://cad.onshape.com/documents/ee5f3dea1b2b6196cba97e4a/v/6935ab731cfe24915c2b4ac8/e/23e18c935aaf18a2dcba486b"
    )
    assert (
        performance_test_calls(
            lambda: client.part_studios_api.get_(
                cube_asm.did,
                cube_asm.wvm,
                cube_asm.wvmid,
                cube_asm.eid,
                partid="JHD",
                _preload_content=False,
            )
        )
        < 1
    )


def test_metadata_performance(client):
    cube_asm = OnshapeElement(
        "https://cad.onshape.com/documents/ee5f3dea1b2b6196cba97e4a/v/6935ab731cfe24915c2b4ac8/e/23e18c935aaf18a2dcba486b"
    )
    assert (
        performance_test_calls(
            lambda: client.parts_api.get_part_metadata(
                cube_asm.did,
                cube_asm.wvm,
                cube_asm.wvmid,
                cube_asm.eid,
                partid="JHD",
                _preload_content=False,
            )
        )
        < 1
    )


def performance_test_calls(call):
    n_calls = 10
    calls = []
    for i in range(n_calls):
        start_time = time.time()
        call()
        calls.append(time.time() - start_time)
    average = sum(calls) / len(calls)
    print(average)
    return average
