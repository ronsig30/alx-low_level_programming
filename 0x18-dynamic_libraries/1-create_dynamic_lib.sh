#!/bin/bash
gcc -FPIC -c *.c
gcc -shared *.o -c liball.so
