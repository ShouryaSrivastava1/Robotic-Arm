#include "RoboticHand.h"
#include <SoftwareSerial.h>
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
  // asigning valuses to the above variabls in required for the correct functioning before calling this fucntion
  Arm.init();
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