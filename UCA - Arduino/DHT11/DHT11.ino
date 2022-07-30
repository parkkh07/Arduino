#include<DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN,DHTTYPE);

void setup() {
  dht.begin();
  Serial.begin(9600);
  pinMode(12,OUTPUT);
}

void loop() {
  int h = dht.readHumidity();
  int t = dht.readTemperature();

  Serial.print("Humidity : ");
  Serial.println(h);
  Serial.print("Temperature : ");
  Serial.println(t);

  if(t >= 21){
    digitalWrite(12,HIGH);
  }else{
    digitalWrite(12,LOW);
  }
 
  delay(1000);
}
