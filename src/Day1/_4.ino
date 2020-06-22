const int Sigment1 = 7;
const int Sigment2 = 8;
const int Sigment3 = 9;
const int Sigment4 = 10;
const int Sigment5 = 11;
const int Sigment6 = 12;
const int Sigment7 = 13;

const int Waiter = 1000;

void setup(){
  pinMode(Sigment4, OUTPUT);
  pinMode(Sigment7, OUTPUT);
  pinMode(Sigment3, OUTPUT);
  pinMode(Sigment1, OUTPUT);
  pinMode(Sigment5, OUTPUT);
  pinMode(Sigment6, OUTPUT);
  pinMode(Sigment2, OUTPUT);
}

void loop(){
  delay(10);
  nine();
  delay(Waiter);
  eight();
  delay(Waiter);
  seven();
  delay(Waiter);
  six();
  delay(Waiter);
  five();
  delay(Waiter);
  four();
  delay(Waiter);
  three();
  delay(Waiter);
  two();
  delay(Waiter);
  one();
  delay(Waiter);
  zero();
  delay(Waiter);
}

void enableAll(){
  digitalWrite(Sigment1, HIGH);
  digitalWrite(Sigment2, HIGH);
  digitalWrite(Sigment3, HIGH);
  digitalWrite(Sigment4, HIGH);
  digitalWrite(Sigment5, HIGH);
  digitalWrite(Sigment6, HIGH);
  digitalWrite(Sigment7, HIGH);
}

void one(){
  enableAll();
  delay(3);

  digitalWrite(Sigment4, LOW);
  digitalWrite(Sigment7, LOW);
}

void two(){
  enableAll();
  delay(3);

  digitalWrite(Sigment4, LOW);
  digitalWrite(Sigment3, LOW);
  digitalWrite(Sigment1, LOW);
  digitalWrite(Sigment5, LOW);
  digitalWrite(Sigment6, LOW);
}

void three(){
  enableAll();
  delay(3);

  digitalWrite(Sigment4, LOW);
  digitalWrite(Sigment7, LOW);
  digitalWrite(Sigment6, LOW);
  digitalWrite(Sigment1, LOW);
  digitalWrite(Sigment3, LOW);
}

void four(){
  enableAll();
  delay(3);

  digitalWrite(Sigment2, LOW);
  digitalWrite(Sigment4, LOW);
  digitalWrite(Sigment7, LOW);
  digitalWrite(Sigment1, LOW);
}

void five(){
  enableAll();
  delay(3);

  digitalWrite(Sigment1, LOW);
  digitalWrite(Sigment3, LOW);
  digitalWrite(Sigment4, LOW);
  digitalWrite(Sigment5, LOW);
  digitalWrite(Sigment6, LOW);
}

void six(){
  enableAll();
  delay(3);

  digitalWrite(Sigment1, LOW);
  digitalWrite(Sigment2, LOW);
  digitalWrite(Sigment3, LOW);
  digitalWrite(Sigment5, LOW);
  digitalWrite(Sigment6, LOW);
  digitalWrite(Sigment7, LOW);
}

void seven(){
  enableAll();
  delay(3);

  digitalWrite(Sigment4, LOW);
  digitalWrite(Sigment7, LOW);
  digitalWrite(Sigment3, LOW);
}

void eight(){
  enableAll();
  delay(3);

  digitalWrite(Sigment1, LOW);
  digitalWrite(Sigment2, LOW);
  digitalWrite(Sigment3, LOW);
  digitalWrite(Sigment4, LOW);
  digitalWrite(Sigment5, LOW);
  digitalWrite(Sigment6, LOW);
  digitalWrite(Sigment7, LOW);
}

void nine(){
  enableAll();
  delay(3);

  digitalWrite(Sigment1, LOW);
  digitalWrite(Sigment2, LOW);
  digitalWrite(Sigment3, LOW);
  digitalWrite(Sigment4, LOW);
  digitalWrite(Sigment6, LOW);
  digitalWrite(Sigment7, LOW);
}

void zero(){
  enableAll();
  delay(3);

  digitalWrite(Sigment2, LOW);
  digitalWrite(Sigment3, LOW);
  digitalWrite(Sigment4, LOW);
  digitalWrite(Sigment5, LOW);
  digitalWrite(Sigment6, LOW);
  digitalWrite(Sigment7, LOW);
}