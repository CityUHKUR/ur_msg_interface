# Copyright: CityU UR 
# Project: David (FuckPX4)
# Author: Ranger GUO
# Email: runzhoguo3-c@my.cityu.edu.hk
# Date: 2024-07-16
# Description: Message of Flight Controllor State

std_msgs/Header header

# the state of vehicle
# false - disarmed, true - armed 
bool arm

# the algorithm type of motion control, such as "NaiveDynamics", "CommonDynamics", "HydroDynamics"...
string algorithm_type

# the current mode of motion control, 
# such as "ThrusterTest", "Manual", "Stabilization", "Vertical", "Position"
string control_mode

