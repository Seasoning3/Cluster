#include <Servo.h>

Servo myservo;

int motor1PinA = 2;
int motor1PinB = 3;
int enablePin = 11;

void setup()
{
  myservo.attach(9);
  pinMode(motor1PinA, OUTPUT);
  pinMode(motor1PinB, OUTPUT);
  pinMode(enablePin, OUTPUT);
  analogWrite(enablePin, 1000);
}

void loop()
{
  myservo.Write(130);
  digitalwrite(motor1PinA, HIGH);
  digitalwrite(motor1PinB, LOW);
  delay(1000);
  myservo.Write(50);
  digitalwrite(motor1PinA, LOW);
  digitalwrite(motor1PinB, HIGH);
  delay(1000);
}
