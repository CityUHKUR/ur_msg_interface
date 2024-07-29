
#include "ur_control_lib.h"

std::string URLIB::CoreModeToString(URLIB::CORE_MODE core_mode)
{
    std::string res="UNKNOW";
    switch (core_mode)
    {
        case MODE_TEST:res="MODE_TEST";break;
        case MODE_MANUAL:res="MODE_MANUAL";break;
        case MODE_STABILIZATION:res="MODE_STABILIZATION";break;
        case MODE_VERTICAL:res="MODE_VERTICAL";break;
        case MODE_OPTICFLOW:res="MODE_OPTICFLOW";break;
        case MODE_POSITION:res="MODE_POSITION";break;
        case MODE_AUTOPILOT:res="MODE_AUTOPILOT";break;
        default: break;
    }
    return res;
}


    
std::string URLIB::CoreEventToString(URLIB::CORE_EVENT core_event)
{
    std::string res="NONE";
    switch (core_event)
    {
        case NONE:break;
        case ARM:res="ARM";break;
        case DISARM:res="DISARM";break;
            case SET_MODE_TEST:res="SET_MODE_TEST";break;
            case SET_MODE_MANUAL:res="SET_MODE_MANUAL";break;
            case SET_MODE_STABILIZATION:res="SET_MODE_STABILIZATION";break;
            case SET_MODE_VERTICAL:res="SET_MODE_VERTICAL";break;
            case SET_MODE_POSITION:res="SET_MODE_POSITION";break;
            case SET_MODE_AUTOPILOT:res="SET_MODE_AUTOPILOT";break;
            case RESET:res="RESET";break;
            default:res="NONE";break;
    }
    return res;
}


uint8_t URLIB::CoreEventToUint(URLIB::CORE_EVENT core_event)
{
    return static_cast<uint8_t>(core_event);
}

   
URLIB::CORE_EVENT URLIB::UintToCoreEvent(uint8_t core_event_id)
{
     return static_cast<CORE_EVENT>(core_event_id);
}
    
std::string URLIB::ThrusterTypeToString(THRUSTER_TYPE thruster_type)
{
    std::string res="UNKNOW";
    switch (thruster_type)
    {
        case M200P_1200V:res="M200P_1200V";break;
        case M200N_1200V:res="M200N_1200V";break;
        case T200P_1640V:res="T200P_1640V";break;
        case T200N_1640V:res="T200N_1640V";break;
    }
    return res;
}