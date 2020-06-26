#define in1 8
#define in2 9
#define in3 10
#define in4 11

int dl = 5; // время задержки между импульсами

void setup()
{
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);
  
  pinMode(2, INPUT);
}

void loop()
{
  if (digitalRead(2) == 1) {
    
    digitalWrite(in1, HIGH); 
    digitalWrite(in2, LOW); 
    digitalWrite(in3, LOW); 
    digitalWrite(in4, HIGH);
    delay(dl);

    digitalWrite(in1, HIGH); 
    digitalWrite(in2, HIGH); 
    digitalWrite(in3, LOW); 
    digitalWrite(in4, LOW);
    delay(dl);

    digitalWrite(in1, LOW); 
    digitalWrite(in2, HIGH); 
    digitalWrite(in3, HIGH); 
    digitalWrite(in4, LOW);
    delay(dl);

    digitalWrite(in1, LOW); 
    digitalWrite(in2, LOW); 
    digitalWrite(in3, HIGH); 
    digitalWrite(in4, HIGH);
    delay(dl);
  }
  else { 
    digitalWrite(in1, LOW); 
    digitalWrite(in2, LOW); 
    digitalWrite(in3, LOW); 
    digitalWrite(in4, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
