#pragma config(Motor,  port2,           leftMotor,     tmotorServoContinuousRotation, openLoop, reversed, driveLeft)
#pragma config(Motor,  port3,           rightMotor,    tmotorServoContinuousRotation, openLoop, reversed, driveRight)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*CODE COPYRIGHT, BMS ROBOTICS.
<<<<<<< HEAD
DEVELOPED BY: Cohen Dickey & Spencer Hebel
=======
WROTE BY: Cohen Dickey & Spencer Hebel
>>>>>>> 3e483f587119525cef49114bb1f297a498b62ac5
*/

task main()
{
	repeat(forever) { //------------------------------SELF EXPLANITORY
		//tankControl(Ch3,Ch2,125);
	motor[leftMotor] = vexRT[Ch3]; //-------------------MOTORS ARE MOTORS
	motor[rightMotor] = vexRT[Ch2]; //------------------THEY TAKE VALUES 0 TO 127

			// autonomous
// Idea 2 -------------------------------------------------------------CODE FLOW

	if (vexRT[Btn6D == true]) {
		setMultipleMotors(127 , motor[leftMotor], motor[rightMotor]);
	}


	//Initializing forwards backwards and the time ---------------------------------------------------FUNCTION
	int for;
	int back;
	int time;
	void fowardBackwards(for,back,time,) 
	{
		set 
	}

// Idea 1
/*
			waitUntil (vexRT[Btn6D])
		{

			motor[leftMotor] = 127;
			motor[rightMotor] = 127;
			stopAllMotors();
			wait1Msec(1000);
			backward(1, rotations, 127)
			stopAllMotors();
		} */
}


}
