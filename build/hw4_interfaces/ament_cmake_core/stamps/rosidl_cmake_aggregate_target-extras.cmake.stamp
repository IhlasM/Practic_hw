# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target hw4_interfaces::hw4_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${hw4_interfaces_TARGETS}.
if(hw4_interfaces_TARGETS AND NOT TARGET hw4_interfaces::hw4_interfaces)
  add_library(hw4_interfaces::hw4_interfaces INTERFACE IMPORTED)
  set_target_properties(hw4_interfaces::hw4_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${hw4_interfaces_TARGETS}")
endif()
