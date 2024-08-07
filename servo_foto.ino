#include <Servo.h>;
const int left=A0;
const int right=A1;
Servo myservo;
int servopos=0;
void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int pravy=analogRead(right);
  int levy=analogRead(left);
  if(pravy>500){
    if(servopos<=180){
      servopos++;
    }
  }
  if(levy>500){
    if(servopos>=0){
      servopos--;
    }
  }
  Serial.println(pravy);
  myservo.write(servopos);
  delay(10);
}
