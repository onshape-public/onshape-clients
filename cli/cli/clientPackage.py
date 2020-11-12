"""All client package classes."""
import os
import re
import shutil
from pathlib import Path

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
            self, repo=None, source=None, version_regex=r"\d*\.\d*\.\d*[\w-]", command_runner=None,
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
        if not source:
            self.source_path = self.get_default_source()
        else:
            self.source_path = Path(source) / name
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
                f"openapi-generator-cli generate -i ./openapi.json -g {self.oas_client_name} -o {self.source_path} "
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

    def get_default_source(self):
        destination = Path.home() / 'onshape-clients-codegen' / self.name
        return destination


class CppPackage(ClientPackage):
    name = "cpp"
    oas_client_name = "cpp-qt5"


class GoPackage(ClientPackage):
    name = "go"
    oas_client_name = "go"

    @ClientPackageMeta.action
    def generate(self):
        """Generate the client with default options. Per client options should be set in
        ./<CLIENT_FOLDER>/openapi_config.json

        The code generation preliminary steps (some are manual (m-) at the moment):
         -- Create/Clean an output folder
         -- Init the git repository
         -- Copy static portion from the source
         -- Add and commit
         -- Run openapi-generator command
         -- m- Review all changed files (git ls-files -m) by running 'git add -p'. Don't forget to git checkout at the end
         -- m- go build -v ./...
         -- m- Run go mod tidy
         ----- The rest of git commands are in publish()
        """

        try:
            if self.command_runner.dry_run:
                print(f"============= Would remove '{self.source_path}' and copy tree from '{self.root_path}'")
            else:
                if self.source_path.exists():
                    shutil.rmtree(self.source_path)
                shutil.copytree(str(self.root_path), str(self.source_path), ignore=shutil.ignore_patterns('*.json'))
                shutil.copyfile( self.root_path.parent / 'LICENSE', self.source_path / 'LICENSE')
            self.command_runner.cwd = self.source_path
            self.run("git init")
            self.run("git add .")
            self.run('git commit -m "Initial_commit"')
            self.run(
                f"openapi-generator-cli generate -i ./openapi.json -g {self.oas_client_name} -o {self.source_path / 'onshape'} --type-mappings DateTime=JSONTime "
                f"-c {self.root_path / 'openapi_config.json'}",
                cwd=self.root_path.parent,
            )
        except Exception:
            raise CliError(
                "Please install openapi-generator-cli by running $onshape-clients setup -tools openapi-generator-cli"
            )

    @ClientPackageMeta.action
    def test(self, marker=None):
        self.command_runner.cwd = self.root_path.parent
        self.run('make go-test')

    @ClientPackageMeta.action
    def publish(self):
        """Copy the contents of the GO package to a new Github repo to get distributed to the broader GO community.

        TODO Make sure we get a correct version: probably from openapi_config.json
        """
        dot_git = self.source_path / ".git"
        if not dot_git.exists():
            CliError("Trying to publish incomplete repo ...")
        self.command_runner.cwd = self.source_path
        self.run("git add .")
        self.run(f'git commit -m "v{self.version_to_publish}"')
        self.run(f"git tag v{self.version_to_publish}")
        self.run(f"git remote add origin https://{os.environ.get('GH_TOKEN')}@github.com/onshape-public/go-client.git", print_divider=False)
        self.run("git push --set-upstream origin master -f --tags")
        return


class PythonPackage(ClientPackage):
    name = "python"
    oas_client_name = "python-experimental"

    def __init__(self, **kwargs):
        super().__init__(**kwargs)
        self.source_path = self.root_path

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

        self.run(f"python {setup} sdist bdist_wheel -d {str(dist)}", )
        result = self.run(f"twine upload {str(dist)}/*", )
        if result.returncode != 0:
            raise CliError("Error uploading client to pypi.")
        shutil.rmtree(str(dist))

    @ClientPackageMeta.action
    def test(self, marker=None):
        result = self.run(f"pipenv run pytest {f'-m {marker}' if marker else ''} -n 8")
        if result.returncode != 0:
            raise CliError("Error testing client.")

    @ClientPackageMeta.action
    def install(self):
        self.run(f"pipenv install {self.root_path} --dev")

    @ClientPackageMeta.action
    def lint(self, fix=False):
        """Lint files. If fix is given, write the files back."""
        self.run(f"black {self.root_path}{' --check' if fix else ''}")
