#include <Servo.h>
#include <Wire.h>

#define Servo1 3
int position = 0;

Servo myServo1;

void setup() 
{
  Serial.begin(9600);
  myServo1.attach(Servo1);
  position = 90;
  Wire.begin(0x4);          
  Wire.onReceive(receiveEvent);
}
