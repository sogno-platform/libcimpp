#!/bin/sh

cd /github/workspace
git submodule update --init
mkdir build
cd build
cmake -DBUILD_SHARED_LIBS=ON ..
cpack
