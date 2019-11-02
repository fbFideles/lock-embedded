#include <SoftwareSerial.h>

#define TX 0
#define RX 1

#define ledOut 13

SoftwareSerial Bluetooth(TX, RX);

void setup() {
  Bluetooth.begin(9600);
  pinMode(13, OUTPUT);  
}

void loop() {
  int value = Bluetooth.read();

  if(value == 'H') {
    digitalWrite(ledOut, HIGH);
  }

  if(value == 'L') {
    digitalWrite(ledOut, LOW);
  }
}
