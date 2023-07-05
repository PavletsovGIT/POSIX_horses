#!/bin/bash

gcc -c horses.c funcs.c
gcc -o ph_debug/gon horses.o funcs.o
rm -rf *.o
./ph_debug/gon
