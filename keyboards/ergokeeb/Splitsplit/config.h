#pragma once

//#define EE_HANDS
#define MASTER_LEFT //Left is connected USB

/* VBUS detection. */
#define USB_VBUS_PIN GP13

/* Key matrix size (total for split: 12 rows x 6 cols) */
#define MATRIX_ROWS 12
#define MATRIX_COLS 6
//#define ROWS_PER_HAND MATRIX_ROWS  // Ensures split half uses full rows

/* Debounce reduces chatter (unintended double-presses) */
#define DEBOUNCE 5

/* Split keyboard */
//#define SOFT_SERIAL_PIN GP12  // TX pin for serial split communication
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2000  // Timeout for USB detection in split mode

/* I2C for peripherals (e.g., OLED display) */
// #define I2C_DRIVER I2CD1
// #define I2C1_SCL_PIN GP3
// #define I2C1_SDA_PIN GP2

/* Pointing device (Cirque Pinnacle trackpad in SPI mode) */
//#define POINTING_DEVICE_DRIVER cirque_pinnacle_spi

// Enable use of pointing device on slave split.
#define SPLIT_POINTING_ENABLE

// Pointing device is on the right split.
#define POINTING_DEVICE_RIGHT

#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP1
#define SPI_MISO_PIN GP18
#define SPI_MOSI_PIN GP16
#define POINTING_DEVICE_CS_PIN GP19  
#undef CIRQUE_PINNACLE_DIAMETER_MM
#define CIRQUE_PINNACLE_DIAMETER_MM 35
//#define CIRQUE_PINNACLE_CLOCK_PIN GP1
//#define CIRQUE_PINNACLE_MISO_PIN GP18
//#define CIRQUE_PINNACLE_MOSI_PIN GP16
//#define CIRQUE_PINNACLE_CS_PIN GP19
//#define CIRQUE_PINNACLE_NCS_PIN GP15
//#define CIRQUE_PINNACLE_DR_PIN GP0
#define CIRQUE_PINNACLE_SPI_CS_PIN GP19  // Corrected: Use SPI-specific CS pin (formerly CIRQUE_PINNACLE_CS_PIN)


/* Enable basic features */
#define BOOTMAGIC_LITE_ROW_LEFT 0
#define BOOTMAGIC_LITE_ROW_RIGHT 0
#define BOOTMAGIC_LITE_COLUMN_LEFT 0
#define BOOTMAGIC_LITE_COLUMN_RIGHT 0
#define BOOTMAGIC_LITE_NKRO


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

/*
#define LAYOUT_split_6x6( \ 
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B, \
    k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4A, k4B, \
  k50, k51, k52, k53, k54, k55, k56, k57, k58, k59, k5A, k5B \
) \
{ \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B }, \
    { k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B }, \
    { k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4A, k4B }, \
    { k50, k51, k52, k53, k54, k55, k56, k57, k58, k59, k5A, k5B } \
}
*/

//#define LAYOUT_split_6x6( k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B,     k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B,     k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B,     k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B,     k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4A, k4B,     k50, k51, k52, k53, k54, k55, k56, k57, k58, k59, k5A, k5B ) { { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B },     { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B },     { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B },     { k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B },     { k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4A, k4B },  { k50, k51, k52, k53, k54, k55, k56, k57, k58, k59, k5A, k5B } }