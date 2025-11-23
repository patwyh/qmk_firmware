#pragma once

//#define EE_HANDS
#define MASTER_LEFT //Left is connected USB

/* VBUS detection. */
//#define USB_VBUS_PIN GP13

/* Key matrix size (total for split: 12 rows x 6 cols) */
#define MATRIX_ROWS 12
#define MATRIX_COLS 6
//#define ROWS_PER_HAND MATRIX_ROWS  // Ensures split half uses full rows

/* Debounce reduces chatter (unintended double-presses) */
#define DEBOUNCE 25          // or even 30
#define MATRIX_IO_DELAY 30   // adds extra delay after each matrix scan (RP2040-specific)

/* Split keyboard */
//#define SOFT_SERIAL_PIN GP12  // TX pin for serial split communication
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2000  // Timeout for USB detection in split mode

