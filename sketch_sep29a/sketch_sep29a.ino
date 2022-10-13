#include "DHT.h"
#define DHTPIN 7
#define DHTTYPE DHT11
const int LED = 13;


DHT dht (DHTPIN, DHTTYPE);
void setup() {
 Serial.begin(9600);
 dht.begin();
 pinMode(LED,OUTPUT);
}

void loop() {
  delay(2000);


float h = dht.readHumidity();
float t = dht.readTemperature();

Serial.print(" Humidity: ");
Serial.print(h);

Serial.print("%  Temperature:  ");
Serial.print(t);
Serial.println(" *C");
Serial.print
}
// add if else statement to ensure that if the humidity is above a particular value then the light glows

