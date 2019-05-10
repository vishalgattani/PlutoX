/*
 PlutoX API V.0.2
 */

#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


typedef enum led {
	L_LEFT = 0, L_MID, L_RIGHT

} led_e;

typedef enum led_state {
	OFF = 0, ON, TOGGLE

} led_state_e;

void ledOp(led_e name, led_state_e state);

#ifdef __cplusplus
}
#endif
