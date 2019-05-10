
/* Name: AutoTakeOff

 Author: DronaAviation */



// Do not remove the include below
#include "PlutoPilot.h"
#include "Althold.h"
#include "Control.h"
#include "Motor.h"

int16_t roll_value;
int16_t pitch_value;
//bool isarmed=false;
//The setup function is called once at Pluto's hardware startup
void plutoInit()
{
// Add your hardware initialization code here
}



//The function is called once before plutoFly when you activate UserCode
void onPilotStart()
{
  // do your one time stuffs here
	pitch_value=1500;
	roll_value=1500;
}



// The loop function is called in an endless loop
void plutoPilot()
{

//Add your repeated code here

	if(!Control.isArmed())
			{

				Control.arm();

				Althold.setRelativeAltholdHeight(200);

//				Control.setRC(RC_ROLL, 2000);
//				Control.setRC(RC_ROLL, 1000);
//				Control.setRC(RC_PITCH, pitch_value);
//				Control.setRC(RC_ROLL, roll_value);

			}
	Althold.activateAlthold(true);

}



//The function is called once after plutoFly when you deactivate UserCode
void onPilotFinish()
{

	 // do your cleanup stuffs here
//	isarmed=false;
//	Motor.set(M1, 1000);
//    Motor.set(M2, 1000);
//    Motor.set(M3, 1000);
//	Motor.set(M4, 1000);

}




