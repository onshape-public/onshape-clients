from click.testing import CliRunner
from cli.cli import entry
import click
from cli.clientPackage import CliError
import os
from pathlib import Path
import subprocess
import pytest

runner = CliRunner()
repo = Path(__file__).parent.parent.parent.absolute()


def invoke(command, dry_run=True):
    command = f"-r {repo}{' --dry-run' if dry_run else ''} {command}"
    print(f"Running command 'onshape-clients {command}'")
    command = command.split(" ")
    result = runner.invoke(entry, command)
    assert result.exit_code == 0


def test_linted():
    """Ensure the cli package itelf is properly linted.
    """
    result = subprocess.run(f"black {Path(__file__).parent.parent}".split(" "))
    assert result.returncode == 0


def test_help():
    """Ensures just blank help request works."""
    runner.invoke(entry)


def test_wrong_folder_errors():
    """If outside onshape-clients, this should error."""
    cwd = Path.cwd()
    os.chdir(str(Path.home()))
    result = runner.invoke(entry, "lint")
    assert result.exit_code == 1
    assert result.exc_info[0] == CliError
    os.chdir(str(cwd))


@pytest.mark.parametrize("command", [command for command in entry.commands])
def test_blank_commands(command):
    """Ensure all commands with defaults work.
    """
    invoke(command)
