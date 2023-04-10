int redPin = 9;
int greenPin = 10;
int bluePin = 11;
int ledDelay = 1000;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  setColor(255, 0, 0);
  delay(ledDelay);
  setColor(0, 255, 0);
  delay(ledDelay);
  setColor(0, 0, 255);
  delay(ledDelay);
}

void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
