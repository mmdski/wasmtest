#!/bin/sh

emcc test.c -o test.js -O0 \
    -s EXPORTED_FUNCTIONS='["_calloc", "_malloc", "_free"]' \
    -s EXPORTED_RUNTIME_METHODS='["ccall", "cwrap"]' \
    -s INITIAL_MEMORY=33554432
