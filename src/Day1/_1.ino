void setup()
{
  pinMode(5, OUTPUT);
}

void loop()
{
 
    digitalWrite(5, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(5, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  
}
