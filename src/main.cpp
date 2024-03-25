#include "RoboticHand.h"

RoboticHand Arm;

SoftwareSerial BluetoorhSerial(3,4);



void setup() {
  // put your setup code here, to run once:
  // Assign Servo Pins
  Arm.BaseServoPin = 6;



  // Assign Default Positions
  Arm.BaseDefualtAngle = 90;


  // Move To Deafault Positions, Using 1 interval to make it fast
  Arm.base.MoveTo(Arm.BaseDefualtAngle, 1);
  
  Arm.base.BaseServo.write(0);
  Arm.base.BaseServo.attach(Arm.BaseServoPin);
  Arm.height.HeightServo.attach(Arm.HeightServoPin);
  Arm.claw.ClawServo.attach(Arm.ClawServoPin);
  Arm.Movement.MovementServo.attach(Arm.MovementServoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  Arm.base.MoveTo(0, 50);
  delay(1000);
  Arm.base.MoveTo(180, 50);
  delay(1000);
  

}