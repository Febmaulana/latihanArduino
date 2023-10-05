#include <WiFi.h>

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.print("ESP Board MAC Address:  ");
  Serial.println(WiFi.macAddress());
}

void loop() {
  
}
