int val = 0;

void setup() {
  pinMode(5,OUTPUT);
  pinMode(6,INPUT);
}

void loop() {
  val = digitalRead(6);
  if(val == LOW){
    digitalWrite(5,HIGH);
  }else{
    digitalWrite(5,LOW);
  }

}
