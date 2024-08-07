#include <Servo.h>;
int servopos=0;
Servo myservo;
void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  int pot=analogRead(A1);
  servopos=map(pot,0,1024,0,179);
  myservo.write(servopos);
  delay(5);

}
