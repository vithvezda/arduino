const int lowestPin=2;
const int highestPin=6;
const int a=30;
void setup() {
  // put your setup code here, to run once:
  for (int thisPin=lowestPin;thisPin<=highestPin;thisPin++){
    pinMode(thisPin,OUTPUT);
  }
}
void loop() {
  // put your main code here, to run repeatedly:
  for(int thisPin=lowestPin;thisPin<=highestPin;thisPin++){
    digitalWrite(thisPin,HIGH);
    delay(a);
  }
  for(int thisPin=lowestPin;thisPin<=highestPin;thisPin++){
    digitalWrite(thisPin,LOW);
    delay(a);
  }
}
