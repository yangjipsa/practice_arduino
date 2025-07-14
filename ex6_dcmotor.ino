#define MAX_PWM 255

#define IN1 = 5;
#define IN2 = 6;

float DutyCycle = 0.5;
void setup() 
{
}

void loop() 
{
  analogWrite(IN1,MAX_PWM * DutyCycle);
  analogWrite(IN2,LOW);
  delay(1000); // forward 
  analogWrite(IN1,LOW);
  analogWrite(IN2,LOW);
  delay(1000); // standby  
  analogWrite(IN1,LOW); 
  analogWrite(IN2,MAX_PWM * DutyCycle);
  delay(1000); // backward
  analogWrite(IN1,HIGH);
  analogWrite(IN2,HIGH);
  delay(1000);  // break
}
