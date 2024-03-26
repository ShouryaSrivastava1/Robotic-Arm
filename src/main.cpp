#include "RoboticHand.h"

RoboticHand Arm;

SoftwareSerial BluetoorhSerial(3,4);



void setup() {
  // put your setup code here, to run once:
  // Assign Servo Pins
  Arm.BaseServoPin = 3;
  Arm.HeightServoPin = 5;
  Arm.MovementServoPin = 6;
  Arm.ClawServoPin = 9;


  // Assign Default Positions
  Arm.BaseDefualtAngle = 90;
  Arm.HeightDefualtAngle = 0;
  Arm.MovementDefualtAngle = 90;
  Arm.ClawDefualtAngle = 90;


  // Move To Deafault Positions, Using 1 interval to make it fast
  Arm.base.MoveTo(Arm.BaseDefualtAngle, 1);
  Arm.height.MoveTo(Arm.HeightDefualtAngle, 1);
  Arm.Movement.MoveTo(Arm.MovementDefualtAngle, 1);
  Arm.claw.MoveTo(Arm.ClawDefualtAngle, 1);

  // attach servos
  Arm.base.BaseServo.attach(Arm.BaseServoPin);
  Arm.height.HeightServo.attach(Arm.HeightServoPin);
  Arm.claw.ClawServo.attach(Arm.ClawServoPin);
  Arm.Movement.MovementServo.attach(Arm.MovementServoPin);
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
  Arm.base.MoveTo(0, 20);
  Arm.Movement.MoveTo(140, 20);
  Arm.claw.MoveTo(135, 20);
  Arm.height.MoveTo(120, 20);
  Arm.Movement.MoveTo(90, 20);
  delay(1000);
  Arm.base.MoveTo(120, 20);
  Arm.claw.MoveTo(90, 20);
  Arm.height.MoveTo(0, 20);
  delay(1000);

}