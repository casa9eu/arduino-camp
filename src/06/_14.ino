#include <SPI.h>
#include <MFRC522.h> // библиотека "RFID".
#define SS_PIN 10
#define RST_PIN 9

MFRC522 mfrc522(SS_PIN, RST_PIN);
unsigned long uidDec, uidDecTemp;

void setup() {
  Serial.begin(9600);
  Serial.println("Waiting for card...");
  SPI.begin(); 
  mfrc522.PCD_Init();
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  // Поиск новой метки
  if ( ! mfrc522.PICC_IsNewCardPresent())
    return;

  // Выбор метки
  if ( ! mfrc522.PICC_ReadCardSerial())
    return;

  uidDec = 0;
  for (byte i = 0; i < mfrc522.uid.size; i++)
  {
    uidDecTemp = mfrc522.uid.uidByte[i];
    uidDec = uidDec * 256 + uidDecTemp;
  }

  Serial.println("Card UID: ");
  Serial.println(uidDec);
  if (uidDec == 3763966293)
  {
    tone(6, 200, 500); // Делаем звуковой сигнал, Открытие
    digitalWrite(7, HIGH);
    delay(3000); // пауза 3 сек и механизм запирается.
  }

  digitalWrite(7, LOW);
}