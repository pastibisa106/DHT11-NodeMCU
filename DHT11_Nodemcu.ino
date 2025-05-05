/*  3 Mei 2020
  ============================
  rafiqulhakim.blogspot.com
  ============================
*/

#include <dht.h>
#define sensor 14 // deklarasi kaki data dht11 ke pin 14 atau D5 nodemcu
dht DHT;
 
void setup() {
  Serial.begin(9600);
  Serial.println("Sensor Suhu dan Kelembaban Udara DHT11\n\n");
  delay(1000);
}

void loop() {
  DHT.read11(sensor);
  Serial.print("Suhu = ");
  Serial.print(DHT.temperature, 1); 
  Serial.print(" C\t\t");
  Serial.print("RH = ");
  Serial.print(DHT.humidity, 1);
  Serial.println("%");
  delay(1000);
}
