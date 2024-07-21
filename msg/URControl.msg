# Copyright: CityU UR 
# Project: David (FuckPX4)
# Author: Ranger GUO
# Email: runzhoguo3-c@my.cityu.edu.hk
# Date: 2024-07-16
# Description: Message of user input about motion control

std_msgs/Header header

# the value of  forward,lateral,vertical, roll, pitch and yaw throttle; 
#               throttle gain
#               and thrusters direct expected output 
# value ~ [-1000,1000]
# throttle = map(value,-1.0,1.0);
int16[] axes 

# the event flag rasied by joystick, keyboard and gui
# including "arm", "disarm", "to_manual_mode", "to_stabilization_mode" ... 
# for more detail pls refer to wiki of Project David 
uint32[] event_id 

