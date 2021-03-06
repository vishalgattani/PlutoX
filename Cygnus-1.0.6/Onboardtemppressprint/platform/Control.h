/*
 PlutoX API V.0.2
 */


#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum rc_channels {

    RC_ROLL = 0,
    RC_PITCH,
    RC_YAW,
    RC_THROTTLE

} rc_channels_e;

typedef enum f_status {

    FS_Accel_Gyro_Calibration = 0,
    FS_Mag_Calibration,
    FS_Low_battery,
    FS_LowBattery_inFlight,
    FS_Crash,
    FS_Signal_loss,
    FS_Not_ok_to_arm,
    FS_Ok_to_arm,
    FS_Armed

} f_status_e;

typedef enum failsafe {

    LOW_BATTERY = 0, INFLIGHT_LOW_BATTERY, CRASH, ALL

} failsafe_e;

typedef enum {

    COMMAND_TAKE_OFF = 1,
    COMMAND_LAND,

} flight_command_e;

class Control_P {

public:

    bool isOkToArm();
    bool isArmed();
    bool arm(void);
    bool disArm(void);
    void setRC(rc_channels_e channel, int16_t value);
    int16_t getRC(rc_channels_e channel);
    void disableExternalRC(rc_channels_e channel);
    void disableAllExternalRC(void);
    void enableExternalRC(rc_channels_e channel);
    void enableAllExternalRC(void);
    void disableFlightStatus(bool disable);
    bool checkFlightStatus(f_status_e status);
    f_status_e getCurrentFlightStatus(void);
    void setCommand(flight_command_e command);
    void setFailsafeState(failsafe_e failsafe, bool active);
    void setHeading(int16_t heading);
    void setUserLoopFrequency(uint16_t userLoopFrequency);
    void enableDeveloperMode(void);
    void disableDeveloperMode(void);

};

extern Control_P Control;

#ifdef __cplusplus
}
#endif

