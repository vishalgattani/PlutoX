/*
 PlutoX API V.0.2
 */

#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


uint32_t microsT(void);



class Timer {

private:

uint32_t time;
uint32_t loopTime;



public:

    Timer();
    bool set(uint32_t time);
    void reset(void);


};






#ifdef __cplusplus
}
#endif
