/*
 PlutoX API V.0.2
 */

#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum servo {

	S1=0,
}servo_e;


class Servo_P{

      public:
	  void set(servo_e servo,int16_t value );

};


extern Servo_P Servo;

#ifdef __cplusplus
}
#endif
