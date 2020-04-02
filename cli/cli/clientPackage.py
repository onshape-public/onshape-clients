"""All client package classes."""
from pathlib import Path
import re
import subprocess
import shutil
from cli.command_runner import CommandRunner
from cli.exceptions import CliError


def get_all_client_classes():
    return [PythonPackage, GoPackage, CppPackage]


class ClientPackageMeta:
    """Decorators and the like for defining aspects of the ClientPackage."""

    @staticmethod
    def action(func):
        """Decorator to mark the method as an action that can be taken on this client. Only for instance methods."""

        def wrapper(self, *args, **kwargs):
            CommandRunner.print_divider(f"{func.__name__}ing the {self.name} client.")
            func(self, *args, **kwargs)

        return wrapper


class ClientPackage:
    """Representing a single client package to facilitate changing version number and publishing."""

    name = "generic"

    def __init__(
        self, repo=None, version_regex=r"\d*\.\d*\.\d*[\w-]", command_runner=None,
    ):
        """ The base class for client packages. Only things necessary for all clients should go here.
        :param String version_regex: ex "\d*\.\d*\.\d*[\w-]" valid version regex
        :param String name: the name of the client - also the name of the subfolder used to hold the client.
        :param String oas_client_name: the OpenApi generator client name. ex: python-experimental
        :param Boolean dry_run: If set to true, no commands are actually ran, but it will show which commands would be
        ran.
        """
        self.repo = (
            Path(repo) if repo else CommandRunner.get_onshape_clients_path(Path.cwd())
        )
        name = self.name
        self.root_path = self.repo / name
        self.version_regex = version_regex
        self.oas_client_name = self.oas_client_name if self.oas_client_name else name
        self.version_to_publish = None
        self.command_runner = (
            command_runner if command_runner else CommandRunner(cwd=self.root_path)
        )
        self.command_runner.cwd = self.root_path

    def __getattr__(self, name):
        def skip_func(*args, **kwargs):
            print(f"'{name}' is not supported by client '{self.name}' - skipping")

        return skip_func

    @ClientPackageMeta.action
    def generate(self):
        """Generate the client with default options. Per client options should be set in
        ./<CLIENT_FOLDER>/openapi_config.json"""
        try:
            self.run(
                f"openapi-generator-cli generate -i ./openapi.json -g {self.oas_client_name} -o {self.root_path} "
                f"-c {self.root_path / 'openapi_config.json'}",
                cwd=self.root_path.parent,
            )
        except Exception:
            raise CliError(
                "Please install openapi-generator-cli by running $onshape-clients setup -tools openapi-generator-cli"
            )

    @ClientPackageMeta.action
    def set_version(self, version="0.0.0"):
        self.version_to_publish = version

    def set_version_in_source(
        self,
        version="0.0.0",
        file_path_to_version_identifier=None,
        regex_for_version_number=None,
    ):
        """Set the version for clients that include the version number in their source files.
        :param version: String The version to update to: ex "1.1.2"
        :param file_path_to_version_identifier: Path ex "setup.py"
        :param regex_for_version_number: String ex r'version=".*"'"""
        if not all(
            [version, file_path_to_version_identifier, regex_for_version_number]
        ):
            raise CliError("Must specify all parameters.")
        if not version or not re.match(self.version_regex, version):
            raise CliError(
                f"Version specified: {version} does not match regex {self.version_regex}."
            )
        f = file_path_to_version_identifier.open().read()
        result = re.sub(regex_for_version_number, version, f)
        file_path_to_version_identifier.open(mode="w").write(result)

    def run(self, command, **kwargs):
        """Run a command in the shell for this client."""
        return self.command_runner.run(command, **kwargs)


class CppPackage(ClientPackage):
    name = "cpp"
    oas_client_name = "cpp-restsdk"

    def generate(self):
        shutil.rmtree(str(self.root_path / "api"))
        shutil.rmtree(str(self.root_path / "model"))
        return super().generate()


class GoPackage(ClientPackage):
    name = "go"

    @ClientPackageMeta.action
    def publish(self):
        """Copy the contents of the GO package to a new Github repo to get distributed to the broader GO community.
        """
        source = self.root_path
        destination = Path.home() / self.name
        if destination.exists():
            shutil.rmtree(destination)
        shutil.copytree(str(source), str(destination))
        self.command_runner.cwd = destination
        self.run("git init")
        self.run(
            "git remote add origin https://github.com/onshape-public/onshape-go-client.git"
        )
        self.run("git add .")
        self.run(f'git commit -m "v{self.version_to_publish}"')
        self.run(f"git tag v{self.version_to_publish}")
        self.run("git push --set-upstream origin master -f --tags")
        return


class PythonPackage(ClientPackage):
    name = "python"
    oas_client_name = "python-experimental"

    def set_version(
        self, **kwargs,
    ):
        return self.set_version_in_source(
            file_path_to_version_identifier=self.root_path / "setup.py",
            regex_for_version_number=r'(?<=version=")' + self.version_regex + r'(?=",)',
            **kwargs,
        )

    @ClientPackageMeta.action
    def publish(self):
        setup = self.root_path / "setup.py"
        dist = self.root_path / "dist"
        dist.mkdir(exist_ok=True, parents=True)

        self.run(f"python {setup} sdist bdist_wheel -d {str(dist)}",)
        result = self.run(f"twine upload {str(dist)}/*",)
        if result.returncode != 0:
            raise CliError("Error uploading client to pypi.")
        shutil.rmtree(str(dist))

    @ClientPackageMeta.action
    def test(self, marker=None):
        result = self.run(f"pipenv run pytest {f'-m {marker}' if marker else ''} -n 2")
        if result.returncode != 0:
            raise CliError("Error testing client.")

    @ClientPackageMeta.action
    def install(self):
        self.run(f"pipenv install {self.root_path} --dev")

    @ClientPackageMeta.action
    def lint(self, fix=False):
        """Lint files. If fix is given, write the files back."""
        self.run(f"black {self.root_path}{' --check' if fix else ''}")
