#include <Arduino.h>

#define Xpin  4
#define Ypin  0
#define Zpin  2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); // setting up the baudrate
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(analogRead(Xpin)); Serial.print(",");
  Serial.print(analogRead(Ypin)); Serial.print(",");
  Serial.println(analogRead(Zpin));
}