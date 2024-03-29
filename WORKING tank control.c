#pragma config(Motor,  port2,           leftMotor,     tmotorServoContinuousRotation, openLoop, driveLeft)
#pragma config(Motor,  port3,           rightMotor,    tmotorServoContinuousRotation, openLoop, driveRight)
#pragma config(Motor,  port4,           clawMotor,     tmotorServoContinuousRotation, openLoop, reversed)
#pragma config(Motor,  port5,           armMotor,      tmotorServoContinuousRotation, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*CODED FOR COPYLEFT
DEVELOPED BY: Cohen Dickey & Spencer Hebel
*/
task main()
{
	bool claw;
	repeat(forever) {
			//tankControl(Ch3,Ch2,125); // OUTDATED and DIGITAL DONT USE
	motor[leftMotor] = vexRT[Ch3]; //-------------------MOTORS ARE MOTORS
	motor[rightMotor] = vexRT[Ch2]; //------------------THEY TAKE VALUES 0 TO 127



	// CLAW
		if (vexRT(Btn6D) == true) { // IF button is on, claw motor is on and bool is TRUE
			motor[clawMotor] = 127;
			claw = true;
		}
	if (claw == true && vexRT(Btn6U) == true && vexRT(Btn6D) == false) // if claw is on, button for DOWN is selected, it GOES DOWN
	{
		motor[clawMotor] = 0;
		claw = false;
		motor[clawMotor] = -127;

	}
// END OF CLAW
// ARM
	bool arm;
	if (vexRT(Btn5D) == true) {
				motor[armMotor] = 127;
				arm = true;
			}
		if (arm == true && vexRT(Btn5U) == true && vexRT(Btn5D) == false)
	{
			motor[armMotor] = 0;
			arm = false;
			motor[armMotor] = -127;


	//AUTONOMOUS
	int rots = 1500;
	if (vexRT(Btn8R) == true)
	{
		motor[leftMotor] = 122;
		motor[rightMotor] = 127;
		wait1Msec(rots); // 2.54 rotations
		stopAllMotors();
		motor[leftMotor] = -122;
		motor[rightMotor] = -127;
		wait1Msec(1600);

	}
}


}

}
