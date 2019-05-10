/*
 PlutoX API V.0.2
 */


#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

class App_P {

public:


	int16_t getAppHeading(void);
    bool isArmSwitchOn(void);




};





extern App_P App;


#ifdef __cplusplus
}
#endif
