# Copyright: CityU UR 
# Project: David (FuckPX4)
# Author: Ranger GUO
# Email: runzhoguo3-c@my.cityu.edu.hk
# Date: 2024-07-16
# Description: Message of the shared memory image

std_msgs/Header header

# name of shared memory
# shm_key = ftok(name.c_str(),0);
# shm_id = shmget(shm_key,width*height*channel,SHM_W|SHM_R|IPC_CREAT|IPC_EXCL); 
# or 
# shm_id = shmget(shm_key,width*height*channel,SHM_W|SHM_R|IPC_EXCL); 
# uint8_t * ptr = shmat (shm_id,0,0);
string name

# type of image 
# 'BGR' 'RGB' 'YUV' ...
string type

# image width
uint32 width

# image height
uint32 height

# channel 
uint32 channel