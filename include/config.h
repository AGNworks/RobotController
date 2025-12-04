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
        const int DEFAULT_ID = 1;
        const int MAX_SPEED = 255;
        const int MIN_SPEED = 30;
        const int RAMP_RATE = 5;  // Speed change per step

        // PID Constants (if using closed-loop control)
        namespace PID {
            const float KP = 1.0;
            const float KI = 0.1;
            const float KD = 0.05;
            const int UPDATE_INTERVAL = 10;  // ms
        }
    }

    // Communication
    namespace Comm {
        const unsigned long BAUD_RATE = 115200;
        const unsigned long TIMEOUT = 1000;
        const unsigned long HEARTBEAT = 500;
        const int BUFFER_SIZE = 64;
    }

    // System
    namespace System {
        const unsigned long LOOP_DELAY = 10;  // ms
        const bool SAFETY_ENABLED = true;
        const bool LOGGING_ENABLED = true;
    }
}

#endif // CONFIG_H