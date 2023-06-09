# Generated by CMake

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.5)
   message(FATAL_ERROR "CMake >= 2.6.0 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.6)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_targetsDefined)
set(_targetsNotDefined)
set(_expectedTargets)
foreach(_expectedTarget gz-sim8::gz-sim8)
  list(APPEND _expectedTargets ${_expectedTarget})
  if(NOT TARGET ${_expectedTarget})
    list(APPEND _targetsNotDefined ${_expectedTarget})
  endif()
  if(TARGET ${_expectedTarget})
    list(APPEND _targetsDefined ${_expectedTarget})
  endif()
endforeach()
if("${_targetsDefined}" STREQUAL "${_expectedTargets}")
  unset(_targetsDefined)
  unset(_targetsNotDefined)
  unset(_expectedTargets)
  set(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT "${_targetsDefined}" STREQUAL "")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_targetsDefined}\nTargets not yet defined: ${_targetsNotDefined}\n")
endif()
unset(_targetsDefined)
unset(_targetsNotDefined)
unset(_expectedTargets)


# Create imported target gz-sim8::gz-sim8
add_library(gz-sim8::gz-sim8 SHARED IMPORTED)

set_target_properties(gz-sim8::gz-sim8 PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_INCLUDE_DIRECTORIES "/home/julia/workspace/build/gz-sim8/include;/home/julia/workspace/build/gz-sim8/core/include;/home/julia/workspace/src/gz-sim/include;/home/julia/workspace/build/gz-sim8/src"
  INTERFACE_LINK_LIBRARIES "gz-math7;gz-plugin2::core;gz-common5::gz-common5;gz-common5::profiler;gz-fuel_tools8::gz-fuel_tools8;gz-gui8::gz-gui8;gz-transport12::gz-transport12;sdformat13::sdformat13;protobuf::libprotobuf"
)

# Import target "gz-sim8::gz-sim8" for configuration "RelWithDebInfo"
set_property(TARGET gz-sim8::gz-sim8 APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(gz-sim8::gz-sim8 PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "/home/julia/workspace/build/gz-sim8/lib/libgz-sim8.so.8.0.0~pre1"
  IMPORTED_SONAME_RELWITHDEBINFO "libgz-sim8.so.8"
  )

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
