import pytest


@pytest.mark.fast
def test_get_session_info(client):
    result = client.users_api.session_info()
    assert len(result.id) > 0
