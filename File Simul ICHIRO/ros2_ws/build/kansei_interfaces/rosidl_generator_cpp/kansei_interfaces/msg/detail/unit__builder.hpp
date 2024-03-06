// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kansei_interfaces:msg/Unit.idl
// generated code does not contain a copyright notice

#ifndef KANSEI_INTERFACES__MSG__DETAIL__UNIT__BUILDER_HPP_
#define KANSEI_INTERFACES__MSG__DETAIL__UNIT__BUILDER_HPP_

#include "kansei_interfaces/msg/detail/unit__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace kansei_interfaces
{

namespace msg
{

namespace builder
{

class Init_Unit_accelero
{
public:
  explicit Init_Unit_accelero(::kansei_interfaces::msg::Unit & msg)
  : msg_(msg)
  {}
  ::kansei_interfaces::msg::Unit accelero(::kansei_interfaces::msg::Unit::_accelero_type arg)
  {
    msg_.accelero = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kansei_interfaces::msg::Unit msg_;
};

class Init_Unit_gyro
{
public:
  Init_Unit_gyro()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Unit_accelero gyro(::kansei_interfaces::msg::Unit::_gyro_type arg)
  {
    msg_.gyro = std::move(arg);
    return Init_Unit_accelero(msg_);
  }

private:
  ::kansei_interfaces::msg::Unit msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kansei_interfaces::msg::Unit>()
{
  return kansei_interfaces::msg::builder::Init_Unit_gyro();
}

}  // namespace kansei_interfaces

#endif  // KANSEI_INTERFACES__MSG__DETAIL__UNIT__BUILDER_HPP_
