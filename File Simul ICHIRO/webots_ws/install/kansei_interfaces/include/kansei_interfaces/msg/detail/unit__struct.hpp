// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kansei_interfaces:msg/Unit.idl
// generated code does not contain a copyright notice

#ifndef KANSEI_INTERFACES__MSG__DETAIL__UNIT__STRUCT_HPP_
#define KANSEI_INTERFACES__MSG__DETAIL__UNIT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__kansei_interfaces__msg__Unit __attribute__((deprecated))
#else
# define DEPRECATED__kansei_interfaces__msg__Unit __declspec(deprecated)
#endif

namespace kansei_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Unit_
{
  using Type = Unit_<ContainerAllocator>;

  explicit Unit_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->gyro.begin(), this->gyro.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->accelero.begin(), this->accelero.end(), 0.0f);
    }
  }

  explicit Unit_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : gyro(_alloc),
    accelero(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->gyro.begin(), this->gyro.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->accelero.begin(), this->accelero.end(), 0.0f);
    }
  }

  // field types and members
  using _gyro_type =
    std::array<float, 3>;
  _gyro_type gyro;
  using _accelero_type =
    std::array<float, 3>;
  _accelero_type accelero;

  // setters for named parameter idiom
  Type & set__gyro(
    const std::array<float, 3> & _arg)
  {
    this->gyro = _arg;
    return *this;
  }
  Type & set__accelero(
    const std::array<float, 3> & _arg)
  {
    this->accelero = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kansei_interfaces::msg::Unit_<ContainerAllocator> *;
  using ConstRawPtr =
    const kansei_interfaces::msg::Unit_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kansei_interfaces::msg::Unit_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kansei_interfaces::msg::Unit_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kansei_interfaces::msg::Unit_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kansei_interfaces::msg::Unit_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kansei_interfaces::msg::Unit_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kansei_interfaces::msg::Unit_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kansei_interfaces::msg::Unit_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kansei_interfaces::msg::Unit_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kansei_interfaces__msg__Unit
    std::shared_ptr<kansei_interfaces::msg::Unit_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kansei_interfaces__msg__Unit
    std::shared_ptr<kansei_interfaces::msg::Unit_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Unit_ & other) const
  {
    if (this->gyro != other.gyro) {
      return false;
    }
    if (this->accelero != other.accelero) {
      return false;
    }
    return true;
  }
  bool operator!=(const Unit_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Unit_

// alias to use template instance with default allocator
using Unit =
  kansei_interfaces::msg::Unit_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kansei_interfaces

#endif  // KANSEI_INTERFACES__MSG__DETAIL__UNIT__STRUCT_HPP_
