// Communication.cpp
#include <Arduino.h>
#include "communication.h"
#include "config.h"
using namespace Config;

/**
 * Set up the Serial communication
 */
void Communication::CommSetup() {
    Serial.begin(Config::Comm::BAUD_RATE);
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
void Communication::CheckInput() {
    byte motor_values[2];
    // Check for input message
    if (Serial.available() >= Comm::EXPECTED_BYTES) {
        if (Serial.read() == Comm::MSG_START) {
            for (int i = 0; i < Comm::EXPECTED_BYTES-1; i++) {
                motor_values[i] = Serial.read();
            }
        SendMsg("Set speeds M1: " + String(motor_values[0]) + " M2: " + String(motor_values[1]));
        }
    }
}