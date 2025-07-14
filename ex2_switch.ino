#define pinSW1 2
#define pinSW2 3
 
void setup()
{
  Serial.begin(9600);
  pinMode(pinSW1, INPUT);
  pinMode(pinSW2, INPUT);
}

void loop()
{ 
  bool valSW1 = digitalRead(pinSW1);
  bool valSW2 = digitalRead(pinSW2);
  Serial.print("SW1 : ");
  Serial.print(valSW1);
  Serial.print(", SW2 : ");
  Serial.println(valSW2);
  delay(100);
}
