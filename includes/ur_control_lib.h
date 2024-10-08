// Copyright: CityU UR 
// Project: FuckPX4
// Author: Ranger GUO
// Email: runzhoguo3-c@my.cityu.edu.hk
// Date: 2024-07-19
// Description: Provide enum and methods for CoreEvent

#include <string>

#ifndef _UR_CONTROL_LIB_H_
#define _UR_CONTROL_LIB_H_

namespace URLIB
{   
    // A struct which contains the parameters of different types of thruster 
    struct THRUSTER_PARAM
    {
        const double M200P_1200V_PARAM[16]={0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0 }; 
        const double M200N_1200V_PARAM[16]={0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0 };
        const double T200P_1640V_PARAM[16]={0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0 };
        const double T200N_1640V_PARAM[16]={0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0 };
    };
    
     // A struct which contains different types of thruster 
    enum THRUSTER_TYPE
    {
        M200P_1200V, // M200 Positive @12.00V
        M200N_1200V, // M200 Negative @12.00V
        T200P_1640V, // T200 Positive @16.80V
        T200N_1640V, // T200 Negative @16.80V
    };

    /**
     * @brief Get the name of core mode
     * @param thruster_type(THRUSTER_TYPE) input typr
     * @return (std::string) name of thruster type
     **/
    std::string ThrusterTypeToString(THRUSTER_TYPE thruster_type);

    // An ENUM which contains the mode type of control system
    enum CORE_MODE
    {
        MODE_TEST,
        MODE_MANUAL,
        MODE_STABILIZATION,
        MODE_VERTICAL,
        MODE_OPTICFLOW,
        MODE_POSITION,
        MODE_AUTOPILOT
    };
    /**
     * @brief Get the name of core mode
     * @param core_mode(CORE_MODE) input mode
     * @return (std::string) name of core mode
     **/
    std::string CoreModeToString(CORE_MODE core_mode);
    // {
    //     std::string res="UNKNOW";
    //     switch (core_mode)
    //     {
    //         case MODE_TEST:res="MODE_TEST";break;
    //         case MODE_MANUAL:res="MODE_MANUAL";break;
    //         case MODE_STABILIZATION:res="MODE_STABILIZATION";break;
    //         case MODE_VERTICAL:res="MODE_VERTICAL";break;
    //         case MODE_OPTICFLOW:res="MODE_OPTICFLOW";break;
    //         case MODE_POSITION:res="MODE_POSITION";break;
    //         case MODE_AUTOPILOT:res="MODE_AUTOPILOT";break;
    //         default: break;
    //     }
    //     return res;
    // }


    // An ENUM which contains the event type of control system
    enum CORE_EVENT
    {
        NONE,
        ARM,
        DISARM,
        SET_MODE_TEST,
        SET_MODE_MANUAL,
        SET_MODE_STABILIZATION,
        SET_MODE_VERTICAL,
        SET_MODE_OPTICFLOW,
        SET_MODE_POSITION,
        SET_MODE_AUTOPILOT,
        RESET
    };

    /**
     * @brief Get the name of core event
     * @param core_event(CORE_EVENT) input event
     * @return (std::string) name of core event
     **/
    std::string CoreEventToString(CORE_EVENT core_event);
    // {
    //     std::string res="NONE";
    //     switch (core_event)
    //     {
    //         case NONE:break;
    //         case ARM:res="ARM";break;
    //         case DISARM:res="DISARM";break;
    //         case SET_MODE_TEST:res="SET_MODE_TEST";break;
    //         case SET_MODE_MANUAL:res="SET_MODE_MANUAL";break;
    //         case SET_MODE_STABILIZATION:res="SET_MODE_STABILIZATION";break;
    //         case SET_MODE_VERTICAL:res="SET_MODE_VERTICAL";break;
    //         case SET_MODE_POSITION:res="SET_MODE_POSITION";break;
    //         case SET_MODE_AUTOPILOT:res="SET_MODE_AUTOPILOT";break;
    //         case RESET:res="RESET";break;
    //         default:res="NONE";break;
    //     }
    //     return res;
    // }

    /**
     * @brief Get the id of core event
     * @param core_event(CORE_EVENT) input event
     * @return (uint8_t) id of core event
     **/
    uint8_t CoreEventToUint(CORE_EVENT core_event);
    // {
    //     return static_cast<uint8_t>(core_event);
    // }

    /**
     * @brief convert event id to core event enum
     * @param core_event_id(uint8_t) id of control event
     * @return (CORE_EVENT) core event enum
     **/
    CORE_EVENT UintToCoreEvent(uint8_t core_event_id);
    // {
    //     return static_cast<CORE_EVENT>(core_event_id);
    // }
    
}

#endif //__UR_CONTROL_LIB_H__