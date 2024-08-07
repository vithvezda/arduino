#include <Servo.h>;
const int right=9;
const int left=8;
int servopos=0;
Servo myservo;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(11);
  pinMode(right,INPUT);
  pinMode(right,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(left)==HIGH){
    if(servopos<=180){
      servopos++;
    }
  }
  if(digitalRead(right)==HIGH){
    if(servopos>=0){
      servopos--;
    }
  }
  myservo.write(servopos);
  delay(5);
}
