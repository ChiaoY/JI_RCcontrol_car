//car.ino

#include "pinSet.h"

void setup(){
	//rc
	pinMode(AUX1, INPUT);
	pinMode(GEAR, INPUT);
	pinMode(RUDO, INPUT);
	pinMode(ELEV, INPUT);
    pinMode(AILE, INPUT);
    pinMode(THRO, INPUT);

    //DC
	pinMode(motorIn1, OUTPUT);
	pinMode(motorIn2, OUTPUT);
	pinMode(motorIn3, OUTPUT);
	pinMode(motorIn4, OUTPUT);

	
}

void loop()
{	
	int val[6];
	readRC(val, 6);
	moveDC(val[3],val[4]);
}

///////////////////////////////////



