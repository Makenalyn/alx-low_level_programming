#!/bin/bash

export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
gcc -shared -o liball.so *.o
