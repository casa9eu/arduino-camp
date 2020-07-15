#include <Servo.h>

Servo servo_0;
Servo servo_1;

void setup(){
  pinMode(A0, INPUT);
  servo_0.attach(0);

  pinMode(A1, INPUT);
  servo_1.attach(1);
}

void loop(){
  servo_0.write(map(analogRead(A0), 0, 1023, 0, 180));
  servo_1.write(map(analogRead(A1), 0, 1023, 0, 180));
  delay(10); // Delay a little bit to improve simulation performance
}