#include "RoboticHand.h"

void RoboticHand::Base::MoveTo(int angle, int interval)
{
    int CurrentAngle = BaseServo.read();

    if (angle > CurrentAngle)
    {
        for(int pos = CurrentAngle; pos < angle; pos++)
        {
            BaseServo.write(pos);
            delay(interval);
        }
    }
    else if(angle < CurrentAngle)
    {
        for(int pos = CurrentAngle; pos > angle; pos--)
        {
            BaseServo.write(pos);
            delay(interval);
        }
    }
}
