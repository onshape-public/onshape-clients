import pytest
from ruamel.yaml import YAML
from onshape_client.configuration import Configuration
from pathlib import Path

yaml = YAML()
path = '.onshape_client_config.yaml'
onshape_client_config = yaml.load(Path(path))

@pytest.fixture(scope="module")
def configuration():
    """Return an onshape_client configuration."""
    configuration = Configuration()
    # flag will eventually be passed from the command line
    flag = None
    if not flag:
        try:
            conf_key = onshape_client_config['default']
        except KeyError:
            raise KeyError("Please include a 'default' key to signify a default configuration within {}.".format(path))
    else:
        conf_key = flag
    conf = onshape_client_config[conf_key]
    configuration.api_key['SECRET_KEY'] = conf['api_keys']['secret_key'].encode('utf-8')
    configuration.api_key['ACCESS_KEY'] = conf['api_keys']['access_key'].encode('utf-8')
    configuration.host = conf['baseUrl']
    return configuration