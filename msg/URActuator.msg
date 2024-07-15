# Copyright: CityU UR 
# Project: David (FuckPX4)
# Author: Ranger GUO
# Email: runzhoguo3-c@my.cityu.edu.hk
# Date: 2024-07-16
# Description: Message of the state of Thrusters and Servos

std_msgs/Header header

# value of output of thruster 1,2,3,4,5,6,7,8....
# use -1.0 ~ 1.0 to represent the throttle of thruster
float64[] thrusters

# value of output of servos 1,2,3,4,5,6 
# use 0 ~ 1.0 to represent the angle of servo
# angle = value*max_angle
float64[] servos
 