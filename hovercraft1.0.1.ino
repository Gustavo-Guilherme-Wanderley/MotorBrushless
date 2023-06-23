#include <ESP32Servo.h>

#include <BluetoothSerial.h>

BluetoothSerial SerialBT;

Servo ESC1; 

Servo ESC2; 

int var1 = 0;

int var2 = 0;

char command;

void setup() {
  Serial.begin(9600);
  ESC1.setPeriodHertz(50); // Configura a frequência do sinal do servo (padrão é 50Hz)
  ESC1.attach(18, 1000, 2000);
  ESC2.setPeriodHertz(50); // Configura a frequência do sinal do servo (padrão é 50Hz)
  ESC2.attach(19, 1000, 2000);
  SerialBT.begin("Hovercraft"); // Nome do dispositivo Bluetooth do ESP32
}

void loop() {
  if (SerialBT.available()) {
    command = SerialBT.read();
    Serial.print("Comando recebido: ");
    Serial.println(command);
  }
  if(command == 'F'){
    var1 = 40;
    var2 = 40;
  }
  if(command == 'L'){
    var1 = 0;
    var2 = 40;
  }
  if(command == 'R'){
    var1 = 40;
    var2 = 0;
  }    
  if(command == 'P'){
    var1 = 0;
    var2 = 0;
  }  
  Serial.println(var1);
  Serial.println(var2);
  ESC1.write(var1);
  ESC2.write(var2);
  delay(100);
}
