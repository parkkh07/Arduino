void setup() {
  Serial.begin(9600);
  pinMode(4,INPUT_PULLUP);
}

void loop() {
  int isBtClicked = digitalRead(4);
  Serial.println(isBtClicked);
  delay(10);
}
