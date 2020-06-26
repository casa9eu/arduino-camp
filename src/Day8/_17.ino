//c 261 Hz 1915
//d 294 Hz 1700
//e 329 Hz 1519
//f 349 Hz 1432
//g 392 Hz 1275
//a 440 Hz 1136
//b 493 Hz 1014
//C 523 Hz 956

// Длительность звуков для разных нот
#define note_c_delay 1915
#define note_b_delay 1014

// Пины, которые мы используем
#define TRIG_PIN 2
#define ECHO_PIN 3
#define BUZZER_PIN 11

//Переменные, которые используются
int duration, distance;

//Портотип наших функций
void playTone(int tone, int duration);

void setup() {
pinMode(TRIG_PIN, OUTPUT);
pinMode(ECHO_PIN, INPUT);
pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
// для большей точности установим значение LOW на пине Trig
digitalWrite(TRIG_PIN, LOW);
delayMicroseconds(2);
// Теперь установим высокий уровень на пине Trig
digitalWrite(TRIG_PIN, HIGH);
// Подождем 10 μs
delayMicroseconds(10);
digitalWrite(TRIG_PIN, LOW);
// Узнаем длительность высокого сигнала на пине Echo
duration = pulseIn(ECHO_PIN, HIGH);
// Рассчитаем расстояние в см
distance= duration*0.034/2;

//Издаем звук
playTone(note_b_delay, 25);

// Пауза для заданого растояния, полученного от датчика
delayMicroseconds(duration);

}

//Описание функций
void playTone(int tone, int duration) {
for (long i = 0; i < duration * 100L; i += tone * 2) {
digitalWrite(BUZZER_PIN, HIGH);
delayMicroseconds(tone);
digitalWrite(BUZZER_PIN, LOW);
delayMicroseconds(tone);
}
}
