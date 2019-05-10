/*
 PlutoX API V.0.2
 */

#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


typedef enum inclinations {
	AG_ROLL = 0, AG_PITCH, AG_YAW,

} inclinations_e;


class Angle_P {
public:

	int16_t get(inclinations_e angle);


};





extern Angle_P Angle;



#ifdef __cplusplus
}
#endif
