// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tachimawari_interfaces:msg/Joint.idl
// generated code does not contain a copyright notice

#ifndef TACHIMAWARI_INTERFACES__MSG__DETAIL__JOINT__TRAITS_HPP_
#define TACHIMAWARI_INTERFACES__MSG__DETAIL__JOINT__TRAITS_HPP_

#include "tachimawari_interfaces/msg/detail/joint__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tachimawari_interfaces::msg::Joint>()
{
  return "tachimawari_interfaces::msg::Joint";
}

template<>
inline const char * name<tachimawari_interfaces::msg::Joint>()
{
  return "tachimawari_interfaces/msg/Joint";
}

template<>
struct has_fixed_size<tachimawari_interfaces::msg::Joint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tachimawari_interfaces::msg::Joint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tachimawari_interfaces::msg::Joint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TACHIMAWARI_INTERFACES__MSG__DETAIL__JOINT__TRAITS_HPP_
