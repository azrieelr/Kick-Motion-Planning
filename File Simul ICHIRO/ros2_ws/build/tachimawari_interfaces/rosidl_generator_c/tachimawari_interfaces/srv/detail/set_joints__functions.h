// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tachimawari_interfaces:srv/SetJoints.idl
// generated code does not contain a copyright notice

#ifndef TACHIMAWARI_INTERFACES__SRV__DETAIL__SET_JOINTS__FUNCTIONS_H_
#define TACHIMAWARI_INTERFACES__SRV__DETAIL__SET_JOINTS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tachimawari_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "tachimawari_interfaces/srv/detail/set_joints__struct.h"

/// Initialize srv/SetJoints message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tachimawari_interfaces__srv__SetJoints_Request
 * )) before or use
 * tachimawari_interfaces__srv__SetJoints_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tachimawari_interfaces
bool
tachimawari_interfaces__srv__SetJoints_Request__init(tachimawari_interfaces__srv__SetJoints_Request * msg);

/// Finalize srv/SetJoints message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tachimawari_interfaces
void
tachimawari_interfaces__srv__SetJoints_Request__fini(tachimawari_interfaces__srv__SetJoints_Request * msg);

/// Create srv/SetJoints message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tachimawari_interfaces__srv__SetJoints_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tachimawari_interfaces
tachimawari_interfaces__srv__SetJoints_Request *
tachimawari_interfaces__srv__SetJoints_Request__create();

/// Destroy srv/SetJoints message.
/**
 * It calls
 * tachimawari_interfaces__srv__SetJoints_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tachimawari_interfaces
void
tachimawari_interfaces__srv__SetJoints_Request__destroy(tachimawari_interfaces__srv__SetJoints_Request * msg);


/// Initialize array of srv/SetJoints messages.
/**
 * It allocates the memory for the number of elements and calls
 * tachimawari_interfaces__srv__SetJoints_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tachimawari_interfaces
bool
tachimawari_interfaces__srv__SetJoints_Request__Sequence__init(tachimawari_interfaces__srv__SetJoints_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetJoints messages.
/**
 * It calls
 * tachimawari_interfaces__srv__SetJoints_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tachimawari_interfaces
void
tachimawari_interfaces__srv__SetJoints_Request__Sequence__fini(tachimawari_interfaces__srv__SetJoints_Request__Sequence * array);

/// Create array of srv/SetJoints messages.
/**
 * It allocates the memory for the array and calls
 * tachimawari_interfaces__srv__SetJoints_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tachimawari_interfaces
tachimawari_interfaces__srv__SetJoints_Request__Sequence *
tachimawari_interfaces__srv__SetJoints_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetJoints messages.
/**
 * It calls
 * tachimawari_interfaces__srv__SetJoints_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tachimawari_interfaces
void
tachimawari_interfaces__srv__SetJoints_Request__Sequence__destroy(tachimawari_interfaces__srv__SetJoints_Request__Sequence * array);

/// Initialize srv/SetJoints message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tachimawari_interfaces__srv__SetJoints_Response
 * )) before or use
 * tachimawari_interfaces__srv__SetJoints_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tachimawari_interfaces
bool
tachimawari_interfaces__srv__SetJoints_Response__init(tachimawari_interfaces__srv__SetJoints_Response * msg);

/// Finalize srv/SetJoints message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tachimawari_interfaces
void
tachimawari_interfaces__srv__SetJoints_Response__fini(tachimawari_interfaces__srv__SetJoints_Response * msg);

/// Create srv/SetJoints message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tachimawari_interfaces__srv__SetJoints_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tachimawari_interfaces
tachimawari_interfaces__srv__SetJoints_Response *
tachimawari_interfaces__srv__SetJoints_Response__create();

/// Destroy srv/SetJoints message.
/**
 * It calls
 * tachimawari_interfaces__srv__SetJoints_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tachimawari_interfaces
void
tachimawari_interfaces__srv__SetJoints_Response__destroy(tachimawari_interfaces__srv__SetJoints_Response * msg);


/// Initialize array of srv/SetJoints messages.
/**
 * It allocates the memory for the number of elements and calls
 * tachimawari_interfaces__srv__SetJoints_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tachimawari_interfaces
bool
tachimawari_interfaces__srv__SetJoints_Response__Sequence__init(tachimawari_interfaces__srv__SetJoints_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetJoints messages.
/**
 * It calls
 * tachimawari_interfaces__srv__SetJoints_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tachimawari_interfaces
void
tachimawari_interfaces__srv__SetJoints_Response__Sequence__fini(tachimawari_interfaces__srv__SetJoints_Response__Sequence * array);

/// Create array of srv/SetJoints messages.
/**
 * It allocates the memory for the array and calls
 * tachimawari_interfaces__srv__SetJoints_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tachimawari_interfaces
tachimawari_interfaces__srv__SetJoints_Response__Sequence *
tachimawari_interfaces__srv__SetJoints_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetJoints messages.
/**
 * It calls
 * tachimawari_interfaces__srv__SetJoints_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tachimawari_interfaces
void
tachimawari_interfaces__srv__SetJoints_Response__Sequence__destroy(tachimawari_interfaces__srv__SetJoints_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TACHIMAWARI_INTERFACES__SRV__DETAIL__SET_JOINTS__FUNCTIONS_H_
