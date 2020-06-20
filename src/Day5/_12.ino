void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);

  pinMode(9, OUTPUT);
  pinMode(0, OUTPUT);
}

void loop()
{
  Serial.println(map(analogRead(A0), 0, 1023, 0, 100));
  if (map(analogRead(A0), 0, 1023, 0, 100) < 20) {
    tone(9, 523, 10000); // play tone 60 (C5 = 523 Hz)
  } else {
    noTone(0);
  }
  delay(10); // Delay a little bit to improve simulation performance
}