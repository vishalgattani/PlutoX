// Do not remove the include below
#include "PlutoPilot.h"
#include "XRanging.h"
#include "Utils.h"
#include "Peripheral.h"
#include "Sensor.h"
#include "User.h"
#include "Control.h"


Interval T2;
//The setup function is called once at Pluto's hardware startup
void plutoInit()
{
	XRanging.init(LEFT);
	XRanging.init(RIGHT);
}

//The function is called once before plutoPilot when you activate Developer Mode
void onLoopStart()
{
	Command.takeOff(250);
	FlightMode.set(ATLTITUDEHOLD);
}

// The loop function is called in an endless loop
void plutoLoop()
{
//Add your repeated code here
	int val = XRanging.getRange(LEFT);
	int val2 = XRanging.getRange(RIGHT);

	if(val >= 0 && val <= 200)
	{
		Monitor.println("LEFT ",val);
		RcCommand.set(RC_ROLL,1550);
	}

	if(val2 >= 0 && val2 <= 200)
	{
		Monitor.println("RIGHT ",val2);
		RcCommand.set(RC_ROLL,1450);
	}

	bool flag = T2.set(2000,1);
	if(flag){
		val = -100;
		RcCommand.set(RC_ROLL,1500);
	}
}

//The function is called once after plutoPilot when you deactivate Developer Mode
void onLoopFinish()
{
	 // do your cleanup stuffs here
//	 Xshield.stopRanging();
//	 Control.disableFlightStatus(false);
}
