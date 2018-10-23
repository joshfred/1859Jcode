#pragma config(Sensor, dgtl1,  leftencoder,    sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  rightencoder,   sensorQuadEncoder)
#pragma config(Motor,  port1,           BLmotor,       tmotorVex393_HBridge, openLoop, reversed, driveLeft, encoderPort, dgtl1)
#pragma config(Motor,  port2,           FLmotor,       tmotorVex393_MC29, openLoop, driveLeft, encoderPort, dgtl1)
#pragma config(Motor,  port3,           FRmotor,       tmotorVex393_MC29, openLoop, driveRight, encoderPort, dgtl3)
#pragma config(Motor,  port10,          BRmotor,       tmotorVex393_HBridge, openLoop, driveRight, encoderPort, dgtl3)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*        Description: Competition template for VEX EDR                      */
/*                                                                           */
/*---------------------------------------------------------------------------*/

// This code is for the VEX cortex platform
#pragma platform(VEX2)

// Select Download method as "competition"
#pragma competitionControl(Competition)

//Main competition background code...do not modify!
#include "Vex_Competition_Includes.c"

//LCD Display code.
const short leftButton = 1;
const short centerButton = 2;
const short rightButton = 4;

//Declare count variable to keep track of our choice
int count = 0;

//Wait for Press--------------------------------------------------
void waitForPress()
{
	while(nLCDButtons == 0){}
	wait1Msec(5);
}
//----------------------------------------------------------------

//Wait for Release------------------------------------------------
void waitForRelease()
{
	while(nLCDButtons != 0){}
	wait1Msec(5);
}

/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the cortex has been powered on and    */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

void pre_auton()
{
	//Clear LCD

	clearLCDLine(0);

	clearLCDLine(1);

	//Loop while center button is not pressed

	while(nLCDButtons != centerButton)

	{
		//Switch case that allows the user to choose from 4 different options
		switch(count){

		case 0:

			//Display first choice
			displayLCDCenteredString(0, "1"); //PUT THIS NAME LATER ON
			displayLCDCenteredString(1, "<   Enter  >");
			waitForPress();

			//Increment or decrement "count" based on button press
			if(nLCDButtons == leftButton)
			{
				waitForRelease();
				count = 6;
			}

			else if(nLCDButtons == rightButton)
			{
				waitForRelease();
				count++;
			}

			break;
		case 1:

			//Display second choice
			displayLCDCenteredString(0, "2"); //PUT THIS NAME LATER ON
			displayLCDCenteredString(1, "<   Enter  >");
			waitForPress();

			//Increment or decrement "count" based on button press
			if(nLCDButtons == leftButton)
			{
				waitForRelease();
				count--;
			}

			else if(nLCDButtons == rightButton)
			{
				waitForRelease();
				count++;
			}

			break;
		case 2:

			//Display first choice
			displayLCDCenteredString(0, "3"); //PUT THIS NAME LATER ON
			displayLCDCenteredString(1, "<   Enter  >");
			waitForPress();

			//Increment or decrement "count" based on button press
			if(nLCDButtons == leftButton)
			{
				waitForRelease();
				count--;
			}

			else if(nLCDButtons == rightButton)
			{
				waitForRelease();
				count++;
			}

			break;
		case 3:

			//Display first choice
			displayLCDCenteredString(0, "4"); //PUT THIS NAME LATER ON
			displayLCDCenteredString(1, "<   Enter  >");

			waitForPress();

			//Increment or decrement "count" based on button press
			if(nLCDButtons == leftButton)
			{
				waitForRelease();
				count--;
			}

			else if(nLCDButtons == rightButton)
			{
				waitForRelease();
				count++;
			}

			break;
		case 4:

			//Display first choice
			displayLCDCenteredString(0, "5"); //PUT THIS NAME LATER ON
			displayLCDCenteredString(1, "<   Enter  >");
			waitForPress();

			//Increment or decrement "count" based on button press
			if(nLCDButtons == leftButton)
			{
				waitForRelease();
				count--;
			}

			else if(nLCDButtons == rightButton)
			{
				waitForRelease();
				count++;
			}

			break;
		case 5:

			//Display first choice
			displayLCDCenteredString(0, "6"); //PUT THIS NAME LATER ON
			displayLCDCenteredString(1, "<   Enter  >");
			waitForPress();

			//Increment or decrement "count" based on button press
			if(nLCDButtons == leftButton)
			{
				waitForRelease();
				count--;
			}

			else if(nLCDButtons == rightButton)
			{
				waitForRelease();
				count++;
			}

			break;
		case 6:

			//Display first choice
			displayLCDCenteredString(0, "7");
			displayLCDCenteredString(1, "<   Enter  >");

			waitForPress();

			//Increment or decrement "count" based on button press
			if(nLCDButtons == leftButton)
			{
				waitForRelease();
				count--;
			}

			else if(nLCDButtons == rightButton)
			{
				waitForRelease();
				count = 0;
			}

			break;
		}
}
	{
		// Set bStopTasksBetweenModes to false if you want to keep user created tasks
		// running between Autonomous and Driver controlled modes. You will need to
		// manage all user created tasks if set to false.
		bStopTasksBetweenModes = true;

		// Set bDisplayCompetitionStatusOnLcd to false if you don't want the LCD
		// used by the competition include file, for example, you might want
		// to display your team name on the LCD in this function.
		// bDisplayCompetitionStatusOnLcd = false;

		// All activities that occur before the competition starts
		// Example: clearing encoders, setting servo positions, ...
	}
}
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/
task autonomous()
{
	//Clear LCD

	clearLCDLine(0);

	clearLCDLine(1);

	//Switch Case that actually runs the user choice

	switch(count){

	case 0:

		//If count = 0, run the code correspoinding with choice 1

		displayLCDCenteredString(0, "1");

		displayLCDCenteredString(1, "is running!");

		wait1Msec(250);  // Robot waits for 250 milliseconds

startMotor(motorPort, speed);

untilEncoderCounts(distance, sensorPort);

		break;

	case 1:

		//If count = 1, run the code correspoinding with choice 2

		displayLCDCenteredString(0, "2");

		displayLCDCenteredString(1, "is running!");

		wait1Msec(250);      // Robot waits for 250 milliseconds


		break;

	case 2:

		//If count = 0, run the code correspoinding with choice 1

		displayLCDCenteredString(0, "3");

		displayLCDCenteredString(1, "is running!");
		wait1Msec(250);


		break;

	case 3:

		//If count = 0, run the code correspoinding with choice 1

		displayLCDCenteredString(0, "4");

		displayLCDCenteredString(1, "is running!");

		wait1Msec(250);      // Robot waits for 250 milliseconds


		break;
	case 4:

		//If count = 0, run the code correspoinding with choice 1

		displayLCDCenteredString(0, "5");

		displayLCDCenteredString(1, "is running!");

		wait1Msec(250);      // Robot waits for 250 milliseconds
{


		break;

	case 5:

		//If count = 0, run the code correspoinding with choice 1

		displayLCDCenteredString(0, "6");

		displayLCDCenteredString(1, "is running!");

		wait1Msec(250);      // Robot waits for 250 milliseconds



		break;

	case 6:

		//If count = 0, run the code correspoinding with choice 1

		displayLCDCenteredString(0, "7");

		displayLCDCenteredString(1, "is running!");

		wait1Msec(250);      // Robot waits for 250 milliseconds



		break;

}
	}
	// ..........................................................................
	// Insert user code here.
	// ..........................................................................

	// Remove this function call once you have "real" code.
	//AutonomousCodePlaceholderForTesting();

}
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

