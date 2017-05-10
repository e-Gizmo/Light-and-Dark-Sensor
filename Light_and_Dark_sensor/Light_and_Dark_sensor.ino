/*
  e-Gizmo Light & Dark sensor

  Reads an digital output on pin 5 and
  prints the result to the serial monitor.

  This example code is in the public domain.

  Connections:
   Gizduino      Light & Dark Sensor
     +5V   ----->      VCC
     GND   ----->      GND
     D5    ----->      Output

  by:
  e-Gizmo Mechatronix Central
  http://www.e-gizmo.com
  September 8, 2014

*/

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on digital pin:
  int LDR = digitalRead(5);

  // print out the value you read:
  Serial.print("Output= ");
  Serial.println(LDR);

}
