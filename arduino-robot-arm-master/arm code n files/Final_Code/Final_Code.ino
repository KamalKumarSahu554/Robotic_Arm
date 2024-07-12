/*Robotic Arm*/


#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver srituhobby = Adafruit_PWMServoDriver();

#define servoMIN 270
#define servoMAX 400

const int dirPin = 3;
const int stepPin = 4;
const int stepsPerRevolution = 200;
int stepDelay = 4000;

void setup() {
  srituhobby.begin();
  srituhobby.setPWMFreq(60);
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
}

void loop() {

  // clockwise
  digitalWrite(dirPin, HIGH);

  // Spin motor
  for (int x = 0; x < stepsPerRevolution; x++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(stepDelay);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(stepDelay);
  }

  delay(1000);  // Wait a second


  srituhobby.setPWM(2, 0, servoMIN);
  delay(2000);
  srituhobby.setPWM(4, 0, servoMAX);
  delay(2000);
  srituhobby.setPWM(5, 0, 500);
  delay(2000);
  srituhobby.setPWM(6, 0, 600);
  delay(2000);
  srituhobby.setPWM(12, 0, servoMAX);
  srituhobby.setPWM(13, 0, servoMIN);
  delay(2000);

  srituhobby.setPWM(13, 0, servoMAX);
  srituhobby.setPWM(12, 0, servoMIN);
  delay(2000);
  srituhobby.setPWM(6, 0, servoMIN);
  delay(2000);
  srituhobby.setPWM(5, 0, servoMIN);
  delay(2000);
  srituhobby.setPWM(4, 0, servoMIN);
  delay(2000);
  srituhobby.setPWM(2, 0, servoMAX);
  delay(2000);


  // Spin motor
  digitalWrite(dirPin, LOW);
  for (int x = 0; x < stepsPerRevolution; x++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(stepDelay);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(stepDelay);
  }
  delay(2000);  // Wait a second
}