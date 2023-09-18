#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c -fpic *.c
gcc -shared -o liball.so *.O
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
