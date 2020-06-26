

#define SW 0
#define DT 2
#define CLK 3
int ton = 500;

#include "GyverEncoder.h"
Encoder enc1(CLK, DT, SW);

void setup() {
  Serial.begin(9600);
  enc.setType(TYPE1); //если не работает можно попробовать изменить на TYPE2
  pinMode(11, OUTPUT);

}

void loop() {
  enc1.tick();    // оставляем тут для работы "временных" функций и антидребезга
  
  if (enc1.isRight())ton += 50;         // если был поворот
  if (enc1.isLeft()) ton -= 50;
  Serial.println(ton);
  tone(11, ton, 1000);
  }

 
