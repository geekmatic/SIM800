
SoftwareSerial SIM800serial (2, 3);

void setup() {
  Serial.begin(9600);
  SIM800serial.begin(9600);
}

void loop() {

  if (Serial.available()) {
    SIM800serial.write(Serial.read());
  }
  if (SIM800serial.available()) {
    Serial.write(SIM800serial.read());
  }

}
