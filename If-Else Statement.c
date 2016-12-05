
/*
Project Title: If-else statement
Team Members: Matthew F
Date: December 1st, 2016
Section: 4


Task Description:


Pseudocode:

*/

task main()
{                                     //Program begins, insert code within curly braces
	short random = rand();

	while(true)
	{
		if (SensorValue(bumper) == 1)
		{
			startMotor(mainMotor, random);
		}
		else
		{
			stopMotor(mainMotor);
		}
	}



}
