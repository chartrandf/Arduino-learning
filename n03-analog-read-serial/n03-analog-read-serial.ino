void setup() {
  Serial.begin(9600); // Open serial port with 9600 bits of data per seconds

}

void loop() {
  // Store the potentiometer value
  int sensorValue = analogRead(A0);

  //  Print the sensor value has decimal
  Serial.println(sensorValue, DEC);

  // Delay in between read for stability
  delay(1);
}
