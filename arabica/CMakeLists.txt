cmake_minimum_required(VERSION 3.5)

project(arabica)

# Enable C++11 support
set(CMAKE_CXX_STANDARD 11)

set(LIB_NAME arabica)

set(ARABICA_MAJOR_VERSION 2016)
set(ARABICA_MINOR_VERSION January)

#
# Build as shared library
#
option(BUILD_SHARED_LIBS "Build as shared libaries" OFF)

#
# Set the used xml backend
# options: USE_MSXML, USE_EXPAT, USE_LIBXML2, USE_XERCES
set(ARABICA_XML_BACKEND USE_LIBXML2)

configure_file(${CMAKE_CURRENT_LIST_DIR}/include/SAX/ArabicaConfig.hpp.in ${CMAKE_CURRENT_BINARY_DIR}/include/SAX/ArabicaConfig.hpp)

#
# find libxml2: LIBXML2_INCLUDE_DIR LIBXML2_LIBRARIES
if(ARABICA_XML_BACKEND STREQUAL USE_LIBXML2)
  find_package(LibXml2)
  set(ADDITIONAL_INC ${LIBXML2_INCLUDE_DIR})
  set(ADDITIONAL_LIB ${LIBXML2_LIBRARIES})
endif()

#
# platform check
set(BUILD_X64 TRUE)

set(GENERATED_HEADER_FILES
  ${CMAKE_CURRENT_BINARY_DIR}/include/SAX/ArabicaConfig.hpp
)
source_group("Generated Header Files" FILES ${GENERATED_HEADER_FILES})

set(PUBLIC_HEADER_FILES
  include/SAX/AttributeList.hpp
  include/SAX/Attributes.hpp
  include/SAX/ContentHandler.hpp
  include/SAX/DocumentHandler.hpp
  include/SAX/DTDHandler.hpp
  include/SAX/EntityResolver.hpp
  include/SAX/ErrorHandler.hpp
  include/SAX/HandlerBase.hpp
  include/SAX/InputSource.hpp
  include/SAX/IStreamHandle.hpp
  include/SAX/Locator.hpp
  include/SAX/Parser.hpp
  include/SAX/ParserConfig.hpp
  include/SAX/SAXException.hpp
  include/SAX/saxfwd.hpp
  include/SAX/SAXNotRecognizedException.hpp
  include/SAX/SAXNotSupportedException.hpp
  include/SAX/SAXParseException.hpp
  include/SAX/XMLFilter.hpp
  include/SAX/XMLReader.hpp
  include/SAX/ext/Attributes2.hpp
  include/SAX/ext/DeclHandler.hpp
  include/SAX/ext/LexicalHandler.hpp
  include/SAX/ext/Locator2.hpp
  include/SAX/helpers/AttributeDefaults.hpp
  include/SAX/helpers/AttributeListImpl.hpp
  include/SAX/helpers/AttributesImpl.hpp
  include/SAX/helpers/AttributeTypes.hpp
  include/SAX/helpers/DefaultHandler.hpp
  include/SAX/helpers/FeatureNames.hpp
  include/SAX/helpers/InputSourceResolver.hpp
  include/SAX/helpers/NamespaceSupport.hpp
  include/SAX/helpers/PropertyNames.hpp
  include/SAX/helpers/XMLFilterImpl.hpp
  include/SAX/wrappers/saxlibxml2.hpp
  include/Arabica/getparam.hpp
  include/Arabica/StringAdaptor.hpp
  include/XML/QName.hpp
  include/XML/strings.hpp
  include/XML/XMLCharacterClasses.hpp
  include/io/convertstream.hpp
  include/io/socket_stream.hpp
  include/io/uri.hpp
  include/convert/impl/codecvt_specialisations.hpp
  include/convert/impl/ucs2_utf16.hpp
  include/convert/impl/ucs2_utf8.hpp
  include/convert/utf8ucs2codecvt.hpp
  include/text/normalize_whitespace.hpp
  include/text/UnicodeCharacters.hpp
  include/Taggle/impl/Element.hpp
  include/Taggle/impl/ElementType.hpp
  include/Taggle/impl/html/HTMLModels.hpp
  include/Taggle/impl/html/HTMLScanner.hpp
  include/Taggle/impl/html/HTMLSchema.hpp
  include/Taggle/impl/Parser.hpp
  include/Taggle/impl/ScanHandler.hpp
  include/Taggle/impl/Scanner.hpp
  include/Taggle/impl/Schema.hpp
  include/Taggle/impl/SchemaImpl.hpp
  include/Taggle/Taggle.hpp 
  )
source_group("Header Files" FILES ${PUBLIC_HEADER_FILES})

set(SOURCE_FILES
  src/arabica.cpp
  src/XML/XMLCharacterClasses.cpp
  src/SAX/helpers/InputSourceResolver.cpp
  src/io/uri.cpp
  src/convert/impl/ucs2_utf16.cpp
  src/convert/impl/ucs2_utf8.cpp
  src/convert/utf8ucs2codecvt.cpp
  src/taggle/Schema.cpp
)
source_group("Source Files" FILES ${SOURCE_FILES})


add_library (${LIB_NAME}
  ${GENERATED_HEADER_FILES}
  ${PUBLIC_HEADER_FILES}
  ${SOURCE_FILES}
)
target_compile_definitions(${LIB_NAME} PUBLIC "$<$<CONFIG:Debug>:ARABICA_DEBUG>")
target_compile_definitions(${LIB_NAME} PUBLIC ARABICA_NOT_USE_PRAGMA_LINKER_OPTIONS)
target_include_directories(${LIB_NAME} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/include>)
target_include_directories(${LIB_NAME} PUBLIC ${ADDITIONAL_INC} ${Boost_INCLUDE_DIRS})
target_include_directories(${LIB_NAME} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>)
# link backend
target_link_libraries(${LIB_NAME} ${ADDITIONAL_LIB})

set_target_properties(${LIB_NAME} PROPERTIES FOLDER "3rdparty/arabica")

#
# Install library
#
install(TARGETS ${LIB_NAME}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}/static
)

install(DIRECTORY include/
  DESTINATION include/${PROJECT_NAME}
  FILES_MATCHING
    PATTERN *.hpp
    PATTERN *.h
)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/include/SAX/ArabicaConfig.hpp
  DESTINATION include/${PROJECT_NAME}/SAX
)
