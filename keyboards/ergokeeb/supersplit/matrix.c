#include "matrix.h"
#include "split_keyboard.h"

// Define half sizes (symmetric example)
#define MATRIX_ROWS 6
#define MATRIX_COLS_L 3  // Left: cols 0-2
#define MATRIX_COLS_R 3  // Right: cols 3-5
#define MATRIX_COLS (MATRIX_COLS_L + MATRIX_COLS_R)

// Pins (global for QMK; subset per half)
const uint8_t col_pins[MATRIX_COLS] = {GP22, GP23, GP24, GP25, GP26, GP27};
const uint8_t row_pins[MATRIX_ROWS] = {GP9, GP8, GP7, GP6, GP5, GP4};

// Split-specific
void matrix_init_half(void) {
    for (int i = 0; i < MATRIX_ROWS; i++) {
        setPinInputHigh(row_pins[i]);
    }
    for (int i = 0; i < MATRIX_COLS; i++) {
        setPinOutput(col_pins[i]);
        writePin(col_pins[i], 1);  // Pull low initially? Adjust for your wiring
    }
}

void matrix_read_cols_on_row(matrix_row_t current_matrix[], uint8_t current_row) {
    matrix_row_t col_data = 0;
    pin_t row_pin = row_pins[current_row];
    writePinLow(row_pin);  // Activate row

    for (int col_index = 0; col_index < MATRIX_COLS; col_index++) {
        if (readPin(col_pins[col_index]) == 1) {  // Adjust polarity if needed
            col_data |= (1 << col_index);
        }
    }

    current_matrix[current_row] = col_data;
    writePinHigh(row_pin);  // Deactivate row
}

void matrix_init_kb(void) {
    matrix_init_half();
    split_keyboard_set_leds(0, 0, 0);  // Init LEDs
}

bool matrix_scan_kb(matrix_row_t current_matrix[]) {
    bool ret = matrix_scan_half(current_matrix);
    // Add OLED/Trackpad tasks here if needed
    return ret;
}