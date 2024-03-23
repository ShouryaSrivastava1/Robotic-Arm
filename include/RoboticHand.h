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
    int TX;
    int RX;

    class Base
    {
    private:
    public:
        Servo BaseServo;
        void MoveTo(int angle, int interval);
    };

    class Height
    {
    public:
        Servo HeightServo;
        void MoveTo();
    };

    class Claw
    {
    public:
        Servo ClawServo;
        void MoveTo();
    };

    class Movement
    {
    public:
        Servo MovementServo;
        void MoveTo();
    };

    Base base;
    Height height;
    Claw claw;
    Movement Movement;
};
