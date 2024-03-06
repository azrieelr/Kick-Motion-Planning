// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tachimawari_interfaces:srv/SetJoints.idl
// generated code does not contain a copyright notice

#ifndef TACHIMAWARI_INTERFACES__SRV__DETAIL__SET_JOINTS__BUILDER_HPP_
#define TACHIMAWARI_INTERFACES__SRV__DETAIL__SET_JOINTS__BUILDER_HPP_

#include "tachimawari_interfaces/srv/detail/set_joints__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tachimawari_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetJoints_Request_joints
{
public:
  Init_SetJoints_Request_joints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tachimawari_interfaces::srv::SetJoints_Request joints(::tachimawari_interfaces::srv::SetJoints_Request::_joints_type arg)
  {
    msg_.joints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tachimawari_interfaces::srv::SetJoints_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tachimawari_interfaces::srv::SetJoints_Request>()
{
  return tachimawari_interfaces::srv::builder::Init_SetJoints_Request_joints();
}

}  // namespace tachimawari_interfaces


namespace tachimawari_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetJoints_Response_status
{
public:
  Init_SetJoints_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tachimawari_interfaces::srv::SetJoints_Response status(::tachimawari_interfaces::srv::SetJoints_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tachimawari_interfaces::srv::SetJoints_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tachimawari_interfaces::srv::SetJoints_Response>()
{
  return tachimawari_interfaces::srv::builder::Init_SetJoints_Response_status();
}

}  // namespace tachimawari_interfaces

#endif  // TACHIMAWARI_INTERFACES__SRV__DETAIL__SET_JOINTS__BUILDER_HPP_
