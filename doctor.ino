int sensorValue = 0;
int sensorPin = A0;

void setup() {
  pinMode(13, OUTPUT);

  Serial.begin(9600);
}
void loop() {
  for (int fadeValue = 0 ; fadeValue <= 800; fadeValue += 300) {
    analogWrite(13, fadeValue);
    delay(1000);
  }

  for (int fadeValue = 800 ; fadeValue >= 0; fadeValue -= 300) {
    analogWrite(13, fadeValue);
    delay(1000);
  }
}