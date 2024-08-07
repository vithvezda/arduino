#include <IRremote.h>
#include <ir_Lego_PF_BitStreamEncoder.h>

#include <Servo.h>
int servopos=0;
Servo myservo;

#define irpin 3

IRrecv receiver(irpin);
decode_results results;
void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);
  receiver.enableIRIn();
}

void loop() {
  // put your main code here, to run repeatedly:
  if(receiver.decode(&results)){
    if(results.value==0xFFA857){
      servoplus();
      receiver.resume();
    }
    else if(results.value==0xFFE01F){
      servominus();
      receiver.resume();
      while(results.value==0xFFFFFFFF){
        servominus();
        receiver.resume();
      }
    }  
    else{
      receiver.resume();
    }
  }
  myservo.write(servopos);
  delay(5);
}


void servoplus(){
  if(servopos<=180){
        servopos=servopos+20;
      }
}

void servominus(){
  if(servopos>=0){
       servopos=servopos-20;
      }
}