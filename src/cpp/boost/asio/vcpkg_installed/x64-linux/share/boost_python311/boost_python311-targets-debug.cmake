#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Boost::python311" for configuration "Debug"
set_property(TARGET Boost::python311 APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(Boost::python311 PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/debug/lib/libboost_python311.a"
  )

list(APPEND _cmake_import_check_targets Boost::python311 )
list(APPEND _cmake_import_check_files_for_Boost::python311 "${_IMPORT_PREFIX}/debug/lib/libboost_python311.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)