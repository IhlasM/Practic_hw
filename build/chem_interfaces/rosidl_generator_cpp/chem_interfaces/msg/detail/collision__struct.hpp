// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from chem_interfaces:msg/Collision.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "chem_interfaces/msg/collision.hpp"


#ifndef CHEM_INTERFACES__MSG__DETAIL__COLLISION__STRUCT_HPP_
#define CHEM_INTERFACES__MSG__DETAIL__COLLISION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__chem_interfaces__msg__Collision __attribute__((deprecated))
#else
# define DEPRECATED__chem_interfaces__msg__Collision __declspec(deprecated)
#endif

namespace chem_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Collision_
{
  using Type = Collision_<ContainerAllocator>;

  explicit Collision_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kind = 0;
      this->x = 0.0f;
      this->y = 0.0f;
    }
  }

  explicit Collision_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kind = 0;
      this->x = 0.0f;
      this->y = 0.0f;
    }
  }

  // field types and members
  using _kind_type =
    uint8_t;
  _kind_type kind;
  using _turtles_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _turtles_type turtles;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;

  // setters for named parameter idiom
  Type & set__kind(
    const uint8_t & _arg)
  {
    this->kind = _arg;
    return *this;
  }
  Type & set__turtles(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->turtles = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t PAIR =
    2u;
  static constexpr uint8_t TRIPLE =
    3u;

  // pointer types
  using RawPtr =
    chem_interfaces::msg::Collision_<ContainerAllocator> *;
  using ConstRawPtr =
    const chem_interfaces::msg::Collision_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<chem_interfaces::msg::Collision_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<chem_interfaces::msg::Collision_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      chem_interfaces::msg::Collision_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<chem_interfaces::msg::Collision_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      chem_interfaces::msg::Collision_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<chem_interfaces::msg::Collision_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<chem_interfaces::msg::Collision_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<chem_interfaces::msg::Collision_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__chem_interfaces__msg__Collision
    std::shared_ptr<chem_interfaces::msg::Collision_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__chem_interfaces__msg__Collision
    std::shared_ptr<chem_interfaces::msg::Collision_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Collision_ & other) const
  {
    if (this->kind != other.kind) {
      return false;
    }
    if (this->turtles != other.turtles) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const Collision_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Collision_

// alias to use template instance with default allocator
using Collision =
  chem_interfaces::msg::Collision_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Collision_<ContainerAllocator>::PAIR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Collision_<ContainerAllocator>::TRIPLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace chem_interfaces

#endif  // CHEM_INTERFACES__MSG__DETAIL__COLLISION__STRUCT_HPP_
