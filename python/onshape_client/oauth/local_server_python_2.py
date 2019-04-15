import SimpleHTTPServer
import SocketServer
from SocketServer import TCPServer
from BaseHTTPServer import HTTPServer

import webbrowser


def start_server(authorization_callback, authorization_url):
    """
    :param authorization_callback: The function to call once with the authorization URL response
    :param startup_callback: The function to call when the server starts - for example opening a webpage
    :return:
    """
    ServerClass = MakeServerClass(authorization_url)
    server = ServerClass(('localhost', 9000), MakeHandlerWithCallbacks(authorization_callback))
    server.serve_forever()


def MakeServerClass(authorization_url):
    class OAuth2RedirectServer(HTTPServer, object):

        def server_activate(self):
            super(OAuth2RedirectServer, self).server_activate()
            webbrowser.open(authorization_url)

    return OAuth2RedirectServer


def MakeHandlerWithCallbacks(authorization_callback):
    class OAuth2RedirectHandler(SimpleHTTPServer.SimpleHTTPRequestHandler):
        def do_GET(self):

            try:
                # Say we are at an https port so that OAuth package doesn't complain. This isn't a security concern because
                # it is just so that the authorization code is correctly parsed.
                authorization_callback("https://localhost" + self.path)
                self.send_response(200)
                self.send_header('Content-type', 'text/html')
                self.end_headers()
                content = '''
                            <html><head><title>Success!</title></head>
                            <body><p>You successfully authorized the application, and your authorization url is: {}</p>
                            <p>You may close this tab.</p>
                            </body></html>
                            '''.format(self.path)
                self.wfile.write(content)
            except BaseException as e:
                self.send_response(500)
                self.send_header('Content-type', 'text/html')
                self.end_headers()
                content = '''
                            <html><head><title>Error!</title></head>
                            <body><p>Something happened and here is what we know: {}</p>
                            <p>You may close this tab.</p>
                            </body></html>
                            '''.format(e)
                self.wfile.write(content)

            import threading
            assassin = threading.Thread(target=self.server.shutdown)
            assassin.daemon = True
            assassin.start()

    return OAuth2RedirectHandler
