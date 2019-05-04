"""A collection of utility functions"""
import json
from onshape_client.client import Client
import os

def parse_quantity(q):
    """
    Parse an Onshape units definition
    Args:
        q:an Onshape units definition... for instance:
            {
              'typeTag': '',
              'unitToPower': [
                {
                  'key': 'METER',
                  'value': 1
                }
              ],
              'value': 0.0868175271040671
            }

    Returns:
        a string that can be converted to any other unit engine.

    >>> from onshape_client.utility import parse_quantity
    >>> d = {'value': 0.1414213562373095, 'unitToPower': [{'value': 1, 'key': 'METER'}], 'typeTag': ''}
    >>> parse_quantity(d)
    '0.1414213562373095*meter'

    >>> d = {'value': 0.1414213562373095, 'unitToPower': [{'value': 3, 'key': 'MILLIMETER'}], 'typeTag': ''}
    >>> parse_quantity(d)
    '0.1414213562373095*millimeter**3'
    """
    units_s = str(q['value'])
    for u in q['unitToPower']:
        units_s = units_s + "*" + u['key'].lower()
        power = u['value']
        if not power == 1:
            units_s = units_s + "**" + str(power)
    return units_s


def get_field(response, field):
    data = json.loads(response.data.decode("UTF-8"))
    return data[field]


def write_to_file(data_uri):
    """Write a data uri to a local file"""
    from base64 import b64decode
    import re

    header, encoded = data_uri.split(",", 1)
    data = b64decode(encoded)
    pattern = re.compile(r"""name=([^;]*)""")
    name = pattern.search(header).groups()[0]
    name = name.replace("+", " ")
    tmp_path = "tmp/"
    try:
        os.mkdir(tmp_path)
    except BaseException:
        pass
    file_path = os.getcwd() + "/" + tmp_path + name
    with open(file_path, "wb") as f:
        f.write(data)

    return file_path