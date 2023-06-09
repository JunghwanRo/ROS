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
foreach(_expectedTarget gz-sensors8::gz-sensors8)
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


# Create imported target gz-sensors8::gz-sensors8
add_library(gz-sensors8::gz-sensors8 SHARED IMPORTED)

set_target_properties(gz-sensors8::gz-sensors8 PROPERTIES
  INTERFACE_COMPILE_DEFINITIONS "DepthPoints_EXPORTS"
  INTERFACE_INCLUDE_DIRECTORIES "/home/julia/workspace/build/gz-sensors8/include;/home/julia/workspace/build/gz-sensors8/core/include;/home/julia/workspace/src/gz-sensors/include"
  INTERFACE_LINK_LIBRARIES "gz-math7::gz-math7;gz-common5::gz-common5;gz-transport12::gz-transport12;sdformat13::sdformat13"
)

# Import target "gz-sensors8::gz-sensors8" for configuration "RelWithDebInfo"
set_property(TARGET gz-sensors8::gz-sensors8 APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(gz-sensors8::gz-sensors8 PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELWITHDEBINFO "gz-msgs9::gz-msgs9"
  IMPORTED_LOCATION_RELWITHDEBINFO "/home/julia/workspace/build/gz-sensors8/lib/libgz-sensors8.so.8.0.0~pre1"
  IMPORTED_SONAME_RELWITHDEBINFO "libgz-sensors8.so.8"
  )

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
