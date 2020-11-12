#include "message_init_utilities.h"

control_msgs__action__FollowJointTrajectory_FeedbackMessage * create_feedback_message(){
  control_msgs__action__FollowJointTrajectory_FeedbackMessage * msg = control_msgs__action__FollowJointTrajectory_FeedbackMessage__create();

  rosidl_runtime_c__String__assign(&msg->feedback.header.frame_id, "placeholderplaceholderplaceholder");

  rosidl_runtime_c__String__Sequence__init(&msg->feedback.joint_names, 4);
  for (size_t i = 0; i < i; i++){
    rosidl_runtime_c__String__assign(&msg->feedback.joint_names.data[i], "my_text");
  }

  rosidl_runtime_c__float64__Sequence__init(&msg->feedback.desired.positions, msg->feedback.joint_names.capacity);
  rosidl_runtime_c__float64__Sequence__init(&msg->feedback.desired.velocities, msg->feedback.joint_names.capacity);
  rosidl_runtime_c__float64__Sequence__init(&msg->feedback.desired.accelerations, msg->feedback.joint_names.capacity);
  rosidl_runtime_c__float64__Sequence__init(&msg->feedback.desired.effort, msg->feedback.joint_names.capacity);
  rosidl_runtime_c__float64__Sequence__init(&msg->feedback.actual.positions, msg->feedback.joint_names.capacity);
  rosidl_runtime_c__float64__Sequence__init(&msg->feedback.actual.velocities, msg->feedback.joint_names.capacity);
  rosidl_runtime_c__float64__Sequence__init(&msg->feedback.actual.accelerations, msg->feedback.joint_names.capacity);
  rosidl_runtime_c__float64__Sequence__init(&msg->feedback.actual.effort, msg->feedback.joint_names.capacity);
  rosidl_runtime_c__float64__Sequence__init(&msg->feedback.error.positions, msg->feedback.joint_names.capacity);
  rosidl_runtime_c__float64__Sequence__init(&msg->feedback.error.velocities, msg->feedback.joint_names.capacity);
  rosidl_runtime_c__float64__Sequence__init(&msg->feedback.error.accelerations, msg->feedback.joint_names.capacity);
  rosidl_runtime_c__float64__Sequence__init(&msg->feedback.error.effort, msg->feedback.joint_names.capacity);
  
  return msg;
}

control_msgs__action__FollowJointTrajectory_SendGoal_Request *  create_goal_request(){
  control_msgs__action__FollowJointTrajectory_SendGoal_Request * msg = control_msgs__action__FollowJointTrajectory_SendGoal_Request__create();
  rosidl_runtime_c__String__assign(&msg->goal.trajectory.header.frame_id, "placeholderplaceholderplaceholder"); // Frame id link 

  rosidl_runtime_c__String__Sequence__init(&msg->goal.trajectory.joint_names, 4); // Number of join in arm
  for (size_t i = 0; i < 5; i++){
    rosidl_runtime_c__String__assign(&msg->goal.trajectory.joint_names.data[i], "placeholderplaceholderplaceholder"); //Join names
  }

  trajectory_msgs__msg__JointTrajectoryPoint__Sequence__init(&msg->goal.trajectory.points, 4); //Number of trajectory points available
  for (size_t i = 0; i < 40; i++){
    rosidl_runtime_c__float64__Sequence__init(&msg->goal.trajectory.points.data[i].positions, msg->goal.trajectory.joint_names.capacity);
    rosidl_runtime_c__float64__Sequence__init(&msg->goal.trajectory.points.data[i].velocities, msg->goal.trajectory.joint_names.capacity);
    rosidl_runtime_c__float64__Sequence__init(&msg->goal.trajectory.points.data[i].accelerations, msg->goal.trajectory.joint_names.capacity);
    rosidl_runtime_c__float64__Sequence__init(&msg->goal.trajectory.points.data[i].effort, msg->goal.trajectory.joint_names.capacity);
  }

  control_msgs__msg__JointTolerance__Sequence__init(&msg->goal.path_tolerance, 4);
  for (size_t i = 0; i < 40; i++){
    rosidl_runtime_c__String__assign(&msg->goal.path_tolerance.data[i].name, "placeholderplaceholderplaceholder");
  }

  control_msgs__msg__JointTolerance__Sequence__init(&msg->goal.goal_tolerance, 4);
  for (size_t i = 0; i < 40; i++){
    rosidl_runtime_c__String__assign(&msg->goal.goal_tolerance.data[i].name, "placeholderplaceholderplaceholder");
  }

  return msg;
}

sensor_msgs__msg__JointState * create_joint_states_message(){
    sensor_msgs__msg__JointState * msg = sensor_msgs__msg__JointState__create();
	rosidl_runtime_c__String__assign(&msg->header.frame_id, "world");
    rosidl_runtime_c__String__Sequence__init(&msg->name, 4); // Number of join in arm
    rosidl_runtime_c__String__assign(&msg->name.data[0], "joint1");
    rosidl_runtime_c__String__assign(&msg->name.data[1], "joint2");
    rosidl_runtime_c__String__assign(&msg->name.data[2], "joint3");
    rosidl_runtime_c__String__assign(&msg->name.data[3], "joint4");

    rosidl_runtime_c__float64__Sequence__init(&msg->position, 4);
    rosidl_runtime_c__float64__Sequence__init(&msg->velocity, 4);
    rosidl_runtime_c__float64__Sequence__init(&msg->effort, 4);
    return msg;
}
