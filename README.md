# ur_msg_interface
Customed Msg and Srv for CityUHKUR Control System

# usage:
```
cd <your ros2 workspace>
cd ./src && git clone https://github.com/CityUHKUR/ur_msg_interface.git && cd ..
colcon build --packages-select ur_msg_interface --cmake-args -DCMAKE_BUILD_TYPE=Release
source ./install/setup.bash
```

If you would like to integrate this repo with your code, pls add ⬇ to your "CMakeLists.txt"
```
find_package(ur_msg_interface REQUIRED)
ament_target_dependencies( <your project name> rclcpp std_msgs geometry_msgs ur_msg_interface )
```

and add ⬇ to your "package.xml" 
```
<depend> ur_msg_interface </depend>
```