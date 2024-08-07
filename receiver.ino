#include <IRremote.h>
#include <ir_Lego_PF_BitStreamEncoder.h>



#define irpin 3

IRrecv receiver(irpin);
decode_results results;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  receiver.enableIRIn();
}

void loop() {
  // put your main code here, to run repeatedly:
if(receiver.decode(&results)){
  Serial.print("IR kod: ");
  Serial.println(results.value,HEX);
  delay(100);
  receiver.resume();
}
}
