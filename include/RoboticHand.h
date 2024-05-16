#include <Arduino.h>
#include <Servo.h>
#include <SoftwareSerial.h>

class RoboticHand 
{
public:
    // Assign Value Before Calling init() for initialsation
    int BaseServoPin;
    // Assign Value Before Calling init() for initialsation
    int HeightServoPin;
    // Assign Value Before Calling init() for initialsation
    int MovementServoPin;
    // Assign Value Before Calling init() for initialsation
    int ClawServoPin;

    // Assign Value Before Calling init() for initialsation
    int BaseDefualtAngle;
    // Assign Value Before Calling init() for initialsation
    int HeightDefualtAngle;
    // Assign Value Before Calling init() for initialsation
    int MovementDefualtAngle;
    // Assign Value Before Calling init() for initialsation
    int ClawDefualtAngle;



    void init()
    {
        // Move To Deafault Positions, Using 1 interval to make it fast
        base.MoveTo(BaseDefualtAngle, 1);
        height.MoveTo(HeightDefualtAngle, 1);
        Movement.MoveTo(MovementDefualtAngle, 1);
        claw.MoveTo(ClawDefualtAngle, 1);

        // attach servos
        base.BaseServo.attach(BaseServoPin);
        height.HeightServo.attach(HeightServoPin);
        claw.ClawServo.attach(ClawServoPin);
        Movement.MovementServo.attach(MovementServoPin);
    }

    class Base
    {
    public:
        void MoveTo(int angle, int interval);
        Servo BaseServo;
    };

    class Height
    {
    public:
        Servo HeightServo;
        void MoveTo(int angle, int interval);
    };

    class Claw
    {
    public:
        Servo ClawServo;
        void MoveTo(int angle, int interval);
    };

    class Movement
    {
    public:
        Servo MovementServo;
        void MoveTo(int angle, int interval);
    };

    Base base;
    Height height;
    Claw claw;
    Movement Movement;
};
