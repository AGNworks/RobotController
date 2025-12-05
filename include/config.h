// Config.h
#ifndef CONFIG_H
#define CONFIG_H

namespace Config {
    // Hardware Pins
    namespace Pins {
        const int PWM_PIN_1 = 2;   // Timer 3, Channel B
        const int PWM_PIN_2 = 3;   // Timer 3, Channel C
        const int PWM_PIN_3 = 6;   // Timer 4, Channel A
        const int PWM_PIN_4 = 7;   // Timer 4, Channel B
    }

    // Motor Parameters
    namespace Motor {
        const int MAX_SPEED = 255;
        const int MIN_SPEED = 30;
        const int RAMP_RATE = 5;  // Speed change per step
    }

    // Communication
    namespace Comm {
        const unsigned long BAUD_RATE = 115200;
        const unsigned long TIMEOUT = 1000;
        const int EXPECTED_BYTES = 3;  // Start sing + 2 motor speeds
        const int MSG_START = 0xAA;

    }

    // System
    namespace System {
        const unsigned long LOOP_DELAY = 10;  // ms
    }
}

#endif // CONFIG_H