#pragma config(Motor,  port2,           leftMotor,     tmotorServoContinuousRotation, openLoop, reversed, driveLeft)
#pragma config(Motor,  port3,           rightMotor,    tmotorServoContinuousRotation, openLoop, reversed, driveRight)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*CODE COPYRIGHT, BMS ROBOTICS.
WROTE BY: Cohen Dickey & Spencer Hebel
*/

task main()
{
	repeat(forever) {
		//tankControl(Ch3,Ch2,125);
	motor[leftMotor] = vexRT[Ch3];
	motor[rightMotor] = vexRT[Ch2];

			// autonomous
// Idea 2





// Idea 1
/*
			waitUntil (vexRT[Btn6D])
		{

			motor[leftMotor] = 127;
			motor[rightMotor] = 127;
			stopAllMotors();
			wait1Msec(1000);
			backward(1, rotations, 127)
			stopAllMotors(); //test
		} */
}


}
