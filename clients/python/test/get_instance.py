class AssemblyDefinition:
    def __init__(self, assembly_definition):
        self.assembly_definition = assembly_definition

    def get_instance(self, occurrence_path):
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

    def get_occurrence_transforms(self, occurrence_path):
        return [
            occ["transform"]
            for occ in self.assembly_definition["rootAssembly"]["occurrences"]
            if occ["path"] == occurrence_path
        ]

    def find_occurrence_paths(self, instance):
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

    @staticmethod
    def is_equal_element_content(this, other):
        return (
            this["documentMicroversion"] == other["documentMicroversion"]
            and this["elementId"] == other["elementId"]
            and AssemblyDefinition.compare_configurations(
                this["configuration"], other["configuration"]
            )
        )
