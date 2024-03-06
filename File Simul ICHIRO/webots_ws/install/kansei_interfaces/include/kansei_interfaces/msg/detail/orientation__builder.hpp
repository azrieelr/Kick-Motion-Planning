// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kansei_interfaces:msg/Orientation.idl
// generated code does not contain a copyright notice

#ifndef KANSEI_INTERFACES__MSG__DETAIL__ORIENTATION__BUILDER_HPP_
#define KANSEI_INTERFACES__MSG__DETAIL__ORIENTATION__BUILDER_HPP_

#include "kansei_interfaces/msg/detail/orientation__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace kansei_interfaces
{

namespace msg
{

namespace builder
{

class Init_Orientation_orientation
{
public:
  Init_Orientation_orientation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::kansei_interfaces::msg::Orientation orientation(::kansei_interfaces::msg::Orientation::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kansei_interfaces::msg::Orientation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kansei_interfaces::msg::Orientation>()
{
  return kansei_interfaces::msg::builder::Init_Orientation_orientation();
}

}  // namespace kansei_interfaces

#endif  // KANSEI_INTERFACES__MSG__DETAIL__ORIENTATION__BUILDER_HPP_
