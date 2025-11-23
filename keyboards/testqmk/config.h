#pragma once

#define MATRIX_ROWS 8                  // 4 rows per half (8 total with split)
#define MATRIX_COLS 5

// Direct pins for the RIGHT half (your pinout)
#define MATRIX_ROW_PINS_RIGHT { GP7, GP8, GP9, GP10 }
#define MATRIX_COL_PINS_RIGHT { GP20, GP19, GP18, GP17, GP16 }

// The LEFT half uses the opposite orientation
#define MATRIX_ROW_PINS_LEFT { GP10, GP9, GP8, GP7 }     // reversed order
#define MATRIX_COL_PINS_LEFT { GP16, GP17, GP18, GP19, GP20 }  // reversed

// Split configuration
#define SPLIT_HAND_PIN GP28              // Optional: detect half with a pin tied to GND/3.3V
// OR use EEPROM to remember (recommended if no free pin)
#define EE_HANDS

#define SERIAL_USART_TX_PIN GP0          // Serial TX from master to slave
#define SERIAL_USART_RX_PIN GP1          // Serial RX (optional, can be same as TX if half-duplex)
#define SPLIT_USART_DRIVER SD1
#define SERIAL_USART_FULL_DUPLEX         // Recommended for RP2040
#define SERIAL_USART_TX_STATE 1
#define SERIAL_USART_RX_STATE 1

// RP2040-specific
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25  // Onboard LED if present
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

// Debounce and other defaults
#define DEBOUNCE 5