// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tachimawari_interfaces:msg/Joint.idl
// generated code does not contain a copyright notice

#ifndef TACHIMAWARI_INTERFACES__MSG__DETAIL__JOINT__BUILDER_HPP_
#define TACHIMAWARI_INTERFACES__MSG__DETAIL__JOINT__BUILDER_HPP_

#include "tachimawari_interfaces/msg/detail/joint__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tachimawari_interfaces
{

namespace msg
{

namespace builder
{

class Init_Joint_speed
{
public:
  explicit Init_Joint_speed(::tachimawari_interfaces::msg::Joint & msg)
  : msg_(msg)
  {}
  ::tachimawari_interfaces::msg::Joint speed(::tachimawari_interfaces::msg::Joint::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tachimawari_interfaces::msg::Joint msg_;
};

class Init_Joint_position
{
public:
  explicit Init_Joint_position(::tachimawari_interfaces::msg::Joint & msg)
  : msg_(msg)
  {}
  Init_Joint_speed position(::tachimawari_interfaces::msg::Joint::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Joint_speed(msg_);
  }

private:
  ::tachimawari_interfaces::msg::Joint msg_;
};

class Init_Joint_name
{
public:
  Init_Joint_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Joint_position name(::tachimawari_interfaces::msg::Joint::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Joint_position(msg_);
  }

private:
  ::tachimawari_interfaces::msg::Joint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tachimawari_interfaces::msg::Joint>()
{
  return tachimawari_interfaces::msg::builder::Init_Joint_name();
}

}  // namespace tachimawari_interfaces

#endif  // TACHIMAWARI_INTERFACES__MSG__DETAIL__JOINT__BUILDER_HPP_
