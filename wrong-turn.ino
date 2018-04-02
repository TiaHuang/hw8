int sensorValue = 0; 
int sensorPin = A0;  

void setup() {
  pinMode(5, OUTPUT);

  Serial.begin(9600);
}
void loop() {
  for (int fadeValue = 0 ; fadeValue <= 800; fadeValue += 5) {
    analogWrite(5, fadeValue);
    delay(10);
  }

  for (int fadeValue = 800 ; fadeValue >= 0; fadeValue -= 5) {
    analogWrite(5, fadeValue);
    delay(10);
  }
}
