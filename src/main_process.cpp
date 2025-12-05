// main_process.cpp
#include <Arduino.h>
#include "main_process.h"
#include "config.h"

/**
 * Constructor of the MainProcess.
 */
void MainProcess::SetProcess(){
    // Set up the communication channel
    MyComm.CommSetup();

    // Create the motor instances
    LeftMotor.MotorSetup(Config::Pins::PWM_PIN_1, Config::Pins::PWM_PIN_2);
    RightMotor.MotorSetup(Config::Pins::PWM_PIN_3, Config::Pins::PWM_PIN_4);
}

/**
 * Check the input on serial port, and
 * work with the input data, if it is valid.
 */
void MainProcess::CheckInput() {
    // Get values from input
    MotorValues values = MyComm.CheckInput();

    // If there are valid values control the robot
    if (values.valid) {
        MyComm.SendMsg("GO");
        LeftMotor.SetSpeed(values.m1_dir, values.m1_speed);
        RightMotor.SetSpeed(values.m2_dir, values.m2_speed);
        values.valid = false;
    }
}
