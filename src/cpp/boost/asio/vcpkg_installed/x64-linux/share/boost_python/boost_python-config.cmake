# Generated by BoostInstall.cmake for boost_python-1.85.0

include(CMakeFindDependencyMacro)

if(NOT boost_python311_FOUND)
  find_dependency(boost_python311 1.85.0 EXACT)
endif()

include("${CMAKE_CURRENT_LIST_DIR}/boost_python-targets.cmake")
