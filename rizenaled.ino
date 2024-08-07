void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int pot=analogRead(A0);
  int bright=map(pot,0,1023,0,255);
  analogWrite(9,bright);
}
