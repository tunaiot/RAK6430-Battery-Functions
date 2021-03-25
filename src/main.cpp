#include "main.h"

/** Battery level in percentage */
uint8_t battLevel = 0;
float battVoltage = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(LED_GREEN, OUTPUT);
  Serial.begin(115200);
  initReadVBAT();
}

void loop() {
  //digitalToggle(LED_GREEN);
  digitalWrite(LED_GREEN,HIGH);
  delay(1000);
  digitalWrite(LED_GREEN,LOW);
  delay(1000);
  

  battLevel = readBatt();
  battVoltage = readVBAT();

  Serial.print("Battery level: ");
  Serial.print(battLevel);
  Serial.println("%");
  Serial.print("Battery voltage: ");
  Serial.print(battVoltage);
  Serial.println("mV");
  // put your main code here, to run repeatedly:
}