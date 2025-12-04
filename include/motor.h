// Motor.h
#ifndef MOTOR_H
#define MOTOR_H

#include <Arduino.h>

/**
* A class to control motors with pwm signals.
*/
class Motor {
    private:
        int leftPWM;
        int rightPWM;
        int currentSpeed;
    public:
        void MotorSetup(int L_PWM, int R_PWM);
        void MoveForward(int speed);
        void MoveBackward(int speed);
};

#endif