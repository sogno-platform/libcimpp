#!/bin/sh

cd /github/workspace
rm -r build
mkdir build
cd build
cmake -DBUILD_SHARED_LIBS=ON ..
cpack
