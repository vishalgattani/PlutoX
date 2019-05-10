/*
 PlutoX API V.0.2
 */

#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum motor {

	M1=0,
	M2,
	M3,
	M4,
	M5,
	M6,
	M7,
	M8



}motor_e;


typedef enum motor_direction {

	FORWARD=0,
	BACKWARD

}motor_direction_e;




class Motor_P{




public:

	  void set(motor_e motor,int16_t value );
	  void setDirection(motor_e motor,motor_direction_e direction);



};


extern Motor_P Motor;


#ifdef __cplusplus
}
#endif

