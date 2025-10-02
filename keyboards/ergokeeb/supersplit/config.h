#pragma once

//#include "config_common.h"

#define MASTER_LEFT  // Assume left half is USB master; change to #define MASTER_RIGHT if needed

// Matrix configuration
#define MATRIX_ROWS 6
#define MATRIX_COLS 6
#define MATRIX_ROW_PINS { GP9, GP8, GP7, GP6, GP5, GP4 }
#define MATRIX_COL_PINS { GP22, GP23, GP24, GP25, GP26, GP27 }
#define MATRIX_ROW_PINS_RIGHT { GP9, GP8, GP7, GP6, GP5, GP4 }
#define MATRIX_COL_PINS_RIGHT { GP22, GP23, GP24, GP25, GP26, GP27 }
#define DIODE_DIRECTION COL2ROW  // Adjust to ROW2COL if your diodes are reversed

// Split serial communication
#define SOFT_SERIAL_PIN GP12

// I2C for OLED
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP2
#define I2C1_SCL_PIN GP3

// SPI for Cirque trackpad
#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP1
#define SPI_MISO_PIN GP18
#define SPI_MOSI_PIN GP16
#define CIRQUE_PINNACLE_SPI_CS_PIN GP19  // SS pin
#define POINTING_DEVICE_CS_PIN CIRQUE_PINNACLE_SPI_CS_PIN
#define CIRQUE_PINNACLE_DATA_READY_PIN GP0  // DR pin

// Optional: Adjust Cirque settings
#define CIRQUE_PINNACLE_SPI_DIVISOR 8
#define CIRQUE_PINNACLE_TAP_ENABLE
// #define CIRQUE_PINNACLE_ATTENUATION EXTREG__TRACK_ADCCONFIG_ATTENUATE_10P  // Uncomment if sensitivity adjustment needed

// LED indicator (assuming caps lock, active low)
#define LED_CAPS_LOCK_PIN GP14
#define LED_PIN_ON_STATE 0

// Trackpad buttons (GP10, GP11, GP20) can be added to keymap.c as custom keys if not handled by Cirque firmware