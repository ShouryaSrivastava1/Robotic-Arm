#include <Arduino.h>
#include <Servo.h>

class RoboticHand 
{
private:
    int BaseServoPin;
    int HeightServoPin;
    int MovementServoPin;
    int ClawServoPin;
    int TX;
    int RX;

public:
    class Base
    {
    private:
    public:
        Servo BaseServo;
        void MoveTo(int angle, int interval);
    };

    class Height
    {
    private:
    public:
        void MoveTo();
    };

    class Claw
    {
    private:
    public:
        void MoveTo();
    };

    class Movement
    {
    private:
    public:
        void MoveTo();
    };
    
    void Initiate();

    Base base;
    Height height;
    Claw claw;
    Movement Movement;
};
