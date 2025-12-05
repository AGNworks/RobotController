// Motor.h
#ifndef MAIN_PROCESS_H
#define MAIN_PROCESS_H

#include <Arduino.h>
#include "communication.h"
#include "config.h"
#include "motor.h"

/**
* A class to control all the processes.
*/
class MainProcess {
    public:
        Communication MyComm;
        Motor LeftMotor;
        Motor RightMotor;
        void SetProcess();
        void CheckInput();
};

#endif