#include "supersplit.h"

void matrix_init_user(void) {
    // Initialize LED pin
    setPinOutput(LED_CAPS_LOCK_PIN);
    writePinLow(LED_CAPS_LOCK_PIN);
}

void matrix_scan_user(void) {
    // Optional: Add custom matrix scanning logic if needed
}

bool led_update_user(led_t led_state) {
    // Update LED state for Caps Lock
    writePin(LED_CAPS_LOCK_PIN, led_state.caps_lock);
    return true;
}

#endif
