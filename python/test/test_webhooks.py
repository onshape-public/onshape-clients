import pytest
import socket
from requests import get
from pyngrok import ngrok
import webbrowser
from typing import Callable
from http.server import BaseHTTPRequestHandler, HTTPServer
from threading import Thread
import six
import json
import time
import queue
from onshape_client.oas import (
    BTWebhookParams,
    BTWebhookOptions,
    BTTranslateFormatParams,
)
from onshape_client.onshape_url import OnshapeElement

import socket
from contextlib import closing


@pytest.fixture
def free_port():
    with closing(socket.socket(socket.AF_INET, socket.SOCK_STREAM)) as s:
        s.bind(("", 0))
        s.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
        return s.getsockname()[1]


def tunnel(port):
    """Open a tunnel and return the public URL."""
    url = ngrok.connect(port=port)
    return url


@pytest.fixture
def webhook_server_factory(free_port):
    """For making a server that can accept Onshape webhooks."""

    servers = []
    threads = []

    def _webhook_server_factory():
        """ Create a factory to handle webhook notifications coming in.
        :param on_recieved: function callback to handle the json response from the webhook.
        :return: HTTPServer: server
        """

        class myHandler(BaseHTTPRequestHandler):
            def __init__(self, request, client_address, server):
                super().__init__(request, client_address, server)
                # Holds function that deals with the request.
                self.on_recieved = None

            def do_POST(self):
                content_length = int(self.headers["Content-Length"])
                body = self.rfile.read(content_length)
                unquoted_s = body.decode("utf-8")
                data = json.loads(unquoted_s)
                server._message_q.put(data)
                # Always return a 200 response to indicate it was gotten
                self.send_response(200)
                self.end_headers()

            def do_GET(self):

                raise NotImplementedError()

        class WebhookServer(HTTPServer):
            def __init__(
                self, server_address, RequestHandlerClass, bind_and_activate=True
            ):
                super().__init__(server_address, RequestHandlerClass, bind_and_activate)
                self._tunneled_url = None
                # Used to communicate to the main thread that a message has been recieved and needs to be processed.
                # The main thread is responsible for popping messages off as they are processed.
                self._message_q = queue.Queue()

            @property
            def url(self):
                return f"http://localhost:{self.server_port}"

            @property
            def tunneled_url(self):
                if not self._tunneled_url:
                    self._tunneled_url = tunnel(self.server_port)
                return self._tunneled_url

            def wait_for_message(
                self, message_predicate=lambda m: True, seconds_to_wait=5
            ):
                """ Block progress until a certain message is received that satisfies the passed message_predicate
                :param message_predicate: blocking function that takes the message and returns True
                    if it is the 'right one'.
                :param seconds_to_wait: seconds to wait for the message. This will throw a StopIteration
                    if the time runs out without a valid message.
                """
                start_time = time.time()
                poll_time = seconds_to_wait / 100
                while True:
                    try:
                        message = self._message_q.get(timeout=poll_time)
                        if message_predicate(message):
                            return
                        self._message_q.task_done()
                    except queue.Empty:
                        pass
                    if time.time() - start_time > seconds_to_wait:
                        raise TimeoutError()

        server = WebhookServer(("localhost", free_port), myHandler)
        servers.append(server)
        thread = Thread(target=server.serve_forever)
        thread.start()
        threads.append(thread)
        return server

    yield _webhook_server_factory
    for server, thread in zip(servers, threads):
        server.shutdown()
        thread.join()


def test_create_version_with_webhook(client, webhook_server_factory, new_document):
    server = webhook_server_factory()

    params = BTWebhookParams(
        events=["onshape.model.lifecycle.createversion",],
        url=server.tunneled_url,
        options=BTWebhookOptions(collapse_events=False),
        document_id=new_document.did,
    )
    client.webhooks_api.create_webhook(bt_webhook_params=params, _preload_content=False)
    server.wait_for_message(
        lambda m: m["event"] == "webhook.register", seconds_to_wait=30
    )

    new_document.make_version("new version!")

    server.wait_for_message(
        lambda m: m["event"] == "onshape.model.lifecycle.createversion",
        seconds_to_wait=30,
    )
