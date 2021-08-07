# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_aimibot_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED aimibot_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(aimibot_FOUND FALSE)
  elseif(NOT aimibot_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(aimibot_FOUND FALSE)
  endif()
  return()
endif()
set(_aimibot_CONFIG_INCLUDED TRUE)

# output package information
if(NOT aimibot_FIND_QUIETLY)
  message(STATUS "Found aimibot: 0.0.0 (${aimibot_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'aimibot' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${aimibot_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(aimibot_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_include_directories-extras.cmake")
foreach(_extra ${_extras})
  include("${aimibot_DIR}/${_extra}")
endforeach()
