const int sensorPin = A0;
const int ledPin = 4;
int threshold = 500;

void setup() {
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  
  if (sensorValue > threshold) {
    digitalWrite(4, HIGH);
  } 
  else {
    digitalWrite(4, LOW);
  }
}
