#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* Key matrix size */
#define MATRIX_ROWS 12 // 6 rows per half, 12 total for split
#define MATRIX_COLS 6  // 6 columns per half

/* Key matrix pins */
#define MATRIX_ROW_PINS { GP09, GP08, GP07, GP06, GP05, GP04 }
#define MATRIX_COL_PINS { GP22, GP23, GP24, GP25, GP26, GP27 }
#define MATRIX_ROW_PINS_RIGHT { GP09, GP08, GP07, GP06, GP05, GP04 }
#define MATRIX_COL_PINS_RIGHT { GP22, GP23, GP24, GP25, GP26, GP27 }

/* Split keyboard specific options */
#define SOFT_SERIAL_PIN GP12  // Serial communication pin for split halves
#define SPLIT_HAND_PIN GP13   // Optional: Pin to determine handedness (if used)
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP12

/* I2C for OLED */
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP02
#define I2C1_SCL_PIN GP03

/* SPI for Cirque trackpad */
#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP01
#define SPI_MISO_PIN GP18
#define SPI_MOSI_PIN GP16
#define POINTING_DEVICE_CS_PIN GP19
#define CIRQUE_PINNACLE_DATA_READY_PIN GP00
#define CIRQUE_PINNACLE_BUTTON_PINS { GP10, GP11, GP20 }

/* LED configuration */
#define LED_CAPS_LOCK_PIN GP14
#define LED_PIN_ON_STATE 1

/* Debounce settings */
#define DEBOUNCE 5

/* Bootmagic Lite key configuration */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
#define BOOTMAGIC_LITE_ROW_RIGHT 6
#define BOOTMAGIC_LITE_COLUMN_RIGHT 0

/* Split keyboard settings */
#define SPLIT_KEYBOARD yes
#define SPLIT_TRANSPORT_MIRROR
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_MODS_ENABLE
#define SPLIT_OLED_ENABLE

/* Pointing device configuration */
#define POINTING_DEVICE_ENABLE
#define POINTING_DEVICE_DRIVER cirque_pinnacle_spi

/* OLED settings */
#define OLED_ENABLE
#define OLED_DRIVER SSD1306
#define OLED_TRANSPORT i2c

/* RGB Matrix is not used, but define to avoid warnings */
#define RGB_MATRIX_ENABLE no

#endif
