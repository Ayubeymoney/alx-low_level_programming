#!/bin/bash

# Compile and create object files from all .c files in the current directory
gcc -c *.c

# Create the static library liball.a
ar rc liball.a *.o

# Index the library for faster linking
ranlib liball.a

# Clean up object files
rm -f *.o
