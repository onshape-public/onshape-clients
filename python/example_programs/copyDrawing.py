from onshape_client.shared import Client
from onshape_client.models.bt_copy_element_params import BTCopyElementParams

client=Client(stack='local2')
bt_copy_element_params = BTCopyElementParams(document_id_source="15dfbc85c6a33057ee56e0b1",workspace_id_source="7110846cee3b5af421adfdda",element_id_source="f62b453b9d1e5622343c6d01")
client.ElementsApi.copy_element_from_source_document1("15dfbc85c6a33057ee56e0b1", "7110846cee3b5af421adfdda", bt_copy_element_params)