cpp
#include <Arduino.h>

int motorPin = 9;

void setup() {
pinMode(motorPin, OUTPUT);
}

void loop() {
analogWrite(motorPin, 100);
delay(1000);
analogWrite(motorPin, 0);
delay(1000);
}