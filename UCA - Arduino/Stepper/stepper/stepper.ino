#include<Stepper.h>

int stepsPerRev = 2048;
Stepper stepper(stepsPerRev, 11, 9 ,10, 8);

void setup() {
  stepper.setSpeed(10);
}

void loop() {
  stepper.step(stepsPerRev);
  delay(1000);
  stepper.step(-stepsPerRev);
  delay(1000);

}
