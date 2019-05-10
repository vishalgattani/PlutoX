/*
 PlutoX API V.0.2
 */

#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

class Accelerometer_P {
public:

	int16_t getX(void);
	int16_t getY(void);
	int16_t getZ(void);
	int32_t getNetAcc(void);
};

class Gyroscope_P {
public:

	int16_t getX(void);
	int16_t getY(void);
	int16_t getZ(void);
};

class Magnetometer_P {
public:

	int16_t getX(void);
	int16_t getY(void);
	int16_t getZ(void);
};

class Barometer_P {
public:

	int32_t getPressure(void);
	int32_t getTemperature(void);
};





extern Accelerometer_P Accelerometer;
extern Gyroscope_P Gyroscope;
extern Magnetometer_P Magnetometer;
extern Barometer_P Barometer;


#ifdef __cplusplus
}
#endif
