int sensorValue = 0;  // variable to store the value coming from the sensor
int sensorPin = A0;    // select the input pin for the potentiometer


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);

  Serial.begin(9600);
}
void loop() {
  // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 800; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(13, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(10);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 800 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(13, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(10);
  }
}
