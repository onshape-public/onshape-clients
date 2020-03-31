import pytest


@pytest.mark.parametrize("element", ["ps_configurable_cube"], indirect=True)
def test_export_drawing(client, element, tmp_dir):
    drawing = element.drawings[0]
    translate_result = drawing.export_file(tmp_dir / "test_export_drawing.pdf")


@pytest.mark.parametrize("element", ["asm_three_axes"], indirect=True)
def test_export_assembly(client, element, tmp_dir):
    assembly = element
    assembly.export_file(tmp_dir / "test_export_assembly.stl")
