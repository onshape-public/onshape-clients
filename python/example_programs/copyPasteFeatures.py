from onshape_client.shared import Client

client = Client(stack="local2")

did="11bad4b4d1ece7c7a6e8c41b"
wvm="w"
wvmid="7e4ccac34c87b83314df5e2f"
eid="afa126ed0728482ee5abfbea"

features = client.PartStudiosApi.get_features(did, wvm, wvmid, eid, _preload_content=True)

for feature in features:
    client.PartStudiosApi.add_feature1(did, wvm, wvmid, eid)
