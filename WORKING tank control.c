#pragma config(Motor,  port2,           leftMotor,     tmotorServoContinuousRotation, openLoop, driveLeft)
#pragma config(Motor,  port3,           rightMotor,    tmotorServoContinuousRotation, openLoop, driveRight)
#pragma config(Motor,  port4,           clawMotor,     tmotorServoContinuousRotation, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*CODE COPYRIGHT, BMS ROBOTICS.
DEVELOPED BY: Cohen Dickey & Spencer Hebel
*/
task main()
{
	bool claw;
	repeat(forever) {
			//tankControl(Ch3,Ch2,125);
	motor[leftMotor] = vexRT[Ch3]; //-------------------MOTORS ARE MOTORS
	motor[rightMotor] = vexRT[Ch2]; //------------------THEY TAKE VALUES 0 TO 127

//	if (vexRT(Btn8R) == true) {
//	setMultipleMotors(leftMotor,rightMotor, 127);
//	wait1Msec(1000);
//	stopAllMotors();
//}


	// CLAW
		if (vexRT(Btn6D) == true) {
			motor[clawMotor] = 127;
			claw = true;
		}
	if (claw == true && vexRT(Btn6U) == true && vexRT(Btn6D) == false)
	{
		motor[clawMotor] = 0;
		claw = false;
		motor[clawMotor] = -127;

	}
// END OF CLAW


	//AUTONOMOUS
	int rots = 1400;
	if (vexRT(Btn8R) == true)
	{
		motor[leftMotor] = 123;
		motor[rightMotor] = 127;
		wait1Msec(rots); //approximation of how long, slightly over but will ensure we get it lined up.
		stopAllMotors();
		motor[clawMotor] = 127;
		wait1Msec(500);
		motor[leftMotor] = -124;
		motor[rightMotor] = -127;
		wait1Msec(1600);

	}



}

}
