#include <Servo.h>
Servo myservo;
int servopos=0;
void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  int joy=analogRead(A0);
  if(joy>520){
    if(servopos>0){
      servopos--;
      int del1=map(joy,512,1023,0,200);
      myservo.write(servopos);
      delay(203-del1);
    }
  }
  if(joy<500){
    if(servopos<=180){
      servopos++;
      int del2=map(joy,0,512,3,203);
      myservo.write(servopos);
      delay(del2);
    }
  }
}
