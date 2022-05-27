// #include <Arduino.h>

#define Xpin  4
#define Ypin  0
#define Zpin  2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); // setting up the baudrate
}

void loop() {
  int x = analogRead(Xpin); //read from xpin
delay(1); //
int y = analogRead(Ypin); //read from ypin
delay(1); 
int z = analogRead(Zpin); //read from zpin
 
float zero_G = 512.0; //ADC is 0~1023 the zero g output equal to Vs/2
float scale = 102.3; //ADXL335330 Sensitivity is 330mv/g
//330 * 1024/3.3/1000
Serial.print((((float)x - 331.5)/65*9.8)/ 30.); //print x value on serial monitor
Serial.print("\t");
Serial.print((((float)y - 329.5)/68.5*9.8)/ 150.); //print y value on serial monitor
Serial.print("\t");
Serial.print((((float)z - 340)/68*9.8) /145.); //print z value on serial monitor
Serial.print("\n");
delay(10); //wait for 1 second 
}