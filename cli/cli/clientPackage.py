"""All client package classes."""
from pathlib import Path
import re
import os
import subprocess
import shutil


class CliError(Exception):
    pass


class ClientPackage:
    """A class representing a single client package to facilitate changing version number and publishing."""

    name = "generic"
    version_regex = r"\d*\.\d*\.\d*[\w-]"

    def __init__(
        self, root_path, file_path_to_version_identifier, regex_for_version_number
    ):
        """
        :param Path root_path: ex __file__/python path object
        :param Path file_path_to_version_identifier: ex "setup.py"
        :param String regex_for_version_number: ex r'version=".*"'
        """
        self.root_path = root_path
        self.file_path_to_version_identifier = file_path_to_version_identifier
        self.regex_for_version_number = regex_for_version_number

    def set_version(self, version):
        if not version or not re.match(self.version_regex, version):
            raise CliError(
                f"Version specified: {version} does not match regex {self.version_regex}."
            )
        f = self.file_path_to_version_identifier.open().read()
        result = re.sub(self.regex_for_version_number, version, f)
        self.file_path_to_version_identifier.open(mode="w").write(result)

    def publish(self):
        print(f"Publishing the {self.name} client.")

    def test(self):
        print(f"Testing the {self.name} client.")

    def run(self, command):
        """Run a command in the shell for this client."""
        print(f'Running command "{command}"')
        return subprocess.run(command.split(" "), cwd=self.root_path)


class PythonPackage(ClientPackage):
    name = "python"

    def __init__(self, repo=Path.cwd()):
        python_package_path = Path(repo) / "python"
        super().__init__(
            python_package_path,
            python_package_path / "setup.py",
            r'(?<=version=")' + self.version_regex + r'(?=",)',
        )

    def publish(self):
        super().publish()
        setup = self.root_path / "setup.py"
        dist = self.root_path / "dist"
        dist.mkdir(exist_ok=True, parents=True)

        self.run(f"python {setup} sdist bdist_wheel -d {str(dist)}",)
        result = self.run(f"twine upload {str(dist)}/*",)
        if result.returncode != 0:
            raise CliError("Error uploading client to pypi.")
        shutil.rmtree(str(dist))

    def test(self, marker=None):
        result = self.run(f"pipenv run pytest {f'-m {marker}' if marker else ''}")
        if result.returncode != 0:
            raise CliError("Error testing client.")

    def install(self):
        self.run(f"pipenv install {self.root_path}")
