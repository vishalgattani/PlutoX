/*
 PlutoX API V.0.7
 */



#pragma once

#include <stdint.h>
#include "Comman.h"


#ifdef __cplusplus
extern "C" {
#endif


typedef struct {

  uint8_t p;
  uint8_t i;
  uint8_t d;

} PID;



typedef enum{

    PID_ROLL,
    PID_PITCH,
    PID_YAW,
    PID_ALT,
    PID_USER

}pid_profile_e;


typedef enum {

    LOW_BATTERY,
    INFLIGHT_LOW_BATTERY,
    CRASH,
    ALL

} failsafe_e;


class DesiredAngle_P {
public:

    int32_t get(angle_e ANGLE);

    void set(angle_e ANGLE, int32_t angle);


};


class DesiredRate_P {
public:

    int32_t get(angle_e ANGLE);

    void set(angle_e ANGLE, int32_t rate);


};


class DesiredPosition_P {
public:

    int32_t get(axis_e AXIS);

    void set(axis_e AXIS, int32_t position);

    void setRelative(axis_e AXIS, int32_t position);


};


class DesiredVelocity_P {
public:

    int32_t get(axis_e AXIS);

    void set(axis_e AXIS, int32_t velocity);


};





class PIDProfile_P {
public:

    void get(pid_profile_e PROFILE,PID* pid);

    void set(pid_profile_e PROFILE, PID* pid);

    void setDefault();


};




class Failsafe_P {
public:

    void enable(failsafe_e FAILSAFE);

    void disable(failsafe_e FAILSAFE);


};


extern DesiredAngle_P DesiredAngle;
extern DesiredRate_P DesiredRate;
extern DesiredPosition_P DesiredPosition;
extern DesiredVelocity_P DesiredVelocity;
extern PIDProfile_P PIDProfile;
extern Failsafe_P Failsafe;




#ifdef __cplusplus
}
#endif

