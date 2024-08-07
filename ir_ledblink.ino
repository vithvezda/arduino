#include <IRremote.h>
#include <ir_Lego_PF_BitStreamEncoder.h>

#define irpin 3
#define led 7
IRrecv receiver(irpin);
decode_results results;
void setup() {
  // put your setup code here, to run once:
  receiver.enableIRIn();
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(receiver.decode(&results)){
  if(results.value==0xFFA857){
    digitalWrite(led,1);
    delay(100);
    receiver.resume();
  }
  else if(results.value==0xFFE01F){
    digitalWrite(led,0);
    delay(100);
    receiver.resume();
  }
  else{
    receiver.resume();
  }

}
}
