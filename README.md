libcimpp
========

### Licensing
For **non-commercial** use this software is licensed under the terms in the included [LICENSE](LICENSE) file.
In case of **commercial** use, you are asked to inform the *Institute for Automation of Complex Power Systems* at *RWTH Aachen University*. Therefore please write to [acs-sek@eonerc.rwth-aachen.de](mailto:acs-sek@eonerc.rwth-aachen.de).

### Context
More about the idea you can read [here](http://rdcu.be/vOop) and the CIM++ hompage you can find [here](http://fine-aachen.rwth-aachen.de/projects/cimpp).

### v2.x
#### General
Version `v2.x` uses [arabica](http://www.jezuk.co.uk/cgi-bin/view/arabica) as a cross platform wrapper around one of the XML parsers listed int the dependencies.
It is recommended to use libcimpp as a cmake module.
Currently the libcimpp does not provide an install target.

#### Dependencies
+ One of the following XML Parsers:
  + [libxml2](http://www.xmlsoft.org/)
  + [expat](http://expat.sourceforge.net/)
  + [Xerces](http://xerces.apache.org/xerces-c/)
  + [Microsoft XML Parser](https://support.microsoft.com/en-en/help/324460)
+ Buildsystem:
  + [cmake](https://cmake.org/)

#### Build instructions for using libcimpp as a cmake module
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


#### Build instructions for using libcimpp in general (UNIX)
1. Clone the release branch of libcimpp repository
2. Create a build directory and change into it
  + Can be either in or out of tree
3. Call `cmake [libcimpp root directory]`
  + Alternatively specify CIM version
  `cmake [libcimpp root directory] -DUSE_CIM_VERSION=[CIM Version]`
  + Valid options are
    * `IEC61970CIM16v29a` (default)
    * `IEC61970CIM16v29a_12v08`
    * `IEC61970CIM17v07`
    * `IEC61970CIM16v29a_SINERGIEN`
4. Build libcimpp using make

#### Build instructions for using libcimpp in general (MS Visual Studio)
1. Clone the release branch of libcimpp repository
2. Create a build directory
  + Can be either in or out of tree
3. Use the cmake GUI to configure cmake project and generate Visual Studio project files
  + Set libcimpp root directory (with the `CMakeLists.txt`)
  + Set build directory
4. Open the *.vcxproj file with Visual Studio
  + Now libcimpp can be build using the Visual Studio Compiler

#### Usage of the library
For information how to use the library please see the cmake example. The make example is currently not supported due to the lack of an install target for arabica.


### v1.x
#### General
Version v1.x and v2.x use the same backend and require the same build instructions. They differ only in interface and functionality.


### v0.x
Version `v0.x` uses [libxml2++](http://libxmlplusplus.sourceforge.net/) as XML backend. For more information see the README provided with Version 0.x.

#### Dependencies
+ [libxml2](http://www.xmlsoft.org/)
+ [libxml2++](http://libxmlplusplus.sourceforge.net/)
+ Buildsystem:
  + [cmake](https://cmake.org/)
