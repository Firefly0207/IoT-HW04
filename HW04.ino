#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

void setup() {
  Serial.begin(115200);  
  SerialBT.begin("ParkSangwon_ESP32");
  Serial.println("Bluetooth Device Ready to Pair");
}

void loop() {
  if (Serial.available()) {
    SerialBT.write(Serial.read());
  }

  if (SerialBT.available()) {
    Serial.write(SerialBT.read());
  }

  delay(20);
}
