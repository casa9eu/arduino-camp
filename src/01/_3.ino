const int RedLed = 6;
const int YelLed = 5;
const int GreLed = 3;

const int Waiter = 2000;  // Wait for 2000 millisecond(s)

void setup()
{
  pinMode(RedLed, OUTPUT);
  pinMode(YelLed, OUTPUT);
  pinMode(GreLed, OUTPUT);
}

void loop()
{
  digitalWrite(RedLed, HIGH);
  delay(Waiter);
  digitalWrite(RedLed, LOW);
  digitalWrite(YelLed, HIGH);
  delay(Waiter);
  digitalWrite(YelLed, LOW);
  digitalWrite(GreLed, HIGH);
  delay(Waiter);
  digitalWrite(GreLed, LOW);
}