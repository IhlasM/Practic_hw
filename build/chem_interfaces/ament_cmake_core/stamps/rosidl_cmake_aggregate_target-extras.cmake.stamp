# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target chem_interfaces::chem_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${chem_interfaces_TARGETS}.
if(chem_interfaces_TARGETS AND NOT TARGET chem_interfaces::chem_interfaces)
  add_library(chem_interfaces::chem_interfaces INTERFACE IMPORTED)
  set_target_properties(chem_interfaces::chem_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${chem_interfaces_TARGETS}")
endif()
