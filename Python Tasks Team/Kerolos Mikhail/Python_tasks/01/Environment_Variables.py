# This program accesses environment variables

import os


# set a new environment variable
os.environ['NEW_VAR'] = 'PATH'

# get the value of an environment variable
var = os.environ['NEW_VAR']
print(var)