void setup() {
  Serial.begin(9600);
  pinMode(4,INPUT_PULLUP);
  pinMode(13, OUTPUT);
}

void loop() {
 
  if(digitalRead(4) == 0){
    digitalWrite(13, HIGH);
  }else{
    digitalWrite(13,LOW);
  }
}
