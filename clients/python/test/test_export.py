import pytest
from onshape_client.client import Client
from onshape_client.oas import BTTranslateFormatParams
from onshape_client.onshape_url import OnshapeElement
from pathlib import Path


@pytest.mark.parametrize(
    ["element", "format_name"],
    [
        ("drawing_configurable_cube", "PDF"),
        ("asm_three_axes", "PARASOLID"),
        ("ps_configurable_cube", "PARASOLID"),
        ("ps_configurable_cube", "STEP"),
    ],
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


@pytest.mark.parametrize(
    "element", ["ps_configurable_cube"], indirect=True,
)
def test_export_ps_stl(client: Client, element: OnshapeElement, tmp_dir: Path):
    file = tmp_dir / f"{element.name}.stl"
    response = client.part_studios_api.export_stl1(
        element.did, element.wvm, element.wvmid, element.eid, _preload_content=False
    )
    with file.open(mode="wb") as f:
        f.write(response.data)
    assert file.stat().st_size > 1000
