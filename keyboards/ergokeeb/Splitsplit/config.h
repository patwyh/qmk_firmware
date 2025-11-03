#pragma once

//#define EE_HANDS
#define MASTER_LEFT //Left is connected USB

/* Key matrix size (total for split: 12 rows x 6 cols) */
#define MATRIX_ROWS 12
#define MATRIX_COLS 6

/* Debounce reduces chatter (unintended double-presses) */
#define DEBOUNCE 5

/* Split keyboard */
#define SOFT_SERIAL_PIN GP12  // TX pin for serial split communication
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2000  // Timeout for USB detection in split mode

/* I2C for peripherals (e.g., OLED display) */
#define I2C_DRIVER I2CD1
#define I2C1_SCL_PIN GP3
#define I2C1_SDA_PIN GP2

/* Pointing device (Cirque Pinnacle trackpad in SPI mode) */
//#define POINTING_DEVICE_DRIVER cirque_pinnacle_spi
#define CIRQUE_PINNACLE_CLOCK_PIN GP1
#define CIRQUE_PINNACLE_MISO_PIN GP18
#define CIRQUE_PINNACLE_MOSI_PIN GP16
#define CIRQUE_PINNACLE_CS_PIN GP19
#define CIRQUE_PINNACLE_NCS_PIN GP15
#define CIRQUE_PINNACLE_DR_PIN GP0
#define CIRQUE_PINNACLE_BUTTON_PIN GP10  // Primary button; extend for GP11 and GP20 via custom code if multi-button support required
#define CIRQUE_PINNACLE_SPI_CS_PIN GP19  // Corrected: Use SPI-specific CS pin (formerly CIRQUE_PINNACLE_CS_PIN)

/* Optional: RGB Matrix (underglow) - Uncomment if WS2812 LEDs are connected (e.g., to GP13) */
/*
#define RGB_DI_PIN GP13
#define RGBLED_NUM 12  // Number of LEDs per half
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_LIMIT_VAL 150
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_TWINKLE
*/

/* Optional: Audio (buzzer) - Uncomment if buzzer connected (e.g., to GP13) */
/*
#define AUDIO_PIN GP13
#define AUDIO_CLICKY
#define STARTUP_SONG SONG(PLANCK_SOUND)
*/

/* Enable basic features */
#define BOOTMAGIC_LITE_ROW_LEFT 0
#define BOOTMAGIC_LITE_ROW_RIGHT 0
#define BOOTMAGIC_LITE_COLUMN_LEFT 0
#define BOOTMAGIC_LITE_COLUMN_RIGHT 0
#define BOOTMAGIC_LITE_NKRO