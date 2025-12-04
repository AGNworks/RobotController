/*
Main file for this project.
Controlling two motors with PWM signals from an Arduino Mega board.
*/
#include "communication.h"
#include "config.h"
#include "motor.h"


// Create the classs instances
Communication myComm;
Motor leftMotor;
Motor rightMotor;

// Setup up
void setup() {
    // Set up the communication channel
    myComm.CommSetup();

    // Create the motor instances
    leftMotor.MotorSetup(Config::Pins::PWM_PIN_1, Config::Pins::PWM_PIN_2);
    rightMotor.MotorSetup(Config::Pins::PWM_PIN_3, Config::Pins::PWM_PIN_4);

    // Information
    myComm.SendMsg("Control motors");
}


// Main loop
void loop() {
}
