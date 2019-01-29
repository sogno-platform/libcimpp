libcimpp
========

## Licensing
For **non-commercial** use this software is licensed under the terms in the included [LICENSE](LICENSE) file.
In case of **commercial** use, you are asked to inform the *Institute for Automation of Complex Power Systems* at *RWTH Aachen University*. Therefore please write to [acs-sek@eonerc.rwth-aachen.de](mailto:acs-sek@eonerc.rwth-aachen.de).

## Context
More about the idea you can read [here](http://rdcu.be/vOop). The CIM++ hompage you can find [here](http://fine-aachen.rwth-aachen.de/projects/cimpp).

## General
Version `v2.x` uses [arabica](http://www.jezuk.co.uk/cgi-bin/view/arabica) as a cross platform wrapper around one of the XML parsers listed int the dependencies.
It is recommended to use libcimpp as a cmake module.
Currently the libcimpp does not provide an install target.

## Dependencies
You need following software packages for libcimpp:
+ One of the following XML parsers:
  + [libxml2](http://www.xmlsoft.org/) (usually chosen under Linux and usually can be installed as a package)
  + [expat](http://expat.sourceforge.net/)
  + [Xerces](http://xerces.apache.org/xerces-c/)
  + [Microsoft XML Parser](https://support.microsoft.com/en-en/help/324460) (this comes with Visual Studio and is the default when compiling with it)
+ Build system:
  + [cmake](https://cmake.org/)

## Get Git repository
```bash
git clone https://github.com/RWTH-ACS/libcimpp.git
cd libcimpp
git submodule update --init --recursive
```

## Build instructions
## The UNIX / Linux / MacOS way
After getting the Git repository, create a build subdirectory and change into it:
```bash
mkdir build
cd build
```

For building `libcimpp` with the default CIM version, write:
```bash
cmake ..
make -j 4
```

For building `libcimpp` with a certain CIM version (e.g. `IEC61970_16v29a`), type:
```bash
cmake [libcimpp root directory] -DUSE_CIM_VERSION=IEC61970_16v29a
make -j 4
```
All available CIM versions can be determined in the [CMakeLists.txt](CMakeLists.txt)

### The Windows way with MS Visual Studio
1. After getting the Git repository, create a `build` subdirectory.
2. Run the Windows CMake (GUI)
3. Set the
* source code directory, e.g.: `C:/git/libcimpp`
* build directory, e.g.: `C:/git/libcimpp/build`
4. Click on `Configure` and choose the Visual Studio project version, e.g.: `Visual Studio 15 2017`
5. Click on `Finish` and wait while CMake is configuring the project.
6. Click on `Generate` to generate the Visual Studio project files.
7. Click on `Open Project` to open Visual Studio.
8. In Visual Studio's main menu choose `Build -> Build Solution`. This will build the library.

### Build instructions for using libcimpp as a cmake module [TODO: This section needs rewriting...]
To use libcimpp as an cmake module, the project using the CIM parser needs to be an cmake project itself.

1. Clone the release branch of libcimpp repository
  + Usually but not necessary into a subdirectory
2. Assuming the project using libcimpp has a CMakeLists.txt with one of the following lines:
  + `add_executable(target_name ...)`
  + `add_library(target_name ...)`

  One can link libcimpp using the cmake statement
  + `target_link_library(target_name cimpp)`
3. Build the project
  + CMake will automatically build libcimpp as a dependency


### Usage of the library
For information how to use the library please see the cmake example. The make example is currently not supported due to the lack of an install target for arabica.
