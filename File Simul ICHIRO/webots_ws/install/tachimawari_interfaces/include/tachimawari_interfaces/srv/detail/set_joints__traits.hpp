// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tachimawari_interfaces:srv/SetJoints.idl
// generated code does not contain a copyright notice

#ifndef TACHIMAWARI_INTERFACES__SRV__DETAIL__SET_JOINTS__TRAITS_HPP_
#define TACHIMAWARI_INTERFACES__SRV__DETAIL__SET_JOINTS__TRAITS_HPP_

#include "tachimawari_interfaces/srv/detail/set_joints__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tachimawari_interfaces::srv::SetJoints_Request>()
{
  return "tachimawari_interfaces::srv::SetJoints_Request";
}

template<>
inline const char * name<tachimawari_interfaces::srv::SetJoints_Request>()
{
  return "tachimawari_interfaces/srv/SetJoints_Request";
}

template<>
struct has_fixed_size<tachimawari_interfaces::srv::SetJoints_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tachimawari_interfaces::srv::SetJoints_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tachimawari_interfaces::srv::SetJoints_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tachimawari_interfaces::srv::SetJoints_Response>()
{
  return "tachimawari_interfaces::srv::SetJoints_Response";
}

template<>
inline const char * name<tachimawari_interfaces::srv::SetJoints_Response>()
{
  return "tachimawari_interfaces/srv/SetJoints_Response";
}

template<>
struct has_fixed_size<tachimawari_interfaces::srv::SetJoints_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tachimawari_interfaces::srv::SetJoints_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tachimawari_interfaces::srv::SetJoints_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tachimawari_interfaces::srv::SetJoints>()
{
  return "tachimawari_interfaces::srv::SetJoints";
}

template<>
inline const char * name<tachimawari_interfaces::srv::SetJoints>()
{
  return "tachimawari_interfaces/srv/SetJoints";
}

template<>
struct has_fixed_size<tachimawari_interfaces::srv::SetJoints>
  : std::integral_constant<
    bool,
    has_fixed_size<tachimawari_interfaces::srv::SetJoints_Request>::value &&
    has_fixed_size<tachimawari_interfaces::srv::SetJoints_Response>::value
  >
{
};

template<>
struct has_bounded_size<tachimawari_interfaces::srv::SetJoints>
  : std::integral_constant<
    bool,
    has_bounded_size<tachimawari_interfaces::srv::SetJoints_Request>::value &&
    has_bounded_size<tachimawari_interfaces::srv::SetJoints_Response>::value
  >
{
};

template<>
struct is_service<tachimawari_interfaces::srv::SetJoints>
  : std::true_type
{
};

template<>
struct is_service_request<tachimawari_interfaces::srv::SetJoints_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tachimawari_interfaces::srv::SetJoints_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TACHIMAWARI_INTERFACES__SRV__DETAIL__SET_JOINTS__TRAITS_HPP_
