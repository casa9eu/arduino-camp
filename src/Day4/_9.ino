const int MainValue = 950;
const int Pin = 8;

void setup(){
  pinMode(A0, INPUT);
  pinMode(Pin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if (analogRead(A0) >= MainValue)
    tone(Pin, 1661, 100000); // play tone 80 (G#6 = 1661 Hz)
  else
    noTone(Pin);
  Serial.println(analogRead(A0));
  delay(10); 
}
