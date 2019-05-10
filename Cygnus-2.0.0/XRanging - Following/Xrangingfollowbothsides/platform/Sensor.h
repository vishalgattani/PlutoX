/*
 PlutoX API V.0.7
 */


#pragma once

#include <stdint.h>
#include "Comman.h"


#ifdef __cplusplus
extern "C" {
#endif


typedef enum {

    PRESSURE,
    TEMPERATURE

}baro_state_e;


class Accelerometer_P {
public:

    int16_t get(axis_e AXIS);
    int32_t getNetAcc(void);

};

class Gyroscope_P {
public:

    int16_t get(axis_e AXIS);

};

class Magnetometer_P {
public:

    int16_t get(axis_e AXIS);

};

class Barometer_P {
public:

    int32_t get(baro_state_e STATE);

};

extern Accelerometer_P Acceleration;
extern Gyroscope_P Gyroscope;
extern Magnetometer_P Magnetometer;
extern Barometer_P Barometer;

#ifdef __cplusplus
}
#endif
