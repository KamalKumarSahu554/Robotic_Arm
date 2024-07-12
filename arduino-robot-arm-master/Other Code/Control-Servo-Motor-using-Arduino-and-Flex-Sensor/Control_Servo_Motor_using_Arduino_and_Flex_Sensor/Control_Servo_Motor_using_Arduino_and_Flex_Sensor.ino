/* https://www.electronicsprojects.in Control Servo Motor using Arduino and Flex Sensor */

#include <Servo.h> 
Servo servo1;
const int flex = 0; 
void setup() 
{ 
Serial.begin(9600);
servo1.attach(5);
} 
void loop() 
{ 
int flexsensor;
int servomotor;
flexsensor = analogRead(flex);
servomotor = map(flexsensor, 600, 900, 0, 180);
servomotor = constrain(servomotor, 0, 180);
servo1.write(servomotor);
Serial.print("Flex Sensor: ");
Serial.print(flexsensor);
Serial.print("Servo Motor: ");
Serial.println(servomotor);
delay(20);
}
