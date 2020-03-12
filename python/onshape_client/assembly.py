import json

import numpy as np
from onshape_client.client import Client
from onshape_client.oas import BTAssemblyInstanceDefinitionParams, TransformGroup


class AssemblyDefinition:
    def __init__(self, assembly_definition, origin_element=None):
        self.assembly_definition = assembly_definition
        self.origin_element = origin_element

    def get_instance(self, occurrence_path):
        """Get the instance of this occurrence."""
        assembly_definition = self.assembly_definition
        if len(occurrence_path) == 0:
            return
        occ_path = occurrence_path.copy()
        # Consume assembly-pointing occurrence path elements
        instance = self.find_instance(
            occ_path.pop(0), assembly_definition["rootAssembly"]
        )
        while len(occ_path) > 0:
            sa = self.find_sub_assembly(instance)
            instance = self.find_instance(occ_path.pop(0), sa)
        return instance

    def make_sub_assembly_definition(self, sa_occurrence_path):
        """Get the AssemblyDefinition representing the subassembly."""
        sa = self.get_instance(sa_occurrence_path)
        result = Client.get_client().assemblies_api.get_assembly_definition(
            sa["documentId"],
            "v",
            sa["documentVersion"],
            sa["elementId"],
            configuration=sa["configuration"],
            _preload_content=False,
        )
        return AssemblyDefinition(json.loads(result.data.decode("UTF-8")))

    @property
    def occurrences(self):
        return self.assembly_definition["rootAssembly"]["occurrences"]

    def get_occurrence_transforms(self, occurrence_path):
        """Get a list of all the occurrence transforms."""
        return [
            occ["transform"]
            for occ in self.occurrences
            if occ["path"] == occurrence_path
        ]

    def make_transform_group(self, occurrence_path):
        """Make the transform group for the particular occurrence."""
        instance = self.get_instance(occurrence_path)
        is_assembly = instance["type"] == "Assembly"
        transform = self.get_occurrence_transforms(occurrence_path)[0]

        # Special handling here to deal with Assembly instances to resolve to the correct transform.
        if is_assembly:
            sa = self.make_sub_assembly_definition(occurrence_path)
            occurrence_path.append(
                self.find_sub_assembly(instance)["instances"][0]["id"]
            )
            instance_transform_from_sa = sa.get_occurrence_transforms(
                [occurrence_path[-1]]
            )[0]
            instance_transform_from_root = self.get_occurrence_transforms(
                occurrence_path
            )[0]
            instance_transform_from_sa = np.reshape(
                np.array(instance_transform_from_sa), (4, 4)
            )
            instance_transform_from_root = np.reshape(
                np.array(instance_transform_from_root), (4, 4)
            )
            transform = np.matmul(
                instance_transform_from_root, np.linalg.inv(instance_transform_from_sa)
            )
            transform = transform.flatten().tolist()

        part_id = instance["partId"] if "partId" in instance else None
        if "documentVersion" in instance:
            doc_version = instance["documentVersion"]
        elif (
            "documentMicroversion" in instance
            and instance["documentMicroversion"]
            == self.assembly_definition["rootAssembly"]["documentMicroversion"]
        ):
            assert self.origin_element and self.origin_element.wvm == "v"
            doc_version = self.origin_element.wvmid
        else:
            raise UserWarning(
                "An assembly with linked documents needs to reference versions."
            )
        is_whole_part_studio = instance["type"] == "PartStudio"
        instance_definition = BTAssemblyInstanceDefinitionParams(
            document_id=instance["documentId"],
            version_id=doc_version,
            element_id=instance["elementId"],
            part_id=part_id,
            is_assembly=is_assembly,
            is_whole_part_studio=is_whole_part_studio,
            configuration=instance["configuration"],
        )
        return TransformGroup(transform=transform, instances=[instance_definition])

    def get_as_transform_groups(self):
        """Get a list of transform groups that define all the occurrences in this assembly."""
        result = []
        for occurrence in self.occurrences:
            result.append(self.make_transform_group(occurrence["path"]))
        return result

    def find_occurrence_paths(self, instance):
        """Get the occurrence path given an instance definition."""
        paths = []
        for occ in self.assembly_definition["rootAssembly"]["occurrences"]:
            potential_path = occ["path"]
            potential_instance = self.get_instance(potential_path)
            if self.is_equal_element_content(instance, potential_instance):
                paths.append(potential_path)
        return paths

    def find_instance(self, instance_id, sa):
        return next(
            instance for instance in sa["instances"] if instance["id"] == instance_id
        )

    def find_sub_assembly(self, instance):

        assembly_definition = self.assembly_definition
        for sa in assembly_definition["subAssemblies"]:
            if self.is_equal_element_content(sa, instance):
                return sa
        return None

    @staticmethod
    def compare_configurations(this, other):
        return set(this.split(";")) == set(other.split(";"))

    def is_structurally_equal_assembly(self, other):
        """ Returns true if the two assemblies have the same instances at the same location.
        :param other: AssemblyDefinition
        :return:
        """
        occurrences_to_be_matched = self.occurrences
        for occ in other.occurrences:
            transform_to_match = occ["transform"]
            instance_to_match = other.get_instance(occ["path"])
            for potential_occ in occurrences_to_be_matched:
                potential_transform = potential_occ["transform"]
                potential_instance = self.get_instance(potential_occ["path"])
                if (
                    AssemblyDefinition.is_equal_element_content(
                        potential_instance, instance_to_match
                    )
                    and transform_to_match == potential_transform
                ):
                    occurrences_to_be_matched.remove(potential_occ)
                    break
        return len(occurrences_to_be_matched) == 0

    @staticmethod
    def is_equal_element_content(this, other):
        return (
            this["documentMicroversion"] == other["documentMicroversion"]
            and this["elementId"] == other["elementId"]
            and AssemblyDefinition.compare_configurations(
                this["configuration"], other["configuration"]
            )
        )
