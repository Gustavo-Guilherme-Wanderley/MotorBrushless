#include <ESP32Servo.h>

#include <BluetoothSerial.h>

BluetoothSerial SerialBT;

Servo ESC; 

int var = 0;

char command;

void setup() {
  Serial.begin(9600);
  ESC.setPeriodHertz(50); // Configura a frequência do sinal do servo (padrão é 50Hz)
  ESC.attach(18, 1000, 2000);
  SerialBT.begin("Hovercraft"); // Nome do dispositivo Bluetooth do ESP32
}

void loop() {
  if (SerialBT.available()) {
    command = SerialBT.read();
    Serial.print("Comando recebido: ");
    Serial.println(command);
  }
  if(command == 'F'){
    var = 180;
  }
  if(command == 'P'){
    var = 0;
  }  
  Serial.println(var);
  ESC.write(var);
  delay(100);
}
