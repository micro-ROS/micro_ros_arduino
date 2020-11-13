#include "message_init_utilities.h"

sensor_msgs__msg__JointState * create_joint_states_message(){
    sensor_msgs__msg__JointState * msg = sensor_msgs__msg__JointState__create();
	  rosidl_runtime_c__String__assign(&msg->header.frame_id, "world");
    rosidl_runtime_c__String__Sequence__init(&msg->name, 4); // Number of join in arm
    rosidl_runtime_c__String__assign(&msg->name.data[0], "joint1");
    rosidl_runtime_c__String__assign(&msg->name.data[1], "joint2");
    rosidl_runtime_c__String__assign(&msg->name.data[2], "joint3");
    rosidl_runtime_c__String__assign(&msg->name.data[3], "joint4");
    // rosidl_runtime_c__String__assign(&msg->name.data[4], "gripper");

    rosidl_runtime_c__float64__Sequence__init(&msg->position, 4);
    rosidl_runtime_c__float64__Sequence__init(&msg->velocity, 4);
    rosidl_runtime_c__float64__Sequence__init(&msg->effort, 4);
    return msg;
}


trajectory_msgs__msg__JointTrajectory * create_joint_trajectory_msg(){
  trajectory_msgs__msg__JointTrajectory * msg = trajectory_msgs__msg__JointTrajectory__create();
  rosidl_runtime_c__String__assign(&msg->header.frame_id, "placeholder");

  rosidl_runtime_c__String__Sequence__init(&msg->joint_names, 4); // Number of join in arm
  for (size_t i = 0; i < 4; i++){
    rosidl_runtime_c__String__assign(&msg->joint_names.data[i], "jointxxxxx");
  }

  size_t n_points = 10;
  trajectory_msgs__msg__JointTrajectoryPoint__Sequence__init(&msg->points, n_points);
  for (size_t i = 0; i < n_points; i++){
      rosidl_runtime_c__float64__Sequence__init(&msg->points.data[i].positions, 4);
      rosidl_runtime_c__float64__Sequence__init(&msg->points.data[i].velocities, 4);
      rosidl_runtime_c__float64__Sequence__init(&msg->points.data[i].accelerations, 4);
      rosidl_runtime_c__float64__Sequence__init(&msg->points.data[i].effort, 4);
  }
    return msg;
}

