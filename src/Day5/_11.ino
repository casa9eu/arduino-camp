#include <IRremote.h> // подключаем библиотеку для IR приемника
#include <Servo.h>

IRrecv irrecv(2); // указываем пин, к которому подключен IR приемник
decode_results results;
Servo servo_8;

void setup() {
  servo_8.attach(8);
   irrecv.enableIRIn();  // запускаем прием инфракрасного сигнала
   Serial.begin(9600); // подключаем монитор порта

   pinMode(12, OUTPUT); // пин 12 будет выходом (англ. «output»)
   pinMode(2, INPUT); // пин A0 будет входом (англ. «intput»)
  
}

void loop() {
   if (irrecv.decode(&results)) // если данные пришли выполняем команды
   {
      Serial.println(results.value); // отправляем полученные данные на порт
    
        
      if (results.value == 16601263) { //настраиваем значение на нужную кнопку
      servo_8.write(90);
   }
      if (results.value == 16584943) { //настраиваем значение на нужную кнопку 
      servo_8.write(0);
   }
      irrecv.resume(); // принимаем следующий сигнал на ИК приемнике
   }
}


  