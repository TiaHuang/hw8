int sensorValue = 0;
int sensorPin = A0;

void setup() {
  pinMode(5, OUTPUT);

  Serial.begin(9600);
}
void loop() {
  for (int fadeValue = 0 ; fadeValue <= 1200; fadeValue += 800) {
    analogWrite(5, fadeValue);
    delay(2000);
  }

  for (int fadeValue = 1200 ; fadeValue >= 1200; fadeValue -= 800) {
    analogWrite(5, fadeValue);
    delay(2000);
  }
}
