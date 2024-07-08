# Generated by BoostInstall.cmake for boost_interprocess-1.85.0

include(CMakeFindDependencyMacro)

if(NOT boost_assert_FOUND)
  find_dependency(boost_assert 1.85.0 EXACT)
endif()
if(NOT boost_config_FOUND)
  find_dependency(boost_config 1.85.0 EXACT)
endif()
if(NOT boost_container_FOUND)
  find_dependency(boost_container 1.85.0 EXACT)
endif()
if(NOT boost_core_FOUND)
  find_dependency(boost_core 1.85.0 EXACT)
endif()
if(NOT boost_intrusive_FOUND)
  find_dependency(boost_intrusive 1.85.0 EXACT)
endif()
if(NOT boost_move_FOUND)
  find_dependency(boost_move 1.85.0 EXACT)
endif()
if(NOT boost_static_assert_FOUND)
  find_dependency(boost_static_assert 1.85.0 EXACT)
endif()
if(NOT boost_type_traits_FOUND)
  find_dependency(boost_type_traits 1.85.0 EXACT)
endif()
if(NOT boost_winapi_FOUND)
  find_dependency(boost_winapi 1.85.0 EXACT)
endif()

include("${CMAKE_CURRENT_LIST_DIR}/boost_interprocess-targets.cmake")
