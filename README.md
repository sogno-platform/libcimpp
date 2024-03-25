libcimpp
========
libcimpp is a deserialiser library for C++ objects from XML/RDF documents based on the Common Information Model (CIM) standards (i.e. IEC61970/61968/62325) and CGMES for the energy sector.
It is part of the CIM++ project. More on CIM++ can be found [here](http://rdcu.be/vOop).

Supported CIM / CGMES versions:
- [CGMES_2.4.15_27JAN2020](https://sogno-platform.github.io/libcimpp/CGMES_2.4.15_27JAN2020/annotated.html)
- [IEC61970 16v29a](https://sogno-platform.github.io/libcimpp/IEC61970_16v29a/annotated.html)
- [IEC61970_16v29a_IEC61968_12v08](https://sogno-platform.github.io/libcimpp/IEC61970_16v29a_IEC61968_12v08/annotated.html)
- [IEC61970_17v07](https://sogno-platform.github.io/libcimpp/IEC61970_17v07/annotated.html)

## General information
limcimpp uses [arabica](http://www.jezuk.co.uk/cgi-bin/view/arabica) as cross platform wrapper around one of the XML parsers listed in the dependencies (see below).
It is recommended to use libcimpp as cmake module.

## Dependencies
You need following software packages for libcimpp:
+ One of the following XML parsers:
  + [libxml2](http://www.xmlsoft.org/) (usually chosen under Linux and often can be installed as a package of the used distribution)
  + [Xerces](http://xerces.apache.org/xerces-c/)
  + [Microsoft XML Parser](https://support.microsoft.com/en-en/help/324460) (this one is used per default when building with MS Visual Studio)
+ Build system:
  + [cmake](https://cmake.org/)


## Build instructions

### UNIX / Linux / MacOS

After getting the Git repository, create a build subdirectory and change into it:
```bash
mkdir build
cd build
```

For building libcimpp with the default CIM version, type:
```bash
cmake ..
make -j 4
```

For building libcimpp with a certain CIM version (e.g. `IEC61970_16v29a`), type:
```bash
cmake .. -DUSE_CIM_VERSION=IEC61970_16v29a
make -j 4
```

All available CIM versions are listed in the [CMakeLists.txt](CMakeLists.txt)

### Windows with MS Visual Studio
1. After getting the Git repository, create a `build` subdirectory.
2. Run the Windows CMake (GUI)
3. Set the
* source code directory, e.g.: `C:/git/libcimpp`
* build directory, e.g.: `C:/git/libcimpp/build`
4. Click on `Configure` and choose the Visual Studio project version, e.g.: `Visual Studio 15 2017`
5. Click on `Finish` and wait while CMake is configuring the project.
6. Click on `Generate` to generate the Visual Studio project files.
7. Click on `Open Project` to open the project in Visual Studio.
8. In Visual Studio's main menu choose `Build -> Build Solution`. This will build the `libcimpp` library.

## Usage of the libcimpp library
For information on how to use the library please see the cmake based example in examples/cmake.
Building the example is just like building the library itself using cmake.
The make example is currently not supported due to the lack of an install target for arabica.
