#include <Servo.h>

Servo servo;

void setup() {
  servo.attach(9);
  Serial.begin(9600);
}


void loop() {
  int readValue = analogRead(A0);
  Serial.println(readValue);

  //servo.write(readValue/6);
  
  if(readValue >= 170){
    servo.write(180);
    delay(10);
    
  }else{
  servo.write(0);
  }
  delay(1000);
}
