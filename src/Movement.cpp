#include "RoboticHand.h"

void RoboticHand::Movement::MoveTo(int angle, int interval)
{
    int CurrentAngle = MovementServo.read();

    if (angle > CurrentAngle)
    {
        for(int pos = CurrentAngle; pos < angle; pos++)
        {
            MovementServo.write(pos);
            delay(interval);
        }
    }
    else if(angle < CurrentAngle)
    {
        for(int pos = CurrentAngle; pos > angle; pos--)
        {
            MovementServo.write(pos);
            delay(interval);
        }
    }
}