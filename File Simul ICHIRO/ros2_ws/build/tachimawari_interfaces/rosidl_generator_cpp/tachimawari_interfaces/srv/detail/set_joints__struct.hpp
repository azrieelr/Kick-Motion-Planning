// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tachimawari_interfaces:srv/SetJoints.idl
// generated code does not contain a copyright notice

#ifndef TACHIMAWARI_INTERFACES__SRV__DETAIL__SET_JOINTS__STRUCT_HPP_
#define TACHIMAWARI_INTERFACES__SRV__DETAIL__SET_JOINTS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'joints'
#include "tachimawari_interfaces/msg/detail/joint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tachimawari_interfaces__srv__SetJoints_Request __attribute__((deprecated))
#else
# define DEPRECATED__tachimawari_interfaces__srv__SetJoints_Request __declspec(deprecated)
#endif

namespace tachimawari_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetJoints_Request_
{
  using Type = SetJoints_Request_<ContainerAllocator>;

  explicit SetJoints_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SetJoints_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _joints_type =
    std::vector<tachimawari_interfaces::msg::Joint_<ContainerAllocator>, typename ContainerAllocator::template rebind<tachimawari_interfaces::msg::Joint_<ContainerAllocator>>::other>;
  _joints_type joints;

  // setters for named parameter idiom
  Type & set__joints(
    const std::vector<tachimawari_interfaces::msg::Joint_<ContainerAllocator>, typename ContainerAllocator::template rebind<tachimawari_interfaces::msg::Joint_<ContainerAllocator>>::other> & _arg)
  {
    this->joints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tachimawari_interfaces::srv::SetJoints_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tachimawari_interfaces::srv::SetJoints_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tachimawari_interfaces::srv::SetJoints_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tachimawari_interfaces::srv::SetJoints_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tachimawari_interfaces::srv::SetJoints_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tachimawari_interfaces::srv::SetJoints_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tachimawari_interfaces::srv::SetJoints_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tachimawari_interfaces::srv::SetJoints_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tachimawari_interfaces::srv::SetJoints_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tachimawari_interfaces::srv::SetJoints_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tachimawari_interfaces__srv__SetJoints_Request
    std::shared_ptr<tachimawari_interfaces::srv::SetJoints_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tachimawari_interfaces__srv__SetJoints_Request
    std::shared_ptr<tachimawari_interfaces::srv::SetJoints_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetJoints_Request_ & other) const
  {
    if (this->joints != other.joints) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetJoints_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetJoints_Request_

// alias to use template instance with default allocator
using SetJoints_Request =
  tachimawari_interfaces::srv::SetJoints_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tachimawari_interfaces


#ifndef _WIN32
# define DEPRECATED__tachimawari_interfaces__srv__SetJoints_Response __attribute__((deprecated))
#else
# define DEPRECATED__tachimawari_interfaces__srv__SetJoints_Response __declspec(deprecated)
#endif

namespace tachimawari_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetJoints_Response_
{
  using Type = SetJoints_Response_<ContainerAllocator>;

  explicit SetJoints_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit SetJoints_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tachimawari_interfaces::srv::SetJoints_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tachimawari_interfaces::srv::SetJoints_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tachimawari_interfaces::srv::SetJoints_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tachimawari_interfaces::srv::SetJoints_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tachimawari_interfaces::srv::SetJoints_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tachimawari_interfaces::srv::SetJoints_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tachimawari_interfaces::srv::SetJoints_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tachimawari_interfaces::srv::SetJoints_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tachimawari_interfaces::srv::SetJoints_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tachimawari_interfaces::srv::SetJoints_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tachimawari_interfaces__srv__SetJoints_Response
    std::shared_ptr<tachimawari_interfaces::srv::SetJoints_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tachimawari_interfaces__srv__SetJoints_Response
    std::shared_ptr<tachimawari_interfaces::srv::SetJoints_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetJoints_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetJoints_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetJoints_Response_

// alias to use template instance with default allocator
using SetJoints_Response =
  tachimawari_interfaces::srv::SetJoints_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tachimawari_interfaces

namespace tachimawari_interfaces
{

namespace srv
{

struct SetJoints
{
  using Request = tachimawari_interfaces::srv::SetJoints_Request;
  using Response = tachimawari_interfaces::srv::SetJoints_Response;
};

}  // namespace srv

}  // namespace tachimawari_interfaces

#endif  // TACHIMAWARI_INTERFACES__SRV__DETAIL__SET_JOINTS__STRUCT_HPP_
