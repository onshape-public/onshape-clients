def test_import_then_drawing_workflow(client, new_document, assets, tmp_dir):
    imported_element = new_document.import_file(file_path=assets / "Cube.x_t")
    drawing = imported_element.create_drawing()
    drawing.export_file(tmp_dir / "test_import_then_drawing_workflow.pdf")
