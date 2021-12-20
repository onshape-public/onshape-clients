from onshape_client.oas import BTTranslateFormatParams


def test_import_then_drawing_workflow(
    client, new_document, translated_geometry, tmp_dir
):
    imported_element = new_document.import_file(
        file_path=translated_geometry / "Cube.x_t"
    )
    drawing = imported_element.create_drawing()
    drawing.export_file(
        tmp_dir / "test_import_then_drawing_workflow.pdf",
        bt_translate_format_params=BTTranslateFormatParams(format_name="PDF"),
    )
