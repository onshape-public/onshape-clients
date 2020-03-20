"""Build scripts"""
from pathlib import Path
import re
import os


class ClientPackage:
    """A class representing a single client package to facilitate changing version number and publishing."""

    def __init__(
        self,
        file_path,
        name,
        file_path_to_version_identifier,
        regex_for_version_number,
        new_version,
    ):
        """
        :param Path file_path: ex __file__/python path object
        :param String name: ex "python"
        :param Path file_path_to_version_identifier: ex "setup.py"
        :param String regex_for_version_number: ex r"^version="(\w*\.\w*\.[\w-]*)"$"
        """
        self.file_path = file_path
        self.name = name
        self.file_path_to_version_identifier = file_path_to_version_identifier
        self.regex_for_version_number = regex_for_version_number
        self.new_version = new_version

    def set_version(self):
        f = self.file_path_to_version_identifier.open().read()
        result = re.sub(self.regex_for_version_number, self.new_version, f)
        self.file_path_to_version_identifier.open(mode="w").write(result)


python_package_path = Path(os.environ["REPO_ONSHAPE_CLIENTS"]) / "python"
python_package = ClientPackage(
    python_package_path,
    "python",
    python_package_path / "setup.py",
    r"""version="(\w*\.\w*\.[\w-]*)",""",
    f"""version="{os.environ["ONSHAPE_CLIENT_VERSION"]}",""",
)
python_package.set_version()
