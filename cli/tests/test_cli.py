from click.testing import CliRunner
from cli.cli import entry
from cli.clientPackage import CliError
from pathlib import Path
import os
import pytest
import time

runner = CliRunner()
repo = Path(__file__).parent.parent.parent.absolute()


def invoke(command):
    command = command.split(" ")
    command.insert(0, "-r")
    command.insert(1, str(repo))
    return runner.invoke(entry, command)


def test_entry_no_version():
    """onshape-clients publish
    """
    result = invoke("publish")
    assert result.exc_info[0] == CliError


def test_entry_duplicate_version():
    """onshape-clients -c python publish -v 0.0.0
    """
    result = invoke("-c python publish -v 0.0.0",)
    assert result.exc_info[0] == CliError
    assert result.exc_info[1].args[0] == "Error uploading client to pypi."


def test_test_function():
    """ The "fast" tests should take no more than 20 seconds per client.
    onshape-clients test fast
    """
    start = time.time()
    result = invoke("test")
    assert result.exit_code == 0
    assert time.time() - start < 20
