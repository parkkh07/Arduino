#include<Stepper.h>

int stepsPerRev = 2048;
Stepper stepper(stepsPerRev, 11, 9 ,10, 8);

int buttonState1 = 0;  
int buttonState2 = 0;  

void setup() {
  stepper.setSpeed(10);
  pinMode(2,INPUT);
  pinMode(4,INPUT);
}

void loop() {
  buttonState1 = digitalRead(2);
  buttonState2 = digitalRead(4);

  if (buttonState1 == HIGH){
    stepper.step(stepsPerRev);
    delay(1000);
  }else if(buttonState2 == HIGH){
    stepper.step(-stepsPerRev);
    delay(1000);
  }
}
