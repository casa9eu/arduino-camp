const int MainValue = 950;
const int Pin = 8;

void setup(){
  pinMode(A0, INPUT);
  pinMode(Pin, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  if (analogRead(A0) >= MainValue)
    digitalWrite(Pin, HIGH);
  else
    digitalWrite(Pin, LOW);

  Serial.println(analogRead(A0));
  delay(10); 
}