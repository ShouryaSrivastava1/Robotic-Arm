#include "RoboticHand.h"

RoboticHand::Base::base(Servo& servo) : baseServo(servo) {}
void RoboticHand::Base::MoveTo(int angle, int interval)
{
    BaseServo.write(angle);
}
