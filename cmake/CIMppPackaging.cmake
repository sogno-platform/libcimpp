set(CPACK_PACKAGE_NAME "libcimpp_${USE_CIM_VERSION}")
set(CPACK_PACKAGE_CONTACT "Lukas Razik <lrazik@eonerc.rwth-aachen.de>")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "CIM++ is deserialiser library for C++ objects from XML/RDF documents based on CIM standards")
set(CPACK_PACKAGE_VERSION_MAJOR ${libcimpp_MAJOR_VERSION})
set(CPACK_PACKAGE_VERSION_MINOR ${libcimpp_MINOR_VERSION})
set(CPACK_PACKAGE_VERSION_PATCH ${libcimpp_PATCH_VERSION})

set(CPACK_DEBIAN_PACKAGE_SECTION "devel")
set(CPACK_DEBIAN_PACKAGE_HOMEPAGE "https://sogno.energy/libcimpp/"  )
set(CPACK_DEBIAN_PACKAGE_ARCHITECTURE "amd64")

set(CPACK_RPM_PACKAGE_LICENSE "Apache-2.0")
set(CPACK_RPM_PACKAGE_URL "https://sogno.energy/libcimpp/")
set(CPACK_RPM_PACKAGE_GROUP "Development/Libraries")

set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/LICENSE")
set(CPACK_RESOURCE_FILE_README "${CMAKE_CURRENT_SOURCE_DIR}/README.md")

if(NOT CPACK_GENERATOR)
    set(CPACK_GENERATOR "DEB;RPM;TGZ")
endif()

include(CPack)
