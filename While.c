#pragma config(Sensor, dgtl1,  bumper,         sensorTouch)
#pragma config(Sensor, dgtl7,  red,            sensorLEDtoVCC)
#pragma config(Sensor, dgtl8,  yellow,         sensorLEDtoVCC)
#pragma config(Sensor, dgtl9,  green,          sensorLEDtoVCC)
#pragma config(Motor,  port1,           mainMotor,     tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
Project Title: While loop
Team Members: Matthew F
Date: November 28th, 2016
Section: Period 4


Task Description:


Pseudocode:

*/

task main()
{                                     //Program begins, insert code within curly braces
	while(SensorValue(bumper) == 0)
	{
		turnLEDOn(red);
		wait(0.1);
		turnLEDOff(red);

		turnLEDOn(yellow);
		wait(0.1);
		turnLEDOff(yellow);

		turnLEDOn(green);
		wait(0.1);
		turnLEDOff(green);

		wait(0.1);
	}

}
