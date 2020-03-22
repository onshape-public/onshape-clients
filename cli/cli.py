"""Build scripts"""
from pathlib import Path
import re
import os
import click
import subprocess
import shutil


class ClientPackage:
    """A class representing a single client package to facilitate changing version number and publishing."""

    def __init__(
        self, file_path, name, file_path_to_version_identifier, regex_for_version_number
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

    def set_version(self, version):
        f = self.file_path_to_version_identifier.open().read()
        result = re.sub(self.regex_for_version_number, version, f)
        self.file_path_to_version_identifier.open(mode="w").write(result)

    def publish(self):
        raise NotImplemented


class PythonPackage(ClientPackage):
    def __init__(self):
        python_package_path = Path(__file__).absolute().parent.parent / "python"
        super().__init__(
            python_package_path,
            "python",
            python_package_path / "setup.py",
            r"""(?<=version=")\w*\.\w*\.[\w-]*(?=",)""",
        )

    def publish(self):
        setup = str((self.file_path / "setup.py").absolute())
        dist = str((self.file_path / "dist").absolute())
        subprocess.run(["python", setup, "sdist", "bdist_wheel", "--dist-dir", dist],)
        subprocess.run(["twine", "upload", dist + "/*"],)
        shutil.rmtree(Path(dist))


name_to_client = {"python": PythonPackage}


@click.command()
@click.argument("client")
@click.argument("version")
def publish(client, version):
    client_package = name_to_client[client]()
    client_package.set_version(version)
    client_package.publish()


if __name__ == "__main__":
    publish()
