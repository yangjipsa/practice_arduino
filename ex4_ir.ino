#define pinLight 0

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int valLIGHT = analogRead(pinLight);
  Serial.print("Light Sensor : ");
  Serial.println(valLIGHT);
  delay(500);
}
