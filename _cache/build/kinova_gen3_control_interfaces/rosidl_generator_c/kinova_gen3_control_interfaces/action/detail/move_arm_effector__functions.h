// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from kinova_gen3_control_interfaces:action/MoveArmEffector.idl
// generated code does not contain a copyright notice

#ifndef KINOVA_GEN3_CONTROL_INTERFACES__ACTION__DETAIL__MOVE_ARM_EFFECTOR__FUNCTIONS_H_
#define KINOVA_GEN3_CONTROL_INTERFACES__ACTION__DETAIL__MOVE_ARM_EFFECTOR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "kinova_gen3_control_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "kinova_gen3_control_interfaces/action/detail/move_arm_effector__struct.h"

/// Initialize action/MoveArmEffector message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kinova_gen3_control_interfaces__action__MoveArmEffector_Goal
 * )) before or use
 * kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__init(kinova_gen3_control_interfaces__action__MoveArmEffector_Goal * msg);

/// Finalize action/MoveArmEffector message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_Goal * msg);

/// Create action/MoveArmEffector message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
kinova_gen3_control_interfaces__action__MoveArmEffector_Goal *
kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__create();

/// Destroy action/MoveArmEffector message.
/**
 * It calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_Goal * msg);

/// Check for action/MoveArmEffector message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_Goal * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_Goal * rhs);

/// Copy a action/MoveArmEffector message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_Goal * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_Goal * output);

/// Initialize array of action/MoveArmEffector messages.
/**
 * It allocates the memory for the number of elements and calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence__init(kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence * array, size_t size);

/// Finalize array of action/MoveArmEffector messages.
/**
 * It calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence * array);

/// Create array of action/MoveArmEffector messages.
/**
 * It allocates the memory for the array and calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence *
kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence__create(size_t size);

/// Destroy array of action/MoveArmEffector messages.
/**
 * It calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence * array);

/// Check for action/MoveArmEffector message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence * rhs);

/// Copy an array of action/MoveArmEffector messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence * output);

/// Initialize action/MoveArmEffector message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kinova_gen3_control_interfaces__action__MoveArmEffector_Result
 * )) before or use
 * kinova_gen3_control_interfaces__action__MoveArmEffector_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Result__init(kinova_gen3_control_interfaces__action__MoveArmEffector_Result * msg);

/// Finalize action/MoveArmEffector message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_Result__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_Result * msg);

/// Create action/MoveArmEffector message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
kinova_gen3_control_interfaces__action__MoveArmEffector_Result *
kinova_gen3_control_interfaces__action__MoveArmEffector_Result__create();

/// Destroy action/MoveArmEffector message.
/**
 * It calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_Result__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_Result * msg);

/// Check for action/MoveArmEffector message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Result__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_Result * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_Result * rhs);

/// Copy a action/MoveArmEffector message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Result__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_Result * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_Result * output);

/// Initialize array of action/MoveArmEffector messages.
/**
 * It allocates the memory for the number of elements and calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence__init(kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence * array, size_t size);

/// Finalize array of action/MoveArmEffector messages.
/**
 * It calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence * array);

/// Create array of action/MoveArmEffector messages.
/**
 * It allocates the memory for the array and calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence *
kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence__create(size_t size);

/// Destroy array of action/MoveArmEffector messages.
/**
 * It calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence * array);

/// Check for action/MoveArmEffector message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence * rhs);

/// Copy an array of action/MoveArmEffector messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence * output);

/// Initialize action/MoveArmEffector message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback
 * )) before or use
 * kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__init(kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback * msg);

/// Finalize action/MoveArmEffector message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback * msg);

/// Create action/MoveArmEffector message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback *
kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__create();

/// Destroy action/MoveArmEffector message.
/**
 * It calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback * msg);

/// Check for action/MoveArmEffector message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback * rhs);

/// Copy a action/MoveArmEffector message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback * output);

/// Initialize array of action/MoveArmEffector messages.
/**
 * It allocates the memory for the number of elements and calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence__init(kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence * array, size_t size);

/// Finalize array of action/MoveArmEffector messages.
/**
 * It calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence * array);

/// Create array of action/MoveArmEffector messages.
/**
 * It allocates the memory for the array and calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence *
kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence__create(size_t size);

/// Destroy array of action/MoveArmEffector messages.
/**
 * It calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence * array);

/// Check for action/MoveArmEffector message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence * rhs);

/// Copy an array of action/MoveArmEffector messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence * output);

/// Initialize action/MoveArmEffector message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request
 * )) before or use
 * kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__init(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request * msg);

/// Finalize action/MoveArmEffector message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request * msg);

/// Create action/MoveArmEffector message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request *
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__create();

/// Destroy action/MoveArmEffector message.
/**
 * It calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request * msg);

/// Check for action/MoveArmEffector message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request * rhs);

/// Copy a action/MoveArmEffector message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request * output);

/// Initialize array of action/MoveArmEffector messages.
/**
 * It allocates the memory for the number of elements and calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence__init(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveArmEffector messages.
/**
 * It calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence * array);

/// Create array of action/MoveArmEffector messages.
/**
 * It allocates the memory for the array and calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence *
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveArmEffector messages.
/**
 * It calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence * array);

/// Check for action/MoveArmEffector message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/MoveArmEffector messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence * output);

/// Initialize action/MoveArmEffector message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response
 * )) before or use
 * kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__init(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response * msg);

/// Finalize action/MoveArmEffector message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response * msg);

/// Create action/MoveArmEffector message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response *
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__create();

/// Destroy action/MoveArmEffector message.
/**
 * It calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response * msg);

/// Check for action/MoveArmEffector message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response * rhs);

/// Copy a action/MoveArmEffector message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response * output);

/// Initialize array of action/MoveArmEffector messages.
/**
 * It allocates the memory for the number of elements and calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence__init(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveArmEffector messages.
/**
 * It calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence * array);

/// Create array of action/MoveArmEffector messages.
/**
 * It allocates the memory for the array and calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence *
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveArmEffector messages.
/**
 * It calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence * array);

/// Check for action/MoveArmEffector message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/MoveArmEffector messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence * output);

/// Initialize action/MoveArmEffector message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request
 * )) before or use
 * kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__init(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request * msg);

/// Finalize action/MoveArmEffector message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request * msg);

/// Create action/MoveArmEffector message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request *
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__create();

/// Destroy action/MoveArmEffector message.
/**
 * It calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request * msg);

/// Check for action/MoveArmEffector message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request * rhs);

/// Copy a action/MoveArmEffector message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request * output);

/// Initialize array of action/MoveArmEffector messages.
/**
 * It allocates the memory for the number of elements and calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence__init(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveArmEffector messages.
/**
 * It calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence * array);

/// Create array of action/MoveArmEffector messages.
/**
 * It allocates the memory for the array and calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence *
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveArmEffector messages.
/**
 * It calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence * array);

/// Check for action/MoveArmEffector message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence * rhs);

/// Copy an array of action/MoveArmEffector messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence * output);

/// Initialize action/MoveArmEffector message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response
 * )) before or use
 * kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__init(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response * msg);

/// Finalize action/MoveArmEffector message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response * msg);

/// Create action/MoveArmEffector message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response *
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__create();

/// Destroy action/MoveArmEffector message.
/**
 * It calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response * msg);

/// Check for action/MoveArmEffector message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response * rhs);

/// Copy a action/MoveArmEffector message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response * output);

/// Initialize array of action/MoveArmEffector messages.
/**
 * It allocates the memory for the number of elements and calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence__init(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveArmEffector messages.
/**
 * It calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence * array);

/// Create array of action/MoveArmEffector messages.
/**
 * It allocates the memory for the array and calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence *
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveArmEffector messages.
/**
 * It calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence * array);

/// Check for action/MoveArmEffector message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence * rhs);

/// Copy an array of action/MoveArmEffector messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence * output);

/// Initialize action/MoveArmEffector message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage
 * )) before or use
 * kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__init(kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage * msg);

/// Finalize action/MoveArmEffector message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage * msg);

/// Create action/MoveArmEffector message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage *
kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__create();

/// Destroy action/MoveArmEffector message.
/**
 * It calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage * msg);

/// Check for action/MoveArmEffector message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage * rhs);

/// Copy a action/MoveArmEffector message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage * output);

/// Initialize array of action/MoveArmEffector messages.
/**
 * It allocates the memory for the number of elements and calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence__init(kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/MoveArmEffector messages.
/**
 * It calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence * array);

/// Create array of action/MoveArmEffector messages.
/**
 * It allocates the memory for the array and calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence *
kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/MoveArmEffector messages.
/**
 * It calls
 * kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
void
kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence * array);

/// Check for action/MoveArmEffector message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/MoveArmEffector messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinova_gen3_control_interfaces
bool
kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // KINOVA_GEN3_CONTROL_INTERFACES__ACTION__DETAIL__MOVE_ARM_EFFECTOR__FUNCTIONS_H_
