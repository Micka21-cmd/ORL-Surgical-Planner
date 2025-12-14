# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_ear_centerline_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED ear_centerline_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(ear_centerline_FOUND FALSE)
  elseif(NOT ear_centerline_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(ear_centerline_FOUND FALSE)
  endif()
  return()
endif()
set(_ear_centerline_CONFIG_INCLUDED TRUE)

# output package information
if(NOT ear_centerline_FIND_QUIETLY)
  message(STATUS "Found ear_centerline: 0.0.1 (${ear_centerline_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'ear_centerline' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ear_centerline_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(ear_centerline_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${ear_centerline_DIR}/${_extra}")
endforeach()
