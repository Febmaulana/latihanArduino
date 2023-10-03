#include "DHT.h"
#define DHTPIN 25     
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE); 

void setup() {
  Serial.begin(9600);
  dht.begin();
  delay(1000);
}

void loop() {
  delay(3000); 
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float f = dht.readTemperature(true);
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println("Failed sensor!");
    return;
  }
  float hi = dht.computeHeatIndex(f, h);
  unsigned int temp = t;
  unsigned int humidity = h;     
  
  Serial.print("Temperature = "); 
  Serial.println(String(temp)); 
  Serial.print("Humidity = "); 
  Serial.println(String(humidity));
}
