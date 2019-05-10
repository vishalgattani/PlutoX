/*
 PlutoX API V.0.7
 */


#pragma once

#include <stdint.h>
#include "Comman.h"


#ifdef __cplusplus
extern "C" {
#endif




class Angle_P {
public:

    int16_t get(angle_e ANGLE);


};


class Rate_P {
public:

    int16_t get(axis_e AXIS);


};



class Position_P {
public:

    int16_t get(axis_e AXIS);


};



class Velocity_P {
public:

    int16_t get(axis_e AXIS);


};



extern Angle_P Angle;
extern Rate_P Rate;
extern Position_P Position;
extern Velocity_P Velocity;


#ifdef __cplusplus
}
#endif
