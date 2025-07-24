#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11);

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
}

void loop() {

  mySerial.println("CaptureImage");


  while (!mySerial.available()) {}


  String result = mySerial.readStringUntil('\n');
  Serial.println("Result from computer: " + result);

  delay(1000); 
}