int sensorValue = 0;
int sensorPin = A0;

void setup() {
  pinMode(5, OUTPUT);

  Serial.begin(9600);
}
void loop() {
  for (int fadeValue = 0 ; fadeValue <= 1000; fadeValue += 500) {
    analogWrite(5, fadeValue);
    delay(1000);
  }

  for (int fadeValue = 1000 ; fadeValue >= 0; fadeValue -= 500) {
    analogWrite(5, fadeValue);
    delay(1000);
  }
}
