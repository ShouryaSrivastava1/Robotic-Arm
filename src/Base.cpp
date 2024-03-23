#include "RoboticHand.h"

void RoboticHand::Base::MoveTo(int angle, int interval)
{
    BaseServo.write(angle);
}
