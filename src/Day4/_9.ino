void setup()
{
  pinMode(A0, INPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  if (analogRead(A0) >= 950) {                              //редактировать здесь
    tone(8, 1661, 100000); // play tone 80 (G#6 = 1661 Hz)
  } else {
    noTone(8);
  }
  Serial.println(analogRead(A0));
  delay(10); 
}
