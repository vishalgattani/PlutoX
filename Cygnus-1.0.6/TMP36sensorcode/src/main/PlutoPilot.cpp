/* Name: PlutoX GasSensor(MQ2-MQ3)

 Author: DronaAviation */




// Do not remove the include below
#include "PlutoPilot.h"
#include "Peripheral.h"
#include "Print.h"

int16_t sensorValue=0;

//The setup function is called once at Pluto's hardware startup
void plutoInit()
{
// Add your hardware initialization code here

	ADC.Init(Pin19); // interfacing MQ2 or MQ3 on available unibus ADC Pins
}



//The function is called once before plutoFly when you activate UserCode
void onPilotStart()
{
  // do your one time stuffs here

}



// The loop function is called in an endless loop

void plutoPilot()
{

//Add your repeated code here
	sensorValue=ADC.Read(Pin19);  // Reading and converting sensor value
	float voltage = sensorValue * 5.0;
//	voltage /= 1024.0;
//	float temperatureC = (voltage - 0.5) * 100 ;
	Print.monitor("ADC19:",sensorValue);     // Printing the value
	Print.monitor("\n");
}



//The function is called once after plutoFly when you deactivate UserCode
void onPilotFinish()
{

	 // do your cleanup stuffs here

}




