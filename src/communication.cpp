// Communication.cpp
#include <Arduino.h>
#include "communication.h"
#include "config.h"
using namespace Config;

/**
 * Set up the Serial communication
 */
void Communication::CommSetup() {
    Serial.begin(Comm::BAUD_RATE);
}

/**
 * Send response by serial port
 */
void Communication::SendMsg(String msg) {
    Serial.println(msg);
}

/**
 * Check for input message from "brain"
 */
MotorValues Communication::CheckInput() {
    MotorValues robot_values;
    // Check for input message
    if (Serial.available() >= Comm::EXPECTED_BYTES) {
        if (Serial.read() == Comm::MSG_START) {
            robot_values.m1_dir = Serial.read();
            robot_values.m1_speed = Serial.read();
            robot_values.m2_dir = Serial.read();
            robot_values.m2_speed = Serial.read();
            robot_values.valid = true;
        }
        SendMsg("M1 dir: " + String(robot_values.m1_dir) +
                " M1 s: " + String(robot_values.m1_speed) +
                " M2 dir: " + String(robot_values.m2_dir) +
                " M2 s: " + String(robot_values.m2_speed));
    }
    else {robot_values.valid = false;}
    return robot_values;
}
