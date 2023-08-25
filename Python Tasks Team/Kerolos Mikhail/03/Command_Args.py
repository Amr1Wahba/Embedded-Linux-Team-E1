# Python program to get 
# the command line arguments

import sys

no_args = len(sys.argv)
print("Number of arguments : {}".format(no_args - 1))

# Display Arguments
for arg in range(1,no_args):
    print("Arg {} : {}".format(arg, sys.argv[arg]))