//+++++++++++++++++++++++++++++++++++++++++++++| MAIN |+++++++++++++++++++++++++++++++++++++++++++++++
task usercontrol()
{
	bLCDBacklight = true;                                    // Turn on LCD Backlight
	string mainBattery, backupBattery;
	while(true)                                                        // An infinite loop to keep the program running until you terminate it
	{
		clearLCDLine(0);                                            // Clear line 1 (0) of the LCD
		clearLCDLine(1);                                            // Clear line 2 (1) of the LCD

		//Display the Primary Robot battery voltage
		displayLCDString(0, 0, "Primary: ");
		sprintf(mainBattery, "%1.2f%c", nImmediateBatteryLevel/1000.0,'V'); //Build the value to be displayed
		displayNextLCDString(mainBattery);

		//Display the Backup battery voltage
		displayLCDString(1, 0, "Backup: ");
		sprintf(backupBattery, "%1.2f%c", BackupBatteryLevel/1000.0, 'V');    //Build the value to be displayed
		displayNextLCDString(backupBattery);

		//motor[]  = vexRT[Ch2];		//Controls the drive
		//motor[]  = vexRT[Ch2]; 		//Controls the drive

	if (abs(vexRT[Ch3]) > 5)
		{
		motor[FRmotor]  = vexRT[Ch3]; 	  //Controls the drive
			motor[BRmotor]  = vexRT[Ch3];     //Controls the drive
		}
		else
		{
		motor[FRmotor]  = 0; 	  //Controls the drive
			motor[BRmotor]  = 0;     //Controls the drive
		}


		if ((abs(vexRT[Ch2]) > 5))
		{
			motor[FLmotor]  = vexRT[Ch2]; 	  //Controls the drive
			motor[BLmotor]  = vexRT[Ch2];     //Controls the drive

		}
		else
		{
			motor[FLmotor]  = 0; 	  //Controls the drive
			motor[BLmotor]  = 0;     //Controls the drive
		}

		}
}
