#include <Servo.h>

Servo servo_8;

void setup(){
	pinMode(2, INPUT);
	servo_8.attach(8);
}

void loop(){
	if (digitalRead(2) == HIGH)
	{
		servo_8.write(90);
		delay(5000); // Wait for 5000 millisecond(s)
	}
	else
		servo_8.write(0);
}