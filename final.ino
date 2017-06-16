#include<Servo.h>
#include <PID_v1.h>
#include <TouchScreen.h>
#define XN A3
#define YN A2
#define XP A1
#define YP A0
double in,out,kp=0,ki=0,kd=0;
Servo servo1,servo2;
int mn=60,mx=120;
int Setpoint1,Setpoint2;
TouchScreen ts = TouchScreen(XP,YP,XN,YN,711);
PID pid1(&in,&out,&setpoint1,kp,ki,kd, DIRECT);

void setup() 
{ int lastRead=5; 
  Serial.begin(9600);
  servo1.attach(2);
  servo2.attach(3);
  servo1.write(90);
  servo2.write(90);
  in=readPosition()
  // initialisation of touchscreen
  TSPoint p=ts.getPoint();
  //Initialisation of setpoints
   Setpoint1=510;
   Setpoint2=560;
  pid1.SetMode(AUTOMATIC);
  PressureThreshold(p.z);
  
  //pid2.SetMode(AUTOMATIC);
  
}

void loop() 
{
 
  

}
