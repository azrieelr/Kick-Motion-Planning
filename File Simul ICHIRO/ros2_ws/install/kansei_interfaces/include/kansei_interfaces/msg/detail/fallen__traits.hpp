// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kansei_interfaces:msg/Fallen.idl
// generated code does not contain a copyright notice

#ifndef KANSEI_INTERFACES__MSG__DETAIL__FALLEN__TRAITS_HPP_
#define KANSEI_INTERFACES__MSG__DETAIL__FALLEN__TRAITS_HPP_

#include "kansei_interfaces/msg/detail/fallen__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kansei_interfaces::msg::Fallen>()
{
  return "kansei_interfaces::msg::Fallen";
}

template<>
inline const char * name<kansei_interfaces::msg::Fallen>()
{
  return "kansei_interfaces/msg/Fallen";
}

template<>
struct has_fixed_size<kansei_interfaces::msg::Fallen>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kansei_interfaces::msg::Fallen>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kansei_interfaces::msg::Fallen>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KANSEI_INTERFACES__MSG__DETAIL__FALLEN__TRAITS_HPP_
