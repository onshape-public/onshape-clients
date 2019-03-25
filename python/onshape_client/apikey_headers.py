"""A custom module that enables Swagger to fully support our HMAC scheme with the API keys. This generates the correct
authentication headers for the given API call."""

import os
import random
import string
import json
import hmac
import hashlib
import base64
import urllib
import datetime
import six
from six.moves.urllib.parse import urlencode, quote_plus


def add_auth_headers(method, path, access_key, secret_key, query_params={}, headers={}):
    '''
    Creates a headers object to sign the request

    Args:
        - method (str): HTTP method
        - path (str): Request path, e.g. /api/documents. No query string
        - query (dict, default={}): Query string in key-value format
        - headers (dict, default={}): Other headers to pass in

    Returns:
        - dict: Dictionary containing all headers
    '''
    method = method.lower()
    date = datetime.datetime.utcnow().strftime('%a, %d %b %Y %H:%M:%S GMT')
    nonce = _make_nonce()
    ctype = headers['Content-Type']

    auth = _make_auth(method, date, nonce, path, access_key, secret_key, query_string=urlencode(query_params), ctype=ctype)

    req_headers = {
        'Date': date,
        'On-Nonce': nonce,
        'Authorization': auth
    }

    headers.update(req_headers)

    return headers


def _make_nonce():
    '''
    Generate a unique ID for the request, 25 chars in length

    Returns:
        - str: Cryptographic nonce
    '''

    chars = string.digits + string.ascii_letters
    nonce = ''.join(random.choice(chars) for i in range(25))

    # if self._logging:
    #     utils.log('nonce created: %s' % nonce)

    return nonce


def _make_auth(method, date, nonce, path, access_key, secret_key, query_string="", ctype='application/json'):
    '''
    Create the request signature to authenticate

    Args:
        - method (str): HTTP method
        - date (str): HTTP date header string
        - nonce (str): Cryptographic nonce
        - path (str): URL pathname
        - query (dict, default={}): URL query string in key-value pairs
        - ctype (str, default='application/json'): HTTP Content-Type
    '''

    if isinstance(secret_key, str):
        secret_key = secret_key.encode('utf-8')
    if isinstance(access_key, str):
        access_key = access_key.encode('utf-8')

    # query = urlencode(query)

    hmac_str = (method + '\n' + nonce + '\n' + date + '\n' + ctype + '\n' + path +
                '\n' + query_string + '\n').lower().encode('UTF_8')

    signature = base64.b64encode(hmac.new(secret_key, hmac_str, digestmod=hashlib.sha256).digest())
    auth = 'On ' + access_key.decode('UTF_8') + ':HmacSHA256:' + signature.decode('UTF_8')

    return auth
