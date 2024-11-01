# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\E-Resuelto02_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\E-Resuelto02_autogen.dir\\ParseCache.txt"
  "E-Resuelto02_autogen"
  )
endif()
