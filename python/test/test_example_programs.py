"""For testing all the example programs in the example program directory."""
import os
from pathlib import Path

example_programs=[]
example_programs.append('example_programs/export_step')

def test_example_programs(script_runner):
    example_programs_dir = Path(os.getcwd()) / "example_programs"

    for script in example_programs_dir.iterdir():
        ret = script_runner.run(str(script))
        assert ret.success