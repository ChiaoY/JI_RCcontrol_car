

void readRC(int* val, int n_val){
	int rval[6];
	rval[0] = pulseIn(AUX1, HIGH);
	rval[1] = pulseIn(GEAR, HIGH); 
	rval[2] = pulseIn(RUDO, HIGH); 
	rval[3] = pulseIn(ELEV, HIGH); 
	rval[4] = pulseIn(AILE, HIGH); 
	rval[5] = pulseIn(THRO, HIGH); 

	rval[0] = (rval[0]/10 - 130+34)*50/34;	//0~100
	rval[1] = (rval[1]/10 - 130+34)*50/34;	//0~100
	rval[2] = (rval[2]/10 - 130)*100/34;	//-100~100
	rval[3] = (rval[3]/10 - 130)*200/34;	//-255~255
	rval[4] = (rval[4]/10 - 130)*55/34;	//-100~100
	rval[5] = (rval[5]/10 - 130)*100/34;	//-100~100

	for(int i=0;i<n_val;i++){
		val[i] = rval[i];
	}
	//return rval;
	/*
	Serial.print(val1);
	Serial.print("   ");
	Serial.print(val2);
	Serial.print("   ");
	Serial.print(val3);
	Serial.print("   ");
	Serial.print(val4);
	Serial.print("   ");
	Serial.print(val5);
	Serial.print("   ");
	Serial.println(val6);
	*/
}