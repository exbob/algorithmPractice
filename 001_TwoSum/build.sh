#!/usr/bin/bash

if [ -z ${1} ]; then
    cmake -S . -B Release
    cmake --build Release/
    echo "Build complete"
    echo "Run: ./Release/program"
elif [ ${1} == "clean" ]; then
    rm -rf Release
    echo "Removed Release directory"
    echo "Clean complete"
fi
