#pragma once

#include "config_common.h"

/* USB Device */
#define VENDOR_ID 0x1234  // Placeholder; set unique VID/PID for VIAL
#define PRODUCT_ID 0x5678
#define MANUFACTURER Ergokeeb
#define PRODUCT supersplit

/* Key matrix */
#define MATRIX_ROWS 6
#define MATRIX_COLS 6
#define MATRIX_ROW_PINS { GP9, GP8, GP7, GP6, GP5, GP4 }
#define MATRIX_COL_PINS { GP22, GP23, GP24, GP25, GP26, GP27 }

/* Split keyboard */
#define SPLIT_USB_DETECT
#define SPLIT_TRANSPORT_MIDI  // Or SPLIT_TRANSPORT_SERIAL for UART
#define SERIAL_USART_DRIVER 1  // Hardware UART for RP2040
#define TXLED_STATE I2C_PIN    // Optional: TX LED behavior

/* I2C for OLED */
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP2
#define I2C1_SCL_PIN GP3
#define POINTING_DEVICE_I2C_ADDRESS 0x59  // Default for Cirque, but SPI used here

/* Status LED */
#define STATUS_LED_PIN GP14

/* Cirque Pinnacle Trackpad (SPI mode) */
#define POINTING_DEVICE_DRIVER CIRQUE_PINNACLE_SPI
#define CIRQUE_PINNACLE_SPI_CONFIG { GP1, GP19, GP16, GP18 }  // SCLK, CS/SS, MOSI, MISO
#define CIRQUE_PINNACLE_DATA_READY_PIN GP0  // DR pin
#define CIRQUE_PINNACLE_BUTTON_PINS { GP10, GP11, GP20 }  // BTN1, BTN2, BTN3
// Optional: #define CIRQUE_PINNACLE_ATTENUATION 0x0F  // Adjust for sensitivity (default 0x00)