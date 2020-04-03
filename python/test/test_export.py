import pytest
from onshape_client.client import Client
from onshape_client.oas import BTTranslateFormatParams
from onshape_client.onshape_url import OnshapeElement


@pytest.mark.parametrize(
    ["element", "format_name"],
    [("drawing_configurable_cube", "PDF"), ("asm_three_axes", "PARASOLID")],
    indirect=["element"],
)
def test_export(
    client: Client,
    element: OnshapeElement,
    tmp_dir,
    format_name,
    translator_format_to_extension,
):
    file_name = f"{element.name}.{translator_format_to_extension[format_name]}"
    element.export_file(
        tmp_dir / file_name,
        BTTranslateFormatParams(
            destination_name=file_name,
            format_name=format_name,
            store_in_document=False,
        ),
    )
