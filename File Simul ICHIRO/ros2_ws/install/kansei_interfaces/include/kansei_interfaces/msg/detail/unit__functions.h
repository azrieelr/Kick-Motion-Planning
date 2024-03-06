// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from kansei_interfaces:msg/Unit.idl
// generated code does not contain a copyright notice

#ifndef KANSEI_INTERFACES__MSG__DETAIL__UNIT__FUNCTIONS_H_
#define KANSEI_INTERFACES__MSG__DETAIL__UNIT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "kansei_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "kansei_interfaces/msg/detail/unit__struct.h"

/// Initialize msg/Unit message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kansei_interfaces__msg__Unit
 * )) before or use
 * kansei_interfaces__msg__Unit__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kansei_interfaces
bool
kansei_interfaces__msg__Unit__init(kansei_interfaces__msg__Unit * msg);

/// Finalize msg/Unit message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kansei_interfaces
void
kansei_interfaces__msg__Unit__fini(kansei_interfaces__msg__Unit * msg);

/// Create msg/Unit message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kansei_interfaces__msg__Unit__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kansei_interfaces
kansei_interfaces__msg__Unit *
kansei_interfaces__msg__Unit__create();

/// Destroy msg/Unit message.
/**
 * It calls
 * kansei_interfaces__msg__Unit__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kansei_interfaces
void
kansei_interfaces__msg__Unit__destroy(kansei_interfaces__msg__Unit * msg);


/// Initialize array of msg/Unit messages.
/**
 * It allocates the memory for the number of elements and calls
 * kansei_interfaces__msg__Unit__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kansei_interfaces
bool
kansei_interfaces__msg__Unit__Sequence__init(kansei_interfaces__msg__Unit__Sequence * array, size_t size);

/// Finalize array of msg/Unit messages.
/**
 * It calls
 * kansei_interfaces__msg__Unit__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kansei_interfaces
void
kansei_interfaces__msg__Unit__Sequence__fini(kansei_interfaces__msg__Unit__Sequence * array);

/// Create array of msg/Unit messages.
/**
 * It allocates the memory for the array and calls
 * kansei_interfaces__msg__Unit__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kansei_interfaces
kansei_interfaces__msg__Unit__Sequence *
kansei_interfaces__msg__Unit__Sequence__create(size_t size);

/// Destroy array of msg/Unit messages.
/**
 * It calls
 * kansei_interfaces__msg__Unit__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kansei_interfaces
void
kansei_interfaces__msg__Unit__Sequence__destroy(kansei_interfaces__msg__Unit__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // KANSEI_INTERFACES__MSG__DETAIL__UNIT__FUNCTIONS_H_
