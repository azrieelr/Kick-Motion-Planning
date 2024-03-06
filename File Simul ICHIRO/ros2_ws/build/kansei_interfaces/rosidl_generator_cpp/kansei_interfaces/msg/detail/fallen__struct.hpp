// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kansei_interfaces:msg/Fallen.idl
// generated code does not contain a copyright notice

#ifndef KANSEI_INTERFACES__MSG__DETAIL__FALLEN__STRUCT_HPP_
#define KANSEI_INTERFACES__MSG__DETAIL__FALLEN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__kansei_interfaces__msg__Fallen __attribute__((deprecated))
#else
# define DEPRECATED__kansei_interfaces__msg__Fallen __declspec(deprecated)
#endif

namespace kansei_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Fallen_
{
  using Type = Fallen_<ContainerAllocator>;

  explicit Fallen_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fallen_status = 0;
    }
  }

  explicit Fallen_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fallen_status = 0;
    }
  }

  // field types and members
  using _fallen_status_type =
    int8_t;
  _fallen_status_type fallen_status;

  // setters for named parameter idiom
  Type & set__fallen_status(
    const int8_t & _arg)
  {
    this->fallen_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kansei_interfaces::msg::Fallen_<ContainerAllocator> *;
  using ConstRawPtr =
    const kansei_interfaces::msg::Fallen_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kansei_interfaces::msg::Fallen_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kansei_interfaces::msg::Fallen_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kansei_interfaces::msg::Fallen_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kansei_interfaces::msg::Fallen_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kansei_interfaces::msg::Fallen_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kansei_interfaces::msg::Fallen_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kansei_interfaces::msg::Fallen_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kansei_interfaces::msg::Fallen_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kansei_interfaces__msg__Fallen
    std::shared_ptr<kansei_interfaces::msg::Fallen_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kansei_interfaces__msg__Fallen
    std::shared_ptr<kansei_interfaces::msg::Fallen_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Fallen_ & other) const
  {
    if (this->fallen_status != other.fallen_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const Fallen_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Fallen_

// alias to use template instance with default allocator
using Fallen =
  kansei_interfaces::msg::Fallen_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kansei_interfaces

#endif  // KANSEI_INTERFACES__MSG__DETAIL__FALLEN__STRUCT_HPP_
