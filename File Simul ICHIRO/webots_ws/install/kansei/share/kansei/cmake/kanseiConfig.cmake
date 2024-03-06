# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_kansei_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED kansei_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(kansei_FOUND FALSE)
  elseif(NOT kansei_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(kansei_FOUND FALSE)
  endif()
  return()
endif()
set(_kansei_CONFIG_INCLUDED TRUE)

# output package information
if(NOT kansei_FIND_QUIETLY)
  message(STATUS "Found kansei: 0.0.0 (${kansei_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'kansei' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${kansei_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(kansei_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${kansei_DIR}/${_extra}")
endforeach()
