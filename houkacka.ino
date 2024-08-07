void setup() {
  // put your setup code here, to run once:
  pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int pot=analogRead(A1);
  int del=map(pot,0,1023,1,10);
  for(int i=200;i<=700;i++){
    tone(11,i);
    delay(del);
  }
  for(int i=700;i>=200;i--){
    tone(11,i);
    delay(del);
  }
}
