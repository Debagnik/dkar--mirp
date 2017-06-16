void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  pinMode(A0,INPUT);
  pinMode(A2,INPUT);
  pinMode(A1,OUTPUT);
  pinMode(A3,OUTPUT);
  
  digitalWrite(A1, LOW);
  digitalWrite(A3, HIGH);
  
  float Yp=analogRead(A2);
 
  Serial.println(Yp);
  
  delay(100);
  

}
