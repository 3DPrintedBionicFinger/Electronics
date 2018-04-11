#include <Servo.h>
Servo bigServo;
const int vibPin = 5;
const int forceSense = A5;
const int emgPin = A0;
int forceVal;
int emgVal;

void setup()
{
  bigServo.attach(9);
  pinMode(vibPin,OUTPUT);
}

void loop()
{
  if (forceVal>700){
    analogWrite(vibPin,map(forceVal,700,1024,0,240));
  }
  //Read EMG input
  emgVal = analogRead(emgVal);
  // Scale EMG values to servo position and output
  smallServo.writeMicroseconds(map(emgVal,500,750,700,2050));
  delay(10);
}
#include <Servo.h>
Servo bigServo;
const int vibPin = 5;
const int forceSense = A5;
const int emgPin = A0;
int forceVal;
int emgVal;

void setup()
{
  bigServo.attach(9);
  pinMode(vibPin,OUTPUT);
}

void loop()
{
  if (forceVal>700){
    analogWrite(vibPin,map(forceVal,700,1024,0,240));
  }
  //Read EMG input
  emgVal = analogRead(emgVal);
  // Scale EMG values to servo position and output
  smallServo.writeMicroseconds(map(emgVal,500,750,700,2050));
  delay(10);
}

