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
	XRanging.init(LEFT);
	XRanging.init(RIGHT);
//	XRanging.init();
//	XRanging.init(BACK);
//	setUserLoopFrequency(150);
// Add your hardware initialization code here
}



//The function is called once before plutoPilot when you activate Developer Mode
void onLoopStart()
{
  // do your one time stuffs here
//	Control.disableFlightStatus(true);
	Command.takeOff(250);
	FlightMode.set(ATLTITUDEHOLD);
//	T2.reset();
}

// The loop function is called in an endless loop
void plutoLoop()
{

//Add your repeated code here



	//ledOp(L_LEFT, OFF);
	//ledOp(L_RIGHT, OFF);
//	Monitor.print("Left ",XRanging.getRange(LEFT));
//	Monitor.println("Value ",XRanging.getRange(FRONT));
//	int16_t val = 1550;
	int val = XRanging.getRange(LEFT);
	int val2 = XRanging.getRange(RIGHT);
//	int flag = 0;
//	Monitor.println("Val ",val);
	if((val >= 100 && val <= 250) || (val2 > 10 &&  val2 < 80))
	{
		Monitor.println("LEFT ",val);
//		Command.flip(BACK_FLIP);
		RcCommand.set(RC_ROLL,1450);

		//RcCommand.set(RC_PITCH,1500);
//		flag=1;
	}
//	Monitor.println("O ",val);
	//RcCommand.set(RC_PITCH,1500);

	if((val2 >= 100 && val2 <= 250) || (val > 10 && val < 80))
	{
		Monitor.println("RIGHT ",val2);
		RcCommand.set(RC_ROLL,1550);
//		RcCommand.set(RC_PITCH,1500);
	}
//	Monitor.print(" Right",XRanging.getRange(RIGHT));
//	Monitor.print("\n");
	//Print.redGraph(Althold.getEstimatedAltitude());
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
