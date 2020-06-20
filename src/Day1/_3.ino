void setup()
{
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  digitalWrite(6, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(5, LOW);
  digitalWrite(3, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(3, LOW);
}