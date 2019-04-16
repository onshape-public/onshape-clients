import six

def get_parse():
    if six.PY2:
        from urlparse import urlparse as parse
    else:
        from urllib.parse import urlparse as parse
    return parse

def get_start_server():
    if six.PY3:
        from onshape_client.oauth.local_server_python_3 import start_server
    else:
        from onshape_client.oauth.local_server_python_2 import start_server
    return start_server

def get_unquote():
    if six.PY2:
        from urllib import unquote as unquote
    else:
        from urllib.parse import unquote as unquote
    return unquote

# Alphabetical!
parse=get_parse()
start_server=get_start_server()
unquote=get_unquote()