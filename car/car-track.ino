#include <Servo.h>

Servo myservo;

int motor1PinA = 2;
int motor1PinB = 3;
int enablePin = 11;

void setup() {
  myservo.attach(9);
  pinMode(motor1PinA, OUTPUT);
  pinMode(motor1PinB, OUTPUT);
  pinMode(enablePin, OUTPUT);
  analogWrite(enablePin, 1000);
}

void move_forward() {
  digitalWrite(motor1PinA, HIGH);
  digitalWrite(motor1PinB, LOW);
}

void move_backward() {
  digitalWrite(motor1PinA, LOW);
  digitalWrite(motor1PinB, HIGH);
}

void wheel_forward() {
  myservo.write(90);
}

void wheel_left() {
  myservo.write(50);
}

void wheel_right() {
  myservo.write(130);
}

void stop_move() {
  digitalWrite(motor1PinA, LOW);
  digitalWrite(motor1PinB, LOW);
}

void loop() {
  wheel_forward();
  move_forward();
  delay(5000);
  wheel_left();
  delay(1750);
  wheel_forward();
  delay(1500);
  wheel_left();
  delay(2750);
  wheel_forward();
  delay(6000);
  stop_move();
  delay(3000);
}
