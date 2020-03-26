"""CLI interface."""

import click
from .clientPackage import PythonPackage, GoPackage
from pathlib import Path

all_viable_clients = [PythonPackage, GoPackage]
name_to_client = {clazz.name: clazz for clazz in all_viable_clients}
client_instances = []


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
    default=Path.cwd().absolute(),
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
