#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "APEX::composer" for configuration "Release"
set_property(TARGET APEX::composer APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(APEX::composer PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libcomposer.dylib"
  IMPORTED_SONAME_RELEASE "@rpath/libcomposer.dylib"
  )

list(APPEND _cmake_import_check_targets APEX::composer )
list(APPEND _cmake_import_check_files_for_APEX::composer "${_IMPORT_PREFIX}/lib/libcomposer.dylib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
