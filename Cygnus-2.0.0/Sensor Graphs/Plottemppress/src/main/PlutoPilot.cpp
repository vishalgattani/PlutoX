// Do not remove the include below
#include "PlutoPilot.h"
#include "Sensor.h"
#include "User.h"
#include "Utils.h"

//The setup function is called once at Pluto's hardware startup
void plutoInit()
{
// Add your hardware initialization code here
	setUserLoopFrequency(1000);
}



//The function is called once before plutoLoop when you activate Developer Mode
void onLoopStart()
{
  // do your one time stuff here

}



// The loop function is called in an endless loop
void plutoLoop()
{

//Add your repeated code here
	int32_t pressure, temp;
	pressure = Barometer.get(PRESSURE)/100;
	temp = Barometer.get(TEMPERATURE)/100 - 7;
	Monitor.println("Pressure " , pressure, 4);
	Monitor.println("Temperature " , temp, 4);
	Graph.red(pressure, 4);
	Graph.green(temp, 4);
}



//The function is called once after plutoLoop when you deactivate Developer Mode
void onLoopFinish()
{

// do your cleanup stuffs here

}




