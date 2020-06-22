const int DigPinLED = 5;
const int DigPinBTN = 2;

void setup()
{
	pinMode(DigPinBTN, INPUT);
	pinMode(DigPinLED, OUTPUT);
}

void loop()
{
	if (digitalRead(DigPinBTN) == HIGH)
		digitalWrite(DigPinLED, HIGH);
	else
		digitalWrite(DigPinLED, LOW);

	// Delay a little bit to improve simulation performance
	delay(10);
}