#pragma config(Motor,  port2,           leftMotor,     tmotorServoContinuousRotation, openLoop, reversed, driveLeft)
#pragma config(Motor,  port3,           rightMotor,    tmotorServoContinuousRotation, openLoop, reversed, driveRight)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	repeat(forever) {
		tankControl(Ch3,Ch2,125);
}

}
