/*
 PlutoX API V.0.7
 */


#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum motor {

    M1 = 0,
    M2,
    M3,
    M4,
    M5,
    M6,
    M7,
    M8

} motor_e;

typedef enum {

    CLOCK_WISE = 0,
    ANTICLOCK_WISE

} motor_aerial_direction_e;


typedef enum {

    FORWARD = 0,
    BACKWARD

} motor_terrestrial_direction_e;


class Motor_P {

public:

    void init(motor_e motor);
    void initReversibleMotors();
    void set(motor_e motor, int16_t pwmValue);
    void setDirection(motor_e motor, motor_aerial_direction_e direction);
    void setDirection(motor_e motor, motor_terrestrial_direction_e direction);


};

extern Motor_P Motor;

#ifdef __cplusplus
}
#endif

