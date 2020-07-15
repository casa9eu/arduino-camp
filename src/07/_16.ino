#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Max72xxPanel.h>

int pinCS = 9;
int numberOfHorizontalDisplays = 1; // количество матриц по-горизонтали
int numberOfVerticalDisplays = 1; // количество матриц по-вертикали

Max72xxPanel matrix = Max72xxPanel(pinCS, numberOfHorizontalDisplays, numberOfVerticalDisplays);

void setup() {
    matrix.setIntensity(10); // яркость от 0 до 15
}

void loop() {
    matrix.drawPixel(0, 2, HIGH);
    matrix.drawPixel(0, 3, HIGH);
    matrix.drawPixel(0, 4, HIGH);
    matrix.drawPixel(0, 5, HIGH);
    matrix.drawPixel(1, 2, HIGH);
    matrix.drawPixel(1, 6, HIGH);
    matrix.drawPixel(2, 0, HIGH);
    matrix.drawPixel(2, 2, HIGH);
    matrix.drawPixel(2, 5, HIGH);
    matrix.drawPixel(2, 7, HIGH);
    matrix.drawPixel(3, 0, HIGH);
    matrix.drawPixel(3, 7, HIGH);
    matrix.drawPixel(4, 0, HIGH);
    matrix.drawPixel(4, 2, HIGH);
    matrix.drawPixel(4, 5, HIGH);
    matrix.drawPixel(4, 7, HIGH);
    matrix.drawPixel(5, 0, HIGH);
    matrix.drawPixel(5, 3, HIGH);
    matrix.drawPixel(5, 4, HIGH);
    matrix.drawPixel(5, 7, HIGH);
    matrix.drawPixel(6, 1, HIGH);
    matrix.drawPixel(6, 6, HIGH);
    matrix.drawPixel(7, 2, HIGH);
    matrix.drawPixel(7, 3, HIGH);
    matrix.drawPixel(7, 4, HIGH);
    matrix.drawPixel(7, 5, HIGH);
    matrix.write(); // вывод всех пикселей на матрицу
    delay(2000);
    matrix.drawPixel(0, 2, LOW);
    matrix.drawPixel(0, 3, LOW);
    matrix.drawPixel(0, 4, LOW);
    matrix.drawPixel(0, 5, LOW);
    matrix.drawPixel(1, 2, LOW);
    matrix.drawPixel(1, 6, LOW);
    matrix.drawPixel(2, 0, LOW);
    matrix.drawPixel(2, 2, LOW);
    matrix.drawPixel(2, 5, LOW);
    matrix.drawPixel(2, 7, LOW);
    matrix.drawPixel(3, 0, LOW);
    matrix.drawPixel(3, 7, LOW);
    matrix.drawPixel(4, 0, LOW);
    matrix.drawPixel(4, 2, LOW);
    matrix.drawPixel(4, 5, LOW);
    matrix.drawPixel(4, 7, LOW);
    matrix.drawPixel(5, 0, LOW);
    matrix.drawPixel(5, 3, LOW);
    matrix.drawPixel(5, 4, LOW);
    matrix.drawPixel(5, 7, LOW);
    matrix.drawPixel(6, 1, LOW);
    matrix.drawPixel(6, 6, LOW);
    matrix.drawPixel(7, 2, LOW);
    matrix.drawPixel(7, 3, LOW);
    matrix.drawPixel(7, 4, LOW);
    matrix.drawPixel(7, 5, LOW);
    matrix.write();
    delay(500);
}