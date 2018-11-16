startTask(FwControlTask);
	if (autonomousRoutine == 0) {
		/////////////////////////////////////////////////////////
		////////////////////BIG AUTO:///////////////////////////
		////////2 low flags, 2 high flags, 2 caps /////////////
		///////starts lined up with wall facing cap///////////
		//////////////////////15 points//////////////////////
		////////////////////////////////////////////////////
		displayLCDString(0, 0, "Big Boi");
		bool red = allianceColor == RED;
		motor[Descorer]=-45;
		wait1Msec(100);
		//move indexer a slight bit to ensure cap deosnt get flipped
		motor[Descorer]=0;
		motor[Intake]=-110;
		//start intake
		driveInch(90,40);
		//drive at cap and get the ball
		driveInch(127,1);
		motor[Intake]=-127;
		//intake more to get the ball into the robot
		wait1Msec(900);
		motor[Intake]=-60;
		motor[Indexer]=5;
		//slow down intake and run the indexer to ensure the balls dont pass into the flywheel
		driveInch(-50,40.15);
		//drive back
		delay(700);
		motor[Intake]=0;
		//stop the intake
		if(red == false){
			//bool based on the color selected in the LCD
			gyroTurn(900,1);
		}
		else{
			gyroTurn(900,-1);
		}
		FwVelocitySet( 800,1);
		//turn on the flywheel
		motor[Intake]=-20;
		delay(800);
		driveInch(75.5,15.5);
		//drive to the flag
		delay(2000);
		if(red == false){
			gyroTurn(30,-1);
		}
		else{
			gyroTurn(30,1);
		}
		//correct for drift
		wait1Msec(900);
		motor[Intake]=-60;
		motor[Indexer]=-127;
		wait1Msec(700);
		//shoot
		motor[Indexer]=5;
		driveInch(60,5);
		motor[Intake]=-127;
		//drive forwards to shoot closer run intake to make sure ball gets in
		delay(500);
		motor[Indexer]=-127;
		wait1Msec(700);
		//shoot
		FwVelocitySet( 0, 0 );
		//spin down the flywheel ****IMPORTANT BECAUSE IF NOT FLYWHEEL BREAKS SELF****
		motor[Intake]=0;
		motor[Indexer]=0;
		driveInch(70,3);
		//hit low flag
		delay(800);
		driveInch(-60,20);
		//drive back
		if(red == false){
			//rotate back to line up with cap to flip
			gyroTurn(450,-1);
		}
		else{
			gyroTurn(450,1);
		}
		motor[Intake]=127;
		driveInch(70,5);
		//drive at cap to flip
		driveInch(-50,2);
		//drive back
		//turn
		//hit middle bottom flag

		} else if (autonomousRoutine == 1) {
		displayLCDString(0, 0, "smol Boi");
		driveInch(120,45/2);
		wait1Msec(500);
		FwVelocitySet( 800,1);
		motor[Intake]=-127;
		motor[Indexer]=-127;
		wait1Msec(1000);
		motor[Indexer]=0;
		wait1Msec(500);
		/*
		move(60,0,0,0);
		wait1Msec(500);
		motor[Indexer]=127;
		wait1Msec(500);
		move(60,0,0,0);
		*/
		driveInch(120,45/2);
		wait1Msec(500);
		driveInch(-120,45);
		wait1Msec(15000);
	}
	else	if (autonomousRoutine == 2) {
		displayLCDString(0, 0, "back Boi");
		motor[Intake]=127;
		driveInch(120,45*(5/6));
		wait1Msec(500);
		driveInch(-120,45*(5/6));
		wait1Msec(15000);
	}
	if (autonomousRoutine == 3) {
		/////////////////////////////////////////////////////////
		////////////////////SKILLS AUTO:////////////////////////
		////////2 low flags, 2 high flags, 6 caps /////////////
		///////starts lined up with wall facing cap///////////
		//////////////////////12 points//////////////////////
		////////////////////////////////////////////////////
		displayLCDString(0, 0, "skills Boi");
		motor[Indexer]=-100;
		//start intake
		driveInch(90,42);
		//drive at cap and get the ball
		motor[Intake]=-127;
		//intake more to get the ball into the robot
		wait1Msec(900);
		gyroTurn(900,1);
		//turn to face middle flags
		motor[Intake]=-60;
		motor[Indexer]=5;
		wait1Msec(1000);
		FwVelocitySet( 800,1.00 );
		//start fylwheel
		delay(800);
		motor[Indexer]=-127;
		wait1Msec(700);
		motor[Indexer]=0;
		//shoot ball one at high flag
		driveInch(70,10);
		//move to middle flag
		delay(800);
		motor[Indexer]=-127;
		wait1Msec(700);
		motor[Indexer]=0;
		//shoot ball two at middle flag
		gyroTurn(450,-1);
		//Turn away to get to the back cornner of the field
		delay(500);
		driveInch(-100,75);
		//drive to the back
		delay(500);
		gyroTurn(450,1);
		//turn to be at a 90
		driveInch(-100,44);
		//drive into wall
		driveInch(50,2);
		//drive from wall
		gyroTurn(900,1);
		//turn from wall and face cap
		motor[Indexer]=100;
		driveInch(127,50);
		//flip cap one and cap two with stick
		motor[Intake]=0;
		delay(400);
		gyroTurn(900,-1);
		delay(700);
		gyroTurn(900, 1);
		// move cap one
		driveInch(127, 25);
		//get caps three and four
		gyroTurn(900,-1);
		delay(700);
		gyroTurn(900, 1);
		// move caps
		driveInch(80, 60);
		// hit wall
		driveInch(-80, 5);
		//get away from wall
		gyroTurn(900, -1);
		// turn away from wall
		driveInch (-60, 5);
		delay(1000);
		driveInch(127, 129);
		//hit low flag
		driveInch(-70,24);
		//drive back to line up with cap
		gyroTurn(900, -1);
		//turn to cap
		motor[Intake]=100;
		driveInch(70,35);}
	//else	if (autonomousRoutine == 4) {
	//	displayLCDString(0, 0, "back tile flags Boi");
	//		wait1Msec(5000);
	//		move(60,0,0,0);
	//		motor[Motor_FW1]=127;
	//		motor[Motor_FW2]=127;
	//		motor[Indexer]=-127;
	//		motor[Intake]=-127;
	//		wait1Msec(1500);
	//		motor[Motor_FW1]=60;
	//		motor[Motor_FW2]=60;
	//		motor[Indexer]=-127;
	//		motor[Intake]=-127;
	//		rotate(true,90);
	//		wait1Msec(15000);}
	else if(autonomousRoutine ==4)
	{
		displayLCDString(0, 0, "Test Boi");
		displayLCDString(1, 0, " d");
		delay(10);
		motor[Intake]=-127;
		driveInch(60,39);
		driveInch(-60,39);
		motor[Intake]=0;



		/*
		SensorValue[LeftDriveE]=0;
		SensorValue[RightDriveE]=0;
		motor[DriveR1] = -127;
		motor[DriveR2] = -127;
		motor[DriveL1] = 127;
		motor[DriveL2] = 127;
		waitUntil(SensorValue[Gyro]==90);
		motor[DriveR1] = 0;
		motor[DriveR2] = 0;
		motor[DriveL1] = 0;
		motor[DriveL2] = 0;
		wait1Msec(100000);
		*/
	}
}
