from __future__ import print_function
import onshape_client



def test_get_documents(configuration):
    doc_instance = onshape_client.DocumentsApi(onshape_client.ApiClient(configuration=configuration))
    api_response = doc_instance.get_documents()
    assert 20 == len(api_response.items)
    thread = doc_instance.get_documents(async=True)
    api_response_async = thread.get()
    assert 20 == len(api_response_async.items)

# def test_get_parts(configuration):
#     parts_instance = onshape_client.PartsApi(onshape_client.ApiClient(configuration=configuration))
#     data = parts_instance.get_parts_in_partstudio('w', '2d47b6abec9d1de1d2538372', '39e483948767f72c97d2792f', '0639ea3c439aa0947744d29a')
#     assert 'Part 1' == data[0].name
#
# def test_get_mass_properties(configuration):
#     parts_instance = onshape_client.PartsApi(onshape_client.ApiClient(configuration=configuration))
#     data = parts_instance.get_mass_properties('w', '2d47b6abec9d1de1d2538372', '39e483948767f72c97d2792f', '0639ea3c439aa0947744d29a', 'JHD')
#     assert 0.000946 < data.bodies['JHD'].volume[1] < 0.000947
#
# def test_get_user_settings_current_logged_in_user(configuration):
#     user_instance = onshape_client.UsersApi(onshape_client.ApiClient(configuration=configuration))
#     data = user_instance.get_user_settings_current_logged_in_user()
#     assert data.default_units.to_dict() == {'units': {'key': None, 'value': None}}