"""CLI interface."""

import click
from .clientPackage import get_all_client_classes, ClientPackage
from pathlib import Path
from cli.command_runner import CommandRunner
from dotenv import load_dotenv
import os


name_to_client = {clazz.name: clazz for clazz in get_all_client_classes()}
client_instances = []
command_runner = {}


def get_command_runner() -> CommandRunner:
    """
    :return: CommandRunner
    """
    return command_runner["root"]


def do_client_function(function_name, *args, **kwargs):
    for client in client_instances:
        fun = getattr(client, function_name)
        fun(*args, **kwargs)


@click.group(
    "onshape-clients",
    help="CLI for managing the generating, installing, testing and publishing Onshape clients.",
)
@click.option(
    "-c",
    "--client",
    "clients",
    type=click.Choice(name_to_client.keys(), case_sensitive=False),
    multiple=True,
    help="Clients to perform this action with. Defaults to all. Specify many by: -c python -c java, etc...",
)
@click.option(
    "-r",
    "--repo",
    envvar="ONSHAPE_CLIENTS_REPO",
    help="Path to the onshape clients repo",
)
@click.option(
    "-d/",
    "--dry-run/--no-dry-run",
    help="If set, the command won't actually run any commands.",
    default=False,
)
def entry(clients, repo, dry_run):
    if len(clients) == 0:
        clients = name_to_client.keys()
    for client in clients:
        client_instances.append(name_to_client[client](repo=repo, dry_run=dry_run))
    command_runner["root"] = CommandRunner(dry_run=dry_run, cwd=repo)
    load_dotenv(
        dotenv_path=CommandRunner.get_onshape_clients_path(Path.cwd()) / "secrets.sh",
        verbose=True,
    )


@entry.command(
    help="Publish the clients to the appropriate distribution channels - npm, pypi, etc..."
)
@click.option(
    "-v",
    "--version",
    type=click.STRING,
    help="Version to publish.",
    envvar="ONSHAPE_CLIENTS_PUBLISH_VERSION",
    default="0.0.0",
)
def publish(version):
    do_client_function("set_version", version=version)
    do_client_function("publish")


@entry.command(help="Generate the client from the OAS definition.")
def generate():
    do_client_function("generate")


@entry.command(
    help="Test each client using its native test suite. Make sure to install first."
)
@click.option(
    "-m", "--marker", type=click.Choice(["fast"]), help="Group of tests to test.",
)
def test(marker):
    do_client_function("test", marker=marker)


@entry.command(help="Lint each client according to its standard linter.")
@click.option(
    "-f/", "--fix/--no-fix", help="Make linting changes.", default=False,
)
def lint(fix):
    do_client_function("lint", fix=fix)


@entry.command(help="Install the clients for testing.")
def install():
    do_client_function("install")


available_tools = ["openapi-generator-cli"]


@entry.command(help="Automate the setup and installation of tools that this CLI uses.")
@click.option(
    "--tool",
    "-t",
    "tools",
    help="Select the tool to install and set up.",
    multiple=True,
    type=click.Choice(available_tools),
)
def setup(tools):
    if not tools:
        tools = available_tools
    if "openapi-generator-cli" in tools:
        open_api_dir = Path("~/bin/openapitools").expanduser()
        print(
            f"Please run the following script: \n\n\
            \n    mkdir -p {open_api_dir} && \
            \n    curl https://raw.githubusercontent.com/OpenAPITools/openapi-generator/master/bin/utils/openapi-generator-cli.sh > ~/bin/openapitools/openapi-generator-cli && \
            \n    chmod u+x {open_api_dir / 'openapi-generator-cli'} && \
            \n    export PATH=$PATH:{open_api_dir}"
        )
        print(
            "\n\nThen add export PATH=$PATH:~/bin/openapitools/ to your bash_profile to persist changes."
        )
