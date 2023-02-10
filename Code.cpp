// Motor A connections
int enA = 9;
int in1 = 8;
int in2 = 7;
// Motor B connections
int enB = 3;
int in3 = 5;
int in4 = 4;
// sensor connections: Left one is Sen1 and Right one is Sen2
int Sen1 = A0;
int Sen2 = A1;
void setup() {
	// Set all the motor control pins to outputs
	pinMode(enA, OUTPUT);
	pinMode(enB, OUTPUT);
	pinMode(in1, OUTPUT);
	pinMode(in2, OUTPUT);
	pinMode(in3, OUTPUT);
	pinMode(in4, OUTPUT);
	// Set all the sensor pins to input
  	pinMode(Sen1, INPUT);
	pinMode(Sen2, INPUT);
	
  	delay(150);
}

void loop() {
  if(digitalRead(Sen1)==digitalRead(Sen2)){
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
  }
  if(digitalRead(Sen1)>digitalRead(Sen2)){
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
  }
  if(digitalRead(Sen1)<digitalRead(Sen2)){
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
  }
}



