// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kansei_interfaces:msg/Fallen.idl
// generated code does not contain a copyright notice

#ifndef KANSEI_INTERFACES__MSG__DETAIL__FALLEN__BUILDER_HPP_
#define KANSEI_INTERFACES__MSG__DETAIL__FALLEN__BUILDER_HPP_

#include "kansei_interfaces/msg/detail/fallen__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace kansei_interfaces
{

namespace msg
{

namespace builder
{

class Init_Fallen_fallen_status
{
public:
  Init_Fallen_fallen_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::kansei_interfaces::msg::Fallen fallen_status(::kansei_interfaces::msg::Fallen::_fallen_status_type arg)
  {
    msg_.fallen_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kansei_interfaces::msg::Fallen msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kansei_interfaces::msg::Fallen>()
{
  return kansei_interfaces::msg::builder::Init_Fallen_fallen_status();
}

}  // namespace kansei_interfaces

#endif  // KANSEI_INTERFACES__MSG__DETAIL__FALLEN__BUILDER_HPP_
