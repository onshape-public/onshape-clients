import subprocess
from pathlib import Path
from cli.exceptions import CliError


class CommandRunner:
    def __init__(self, dry_run=False, cwd=None):
        self.dry_run = dry_run
        self.cwd = cwd if cwd else CommandRunner.get_onshape_clients_path(Path.cwd())

    @staticmethod
    def get_onshape_clients_path(inner_path: Path):
        """Return the onshape-clients Path from an inner path."""
        new_path = Path(inner_path)
        while new_path.name != "onshape-clients" and new_path != Path("/"):
            new_path = new_path.absolute().parent
        if new_path.name != "onshape-clients":
            raise CliError(
                f"Most likely calling from the wrong location. Should be in a directory named 'onshape-clients' but "
                f"instead in '{inner_path}'"
            )
        return new_path

    def run(self, command, cwd=None):
        """Run a command in the shell for this client."""
        cwd = cwd if cwd else self.cwd
        self.print_divider(
            f'{"Running" if not self.dry_run else "Would run"} command "{command}" in {cwd}'
        )
        command = command.split(" ")
        # Dry runs should pretend the command succeeded.
        if self.dry_run:
            return subprocess.CompletedProcess(command, 0)
        return subprocess.run(command, cwd=cwd)

    @staticmethod
    def print_divider(message):
        print(f"============= {message} ===============")
