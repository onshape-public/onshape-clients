import six



def get_unquote():
    if six.PY2:
        from urllib import unquote as unquote
    else:
        from urllib.parse import unquote as unquote
    return unquote

def get_parse():
    if six.PY2:
        from urlparse import urlparse as parse
    else:
        from urllib import parse
    return parse

unquote=get_unquote()
parse=get_parse()