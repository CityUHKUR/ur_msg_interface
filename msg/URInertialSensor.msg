# Copyright: CityU UR 
# Project: David (FuckPX4)
# Author: Ranger GUO
# Email: runzhoguo3-c@my.cityu.edu.hk
# Date: 2024-07-16
# Description: Message of Inertial Sensor value, such as imu, pressure sensor, and optical flow sensor
#              Hawk Frame and NED Frame are used

std_msgs/Header header

# attitude angle, roll, pitch, yaw 
# (rad)
geometry_msgs/Vector3 att

# anglar velocity of roll, pitch, yaw 
# (rad/s)
geometry_msgs/Vector3 att_vel

# position of vehicle in global frame(NED)
# (meters) 
geometry_msgs/Vector3 pos

# linear velocity of vehicle in global frame(NED)
# (meter/s) 
geometry_msgs/Vector3 pos_vel

# pixel velocity of vehicle in body frame (Hawk Frame)
# (pixel/s) 
geometry_msgs/Vector3 optical_flow 

# distance between vehicle and water surface
# equals to pos_vel.z (meters)
float64 depth


