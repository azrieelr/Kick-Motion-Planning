// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kansei_interfaces:msg/Orientation.idl
// generated code does not contain a copyright notice

#ifndef KANSEI_INTERFACES__MSG__DETAIL__ORIENTATION__STRUCT_HPP_
#define KANSEI_INTERFACES__MSG__DETAIL__ORIENTATION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__kansei_interfaces__msg__Orientation __attribute__((deprecated))
#else
# define DEPRECATED__kansei_interfaces__msg__Orientation __declspec(deprecated)
#endif

namespace kansei_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Orientation_
{
  using Type = Orientation_<ContainerAllocator>;

  explicit Orientation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->orientation.begin(), this->orientation.end(), 0.0f);
    }
  }

  explicit Orientation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : orientation(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->orientation.begin(), this->orientation.end(), 0.0f);
    }
  }

  // field types and members
  using _orientation_type =
    std::array<float, 3>;
  _orientation_type orientation;

  // setters for named parameter idiom
  Type & set__orientation(
    const std::array<float, 3> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kansei_interfaces::msg::Orientation_<ContainerAllocator> *;
  using ConstRawPtr =
    const kansei_interfaces::msg::Orientation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kansei_interfaces::msg::Orientation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kansei_interfaces::msg::Orientation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kansei_interfaces::msg::Orientation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kansei_interfaces::msg::Orientation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kansei_interfaces::msg::Orientation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kansei_interfaces::msg::Orientation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kansei_interfaces::msg::Orientation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kansei_interfaces::msg::Orientation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kansei_interfaces__msg__Orientation
    std::shared_ptr<kansei_interfaces::msg::Orientation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kansei_interfaces__msg__Orientation
    std::shared_ptr<kansei_interfaces::msg::Orientation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Orientation_ & other) const
  {
    if (this->orientation != other.orientation) {
      return false;
    }
    return true;
  }
  bool operator!=(const Orientation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Orientation_

// alias to use template instance with default allocator
using Orientation =
  kansei_interfaces::msg::Orientation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kansei_interfaces

#endif  // KANSEI_INTERFACES__MSG__DETAIL__ORIENTATION__STRUCT_HPP_
