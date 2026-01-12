// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from clf_ue_audio_msgs:msg/CurrentStatus.idl
// generated code does not contain a copyright notice
#include "clf_ue_audio_msgs/msg/detail/current_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
clf_ue_audio_msgs__msg__CurrentStatus__init(clf_ue_audio_msgs__msg__CurrentStatus * msg)
{
  if (!msg) {
    return false;
  }
  // code
  return true;
}

void
clf_ue_audio_msgs__msg__CurrentStatus__fini(clf_ue_audio_msgs__msg__CurrentStatus * msg)
{
  if (!msg) {
    return;
  }
  // code
}

bool
clf_ue_audio_msgs__msg__CurrentStatus__are_equal(const clf_ue_audio_msgs__msg__CurrentStatus * lhs, const clf_ue_audio_msgs__msg__CurrentStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // code
  if (lhs->code != rhs->code) {
    return false;
  }
  return true;
}

bool
clf_ue_audio_msgs__msg__CurrentStatus__copy(
  const clf_ue_audio_msgs__msg__CurrentStatus * input,
  clf_ue_audio_msgs__msg__CurrentStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // code
  output->code = input->code;
  return true;
}

clf_ue_audio_msgs__msg__CurrentStatus *
clf_ue_audio_msgs__msg__CurrentStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clf_ue_audio_msgs__msg__CurrentStatus * msg = (clf_ue_audio_msgs__msg__CurrentStatus *)allocator.allocate(sizeof(clf_ue_audio_msgs__msg__CurrentStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(clf_ue_audio_msgs__msg__CurrentStatus));
  bool success = clf_ue_audio_msgs__msg__CurrentStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
clf_ue_audio_msgs__msg__CurrentStatus__destroy(clf_ue_audio_msgs__msg__CurrentStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    clf_ue_audio_msgs__msg__CurrentStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
clf_ue_audio_msgs__msg__CurrentStatus__Sequence__init(clf_ue_audio_msgs__msg__CurrentStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clf_ue_audio_msgs__msg__CurrentStatus * data = NULL;

  if (size) {
    data = (clf_ue_audio_msgs__msg__CurrentStatus *)allocator.zero_allocate(size, sizeof(clf_ue_audio_msgs__msg__CurrentStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = clf_ue_audio_msgs__msg__CurrentStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        clf_ue_audio_msgs__msg__CurrentStatus__fini(&data[i - 1]);
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
clf_ue_audio_msgs__msg__CurrentStatus__Sequence__fini(clf_ue_audio_msgs__msg__CurrentStatus__Sequence * array)
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
      clf_ue_audio_msgs__msg__CurrentStatus__fini(&array->data[i]);
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

clf_ue_audio_msgs__msg__CurrentStatus__Sequence *
clf_ue_audio_msgs__msg__CurrentStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clf_ue_audio_msgs__msg__CurrentStatus__Sequence * array = (clf_ue_audio_msgs__msg__CurrentStatus__Sequence *)allocator.allocate(sizeof(clf_ue_audio_msgs__msg__CurrentStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = clf_ue_audio_msgs__msg__CurrentStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
clf_ue_audio_msgs__msg__CurrentStatus__Sequence__destroy(clf_ue_audio_msgs__msg__CurrentStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    clf_ue_audio_msgs__msg__CurrentStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
clf_ue_audio_msgs__msg__CurrentStatus__Sequence__are_equal(const clf_ue_audio_msgs__msg__CurrentStatus__Sequence * lhs, const clf_ue_audio_msgs__msg__CurrentStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!clf_ue_audio_msgs__msg__CurrentStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
clf_ue_audio_msgs__msg__CurrentStatus__Sequence__copy(
  const clf_ue_audio_msgs__msg__CurrentStatus__Sequence * input,
  clf_ue_audio_msgs__msg__CurrentStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(clf_ue_audio_msgs__msg__CurrentStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    clf_ue_audio_msgs__msg__CurrentStatus * data =
      (clf_ue_audio_msgs__msg__CurrentStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!clf_ue_audio_msgs__msg__CurrentStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          clf_ue_audio_msgs__msg__CurrentStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!clf_ue_audio_msgs__msg__CurrentStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
