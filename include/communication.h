// Communication.h
#ifndef COMMUNICATION_H
#define COMMUNICATION_H

#include <Arduino.h>

/**
 * Struct for motor values
 */
struct MotorValues {
    byte m1_dir;
    byte m1_speed;
    byte m2_dir;
    byte m2_speed;
    bool valid;
};

/**
* A class to use Serial communication between MCU and computer.
*/
class Communication {
    public:
        void CommSetup();
        void SendMsg(String msg);
        MotorValues CheckInput();
};

#endif