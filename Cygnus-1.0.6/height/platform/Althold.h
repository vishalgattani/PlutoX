/*
 PlutoX API V.0.2
 */

#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

class Althold_P {

public:

	int32_t getEstimatedAltitude(void);

	int32_t getVelocityZ(void);

	void activateAlthold(bool activate);

	bool isAltholdModeActive(void);

	void setAltholdHeight(int32_t height);

	void setRelativeAltholdHeight(int32_t height);

	int32_t  getAltholdHeight(void);

};

extern Althold_P Althold;

#ifdef __cplusplus
}
#endif
