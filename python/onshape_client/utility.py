"""A collection of utility functions"""


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
