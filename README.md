#   TUTORIAL FROM KINOVA [README](https://github.com/Kinovarobotics/ros2_kortex/blob/main/README.md)
This README provides info how to get kinova sim for cybair set-up.

1.  Make sure you have Docker and VSCode installed properly.
1.  Download Extensions for your VSCode: ms-vscode-remote.remote-containers
1.  Open folder downloaded from this git repo in VSCode
1.  Make sure if your Display is connected properly...
1.  Press CTRL+SHIFT+P
1.  Choose Dev Container: Rebuild and open in container
1.  Make sure you compiled `colcon build` and sourced all packages `. /home/ws/install/setup.sh`
1.  To run Simulation with action server started type this command:
```
ros2 launch kinova_gen3_control_cpp demo.launch.py
```
1.  To send action goal to kinova arm in new terminal with sourced packages:
```
ros2 action send_goal /move_arm_effector kinova_gen3_control_interfaces/action/MoveArmEffector "{goal_point: {x: 0.1, y: 0.2, z: 0.3}}"
```

<!-- ##  STEP BY STEP EXERCISES 1-3 DONE

1. Install this package from binary
    ```bash
    sudo apt install ros-$ROS_DISTRO-kortex-bringup
    ```

1. Install moveit configuration
    ```bash
    sudo apt install ros-$ROS_DISTRO-kinova-gen3-6dof-robotiq-2f-85-moveit-config
    ```
    Also Cyclone DDS
    ```bash
    sudo apt install ros-$ROS_DISTRO-rmw-cyclonedds-cpp
    export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
    ```
1.  Run simulation in RVIZ and control via ``ros2 topic pub``

    Launch RVIZ with KINOVA URDF
    ```bash
    ros2 launch kortex_description view_robot.launch.py
    ```

    Control joints via ``ros2 topic pub`` - adjust values inside ``    { positions: [0, 0, 0, 0, 0, 0], time_from_start: { sec: 10 }``:
    ```bash
    ros2 topic pub /joint_trajectory_controller/joint_trajectory trajectory_msgs/JointTrajectory "{
    joint_names: [joint_1, joint_2, joint_3, joint_4, joint_5, joint_6],
    points: [
        { positions: [0, 0, 0, 0, 0, 0], time_from_start: { sec: 10 } },
    ]
    }"
    ```

1.  Launch KINOVA sim with Moveit configuration inside RVIZ
    ```bash
    ros2 launch kinova_gen3_6dof_robotiq_2f_85_moveit_config robot.launch.py \
    robot_ip:=yyy.yyy.yyy.yyy \
    use_fake_hardware:=true
    ```

    To work with a physical robot and generate/execute paths with MoveIt run the following:

    ```bash
    ros2 launch kinova_gen3_7dof_robotiq_2f_85_moveit_config robot.launch.py \
    robot_ip:=192.168.1.10
    ```

Now you can move arm and click Plan & execute and see movement in sim. -->