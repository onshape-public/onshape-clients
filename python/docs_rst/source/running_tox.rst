Running Tox
===================================

To run tox locally, you need to turn off the locking function of pipenv by setting the env var PIPENV_SKIP_LOCK. For example:

.. code-block:: bash
export PIPENV_SKIP_LOCK=True
pipenv run tox

If everything goes well, tox should test your code in both python 2 and 3.