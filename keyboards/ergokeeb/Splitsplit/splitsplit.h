#pragma once
//#define VENDOR_ID 0xFEED

/* key matrix pins */
#define MATRIX_ROW_PINS { GP9, GP8, GP7, GP6, GP5, GP4 }
#define MATRIX_COL_PINS { GP22, GP23, GP24, GP25, GP26, GP27 }

/* Split keyboard */
#define SOFT_SERIAL_PIN GP12  // TX pin for split half communication
#define SPLIT_USB_DETECT

/* I2C for peripherals (e.g., OLED) */
#define I2C_DRIVER I2CD1
#define I2C1_SCL_PIN GP3
#define I2C1_SDA_PIN GP2

/* Cirque Pinnacle trackpad */
// #define POINTING_DEVICE_DRIVER cirque
// #define CIRQUE_PINNACLE_CLOCK_PIN GP1
// #define CIRQUE_PINNACLE_MISO_PIN GP18
// #define CIRQUE_PINNACLE_MOSI_PIN GP16
// #define CIRQUE_PINNACLE_CS_PIN GP19
// #define CIRQUE_PINNACLE_NCS_PIN GP15
// #define CIRQUE_PINNACLE_DR_PIN GP0
// #define CIRQUE_PINNACLE_BUTTON_PIN GP10  // BTN1; extend driver for GP11/GP20 if multi-button

