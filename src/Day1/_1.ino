const int DigPin = 5;
const int Waiter = 1000;

void setup()
{
	pinMode(DigPin, OUTPUT);
}

void loop()
{
	digitalWrite(DigPin, HIGH);
	delay(Waiter); // Wait for 1000 millisecond(s)
	digitalWrite(DigPin, LOW);
	delay(Waiter); // Wait for 1000 millisecond(s)
}