int leftbut=2;
int midbut=3;
int rightbut=4;
int redled=8;
int blueled=9;
int buzzer=10;
void setup() {
  // put your setup code here, to run once:
for(int i=2;i<=4;i++){
  pinMode(i,OUTPUT);
}
for(int j=8;j<=9;j++){
  pinMode(j,OUTPUT);
}
}


void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(leftbut)==HIGH){
    if(digitalRead(blueled)==LOW){
      tone(buzzer,500,2000);
      digitalWrite(redled,HIGH);
    }
  }
  else if(digitalRead(rightbut)==HIGH){
    if(digitalRead(redled)==LOW){
      tone(buzzer,500,2000);
      digitalWrite(blueled,HIGH);
    }
  }
  if(digitalRead(midbut)==HIGH){
    noTone(buzzer);
    digitalWrite(redled,LOW);
    digitalWrite(blueled,LOW);
  }
}
