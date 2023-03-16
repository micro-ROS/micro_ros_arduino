// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from visualization_msgs:msg/MenuEntry.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__MENU_ENTRY__STRUCT_H_
#define VISUALIZATION_MSGS__MSG__DETAIL__MENU_ENTRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define visualization_msgs__msg__MenuEntry__TYPE_VERSION_HASH__INIT {1, { \
      0x00, 0x1f, 0xbe, 0x92, 0xfa, 0xf3, 0xaa, 0xdc, \
      0xb9, 0x58, 0x34, 0x6a, 0x6c, 0xfa, 0xe8, 0x9e, \
      0x72, 0xb1, 0xa2, 0xd9, 0xe5, 0xd6, 0x8b, 0x25, \
      0xd4, 0x86, 0x33, 0x51, 0xd2, 0x7f, 0xc3, 0x57, \
    }}
static const rosidl_type_hash_t visualization_msgs__msg__MenuEntry__TYPE_VERSION_HASH = visualization_msgs__msg__MenuEntry__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Constant 'FEEDBACK'.
/**
  * Command_type stores the type of response desired when this menu
  * entry is clicked.
  * FEEDBACK: send an InteractiveMarkerFeedback message with menu_entry_id set to this entry's id.
  * ROSRUN: execute "rosrun" with arguments given in the command field (above).
  * ROSLAUNCH: execute "roslaunch" with arguments given in the command field (above).
 */
enum
{
  visualization_msgs__msg__MenuEntry__FEEDBACK = 0
};

/// Constant 'ROSRUN'.
enum
{
  visualization_msgs__msg__MenuEntry__ROSRUN = 1
};

/// Constant 'ROSLAUNCH'.
enum
{
  visualization_msgs__msg__MenuEntry__ROSLAUNCH = 2
};

// Include directives for member types
// Member 'title'
// Member 'command'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MenuEntry in the package visualization_msgs.
/**
  * MenuEntry message.
  *
  * Each InteractiveMarker message has an array of MenuEntry messages.
  * A collection of MenuEntries together describe a
  * menu/submenu/subsubmenu/etc tree, though they are stored in a flat
  * array.  The tree structure is represented by giving each menu entry
  * an ID number and a "parent_id" field.  Top-level entries are the
  * ones with parent_id = 0.  Menu entries are ordered within their
  * level the same way they are ordered in the containing array.  Parent
  * entries must appear before their children.
  *
  * Example:
  * - id = 3
  *   parent_id = 0
  *   title = "fun"
  * - id = 2
  *   parent_id = 0
  *   title = "robot"
  * - id = 4
  *   parent_id = 2
  *   title = "pr2"
  * - id = 5
  *   parent_id = 2
  *   title = "turtle"
  *
  * Gives a menu tree like this:
  *  - fun
  *  - robot
  *    - pr2
  *    - turtle
 */
typedef struct visualization_msgs__msg__MenuEntry
{
  /// ID is a number for each menu entry.  Must be unique within the
  /// control, and should never be 0.
  uint32_t id;
  /// ID of the parent of this menu entry, if it is a submenu.  If this
  /// menu entry is a top-level entry, set parent_id to 0.
  uint32_t parent_id;
  /// menu / entry title
  rosidl_runtime_c__String title;
  /// Arguments to command indicated by command_type (below)
  rosidl_runtime_c__String command;
  uint8_t command_type;
} visualization_msgs__msg__MenuEntry;

// Struct for a sequence of visualization_msgs__msg__MenuEntry.
typedef struct visualization_msgs__msg__MenuEntry__Sequence
{
  visualization_msgs__msg__MenuEntry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visualization_msgs__msg__MenuEntry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__MENU_ENTRY__STRUCT_H_
