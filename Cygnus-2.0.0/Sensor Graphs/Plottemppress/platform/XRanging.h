/*
 PlutoX API V.0.7
 */

#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum laser_sensors {
    LEFT = 0,
    RIGHT,
    FRONT,
    BACK

} laser_e;


class XRanging_P {

public:

    void init();
    void init(laser_e laser);
    int16_t getRange(laser_e laser);

};

extern XRanging_P XRanging;

#ifdef __cplusplus
}
#endif
