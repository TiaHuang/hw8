int sensorValue = 0;
int sensorPin = A0;

void setup() {
  pinMode(5, OUTPUT);

  Serial.begin(9600);
}
void loop() {
  for (int fadeValue = 0 ; fadeValue <= 200; fadeValue += 200) {
    analogWrite(5, fadeValue);
    delay(50);
  }

  for (int fadeValue = 200 ; fadeValue >= 0; fadeValue -= 200) {
    analogWrite(5, fadeValue);
    delay(50);
  }
}
