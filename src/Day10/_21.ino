#include "DHT.h"
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include "RTClib.h"

#if defined(ARDUINO) && ARDUINO >= 100
#define printByte(args)  write(args);
#else
#define printByte(args)  print(args,BYTE);
#endif

#define DHTPIN 2

// Инициируем датчик
//DHT dht(DHTPIN, DHT22);

DHT dht(DHTPIN, DHT11);

RTC_DS1307 RTC;
LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup(){
  lcd.init();
  lcd.backlight();
  Wire.begin();
  RTC.begin();
  dht.begin();
  RTC.adjust(DateTime(__DATE__, __TIME__));
}

void loop(){

  //Считываем влажность
  float h = dht.readHumidity();

  // Считываем температуру
  float t = dht.readTemperature();

  // Проверка удачно прошло ли считывание.
  if (isnan(h) || isnan(t)) {
    lcd.setCursor ( 11, 0 );
    lcd.print ("EROR");
  }

  lcd.clear();
  DateTime now = RTC.now();
  lcd.setCursor ( 0, 0 );
  lcd.print(now.hour(), DEC);
  lcd.print(':');
  lcd.print(now.minute(), DEC);
  lcd.print(':');
  lcd.print(now.second(), DEC);
  lcd.setCursor ( 10, 0 );
  lcd.print ("T:");
  lcd.print (t);
  lcd.setCursor(0, 1);
  lcd.print(now.day(), DEC);
  lcd.print('/');
  lcd.print(now.month(), DEC);
  lcd.print('/');
  lcd.print(now.year(), DEC);
  lcd.print(' ');
  lcd.setCursor ( 10, 1);
  lcd.print ("H:");
  lcd.print (h);

  delay(1000);
}