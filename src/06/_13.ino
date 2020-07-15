#include <Keypad.h>

#define LED1 10 // красный светодиод
#define LED2 11 // зеленый светодиод

#define NUM_KEYS 5 // количество знаков в коде
char myarraw[NUM_KEYS] = { '1', '2', '3', '4', '5'}; // массив с верным кодом

char key;
char button_pressed[NUM_KEYS];
int k=0;
int s=0; 
const byte ROWS = 4;
const byte COLS = 4; 
char keys[ROWS][COLS] = {
	{'1','2','3','A'},
	{'4','5','6','B'},
	{'7','8','9','C'},
	{'*','0','#','D'}
};
byte colPins[COLS] = {5, 4, 3, 2}; 
byte rowPins[ROWS] = {9, 8, 7, 6}; 

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup() {
	pinMode(LED1, OUTPUT);
	pinMode(LED2, OUTPUT);
	pinMode(12, OUTPUT);

	Serial.begin(9600);
}

void loop (){
	key = keypad.getKey(); 

	if ( key != NO_KEY ) 
	{
		button_pressed [k] = key; 
		k = k + 1;
		if(k == NUM_KEYS)
		{
			for ( uint8_t i = 0; i < NUM_KEYS; i++)
			{
				if (button_pressed[i] == myarraw[i])
					s = s + 1;
			}

			Serial.println(s);

			if(s == NUM_KEYS) //если у нас все кнопки совпали с кодом, то включаем реле
			{
				digitalWrite (LED2, HIGH); // зажгли зеленый светик (пользователь ввел верный код)
				delay (5000); // ждем 5 секунд пока горит светик зеленый и включено реле
				digitalWrite (LED2, LOW); // гасим светик
				k=0; //сбрасываем счетчик нажатий нашей переменной
				s=0; // сбрасываем счетчик совпадений нашей переменной
				} else { // если не все кнопки совпали с верным кодом
				tone(12, 1661, 100000); // включили баззер
				digitalWrite (LED1, HIGH); // включаем красный светик (пользователь ввел неверный код)
				delay (2000); // ждем 5 секунд
				noTone(12); // гасим баззер

				digitalWrite (LED1, LOW); // гасим красн светик
				k=0; // обнуляем счетчики, чтобы начать все заново
				s=0; //
			}
		}
	}
}