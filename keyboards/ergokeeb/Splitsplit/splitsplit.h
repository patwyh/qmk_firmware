#pragma once


/* key matrix size */
#define MATRIX_ROWS 12
#define MATRIX_COLS 6

/* key matrix pins */
#define MATRIX_ROW_PINS { GP9, GP8, GP7, GP6, GP5, GP4 }
#define MATRIX_COL_PINS { GP22, GP23, GP24, GP25, GP26, GP27 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Split keyboard */
#define SOFT_SERIAL_PIN GP12  // TX pin for split half communication
#define SPLIT_USB_DETECT

/* I2C for peripherals (e.g., OLED) */
#define I2C_DRIVER I2CD1
#define I2C1_SCL_PIN GP3
#define I2C1_SDA_PIN GP2

/* Cirque Pinnacle trackpad */
#define POINTING_DEVICE_DRIVER cirque
#define CIRQUE_PINNACLE_CLOCK_PIN GP1
#define CIRQUE_PINNACLE_MISO_PIN GP18
#define CIRQUE_PINNACLE_MOSI_PIN GP16
#define CIRQUE_PINNACLE_CS_PIN GP19
#define CIRQUE_PINNACLE_NCS_PIN GP15
#define CIRQUE_PINNACLE_DR_PIN GP0
#define CIRQUE_PINNACLE_BUTTON_PIN GP10  // BTN1; extend driver for GP11/GP20 if multi-button


/* Remove this entire block */
/*
#define LAYOUT_6x6( \
    K00, K01, K02, K03, K04, K05, \
    K10, K11, K12, K13, K14, K15, \
    K20, K21, K22, K23, K24, K25, \
    K30, K31, K32, K33, K34, K35, \
    K40, K41, K42, K43, K44, K45, \
    K50, K51, K52, K53, K54, K55 \
) { \
    { K00, K01, K02, K03, K04, K05 }, \
    { K10, K11, K12, K13, K14, K15 }, \
    { K20, K21, K22, K23, K24, K25 }, \
    { K30, K31, K32, K33, K34, K35 }, \
    { K40, K41, K42, K43, K44, K45 }, \
    { K50, K51, K52, K53, K54, K55 } \
}
*/