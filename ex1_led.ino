#define pinLED1 2
#define pinLED2 3
 
void setup()
{
  pinMode(pinLED1, OUTPUT);
  pinMode(pinLED2, OUTPUT);
}

void loop()
{ // LED On
  digitalWrite(pinLED1, HIGH);
  digitalWrite(pinLED2, HIGH);
  delay(1000);
  // LED Off
  digitalWrite(pinLED1, LOW);
  digitalWrite(pinLED2, LOW);  
  delay(500);
}
