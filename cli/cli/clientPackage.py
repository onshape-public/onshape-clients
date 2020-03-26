"""All client package classes."""
from pathlib import Path
import re
import subprocess
import shutil


class CliError(Exception):
    pass


class ClientPackageMeta:
    """Decorators and the like for defining aspects of the ClientPackage."""

    @staticmethod
    def action(func):
        """Decorator to mark the method as an action that can be taken on this client. Only for instance methods."""

        def wrapper(self, *args, **kwargs):
            self.print_divider(f"{func.__name__}ing the {self.name} client.")
            func(self, *args, **kwargs)

        return wrapper


class ClientPackage:
    """Representing a single client package to facilitate changing version number and publishing."""

    name = "generic"

    def __init__(
        self,
        repo=Path.cwd(),
        version_regex=r"\d*\.\d*\.\d*[\w-]",
        oas_client_name=None,
        dry_run=False,
    ):
        """ The base class for client packages. Only things necessary for all clients should go here.
        :param String version_regex: ex "\d*\.\d*\.\d*[\w-]" valid version regex
        :param String name: the name of the client - also the name of the subfolder used to hold the client.
        :param String oas_client_name: the OpenApi generator client name. ex: python-experimental
        :param Boolean dry_run: If set to true, no commands are actually ran, but it will show which commands would be
        ran.
        """
        repo = Path(repo)
        if repo.name != "onshape-clients":
            raise CliError(
                f"Most likely calling from the wrong location. Should be in a directory named 'onshape-clients' but "
                f"instead in '{repo.name}'"
            )
        name = self.name
        self.root_path = repo / name
        self.version_regex = version_regex
        self.oas_client_name = oas_client_name if oas_client_name else name
        self.dry_run = dry_run

    def __getattr__(self, name):
        def skip_func(*args, **kwargs):
            print(f"'{name}' is not supported by client '{self.name}' - skipping")

        return skip_func

    @ClientPackageMeta.action
    def generate(self):
        """Generate the client with default options. Per client options should be set in
        ./<CLIENT_FOLDER>/openapi_config.json"""
        self.run(
            f"openapi-generator-cli generate -i ./openapi.json --skip-validate-spec -g {self.oas_client_name} -o {self.root_path} "
            f"-c {self.root_path / 'openapi_config.json'}",
            cwd=self.root_path.parent,
        )

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

    def run(self, command, cwd=None):
        """Run a command in the shell for this client."""
        self.print_divider(
            f'{"Running" if not self.dry_run else "Would run"} command "{command}"'
        )
        command = command.split(" ")
        # Dry runs should pretend the command succeeded.
        if self.dry_run:
            return subprocess.CompletedProcess(command, 0)
        return subprocess.run(command, cwd=cwd if cwd else self.root_path)

    def print_divider(self, message):
        print(f"============= {message} ===============")


class GoPackage(ClientPackage):
    name = "go"


class PythonPackage(ClientPackage):
    name = "python"

    def __init__(self, **kwargs):
        super().__init__(
            oas_client_name="python-experimental", **kwargs,
        )

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
        result = self.run(f"pipenv run pytest {f'-m {marker}' if marker else ''}")
        if result.returncode != 0:
            raise CliError("Error testing client.")

    @ClientPackageMeta.action
    def install(self):
        self.run(f"pipenv install {self.root_path} --dev")

    @ClientPackageMeta.action
    def lint(self, fix=False):
        """Lint files. If fix is given, write the files back."""
        self.run(f"black {self.root_path}{' --check' if fix else ''}")
