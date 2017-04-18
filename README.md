CIM-XML-Parser
==============

### Licensing
For **non-commercial** use this software is licensed under the terms in the included [LICENSE](LICENSE) file.
In case of **commercial** use you are required to negotiate a proper license model with the *Institute for Automation of Complex Power Systems* at *RWTH Aachen University*. Therefor please write to [acs-sek@eonerc.rwth-aachen.de](mailto:acs-sek@eonerc.rwth-aachen.de).

### v2.x
#### General
Version `v2.x` uses [arabica](http://www.jezuk.co.uk/cgi-bin/view/arabica) as a cross platform wrapper around one of the XML parsers listed int the dependencies.
It is recommended to use the CIM parser as a cmake module.
Currently the CIM parser does not provide an install target.

#### Dependencies
+ One of the following XML Parsers:
  + [libxml2](http://www.xmlsoft.org/)
  + [expat](http://expat.sourceforge.net/)
  + [Xerces](http://xerces.apache.org/xerces-c/)
  + [Microsoft XML Parser](https://support.microsoft.com/en-en/help/324460)
+ Buildsystem:
  + [cmake](https://cmake.org/)

#### Build instructions for using the CIM parser as a cmake module
To use the CIM parser as an cmake module, the project using the CIM parser needs to be an cmake project itself.

1. Clone the release branch of the CIM parser repository
  + Usually but not necessary into a subdirectory
2. Assuming the project using the CIM parser has a CMakeLists.txt with one of the following lines:
  + `add_executable(target_name ...)`
  + `add_library(target_name ...)`

  One can link the CIM parser using the cmake statement
  + `target_link_library(target_name CIMParser)`
3. Build the project
  + CMake will automatically build the CIM parser as a dependency


#### Build instructions for using the CIM parser in general (UNIX)
1. Clone the release branch of the CIM parser repository
2. Create a build directory and change into it
  + Can be either in or out of tree
3. Call `cmake [CIMParser root directory]`
4. Build the CIM parser using make

#### Build instructions for using the CIM parser in general (MS Visual Studio)
1. Clone the release branch of the CIM parser repository
2. Create a build directory
  + Can be either in or out of tree
3. Use the cmake GUI to configure cmake project and generate Visual Studio project files
  + Set CIM parser root directory
  + Set build directory
4. Open the *.vcxproj file with Visual Studio
  + Now the CIM parser can be build using the Visual Studio Compiler

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
