#include <ESP32Servo.h>

Servo ESC; 

int pot;

void setup() {
  Serial.begin(9600);
  pinMode(4, INPUT);
  ESC.setPeriodHertz(50); // Configura a frequência do sinal do servo (padrão é 50Hz)
  ESC.attach(18, 1000, 2000);
}

void loop() {
  pot = analogRead(4);
  pot = map(pot, 0, 4095, 0, 180);
  ESC.write(pot);
  Serial.println(pot);
  delay(100);
}
