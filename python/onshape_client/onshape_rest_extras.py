"""This is for storing all the Onshape-specific functionality added so it is all in one place"""
import six
import re
from onshape_client.compatible_imports import unquote

def decode_file_name_from_header(content_disposition_header):
    filename_potential = re.search(r"""filename\*?=([^\s]+)""",
                         content_disposition_header)
    if "UTF-8" in filename_potential.group(1):
        filename_potential = re.search(r"""UTF-8[^\d\%]*([^\'\s]+)""", content_disposition_header)
        filename = unquote(filename_potential.group(1))
    else:
        filename = filename_potential.group(1).replace('"', '').replace("'", "")
    return filename