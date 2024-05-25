#include "DHT.h"

#define DHTPIN 2  
#define DHTTYPE DHT11  
DHT dht(DHTPIN, DHTTYPE);
 
int ledPin = 9;
 
void setup (){
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
  dht.begin();
}
 
void loop(){
  float temp = dht.readTemperature();
  int t = map(temp, 0, 40, 12, 4);
  for (int a=0; a<=255;a++){
    analogWrite(ledPin,a);
    delay(t);
  }
  for (int a=255; a>=0;a--){
    analogWrite(ledPin,a);
    delay(t);  
  } 
}