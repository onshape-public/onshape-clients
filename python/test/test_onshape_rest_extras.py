from onshape_client.onshape_rest_extras import decode_file_name_from_header

def test_decode_file_name_from_header():
    content_dispostion_header = r"attachment; filename*=UTF-8\\'\\'%43%6F%6E%66%69%67%75%72%61%62%6C%65%20%43%75%62%65%2E%73%74%65%70"
    assert decode_file_name_from_header(content_dispostion_header) == "Configurable Cube.step"
    content_dispostion_header2 = r"form-data; name='field2'; filename='example.txt'"
    assert decode_file_name_from_header(content_dispostion_header2) == "example.txt"