// Maximum value of PWM
#define MAX_PWM 255

#define pinLED1 5
#define pinLED2 6

void setup()
{
  //Don't need to set pinMode() at pwm
} 


void loop() 
{
  int i=0;
  
  for(i = 0; i <= MAX_PWM; i++)
  { 
    analogWrite(pinLED1,i);
    analogWrite(pinLED2,i);
    delay(10); // 255번 * 10ms -> 약 2.5s
  }
  for(i = MAX_PWM; i >= 0; i--) 
  {
    analogWrite(pinLED1,i);
    analogWrite(pinLED2,i);
    delay(10);   
  }
}
