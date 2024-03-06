# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_tachimawari_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED tachimawari_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(tachimawari_FOUND FALSE)
  elseif(NOT tachimawari_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(tachimawari_FOUND FALSE)
  endif()
  return()
endif()
set(_tachimawari_CONFIG_INCLUDED TRUE)

# output package information
if(NOT tachimawari_FIND_QUIETLY)
  message(STATUS "Found tachimawari: 0.1.0 (${tachimawari_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'tachimawari' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${tachimawari_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(tachimawari_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${tachimawari_DIR}/${_extra}")
endforeach()
