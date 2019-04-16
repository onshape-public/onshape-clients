import six

# Alphabetical!
def get_http_server():
    if six.PY2:
        from BaseHTTPServer import HTTPServer
        from SimpleHTTPServer import SimpleHTTPRequestHandler as HTTPHandler
    else:
        from http.server import HTTPServer
        from http.server import BaseHTTPRequestHandler as HTTPHandler
    return HTTPServer, HTTPHandler

def get_parse():
    if six.PY2:
        from urlparse import urlparse as parse
    else:
        from urllib.parse import urlparse as parse
    return parse

def get_sendable():
    if six.PY2:
        def sendable(s):
            return s
    else:
        def sendable(s):
            return bytes(s, 'UTF-8')
    return sendable

def get_unquote():
    if six.PY2:
        from urllib import unquote as unquote
    else:
        from urllib.parse import unquote as unquote
    return unquote

# Alphabetical!
HTTPServer, HTTPHandler = get_http_server()
parse=get_parse()
sendable=get_sendable()
unquote=get_unquote()
