// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tachimawari_interfaces:msg/Joint.idl
// generated code does not contain a copyright notice

#ifndef TACHIMAWARI_INTERFACES__MSG__DETAIL__JOINT__FUNCTIONS_H_
#define TACHIMAWARI_INTERFACES__MSG__DETAIL__JOINT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tachimawari_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "tachimawari_interfaces/msg/detail/joint__struct.h"

/// Initialize msg/Joint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tachimawari_interfaces__msg__Joint
 * )) before or use
 * tachimawari_interfaces__msg__Joint__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tachimawari_interfaces
bool
tachimawari_interfaces__msg__Joint__init(tachimawari_interfaces__msg__Joint * msg);

/// Finalize msg/Joint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tachimawari_interfaces
void
tachimawari_interfaces__msg__Joint__fini(tachimawari_interfaces__msg__Joint * msg);

/// Create msg/Joint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tachimawari_interfaces__msg__Joint__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tachimawari_interfaces
tachimawari_interfaces__msg__Joint *
tachimawari_interfaces__msg__Joint__create();

/// Destroy msg/Joint message.
/**
 * It calls
 * tachimawari_interfaces__msg__Joint__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tachimawari_interfaces
void
tachimawari_interfaces__msg__Joint__destroy(tachimawari_interfaces__msg__Joint * msg);


/// Initialize array of msg/Joint messages.
/**
 * It allocates the memory for the number of elements and calls
 * tachimawari_interfaces__msg__Joint__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tachimawari_interfaces
bool
tachimawari_interfaces__msg__Joint__Sequence__init(tachimawari_interfaces__msg__Joint__Sequence * array, size_t size);

/// Finalize array of msg/Joint messages.
/**
 * It calls
 * tachimawari_interfaces__msg__Joint__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tachimawari_interfaces
void
tachimawari_interfaces__msg__Joint__Sequence__fini(tachimawari_interfaces__msg__Joint__Sequence * array);

/// Create array of msg/Joint messages.
/**
 * It allocates the memory for the array and calls
 * tachimawari_interfaces__msg__Joint__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tachimawari_interfaces
tachimawari_interfaces__msg__Joint__Sequence *
tachimawari_interfaces__msg__Joint__Sequence__create(size_t size);

/// Destroy array of msg/Joint messages.
/**
 * It calls
 * tachimawari_interfaces__msg__Joint__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tachimawari_interfaces
void
tachimawari_interfaces__msg__Joint__Sequence__destroy(tachimawari_interfaces__msg__Joint__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TACHIMAWARI_INTERFACES__MSG__DETAIL__JOINT__FUNCTIONS_H_
