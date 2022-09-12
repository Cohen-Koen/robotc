
//	setMultipleMotors(127,

//task main()
//{
//	if(vexRT[Ch6D] == true) {
//		motor[claw] = 127;

//	}

	repeat(forever) { //------------------------------SELF EXPLANITORY
		//tankControl(Ch3,Ch2,125);
	motor[leftMotor] = vexRT[Ch3]; //-------------------MOTORS ARE MOTORS
	motor[rightMotor] = vexRT[Ch2]; //------------------THEY TAKE VALUES 0 TO 127

			// autonomous
// Idea 2 -------------------------------------------------------------CODE FLOW

	//if (vexRT[Btn6D == true]) {
	//	setMultipleMotors(127 , motor[leftMotor], motor[rightMotor]);
	//}




// Idea 1

		//	if (vexRT[Btn8R])
		//{

		//	motor[leftMotor] = 127;
		//	motor[rightMotor] = 127;
		//	stopAllMotors();
		//	wait1Msec(1000);
		//	backward(1, rotations, 127);
		//	stopAllMotors();
		//}
}

}
