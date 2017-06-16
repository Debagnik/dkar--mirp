#include<Servo.h>
int xServopin = 3;
int yServopin = 2;
Servo Servox, Servoy;
int mn=60, mx=120;
void setup() 
{
  Servox.attach(3);
  Servoy.attach(2);
  // put your setup code here, to run once:

}

void loop() 
{
  for(int i=mn; i<mx; i++)
  {
    Servox.write(i);
    Servoy.write(i);
    delay(40);
  }
  for(int i=mx; i> mn;i--)
  {
    Servox.write(i);
    Servoy.write(i);
    delay(40);
  }
  
  // put your main code here, to run repeatedly:

}
