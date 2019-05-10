/* Name: DebugAPIs
 Author: DronaAviation */


// Do not remove the include below
#include "PlutoPilot.h"
#include "Xshield.h"
#include "Led.h"
#include "Control.h"
#include "Althold.h"
#include "Print.h"


//The setup function is called once at Pluto's hardware startup
void plutoInit()
{
	Xshield.init();
// Add your hardware initialization code here
}



//The function is called once before plutoPilot when you activate Developer Mode
void onPilotStart()
{
  // do your one time stuffs here
//	Control.disableExternalRC(RC_ROLL);
	Xshield.startRanging();
	Control.disableFlightStatus(true);


}

// The loop function is called in an endless loop
void plutoPilot()
{

//Add your repeated code here
//	Althold.setRelativeAltholdHeight(200);

	//ledOp(L_LEFT, OFF);
	//ledOp(L_RIGHT, OFF);
	if(Xshield.getRange(LEFT) > 100 && Xshield.getRange(LEFT)<250)
	{
		Control.setRC(RC_ROLL, 1550);
		Print.monitor("Right side: ", Xshield.getRange(LEFT)); //Actually left side
		Print.monitor("\n");
	}

	if(Xshield.getRange(RIGHT)> 100 && Xshield.getRange(RIGHT)<250)
	{
		Control.setRC(RC_ROLL, 1450);
		Print.monitor("\t Left side: ", Xshield.getRange(RIGHT)); //Actually right side
		Print.monitor("\n");
	}

//		Print.monitor("\n");
	//Print.redGraph(Althold.getEstimatedAltitude());


}

//The function is called once after plutoPilot when you deactivate Developer Mode
void onPilotFinish()
{

	 // do your cleanup stuffs here
//	 Control.enableAllExternalRC();
	 Xshield.stopRanging();
	 Control.disableFlightStatus(false);

}
