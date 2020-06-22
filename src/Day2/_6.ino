void setup(){
  pinMode(A0, INPUT);
  pinMode(5, OUTPUT);
}

void loop(){
  analogWrite(5, map(analogRead(A0), 0, 1023, 0, 255));

  // Delay a little bit to improve simulation performance
  delay(10);
}