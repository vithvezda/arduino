#include <DHT11.h>


DHT11 cidlo(4);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int teplota=cidlo.readTemperature();
  int vlhkost=cidlo.readHumidity();
  Serial.print("Teplota: ");
  Serial.println(teplota);
  Serial.print("Vlhkost: ");
  Serial.println(vlhkost);
  delay(1000);
}
