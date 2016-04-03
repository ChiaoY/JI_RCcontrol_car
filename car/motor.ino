

void moveDC(int wval4, int wval5){
	if(wval4 >= 5){
        int le = wval4 + wval5;
        int ri = wval4 - wval5;
		if(le > 250){
			le = 250;
		}
		if(ri > 250){
			ri = 250;
		}
		analogWrite(motorIn1, wval4 - wval5);
		analogWrite(motorIn2, LOW);
		analogWrite(motorIn3, wval4 + wval5);
		analogWrite(motorIn4, LOW);

	}else if(wval4 < -5){
		int le = wval4 + wval5;
        int ri = wval4 - wval5;
		if(le<-250){
			le = -250;
		}
		if(ri < -250){
			ri = -250;
		}
		analogWrite(motorIn1, 0);
		analogWrite(motorIn2, -wval4 - wval5);
		analogWrite(motorIn3, 0);
		analogWrite(motorIn4, -wval4 + wval5);
	}

	else{
		analogWrite(motorIn1, LOW);
		analogWrite(motorIn2, LOW);
		analogWrite(motorIn3, LOW);
		analogWrite(motorIn4, LOW);
	}
}