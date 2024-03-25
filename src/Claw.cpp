#include "RoboticHand.h"

void RoboticHand::Claw::MoveTo(int angle, int interval)
{
    int CurrentAngle = ClawServo.read();

    if (angle > CurrentAngle)
    {
        for(int pos = CurrentAngle; pos < angle; pos++)
        {
            ClawServo.write(pos);
            delay(interval);
        }
    }
    else if(angle < CurrentAngle)
    {
        for(int pos = CurrentAngle; pos > angle; pos--)
        {
            ClawServo.write(pos);
            delay(interval);
        }
    }
}