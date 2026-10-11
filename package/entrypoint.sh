#!/bin/sh

cd /github/workspace
rm -rf build
mkdir build
cd build
cmake -DUSE_CIM_VERSION=$USE_CIM_VERSION ..
cpack
