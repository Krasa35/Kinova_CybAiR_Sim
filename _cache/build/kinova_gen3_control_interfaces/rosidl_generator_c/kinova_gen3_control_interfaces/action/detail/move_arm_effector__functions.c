// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kinova_gen3_control_interfaces:action/MoveArmEffector.idl
// generated code does not contain a copyright notice
#include "kinova_gen3_control_interfaces/action/detail/move_arm_effector__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `goal_point`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__init(kinova_gen3_control_interfaces__action__MoveArmEffector_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // goal_point
  if (!geometry_msgs__msg__Point__init(&msg->goal_point)) {
    kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__fini(msg);
    return false;
  }
  return true;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_Goal * msg)
{
  if (!msg) {
    return;
  }
  // goal_point
  geometry_msgs__msg__Point__fini(&msg->goal_point);
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_Goal * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_point
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->goal_point), &(rhs->goal_point)))
  {
    return false;
  }
  return true;
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_Goal * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_point
  if (!geometry_msgs__msg__Point__copy(
      &(input->goal_point), &(output->goal_point)))
  {
    return false;
  }
  return true;
}

kinova_gen3_control_interfaces__action__MoveArmEffector_Goal *
kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinova_gen3_control_interfaces__action__MoveArmEffector_Goal * msg = (kinova_gen3_control_interfaces__action__MoveArmEffector_Goal *)allocator.allocate(sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_Goal));
  bool success = kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence__init(kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinova_gen3_control_interfaces__action__MoveArmEffector_Goal * data = NULL;

  if (size) {
    data = (kinova_gen3_control_interfaces__action__MoveArmEffector_Goal *)allocator.zero_allocate(size, sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence *
kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence * array = (kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence *)allocator.allocate(sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kinova_gen3_control_interfaces__action__MoveArmEffector_Goal * data =
      (kinova_gen3_control_interfaces__action__MoveArmEffector_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Result__init(kinova_gen3_control_interfaces__action__MoveArmEffector_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_Result__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Result__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_Result * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Result__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_Result * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

kinova_gen3_control_interfaces__action__MoveArmEffector_Result *
kinova_gen3_control_interfaces__action__MoveArmEffector_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinova_gen3_control_interfaces__action__MoveArmEffector_Result * msg = (kinova_gen3_control_interfaces__action__MoveArmEffector_Result *)allocator.allocate(sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_Result));
  bool success = kinova_gen3_control_interfaces__action__MoveArmEffector_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_Result__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kinova_gen3_control_interfaces__action__MoveArmEffector_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence__init(kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinova_gen3_control_interfaces__action__MoveArmEffector_Result * data = NULL;

  if (size) {
    data = (kinova_gen3_control_interfaces__action__MoveArmEffector_Result *)allocator.zero_allocate(size, sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kinova_gen3_control_interfaces__action__MoveArmEffector_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kinova_gen3_control_interfaces__action__MoveArmEffector_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      kinova_gen3_control_interfaces__action__MoveArmEffector_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence *
kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence * array = (kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence *)allocator.allocate(sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kinova_gen3_control_interfaces__action__MoveArmEffector_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kinova_gen3_control_interfaces__action__MoveArmEffector_Result * data =
      (kinova_gen3_control_interfaces__action__MoveArmEffector_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kinova_gen3_control_interfaces__action__MoveArmEffector_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kinova_gen3_control_interfaces__action__MoveArmEffector_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kinova_gen3_control_interfaces__action__MoveArmEffector_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `error`
#include "rosidl_runtime_c/string_functions.h"
// Member `current_effector_position`
// already included above
// #include "geometry_msgs/msg/detail/point__functions.h"

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__init(kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // error
  if (!rosidl_runtime_c__String__init(&msg->error)) {
    kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__fini(msg);
    return false;
  }
  // current_effector_position
  if (!geometry_msgs__msg__Point__init(&msg->current_effector_position)) {
    kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // error
  rosidl_runtime_c__String__fini(&msg->error);
  // current_effector_position
  geometry_msgs__msg__Point__fini(&msg->current_effector_position);
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // error
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error), &(rhs->error)))
  {
    return false;
  }
  // current_effector_position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->current_effector_position), &(rhs->current_effector_position)))
  {
    return false;
  }
  return true;
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // error
  if (!rosidl_runtime_c__String__copy(
      &(input->error), &(output->error)))
  {
    return false;
  }
  // current_effector_position
  if (!geometry_msgs__msg__Point__copy(
      &(input->current_effector_position), &(output->current_effector_position)))
  {
    return false;
  }
  return true;
}

kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback *
kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback * msg = (kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback *)allocator.allocate(sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback));
  bool success = kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence__init(kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback * data = NULL;

  if (size) {
    data = (kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback *)allocator.zero_allocate(size, sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence *
kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence * array = (kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence *)allocator.allocate(sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback * data =
      (kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "kinova_gen3_control_interfaces/action/detail/move_arm_effector__functions.h"

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__init(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__init(&msg->goal)) {
    kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__fini(&msg->goal);
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request *
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request * msg = (kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request *)allocator.allocate(sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request));
  bool success = kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence__init(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request * data = NULL;

  if (size) {
    data = (kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request *)allocator.zero_allocate(size, sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence *
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence * array = (kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence *)allocator.allocate(sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request * data =
      (kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__init(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response *
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response * msg = (kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response *)allocator.allocate(sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response));
  bool success = kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence__init(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response * data = NULL;

  if (size) {
    data = (kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response *)allocator.zero_allocate(size, sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence *
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence * array = (kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence *)allocator.allocate(sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response * data =
      (kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__init(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request *
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request * msg = (kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request *)allocator.allocate(sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request));
  bool success = kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence__init(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request * data = NULL;

  if (size) {
    data = (kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request *)allocator.zero_allocate(size, sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence *
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence * array = (kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence *)allocator.allocate(sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request * data =
      (kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "kinova_gen3_control_interfaces/action/detail/move_arm_effector__functions.h"

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__init(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!kinova_gen3_control_interfaces__action__MoveArmEffector_Result__init(&msg->result)) {
    kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  kinova_gen3_control_interfaces__action__MoveArmEffector_Result__fini(&msg->result);
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!kinova_gen3_control_interfaces__action__MoveArmEffector_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!kinova_gen3_control_interfaces__action__MoveArmEffector_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response *
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response * msg = (kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response *)allocator.allocate(sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response));
  bool success = kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence__init(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response * data = NULL;

  if (size) {
    data = (kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response *)allocator.zero_allocate(size, sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence *
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence * array = (kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence *)allocator.allocate(sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response * data =
      (kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "kinova_gen3_control_interfaces/action/detail/move_arm_effector__functions.h"

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__init(kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__init(&msg->feedback)) {
    kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__fini(&msg->feedback);
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage *
kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage * msg = (kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage *)allocator.allocate(sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage));
  bool success = kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence__init(kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage * data = NULL;

  if (size) {
    data = (kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage *)allocator.zero_allocate(size, sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence__fini(kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence *
kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence * array = (kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence *)allocator.allocate(sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence__destroy(kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence__are_equal(const kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence * lhs, const kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence__copy(
  const kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence * input,
  kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage * data =
      (kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
