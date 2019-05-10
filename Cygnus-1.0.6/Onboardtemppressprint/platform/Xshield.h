/*
 PlutoX API V.0.2
 */

#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


typedef enum laser{
    LEFT=0,
	RIGHT,




}laser_e;

class Xshield_P{



public:

	void init();
	void startRanging();
	void stopRanging();
	uint16_t getRange(laser_e laser);





};


extern Xshield_P Xshield;


#ifdef __cplusplus
}
#endif
