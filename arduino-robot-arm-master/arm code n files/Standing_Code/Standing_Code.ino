/*Robotic Arm*/

#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver srituhobby = Adafruit_PWMServoDriver();

#define servoMIN 150
#define servoMAX 300

const int dirPin = 3;
const int stepPin = 4;
const int stepsPerRevolution = 200;
int stepDelay = 5000;

void setup() {
  srituhobby.begin();
  srituhobby.setPWMFreq(60);
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
}

void loop() {
/******************************************
  // clockwise
    digitalWrite(dirPin, HIGH);

  // Spin motor
  for (int x = 0; x < stepsPerRevolution; x++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(stepDelay);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(stepDelay);
  }
*****************************************/

  delay(1000);  // Wait a second

  // srituhobby.setPWM(0, 0, servoMIN);
  // srituhobby.setPWM(1, 0, servoMAX);
  // delay(2000);
  
  srituhobby.setPWM(2, 0, servoMIN);
  delay(2000);
  srituhobby.setPWM(4, 0, servoMIN);
  delay(2000);
  srituhobby.setPWM(5, 0, 500);
  delay(2000);
  srituhobby.setPWM(6, 0, 500);
  delay(2000);
  srituhobby.setPWM(6, 0, servoMIN);
  delay(2000);
  srituhobby.setPWM(5, 0, servoMIN);
  delay(2000);
  srituhobby.setPWM(4, 0, servoMAX);
  delay(2000);
  srituhobby.setPWM(2, 0, servoMAX);
  delay(2000);

  // srituhobby.setPWM(1, 0, servoMIN);
  // srituhobby.setPWM(0, 0, servoMAX);
  // delay(2000);


/*******************************************
  // Spin motor
  digitalWrite(dirPin, LOW);
  for (int x = 0; x < stepsPerRevolution; x++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(stepDelay);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(stepDelay);
  }
  delay(3000);  // Wait a second
  *****************************************/
}