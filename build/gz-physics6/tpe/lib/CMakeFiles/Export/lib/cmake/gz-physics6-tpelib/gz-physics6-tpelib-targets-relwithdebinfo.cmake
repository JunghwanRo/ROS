#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "gz-physics6::gz-physics6-tpelib" for configuration "RelWithDebInfo"
set_property(TARGET gz-physics6::gz-physics6-tpelib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(gz-physics6::gz-physics6-tpelib PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libgz-physics6-tpelib.so.6.3.0"
  IMPORTED_SONAME_RELWITHDEBINFO "libgz-physics6-tpelib.so.6"
  )

list(APPEND _IMPORT_CHECK_TARGETS gz-physics6::gz-physics6-tpelib )
list(APPEND _IMPORT_CHECK_FILES_FOR_gz-physics6::gz-physics6-tpelib "${_IMPORT_PREFIX}/lib/libgz-physics6-tpelib.so.6.3.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
