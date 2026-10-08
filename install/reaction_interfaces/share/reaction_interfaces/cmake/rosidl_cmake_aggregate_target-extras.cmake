# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target reaction_interfaces::reaction_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${reaction_interfaces_TARGETS}.
if(reaction_interfaces_TARGETS AND NOT TARGET reaction_interfaces::reaction_interfaces)
  add_library(reaction_interfaces::reaction_interfaces INTERFACE IMPORTED)
  set_target_properties(reaction_interfaces::reaction_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${reaction_interfaces_TARGETS}")
endif()
