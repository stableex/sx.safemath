#!/bin/bash

# compile
g++ -std=c++11 -Wall -o safemath.t.out safemath.t.cpp -I ../

# test
./safemath.t.out --success
