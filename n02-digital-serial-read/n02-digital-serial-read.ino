const int pushButton = 2;

void setup() {
  // Open serial port, 9600 bits of data per second between arduino and computer
  Serial.begin(9600);

  pinMode(pushButton, INPUT);
}

void loop() {
  int sensorValue = digitalRead(pushButton); // (0|1) Read the input 2 if 5v is received

  if(sensorValue == HIGH) {
    Serial.println("Pressed");
  }else{
    Serial.println("Not pressed");
  }
  
  delay(1); // delay in between read for stability
}

