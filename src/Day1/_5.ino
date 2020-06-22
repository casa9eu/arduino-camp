const int Waiter = 1000;

void setup(){
  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);

  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop(){

//green
  digitalWrite(6,HIGH);
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
  digitalWrite(6,LOW);

//yellow
  digitalWrite(5,HIGH);
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
  digitalWrite(5,LOW);  

//red
  digitalWrite(3,HIGH);
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
  digitalWrite(3,LOW); 
}

void enableAll(){
  digitalWrite(7,HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
}

void one(){
  enableAll();
  delay(3);
  
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);
}

void two(){
  // 2
  enableAll();
  delay(3);
  
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
}

void three(){
  // 3
  enableAll();
  delay(3);
  
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
}

void four(){
  // 4
  enableAll();
  delay(3);
  
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);
  digitalWrite(7, LOW);
}

void five(){
  // 5
  enableAll();
  delay(3);
  
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
}

void six(){
  // 6
  enableAll();
  delay(3);
  
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
}

void seven(){
  // 7
  enableAll();
  delay(3);
  
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);
  digitalWrite(9, LOW);
}

void eight(){
  // 8
  enableAll();
  delay(3);
  
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
}

void nine(){
  // 9
  enableAll();
  delay(3);
  
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
}

void zero(){
  // 0
  enableAll();
  delay(3);
  
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
}