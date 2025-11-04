#pragma once
//#define VENDOR_ID 0xFEED
#include "quantum.h"          // pulls in RP2040 pin definitions (GP0 … GP29)
#include "hal.h"              // PAL GPIO functions

/* key matrix pins */
#define MATRIX_ROW_PINS { GP9, GP8, GP7, GP6, GP5, GP4 }
#define MATRIX_COL_PINS { GP22, GP23, GP24, GP25, GP26, GP27 }

/* Split keyboard */
#define SOFT_SERIAL_PIN GP12  // TX pin for split half communication
#define SPLIT_USB_DETECT

#define POINTING_DEVICE_DRIVER cirque_pinnacle_spi

#define CIRQUE_PINNACLE_SPI_CLK_PIN     GP1
#define CIRQUE_PINNACLE_SPI_MISO_PIN    GP18
#define CIRQUE_PINNACLE_SPI_MOSI_PIN    GP16
#define CIRQUE_PINNACLE_SPI_CS_PIN      GP19
#define CIRQUE_PINNACLE_DATA_READY_PIN  GP0

// Button (optional, if trackpad has built-in switch)
#define CIRQUE_PINNACLE_BUTTON_PIN      GP10

/* I2C for peripherals (e.g., OLED) */
// #define I2C_DRIVER I2CD1
// #define I2C1_SCL_PIN GP3
// #define I2C1_SDA_PIN GP2

