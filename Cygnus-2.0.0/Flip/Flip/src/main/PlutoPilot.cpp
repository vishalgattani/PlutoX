/* Name: DebugAPIs
 Author: DronaAviation */


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

}

//The function is called once before plutoPilot when you activate Developer Mode
void onLoopStart()
{
	Command.takeOff(300);
	FlightMode.set(ATLTITUDEHOLD);
	T2.reset();
}

// The loop function is called in an endless loop
void plutoLoop()
{
//Add your repeated code here

  	bool flag;
    flag = T2.set(2000,1);
	if(flag)
	{
		Command.flip(BACK_FLIP);
		Monitor.println("Flipping" );
	}
}

//The function is called once after plutoPilot when you deactivate Developer Mode
void onLoopFinish()
{
	// do your cleanup stuffs here
}
