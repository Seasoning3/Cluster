int motor1PinA = 2;
int motor1PinB = 3;
int enablePin = 11;

void setup() {
  pinMode(motor1PinA, OUTPUT);
  pinMode(motor1PinB, OUTPUT);
  pinMode(enablePin, OUTPUT);
  analogWrite(enablePin, 1000);
}

void loop() {
  digitalWrite(motor1PinA, LOW);
  digitalWrite(motor1PinB, HIGH);
  delay(1000);
}
