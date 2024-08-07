#include <Keypad.h>

byte sloupce[4]={8,9,10,11};
byte radky[4]={2,3,4,5};
char znaky[4][4]{
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
Keypad keypad(makeKeymap(znaky),radky,sloupce,4,4);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
char znak=keypad.getKey();
if(znak){
    Serial.print(znak);
  }

}
