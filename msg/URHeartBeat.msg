# Copyright: CityU UR 
# Project: David (FuckPX4)
# Author: Ranger GUO
# Email: runzhoguo3-c@my.cityu.edu.hk
# Date: 2024-07-16
# Description: Message of Control System software and hardware state, especially Commander Node

std_msgs/Header header

# the current mode of motion control, 
# such as "ThrusterTest", "Manual", "Stabilization", "Vertical", "Position"
string control_mode

# the current temperature inside waterproof cabin 
# celsius degrees
float64 cabin_temperature

# the current temperature of water
# celsius degrees
float64 water_temperature

# the current voltage of battery
# volt
float64 battery_voltage

# the current voltage of board, such as jetson board
# volt
float64 board_voltage

# the current voltage of thruster
# volt
float64 thruster_voltage