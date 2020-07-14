const int Pin = 8;

int pos = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(Pin, OUTPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
}

void loop()
{
  // if button press on A0 is detected
  if (digitalRead(A0) == HIGH)
    tone(Pin, 440, 100); // play tone 57 (A4 = 440 Hz)

  // if button press on A1 is detected
  if (digitalRead(A1) == HIGH)
    tone(Pin, 494, 100); // play tone 59 (B4 = 494 Hz)

  // if button press on A2 is detected
  if (digitalRead(A2) == HIGH)
    tone(Pin, 523, 100); // play tone 60 (C5 = 523 Hz)

  delay(10); // Delay a little bit to improve simulation performance
}
