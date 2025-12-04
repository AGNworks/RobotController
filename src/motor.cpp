// Motor.cpp
#include <Arduino.h>
#include "motor.h"
#include "config.h"


/**
 * Set the pins as PWM outputs for controlling.
 */
void Motor::MotorSetup(int L_PWM, int R_PWM){
    // Change the private attributes to use them later
    leftPWM =  L_PWM;
    rightPWM = R_PWM;

    // Set the pin mode for output (pwm output pins)
    pinMode(leftPWM, OUTPUT);
    pinMode(rightPWM, OUTPUT);
}

/**
 * Change direction to forward and set speed
 */
void Motor::MoveForward(int speed) {
    currentSpeed = speed;
    analogWrite(leftPWM, 0);
    analogWrite(rightPWM, currentSpeed);
}

/**
 * Change direction to backward and set speed
 */
void Motor::MoveBackward(int speed) {
    currentSpeed = speed;
    analogWrite(leftPWM, currentSpeed);
    analogWrite(rightPWM, 0);
}