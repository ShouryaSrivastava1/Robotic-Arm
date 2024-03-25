#include <Arduino.h>
#include <Servo.h>
#include <SoftwareSerial.h>

class RoboticHand 
{
public:

    int BaseServoPin;
    int HeightServoPin;
    int MovementServoPin;
    int ClawServoPin;


    int BaseDefualtAngle;
    int HeightDefualtAngle;
    int MovementDefualtAngle;
    int ClawDefualtAngle;


    int TX;
    int RX;

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
