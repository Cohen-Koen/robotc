#pragma config(Motor,  port2,           leftMotor,     tmotorServoContinuousRotation, openLoop, reversed, driveLeft)
#pragma config(Motor,  port3,           rightMotor,    tmotorServoContinuousRotation, openLoop, reversed, driveRight)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*CODE COPYRIGHT, BMS ROBOTICS.
DEVELOPED BY: Cohen Dickey & Spencer Hebel
*/


	//Initializing forwards backwards and the time ---------------------------------------------------FUNCTION
float forw;
float back;
float time;
void fowardBackwards(forw,back,time)
{
	setMultipleMotors(127, motor[leftMotor], motor[rightMotor]);
	wait1Msec(3000);
	stopAllMotors();


}



task main()
{
	if(vexRT[Btn6D] == true) {//-----------------------------------------------SETS CLAW TO MOVE \/
		motor[claw]
	}

	repeat(forever) { //------------------------------SELF EXPLANITORY
		//tankControl(Ch3,Ch2,125);--------------------OLD TANK CONTROL
	motor[leftMotor] = vexRT[Ch3]; //-------------------MOTORS ARE MOTORS
	motor[rightMotor] = vexRT[Ch2]; //------------------THEY TAKE VALUES 0 TO 127

			// autonomous
// Idea 2 -------------------------------------------------------------CODE FLOW

	if (vexRT[Btn6D == true]) {//-------------------------------------------------AUTONOMOUS IDEA
		setMultipleMotors(127 , motor[leftMotor], motor[rightMotor]);//              |
	//                                                                              \/
	}




// IDEA 1 CHRONOLOGICAL AUTONOMOUS IDEA-----------------------------------  |
//                                                                          |
			if (vexRT[Btn8R])//                                             |
		{//                                                                 |
			motor[leftMotor] = 127;//                                       |
			motor[rightMotor] = 127;//                                      |
			stopAllMotors();          //                                    |
			wait1Msec(1000);//                                              |
			backward(1, rotations, 127);//                                  |
			stopAllMotors();//                                              |
		}//                                                                 |
}//                                                                        \/





}
//	  \\
//     (o>
//  \\_//)
//   \_/_)
//    _|_
