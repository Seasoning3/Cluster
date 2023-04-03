const int sensorPin = A0;
const int ledPin = 4;

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  
  if (sensorValue >= 800) {
    digitalWrite(2, HIGH);
  } 
  else if (sensorValue >= 40
  0) {
    digitalWrite(3, HIGH);
  }
  else {
    digitalWrite(4, HIGH);
  }
  delay(20);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}
