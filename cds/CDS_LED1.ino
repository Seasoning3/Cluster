  const int sensorPin = A0;
  const int ledPin = 2;
  
  void setup() {
    pinMode(2, OUTPUT);
    Serial.begin(9600);
  }
  
  void loop() {
    int sensorValue = analogRead(sensorPin);
    Serial.println(sensorValue);
    
    if (sensorValue < 500) {
      digitalWrite(2, HIGH);
    } 
    else {
      digitalWrite(2, LOW);
    }
  }
