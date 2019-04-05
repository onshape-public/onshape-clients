"""For testing all the example programs in the example program directory."""
import os
from pathlib import Path

example_programs=[]
example_programs.append('example_programs/export_step')

def test_example_programs(script_runner):
    example_programs_dir = Path(os.getcwd()) / "example_programs"
    results = []

    for script in example_programs_dir.iterdir():
        if not is_example_program(script):
            continue
        ret = script_runner.run(str(script))
        if not ret.success:
            print("The example program located at {} failed! The stack trace is: \n {}".format(script, ret.stderr))
        assert ret.success
        results.append({"success": ret.success, "name": str(script).split("/")[-1]})

    for res in results:
        print("")

def is_example_program(script):
    result = not script.is_dir() and not str(script).split("/")[-1].startswith('.')
