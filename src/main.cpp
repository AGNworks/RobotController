/*
Main file for this project.
Controlling two motors with PWM signals from an Arduino Mega board.
*/
#include "main_process.h"

// Create the Process
MainProcess Process;

// Setup up
void setup() {
    // Setup up Process
    Process.SetProcess();
    // Information
    Process.MyComm.SendMsg("Control motors");
}


// Main loop
void loop() {
    // Check input msg
    Process.CheckInput();
}
