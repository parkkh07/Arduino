#include <Servo.h>

Servo servo;

void setup() {
  servo.attach(9);
}

void loop() {
  
  for(int i = 0;i<180;i++){
    servo.write(i);
    delay(10);
  }
  for(int j = 180;j>0;j--){
    servo.write(j);
    delay(10);
  }
  
}
