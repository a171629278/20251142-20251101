#include "DHT.h"

#define DHTPIN 2  
#define DHTTYPE DHT11  
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("组号：4201");
  pinMode(9,OUTPUT);
  dht.begin();
}

void loop() {
  Serial.print("温度: ");  
  float t = dht.readTemperature();
  Serial.print(t);
  Serial.print("°C      ");
  Serial.print("当前闪烁时延: ");
  Serial.print((40-t)*100);
  Serial.println("ms    ");
  if(t > 45)
    digitalWrite(9,HIGH);
  else
    digitalWrite(9,HIGH);
    delay((46-t)*50); 
    digitalWrite(9,LOW);
    delay((46-t)*50);     
  return;
}