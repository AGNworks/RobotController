// Communication.cpp
#include <Arduino.h>
#include "communication.h"

void Communication::CommSetup() {
    Serial.begin(9600);
}

void Communication::SendMsg(String msg) {
    Serial.println(msg);
}