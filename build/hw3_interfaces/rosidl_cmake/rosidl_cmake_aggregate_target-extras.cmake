# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target hw3_interfaces::hw3_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${hw3_interfaces_TARGETS}.
if(hw3_interfaces_TARGETS AND NOT TARGET hw3_interfaces::hw3_interfaces)
  add_library(hw3_interfaces::hw3_interfaces INTERFACE IMPORTED)
  set_target_properties(hw3_interfaces::hw3_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${hw3_interfaces_TARGETS}")
endif()
