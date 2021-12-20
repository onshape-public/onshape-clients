from onshape_client import Client, OnshapeElement
import pytest
import imghdr


@pytest.mark.parametrize("element", ["ps_configurable_cube"], indirect=True)
def test_get_thumbnail(client, element: OnshapeElement, tmp_dir):
    result = client.thumbnails_api.get_element_thumbnail(
        did=element.did, wv=element.wvm, wvid=element.wvmid, eid=element.eid
    )
    assert result
    headers = {}
    for size_info in result.sizes:
        headers["Accepts"] = size_info.media_type
        thumbnail = client.api_client.request(
            url=size_info.href,
            method="GET",
            headers=headers,
            query_params={},
            _preload_content=False,
        )
        image_type = size_info.media_type.split("/")[1]
        new_file = tmp_dir / f"{element.name}_{size_info.size}.{image_type}"
        with new_file.open("wb") as f:
            f.write(thumbnail.data)
        assert imghdr.what(new_file) == image_type
