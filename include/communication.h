// Communication.h
#ifndef COMMUNICATION_H
#define COMMUNICATION_H

#include <Arduino.h>

/**
* A class to use Serial communication between MCU and computer.
*/
class Communication {
    public:
        void CommSetup();
        void SendMsg(String msg);
        void CheckInput();
};

#endif