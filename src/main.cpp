#include "RoboticHand.h"

RoboticHand Arm;

SoftwareSerial BluetoorhSerial(3,4);


void setup() {
  // put your setup code here, to run once:
  Arm.base.BaseServo.attach(Arm.BaseServoPin);
  Arm.height.HeightServo.attach(Arm.HeightServoPin);
  Arm.claw.ClawServo.attach(Arm.ClawServoPin);
  Arm.Movement.MovementServo.attach(Arm.MovementServoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
}