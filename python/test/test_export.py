import pytest


@pytest.mark.parametrize("element", ["ps_configurable_cube"], indirect=True)
def test_export_drawing(client, element, tmp_dir):
    drawing = element.drawings[0]
    translate_result = drawing.export_file(tmp_dir / "test_export.pdf")
