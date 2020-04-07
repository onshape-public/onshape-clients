"""CLI interface."""

import click
from .clientPackage import get_all_client_classes, ClientPackage
from pathlib import Path
from cli.command_runner import CommandRunner
import shutil


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
        client_instances.append(
            name_to_client[client](
                repo=repo, command_runner=CommandRunner(dry_run=dry_run)
            )
        )
    command_runner["root"] = CommandRunner(dry_run=dry_run, cwd=repo)


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
@click.option(
    "--force/--no-force",
    "-f",
    "force",
    help="Force install the tool even if it overwrites a past install.",
)
def setup(tools, force):
    if not tools:
        tools = available_tools
    if "openapi-generator-cli" in tools:
        open_api_dir = Path("~/bin/openapitools").expanduser()
        if open_api_dir.exists():
            if force:
                if not get_command_runner().dry_run:
                    shutil.rmtree(open_api_dir)
                else:
                    print(f"Would remove {open_api_dir}")
            else:
                print("Already installed. Pass -f to force install.")
                return
        if not get_command_runner().dry_run:
            open_api_dir.mkdir(parents=True)
        else:
            print(f"Would make directory {open_api_dir}")
        result = get_command_runner().run(
            "curl https://raw.githubusercontent.com/OpenAPITools/openapi-generator/master/bin/utils/openapi-generator-cli.sh",
            capture_output=True,
        )
        cli_script = open_api_dir / "openapi-generator-cli"
        if not get_command_runner().dry_run:
            with cli_script.open("wb") as f:
                f.write(result.stdout)
        else:
            print(f"Would write to {cli_script}")
        get_command_runner().run(f"chmod u+x {open_api_dir / 'openapi-generator-cli'}")
        get_command_runner().print_divider(
            "Successfully installed 'openapi-generator-cli'"
        )
        print(
            "\nAdd export PATH=$PATH:~/bin/openapitools/ to your bash_profile to persist changes."
        )
