// Do not remove the include below
#include "PlutoPilot.h"
#include "Sensor.h"
#include "Print.h"

//The setup function is called once at Pluto's hardware startup
void plutoInit()
{
// Add your hardware initialization code here
}



//The function is called once before plutoPilot when you activate Developer Mode
void onPilotStart()
{
  // do your one time stuffs here

}



// The loop function is called in an endless loop
void plutoPilot()
{

//Add your repeated code here
	Print.monitor("Pressure ",Barometer.getPressure());
	Print.monitor("Temperature ",Barometer.getTemperature());
	Print.monitor("\n");
}



//The function is called once after plutoPilot when you deactivate Developer Mode
void onPilotFinish()
{

// do your cleanup stuffs here

}




