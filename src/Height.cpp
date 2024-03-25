#include "RoboticHand.h"

void RoboticHand::Height::MoveTo(int angle, int interval)
{
    int CurrentAngle = HeightServo.read();

    if (angle > CurrentAngle)
    {
        for(int pos = CurrentAngle; pos < angle; pos++)
        {
            HeightServo.write(pos);
            delay(interval);
        }
    }
    else if(angle < CurrentAngle)
    {
        for(int pos = CurrentAngle; pos > angle; pos--)
        {
            HeightServo.write(pos);
            delay(interval);
        }
    }
}